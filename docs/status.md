Validated on Apple Silicon macOS on 2026-10-03 with ReXGlue 0.10.0 at
`c94f5ebdcb3c9d1a460ca48e04f9758448f8d518` and eleven local SDK patches.
This is a working native boot and presentation bring-up. Full gameplay and an
iOS build remain unverified.
Graphics work through 2026-10-05 adds four further patches, including the
rectangle-shader control-flow correction that restores the visible 3D scene.
The findings and remaining validation are recorded in [rendering.md](rendering.md).
Profiling adds a sixteenth patch to remove busy polling from finite POSIX
multi-object waits. The measurements are recorded in [profiling.md](profiling.md).

| Check | Result |
| --- | --- |
| Disc revision and all three XEX hashes | Pass; extracted files remain unchanged |
| Main and both facade code generation | Pass; no unresolved or silently discarded branches |
| ARM64 Release executable and two native facade libraries | Build passes |
| Three simultaneous XEX allocations | Patched runtime passes; original SDK fails |
| Repeated facade load, unregister on unload, reload | Pass for media and speech; main dispatch survives |
| Bounded 30-, 50- and 60-second boot diagnostics | Processes remain alive; timeout stops are intentional |
| Animated startup logos and Press Start background | Successive 1280×720 guest captures show changing frames |
| Window presentation | Windowed launch displays video; user confirmed visible output |
| Audio | User confirmed audible output, including the 3D run after the POSIX wait fix |
| Transparent UI artifacts | User confirmed stable after presenter-cache and worker-wait fixes |
| Menu CPU comparison | Early playback snapshots: approximately 213% before worker backoff, 167% after |
| Menu thermals | User reports slower onset of throttling after presenter caching and worker backoff; throttling persists |
| World loading and input | Passes the earlier missing callbacks; driving HUD and throttle response observed |
| World rendering | Textured terrain, upright trees and cars appear in display captures; user confirms visible 3D after rectangle-shader restart fix |
| Rendering quality and performance | Car edges persist with both diagnostic wireframe options explicitly false; cause, steady frame rate and complete gameplay need validation |
| Branch-containing rectangle shaders | Missing SPIR-V restart predecessor reproduced, corrected, and absent in 437 dumped modules |
| VMX arithmetic helpers | Fusion, signed zero, lane order, overflow, non-finite inputs and denormals pass |
| ARM integer vector helpers | Full shift-count ranges, byte value/count pairs, permutation controls and mixed random lanes pass scalar references |
| ARM-optimized playback | 50-second run passes; three successive frames differ; capture-free 10–35 s window averages approximately 149% CPU |
| Idle alertable multi-object waits | Native one-second check drops from approximately 100% to 1.30% of one CPU core; event and callback checks pass |
| 3D CPU profiling | Confirmed loaded scene: 20.70 seconds of samples, no WMV decoder frames; audio worker 0.36%, guest yielding 27.9%, GPU command thread 7.2% of sampled CPU work |
| 3D GPU profiling | Combined trace saved but has only approximately 0.52 seconds of execution data; sustained GPU and frame-time comparison pending |
| Shader import | All 174 effect files parse; 207 declarations and 2,918 unique shader programs extracted locally with reflection and interfaces |
| Experimental native shader adapter | All 1,511 imported vertex programs compile and pass Vulkan SPIR-V validation; original mixed sample 40/40, expanded sample 70/72 with two pixel boolean-register failures |
| Native buffer-fetch correctness | All 15 formats plus full/mini address reuse implemented; host binding preflight and 4,013 synthetic MoltenVK cases pass on Apple M2; original-material draw still needs captured resources |
| Graphics hook investigation | Direct-call map finds 21 Vd import groups; swap/init candidates identified, native resource/draw hooks still require verification |
| Native renderer runtime | Planned Vulkan/MoltenVK backend with Xenos fallback; no native FH1 draw or speedup demonstrated yet |
| Public-tree, malformed-input and shader-variant checks | 29 tests pass, including native ABI goldens under UBSan, resource-slot conflicts and overlapping dependency patch replay; publication audit passes |
| SDK bootstrap | Idempotent local rerun passes; clean second checkout not tested |

The first presentation attempt showed one frame and then a black fullscreen
window. The SDK defaults to fullscreen. The host now starts in a regular
window; this avoided the repeated suboptimal swapchain results seen during the
fullscreen transition. Temporary presentation tracing and swapchain captures
were used to distinguish game rendering from window output and have been
removed. Fullscreen remains an opt-in setting and needs further validation.

The title also needs the existing invalid-fetch compatibility option. The host
enables it while respecting explicit user settings. The source-built graphics
plugin includes the texture exponent-bias and empty-resolve fixes described in
[architecture.md](architecture.md).

The menu performance work removes repeated presenter pipeline compilation and
a full-core scheduler polling loop. CPU usage percentages use macOS's
per-core convention: 100% is one fully occupied core. The comparison is a
short diagnostic, not a sustained thermal benchmark. ARM integer-vector paths
also reduce the decoder's permutation and shift overhead; isolated helper
benchmarks show roughly 1.5x and 3x speedups respectively. These numbers do not
describe whole-game performance. The media facade still decodes 1280×720 WMV3
videos in translated guest code. A host video decoder bridge and hardware
decoding are not implemented. Current performance work targets 3D scenes;
profile that decoder separately from GPU compilation and rendering later.

The final ARM playback check measures process CPU-time deltas without a stack
sampler, and delays framebuffer readback until 40 seconds. It is a short
functional and CPU check, with no controlled temperature or clock measurement.
Longer thermal behavior after the integer-vector changes remains unverified.

Remaining validation covers normal shaded rendering, steady frame rate, driving, collision,
saves, facade unload during real guest execution, and extended runtime
stability. ReXGlue still reports unimplemented kernel exports and MoltenVK
primitive-restart warnings; a surviving process does not establish correct
gameplay. The iOS design is documented in [ios-port.md](ios-port.md), without
claiming a functioning device build.

The project root is a Git repository on `master`, with
`https://github.com/NerunSmarts/ForzaRecomp.git` configured as `origin`.
The existing Windows repository was reviewed in an isolated, ignored clone.
Its logo is preserved byte-for-byte at `ForzaRecompResources/logo.png` and
appears in the README. Its previous tree includes generated game code and
native libraries, so that tree and history have not been imported into this
project's public history. The original Windows repository is retained in the
ignored local review clone; this project uses a single public `master` branch.

Generated C++ and headers are eligible for publication under the project's
source policy. Game files, analysis metadata, decrypted images, binaries,
captures, logs, saves, SDK downloads, and local credentials are ignored.
There is no published build. Run the public
tree audit before any commit or publication.

The renderer replacement design and implemented shader-tool stage are recorded
in [native-renderer.md](native-renderer.md). Shader tools bootstrap separately
from the game, and do not modify its renderer. All extracted effect programs,
reflection manifests, compiled shaders and correlation reports remain ignored.
No additional performance trace was collected during this work; coordinate
future recordings with the user before starting them.
