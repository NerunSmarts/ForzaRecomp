# Profiling 3D scenes on macOS

Use the optimized macOS build with wireframe, draw tracing, shader dumps and
framebuffer captures disabled. The immediate target is 3D rendering and guest
gameplay work. Menu videos remain a separate workload; their eventual host
decoder bridge should not be chosen from a mixed menu/gameplay capture.

The source SDK includes Tracy, and the downloaded SDK contains its client
libraries. Our source-built Release runtime and graphics plugin currently use
`REXGLUE_ENABLE_TRACY=OFF`. The SDK also gates its profiling definitions out of
Release, so changing that switch alone would not activate the existing zones
in this build. GPU scope macros are stubs, and the Vulkan backend currently
contains no Tracy Vulkan timestamp zones. Tracy support therefore does not
mean that a complete GPU timeline is available automatically.

[Instruments Game Performance](https://developer.apple.com/documentation/xcode/analyzing-the-performance-of-your-metal-app)
is the first choice here: it combines CPU samples, thread states, Metal
activity, display events and thermal state. Time Profiler is useful for a
smaller CPU-focused recording. Metal System Trace is useful when examining
GPU execution, command submission and synchronization. These tools inspect
the current optimized executable through the actual Metal backend.

## Record a profile

For a running game, first disable rendering diagnostics at launch:

```sh
sh scripts/run_macos.sh --mnk_mode=true --fh1_debug_wireframe=false \
  --vulkan_tessellation_wireframe=false --vulkan_draw_trace_interval=0 \
  --vulkan_debug_capture_targets= --dump_shaders= \
  --vulkan_debug_capture_draw_inputs=
```

Keep `FH1_CAPTURE_*` environment variables unset. Navigate to a reproducible
3D scene, wait for initial compilation/loading to finish, then attach using
the game's PID:

```sh
python3 scripts/profile_macos.py --attach GAME_PID --delay 0 --seconds 30 \
  --label 'Steady 3D scene after loading'
```

The attachment leaves the game running after recording. Use `--template
'Time Profiler'` for CPU-only investigation, or `--template 'Metal System
Trace'` for the GPU timeline. Xcode must be installed and selected with
`xcode-select`; macOS may require Developer Tools authorization for profiling.

The script can also launch the game, wait while you navigate, and stop that
launched process when the recording finishes:

```sh
python3 scripts/profile_macos.py --delay 120 --seconds 20
```

`--input-script` accepts the same private guest controller script used by boot
diagnostics. `--output` selects a new directory under ignored `out/`. Launched
profiles explicitly turn wireframe, tracing and readbacks off, discard capture
environment variables, and use warning-level logging. When attaching, the
existing process's settings remain in effect and must be checked separately.
Wireframe remains available as an opt-in diagnostic; its default is false.
Instruments may take much longer to save a Metal trace than to record it.
`--finalization-seconds` bounds setup/save overhead separately from the recording
(default 300, range 15–900 seconds). Failed or interrupted saves must not be
treated as valid measurements; metadata records failures, and a successful
TOC export sets `trace_validated`.

Each recording directory contains `profile.trace`, runtime/profiler logs,
`metadata.json`, `trace-toc.xml` and `cpu.jsonl`. Metadata includes the scene
label and SHA-256 hashes of the game, runtime, GPU plugin and facade binaries
so local builds can be distinguished even before a commit. Open the trace in Instruments
with `open out/profiles/RECORDING/profile.trace`. The CPU log uses process
CPU-time deltas: 100% means one occupied core. Its recording phase includes
Instruments setup/finalization; use the trace's actual interval for precise
analysis. Neither process CPU usage nor a CPU stack sample measures GPU time.

## Choose the first optimization

The first successful Time Profiler recording on 2026-10-05 contains 17,927
running-thread samples over approximately 10.5 seconds. The user could not
identify the scene during that exact interval, and media-facade frames occur
in about 8% of sampled CPU work. Treat it as an exploratory mixed-phase trace,
not a steady 3D benchmark. Its thermal track remained Nominal during the short
recording; this does not establish sustained thermal behavior.

| Exploratory CPU cost | Share of sampled CPU work |
| --- | --- |
| Audio worker | 42.9% |
| POSIX multi-object wait, including callees | 42.8% |
| GPU command thread | 4.4% |

The audio and wait rows overlap. The GPU command thread figure measures host
CPU work only; GPU execution time and rendering bottlenecks remain unmeasured.
The early Game Performance attempts did not produce a complete usable trace.

The dominant wait led to an independently reproduced runtime defect:
alertable waits use 1 ms slices, but their remaining sleep was truncated to
whole milliseconds. Once the loop had checked its handles, that sleep became
zero and the worker polled continuously. Patch 0016 keeps the fractional
sleep while retaining the existing maximum 1 ms polling interval.

The same native `fh1_wait_smoke` executable was run against the original and
fixed Release runtimes, using two unsignaled events and a one-second alertable
wait:

| Runtime | Wall time | CPU time | One-core usage |
| --- | --- | --- | --- |
| Before patch 0016 | 1000.00 ms | 1000.41 ms | 100.04% |
| After patch 0016 | 1000.02 ms | 12.96 ms | 1.30% |

Event selection, auto-reset consumption, timeout and queued callback checks
pass with the fixed runtime. The original runtime fails only the idle CPU
check. These measurements establish the wait improvement, not a whole-game
FPS gain. The WMV decoder is unchanged.

A later Time Profiler recording uses the fixed runtime and a user-confirmed
loaded 3D scene with audible audio. The game runs with both diagnostic
wireframe options disabled; the reported car edges remain a separate issue.
The input script applies throttle at 140 seconds, inside the recording that
starts after a 130-second warm-up. The exported trace lasts 21.06 seconds,
with 20,163 running-thread samples spanning 20.70 seconds. No media-facade
decoder frames occur in those samples, and the thermal track remains Nominal.

| Confirmed 3D CPU cost after patch 0016 | Share of sampled CPU work |
| --- | --- |
| Guest `NtYieldExecution`, including callees | 27.9% |
| GPU command thread | 7.2% |
| POSIX multi-object waits, including callees | 0.81% |
| Audio worker | 0.36% |

The next CPU investigation is the guest loop around `sub_823F4B30` and
`sub_823F4FE8`, which repeatedly calls `NtYieldExecution` through
`sub_82A6D640`. The host implementation calls `sched_yield` and a memory
barrier. Before changing it, distinguish an idle scheduler loop from useful
work and preserve guest synchronization and wake-up behavior. These CPU
shares do not measure Metal GPU execution or establish a whole-game FPS gain.
The earlier mixed-phase recording is not a controlled before/after comparison.

A combined Game Performance trace of another user-confirmed 3D run also saved.
Despite a requested 15 seconds, its recorded duration is 10 seconds, with CPU
and Metal execution samples available only in the final approximately
0.52 seconds. This is too short to rank GPU passes or measure sustained frame
rate. Use a longer combined recording or Metal System Trace next, and inspect
the actual sample interval rather than assuming it equals the requested limit.

A later Metal System Trace attaches only after the user confirms the loaded
3D scene. Wireframe, draw tracing, shader/target dumps and draw-input capture
are disabled. A 30-second attempt exceeds the previous 90-second save timeout
and leaves an unreadable trace; it is excluded from the analysis. The shorter
five-second retry saves successfully with a longer finalization allowance.
Its recorded duration is 6.13 seconds, with FH1 GPU activity available across
5.48 seconds. The thermal track remains Nominal during this short recording.

GPU intervals are filtered to FH1's process, clipped to the usable window and
merged per channel, including nested intervals without double-counting:

| Confirmed 3D GPU activity | Active interval union | Share of usable window |
| --- | ---: | ---: |
| Fragment | 4.59 s | 83.8% |
| Vertex | 0.30 s | 5.5% |
| Compute | 0.17 s | 3.0% |
| Any FH1 GPU channel | 5.00 s | 91.3% |

Channels overlap, so their percentages must not be added. These are recorded
active intervals, not shader counter utilization or an uninstrumented FPS
measurement. Shader timeline/counters are disabled in this template. Generic
render-encoder labels do not identify the expensive material or shader.
The trace also records 93 waits for the next drawable, totaling 2.40 seconds
on their thread; these waits overlap GPU execution and other host work.

The useful next rendering target is pixel shading and render-pass structure,
including the emulated target/resolve path. Vertex processing occupies a much
smaller interval share. A captured vertex-program replay now verifies position
and six interpolators before moving to original pixel shaders, textures and
indexed rasterization; see [native-renderer.md](native-renderer.md). Neither
successful shader compilation nor a vertex-only replay demonstrates the
expected native renderer speedup.

Inspect steady frames separately from shader compilation and level loading.
Use Time Profiler's running-thread samples to identify expensive guest
functions, resource conversion and command translation. Use thread-state and
Metal tracks to distinguish CPU work from waits, GPU queue gaps and sustained
GPU load. Keep the scene, window size, input, build, logging and thermal state
consistent across comparisons. A 30 FPS cap can cause intentional waiting;
do not interpret every wait as wasted work.

Choose a change from the measured dominant cost, then repeat the same scene.
For guest hotspots, map sampled function addresses back to the locally
generated code. For GPU hotspots, inspect the costly draw, resolve or transfer
pass before changing shaders or resource layout. A direct Metal rewrite is
not justified by a CPU percentage alone.

Tracy is useful later for named guest/runtime phases, queue lifetimes and
frame relationships that are hard to infer from sampling. Use a separate
optimized instrumentation build, enable both the client and profiling zones,
and link the runtime, GPU plugin and facades to one shared Tracy client.
The SDK pins Tracy 0.13.1; build the collector/viewer from that exact dependency
revision to avoid protocol mismatch. Its client uses on-demand and manual
lifetime settings. Any added zones should be coarse enough to avoid changing
the workload substantially, especially in generated guest hot loops. See the
[Tracy manual](https://github.com/wolfpld/tracy/blob/master/manual/tracy.tex)
for integration, on-demand capture and client/server compatibility.

Traces, symbol bundles and profiler captures stay private. Keep them under
ignored `out/`; `.gitignore` and the publication audit also reject `.trace`,
`.tracy`, `.atrc`, `.gputrace` and `.dSYM` artifacts elsewhere.
