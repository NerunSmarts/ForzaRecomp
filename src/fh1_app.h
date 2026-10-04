// fh1 - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/assert.h>
#include <rex/cvar.h>
#include <rex/filesystem/devices/host_path_device.h>
#include <rex/input/input_system.h>
#include <rex/rex_app.h>
#include <rex/runtime.h>
#include "frame_capture.h"
#include "diagnostic_input.h"

class Fh1App : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<Fh1App>(new Fh1App(ctx, "fh1",
        PPCImageConfig));
  }

 protected:
  void OnPreSetup(rex::RuntimeConfig&) override {
    // The SDK defaults to fullscreen. Start in a regular Cocoa window to
    // avoid creating the Metal swapchain during a fullscreen transition.
    if (rex::cvar::GetFlagSource("fullscreen") == rex::cvar::Source::kDefault &&
        !rex::cvar::SetFlagByName("fullscreen", "false")) {
      REX_FATAL("Unable to configure the FH1 startup window");
    }
  }

  void OnPostSetup() override {
    // FH1 references an unbound vertex-fetch slot. Set this after the GPU
    // plugin registers its flags, while preserving an explicit user setting.
    constexpr auto fetch_flag = "gpu_allow_invalid_fetch_constants";
    if (rex::cvar::GetFlagSource(fetch_flag) == rex::cvar::Source::kDefault &&
        !rex::cvar::SetFlagByName(fetch_flag, "true")) {
      REX_FATAL("Unable to apply FH1 vertex-fetch compatibility setting");
    }
    // FH1 opens cache: during startup. Keep this writable title cache in the
    // user area rather than in the read-only extracted disc directory.
    const auto host_cache = runtime()->cache_root() / "title";
    std::filesystem::create_directories(host_cache);
    // The title later rebinds cache: to this device name itself.
    const std::string mount = "\\Device\\cache1";
    auto device = std::make_unique<rex::filesystem::HostPathDevice>(mount, host_cache, false);
    if (!device->Initialize() || !runtime()->file_system()->RegisterDevice(std::move(device)) ||
        !runtime()->file_system()->RegisterSymbolicLink("cache:", mount)) {
      REX_FATAL("Unable to mount the FH1 title cache at {}", host_cache.string());
    }
    frame_capture_.Start(runtime());
    if (const char* input_script = std::getenv("FH1_INPUT_SCRIPT"); input_script && *input_script) {
      auto* input = dynamic_cast<rex::input::InputSystem*>(runtime()->input_system());
      if (!input)
        REX_FATAL("FH1 diagnostic input requires the standard input system");
      input->AddDriver(std::make_unique<rex::DiagnosticInput>(input_script));
    }
  }

  void OnShutdown() override { frame_capture_.Stop(); }

 private:
  FrameCapture frame_capture_;
};
