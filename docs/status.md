Validated on Apple Silicon macOS on 2026-10-03 with ReXGlue 0.10.0 at
`c94f5ebdcb3c9d1a460ca48e04f9758448f8d518` and eight local SDK patches.
This is a working native boot and presentation bring-up. Full gameplay and an
iOS build remain unverified.

| Check | Result |
| --- | --- |
| Disc revision and all three XEX hashes | Pass; extracted files remain unchanged |
| Main and both facade code generation | Pass; no unresolved or silently discarded branches |
| ARM64 Release executable and two native facade libraries | Build passes |
| Three simultaneous XEX allocations | Patched runtime passes; original SDK fails |
| Repeated facade load, unregister on unload, reload | Pass for media and speech; main dispatch survives |
| Bounded 30- and 60-second boot diagnostics | Processes remain alive; timeout stops are intentional |
| Animated startup logos and Press Start background | Successive 1280×720 guest captures show changing frames |
| Window presentation | Windowed launch displays video; user confirmed visible output |
| Audio | User confirmed audible output |
| VMX arithmetic helpers | Fusion, signed zero, lane order, overflow, non-finite inputs and denormals pass |
| Public-tree and malformed-XEX checks | Five tests pass; publication audit passes |
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

Remaining validation covers menu input, world loading, driving, collision,
saves, facade unload during real guest execution, and extended runtime
stability. ReXGlue still reports unimplemented kernel exports and MoltenVK
primitive-restart warnings; a surviving process does not establish correct
gameplay. The iOS design is documented in [ios-port.md](ios-port.md), without
claiming a functioning device build.

The project root is a Git repository on `main`, with
`https://github.com/NerunSmarts/ForzaRecomp.git` configured as `origin`.
The existing Windows repository was reviewed in an isolated, ignored clone.
Its logo is preserved byte-for-byte at `ForzaRecompResources/logo.png` and
appears in the README. Its previous tree includes generated game code and
native libraries, so that tree and history have not been imported into this
project's public branch. No remote branches have been changed.

Game files, generated code,
decrypted images, binaries, captures, logs, saves, SDK downloads, and local
credentials are ignored. There is no published build. Run the public
tree audit before any commit or publication.
