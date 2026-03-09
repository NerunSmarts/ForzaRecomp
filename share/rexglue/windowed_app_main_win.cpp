/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2021 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 *
 * @modified    Tom Clay, 2026 - Adapted for ReXGlue runtime
 */

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include <SDL2/SDL_hints.h>

#include <rex/cvar.h>
#include <rex/logging.h>
#include <rex/platform.h>
#include <rex/ui/windowed_app.h>
#include <rex/ui/windowed_app_context_win.h>

REXCVAR_DEFINE_BOOL(enable_console, true, "UI/Window", "Enable console window on Windows");

namespace {

std::filesystem::path GetBootstrapLogPath() {
  char module_path[MAX_PATH] = {};
  GetModuleFileNameA(nullptr, module_path, MAX_PATH);
  std::filesystem::path exe_path(module_path);
  return exe_path.parent_path() / "forza_horizon_1_bootstrap.log";
}

void WriteBootstrapLog(const std::string& message) {
  std::ofstream file(GetBootstrapLogPath(), std::ios::app);
  if (file.is_open()) {
    file << message << "\n";
  }
  std::string debug_line = "[bootstrap] " + message + "\n";
  OutputDebugStringA(debug_line.c_str());
}

// Convert wide argv from CommandLineToArgvW to UTF-8 argc/argv for cvar::Init
std::vector<std::string> WideArgsToUtf8(int argc, wchar_t** wargv) {
  std::vector<std::string> args;
  args.reserve(static_cast<size_t>(argc));
  for (int i = 0; i < argc; ++i) {
    std::wstring wide(wargv[i]);
    if (wide.empty()) {
      args.emplace_back();
      continue;
    }
    int size = WideCharToMultiByte(CP_UTF8, 0, wide.data(), static_cast<int>(wide.size()), nullptr,
                                   0, nullptr, nullptr);
    std::string utf8(static_cast<size_t>(size), '\0');
    WideCharToMultiByte(CP_UTF8, 0, wide.data(), static_cast<int>(wide.size()), utf8.data(), size,
                        nullptr, nullptr);
    args.push_back(std::move(utf8));
  }
  return args;
}

}  // namespace

int WINAPI wWinMain(HINSTANCE hinstance, HINSTANCE hinstance_prev, LPWSTR command_line,
                    int show_cmd) {
  (void)hinstance_prev;
  (void)command_line;

  WriteBootstrapLog("wWinMain: startup");

  _putenv_s("SDL_JOYSTICK_WGI", "0");
  SetEnvironmentVariableA("SDL_JOYSTICK_WGI", "0");
  SetEnvironmentVariableA("SDL_XINPUT_ENABLED", "0");
  SetEnvironmentVariableA("SDL_JOYSTICK_HIDAPI", "0");
  SDL_SetHint(SDL_HINT_JOYSTICK_WGI, "0");
  SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI, "0");
  SDL_SetHint(SDL_HINT_XINPUT_ENABLED, "0");
  SDL_SetHint(SDL_HINT_GAMECONTROLLER_IGNORE_DEVICES_EXCEPT, "");

  // Convert wide command line to UTF-8 argc/argv and parse CVARs
  int wargc = 0;
  wchar_t** wargv = CommandLineToArgvW(GetCommandLineW(), &wargc);
  auto utf8_args = WideArgsToUtf8(wargc, wargv);
  LocalFree(wargv);

  // Build char* argv for cvar::Init
  std::vector<char*> argv_ptrs;
  argv_ptrs.reserve(utf8_args.size());
  for (auto& s : utf8_args) {
    argv_ptrs.push_back(s.data());
  }
  auto remaining = rex::cvar::Init(static_cast<int>(argv_ptrs.size()), argv_ptrs.data());
  rex::cvar::ApplyEnvironment();
  rex::cvar::SetFlagByName("log_file", "forza_horizon_1.log");
  rex::cvar::SetFlagByName("log_level", "trace");
  rex::cvar::SetFlagByName("log_verbose", "true");
  WriteBootstrapLog("wWinMain: cvars initialized, log_file=forza_horizon_1.log, log_level=trace");

  // Allocate a console for debugging if enabled
  if (REXCVAR_GET(enable_console)) {
    AllocConsole();
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
    freopen_s(&fp, "CONOUT$", "w", stderr);
    freopen_s(&fp, "CONIN$", "r", stdin);
    printf("Console attached for debugging\n");
    WriteBootstrapLog("wWinMain: console attached");
  }

  int result;

  {
    rex::ui::Win32WindowedAppContext app_context(hinstance, show_cmd);
    // TODO(Triang3l): Initialize creates a window. Set DPI awareness via the
    // manifest.
    if (!app_context.Initialize()) {
      WriteBootstrapLog("wWinMain: app_context.Initialize failed");
      return EXIT_FAILURE;
    }
    WriteBootstrapLog("wWinMain: app_context.Initialize succeeded");

    std::unique_ptr<rex::ui::WindowedApp> app = rex::ui::GetWindowedAppCreator()(app_context);

    // Match remaining positional args to app's expected options
    const auto& option_names = app->GetPositionalOptions();
    std::map<std::string, std::string> parsed;
    size_t count = std::min(remaining.size(), option_names.size());
    for (size_t i = 0; i < count; ++i) {
      parsed[option_names[i]] = remaining[i];
    }
    app->SetParsedArguments(std::move(parsed));

    // Initialize COM on the UI thread with the apartment-threaded concurrency
    // model, so dialogs can be used.
    if (FAILED(CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED))) {
      WriteBootstrapLog("wWinMain: CoInitializeEx failed");
      return EXIT_FAILURE;
    }
    WriteBootstrapLog("wWinMain: CoInitializeEx succeeded");

    // TODO: Port InitializeWin32App from Xenia
    // rex::InitializeWin32App(app->GetName());

    bool initialized = app->OnInitialize();
    WriteBootstrapLog(std::string("wWinMain: app->OnInitialize ") +
              (initialized ? "succeeded" : "failed"));
    result = initialized ? app_context.RunMainMessageLoop() : EXIT_FAILURE;
    WriteBootstrapLog("wWinMain: main loop exited with code " + std::to_string(result));

    app->InvokeOnDestroy();
  }

  // TODO: Port ShutdownWin32App from Xenia
  // Logging may still be needed in the destructors.
  // rex::ShutdownWin32App();

  CoUninitialize();
  WriteBootstrapLog("wWinMain: shutdown complete");

  return result;
}
