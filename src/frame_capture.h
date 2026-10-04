#pragma once

#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <filesystem>
#include <string>
#include <thread>
#include <vector>

#include <rex/logging.h>
#include <rex/runtime.h>
#include <rex/ui/presenter.h>

// Optional boot diagnostic: capture only the guest framebuffer, never the
// desktop or another application's window. Output belongs under ignored out/.
class FrameCapture {
 public:
  void Start(rex::Runtime* runtime) {
    const char* requested = std::getenv("FH1_CAPTURE_FRAME");
    if (!requested || !*requested)
      return;
    const std::string path(requested);
    const bool sequence = std::getenv("FH1_CAPTURE_SEQUENCE") != nullptr;
    int interval_ms = 2000;
    if (const char* interval = std::getenv("FH1_CAPTURE_INTERVAL_MS"))
      interval_ms = std::clamp(std::atoi(interval), 100, 60000);
    int delay_ms = 0;
    if (const char* delay = std::getenv("FH1_CAPTURE_DELAY_MS"))
      delay_ms = std::clamp(std::atoi(delay), 0, 600000);
    int attempts = 30;
    if (const char* count = std::getenv("FH1_CAPTURE_ATTEMPTS"))
      attempts = std::clamp(std::atoi(count), 1, 300);
    worker_ = std::jthread([runtime, path, sequence, attempts, interval_ms, delay_ms](std::stop_token stop) {
      auto wait = [&](int milliseconds) {
        for (int elapsed = 0; elapsed < milliseconds && !stop.stop_requested(); elapsed += 100)
          std::this_thread::sleep_for(std::chrono::milliseconds(std::min(100, milliseconds - elapsed)));
      };
      wait(delay_ms);
      for (int attempt = 0; attempt < attempts; ++attempt) {
        wait(interval_ms);
        if (stop.stop_requested())
          return;
        auto* graphics = runtime->graphics_system();
        auto* presenter = graphics ? graphics->presenter() : nullptr;
        rex::ui::RawImage image;
        if (!presenter || !presenter->CaptureGuestOutput(image) || !image.width || !image.height) {
          REXLOG_WARN("FH1 framebuffer capture: no guest output available");
          continue;
        }
        const size_t row_bytes = size_t(image.width) * 4;
        if (image.stride < row_bytes ||
            image.data.size() < size_t(image.height - 1) * image.stride + row_bytes) {
          REXLOG_ERROR("FH1 framebuffer capture: invalid image layout");
          return;
        }
        std::ofstream output(path, std::ios::binary);
        output << "P6\n" << image.width << ' ' << image.height << "\n255\n";
        std::vector<char> row(size_t(image.width) * 3);
        for (uint32_t y = 0; y < image.height; ++y) {
          const auto* source = image.data.data() + size_t(y) * image.stride;
          for (uint32_t x = 0; x < image.width; ++x)
            for (size_t channel = 0; channel < 3; ++channel)
              row[size_t(x) * 3 + channel] = static_cast<char>(source[size_t(x) * 4 + channel]);
          output.write(row.data(), static_cast<std::streamsize>(row.size()));
        }
        output.flush();
        if (output) {
          REXLOG_INFO("FH1 framebuffer captured: {} ({}x{})", path, image.width, image.height);
          if (sequence) {
            const std::filesystem::path current(path);
            const auto snapshot = current.parent_path() /
                (current.stem().string() + "-" + std::to_string(attempt + 1) + current.extension().string());
            std::error_code error;
            std::filesystem::copy_file(current, snapshot,
                std::filesystem::copy_options::overwrite_existing, error);
            if (error)
              REXLOG_ERROR("FH1 framebuffer sequence: {}", error.message());
          }
        } else
          REXLOG_ERROR("FH1 framebuffer capture: unable to write {}", path);
      }
    });
  }

  void Stop() {
    if (worker_.joinable()) {
      worker_.request_stop();
      worker_.join();
    }
  }

 private:
  std::jthread worker_;
};
