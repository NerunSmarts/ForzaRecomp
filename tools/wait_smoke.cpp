// Check multi-object wait semantics and CPU usage without running guest code.
#include <rex/thread.h>

#include <atomic>
#include <chrono>
#include <cstdio>
#include <ctime>
#include <thread>

using namespace std::chrono_literals;
using rex::thread::WaitResult;

int main() {
  int failures = 0;
  auto check = [&](bool success, const char* message) {
    if (!success) {
      std::fprintf(stderr, "FAIL: %s\n", message);
      ++failures;
    }
  };
  auto first = rex::thread::Event::CreateAutoResetEvent(false);
  auto second = rex::thread::Event::CreateAutoResetEvent(false);
  rex::thread::WaitHandle* events[] = {first.get(), second.get()};

  check(rex::thread::WaitAny(events, 2, true, 0ms).first == WaitResult::kTimeout,
        "zero timeout must return without a signal");
  second->Set();
  auto selected = rex::thread::WaitAny(events, 2, true, 20ms);
  check(selected.first == WaitResult::kSuccess && selected.second == 1,
        "WaitAny must select the signaled second event");
  check(rex::thread::WaitAny(events, 2, false, 0ms).first == WaitResult::kTimeout,
        "WaitAny must consume an auto-reset signal once");

  first->Set();
  second->Set();
  check(rex::thread::WaitAll(events, 2, true, 20ms) == WaitResult::kSuccess,
        "WaitAll must consume both signaled events");
  check(rex::thread::WaitAny(events, 2, false, 0ms).first == WaitResult::kTimeout,
        "WaitAll must reset both auto-reset events");

  const auto wall_start = std::chrono::steady_clock::now();
  const auto cpu_start = std::clock();
  auto timeout = rex::thread::WaitAny(events, 2, true, 1000ms);
  const double elapsed = std::chrono::duration<double>(
      std::chrono::steady_clock::now() - wall_start).count();
  const double cpu = double(std::clock() - cpu_start) / CLOCKS_PER_SEC;
  check(timeout.first == WaitResult::kTimeout && elapsed >= 0.99,
        "alertable wait must honor the full timeout");
  check(cpu < elapsed * 0.25,
        "idle alertable multi-object wait must use less than 25% of one CPU core");
  std::printf("Idle alertable wait: wall %.2f ms, CPU %.2f ms (%.2f%% of one core)\n",
              elapsed * 1000, cpu * 1000, 100 * cpu / elapsed);

  std::thread signaler([&] {
    std::this_thread::sleep_for(20ms);
    second->Set();
  });
  selected = rex::thread::WaitAny(events, 2, true, 1000ms);
  signaler.join();
  check(selected.first == WaitResult::kSuccess && selected.second == 1,
        "a new signal must wake an alertable WaitAny");

  auto ready = rex::thread::Event::CreateManualResetEvent(false);
  auto done = rex::thread::Event::CreateManualResetEvent(false);
  std::atomic<bool> callback_ran = false;
  std::atomic<WaitResult> callback_result = WaitResult::kFailed;
  auto worker = rex::thread::Thread::Create({}, [&] {
    ready->Set();
    callback_result = rex::thread::WaitAny(events, 2, true, 1000ms).first;
    done->Set();
  });
  if (worker) {
    check(rex::thread::Wait(ready.get(), false, 1000ms) == WaitResult::kSuccess,
          "callback worker must start");
    worker->QueueUserCallback([&] { callback_ran = true; });
    check(rex::thread::Wait(done.get(), false, 2000ms) == WaitResult::kSuccess,
          "callback worker must finish");
    check(rex::thread::Wait(worker.get(), false, 2000ms) == WaitResult::kSuccess,
          "callback worker must exit");
    check(callback_ran && callback_result == WaitResult::kUserCallback,
          "alertable wait must dispatch queued callbacks");
  } else {
    check(false, "callback worker creation");
  }

  std::printf("Wait checks: %s\n", failures ? "FAILED" : "passed");
  return failures ? 1 : 0;
}
