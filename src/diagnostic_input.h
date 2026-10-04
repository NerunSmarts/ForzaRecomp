#pragma once

#include <atomic>
#include <chrono>
#include <cmath>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

#include <rex/input/input_driver.h>
#include <rex/logging.h>

namespace rex {

// Opt-in input for bounded diagnostics. Events affect only guest controller 0,
// never the host keyboard. Each row: start_seconds duration_seconds buttons_hex
// right_trigger thumb_lx. Store local scripts under ignored out/.
class DiagnosticInput final : public rex::input::InputDriver {
 public:
  explicit DiagnosticInput(const char* path) : InputDriver(nullptr, 0) {
    std::ifstream input(path);
    if (!input)
      throw std::runtime_error("Cannot open FH1 diagnostic input script");
    std::string line;
    double previous_end = 0;
    while (std::getline(input, line)) {
      if (line.empty() || line.front() == '#')
        continue;
      std::istringstream row(line);
      Event event{};
      unsigned buttons = 0, trigger = 0;
      int stick = 0;
      std::string extra;
      if (!(row >> event.start >> event.duration >> std::hex >> buttons >> std::dec >> trigger >> stick) ||
          row >> extra || !std::isfinite(event.start) || !std::isfinite(event.duration) ||
          event.start < previous_end || event.duration <= 0 || buttons > 0xFFFF ||
          trigger > 255 || stick < -32768 || stick > 32767)
        throw std::runtime_error("Invalid FH1 diagnostic input row");
      event.buttons = static_cast<uint16_t>(buttons);
      event.trigger = static_cast<uint8_t>(trigger);
      event.stick = static_cast<int16_t>(stick);
      previous_end = event.start + event.duration;
      events_.push_back(event);
    }
  }

  X_STATUS Setup() override { return X_STATUS_SUCCESS; }
  void EnumerateDevices(std::vector<rex::input::DeviceInfo>& out) override {
    out.push_back({.id = kDevice, .name = "FH1 diagnostic controller", .synthetic = true});
  }
  X_RESULT GetDeviceState(rex::input::DeviceId id, rex::input::X_INPUT_STATE* state) override {
    if (id != kDevice)
      return X_ERROR_DEVICE_NOT_CONNECTED;
    const double elapsed = std::chrono::duration<double>(Clock::now() - start_).count();
    rex::input::X_INPUT_STATE current{};
    uint32_t packet = 0;
    for (size_t index = 0; index < events_.size(); ++index) {
      const auto& event = events_[index];
      if (elapsed < event.start)
        break;
      packet = uint32_t(index * 2 + 2);
      if (elapsed < event.start + event.duration) {
        --packet;
        current.gamepad.buttons = event.buttons;
        current.gamepad.right_trigger = event.trigger;
        current.gamepad.thumb_lx = event.stick;
        break;
      }
    }
    current.packet_number = packet;
    if (last_packet_.exchange(packet) != packet)
      REXLOG_INFO("FH1 diagnostic input: event {} at {:.2f}s, buttons={:04X}, RT={}",
                  packet, elapsed, uint16_t(current.gamepad.buttons), current.gamepad.right_trigger);
    if (state)
      *state = current;
    return X_ERROR_SUCCESS;
  }
  X_RESULT GetDeviceCapabilities(rex::input::DeviceId id, uint32_t,
                                rex::input::X_INPUT_CAPABILITIES* caps) override {
    if (id != kDevice)
      return X_ERROR_DEVICE_NOT_CONNECTED;
    if (caps) {
      *caps = {};
      caps->type = 1;
      caps->sub_type = 1;
      caps->gamepad.buttons = 0xFFFF;
      caps->gamepad.left_trigger = caps->gamepad.right_trigger = 255;
      caps->gamepad.thumb_lx = caps->gamepad.thumb_ly = 32767;
      caps->gamepad.thumb_rx = caps->gamepad.thumb_ry = 32767;
    }
    return X_ERROR_SUCCESS;
  }
  X_RESULT SetDeviceVibration(rex::input::DeviceId id, rex::input::X_INPUT_VIBRATION*) override {
    return id == kDevice ? X_ERROR_SUCCESS : X_ERROR_DEVICE_NOT_CONNECTED;
  }
  X_RESULT GetDeviceKeystroke(rex::input::DeviceId id, uint32_t,
                             rex::input::X_INPUT_KEYSTROKE*) override {
    return id == kDevice ? X_ERROR_EMPTY : X_ERROR_DEVICE_NOT_CONNECTED;
  }

 private:
  using Clock = std::chrono::steady_clock;
  static constexpr auto kDevice = static_cast<rex::input::DeviceId>(0x46483101);
  struct Event {
    double start, duration;
    uint16_t buttons;
    uint8_t trigger;
    int16_t stick;
  };
  std::vector<Event> events_;
  Clock::time_point start_ = Clock::now();
  std::atomic<uint32_t> last_packet_{UINT32_MAX};
};

}  // namespace rex
