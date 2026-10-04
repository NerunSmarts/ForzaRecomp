The current target is Apple Silicon macOS. There is no validated iOS game
target yet. PPC-to-C++ compilation keeps guest CPU execution ahead of time,
which is useful for an iOS port. It does not establish device memory,
graphics, or operating-system compatibility.

The next platform work should follow this order:

1. Extend ReXGlue platform detection and CMake to distinguish iOS from macOS.
   `TARGET_OS_MAC` alone also matches other Apple platforms; Cocoa and Carbon
   dependencies must not leak into the iOS target. Separate the host codegen
   tool from device runtime builds.
2. Add an optional static module registration API. Link main, media, and speech
   code into the signed app, with unique module symbols, while retaining guest
   load/unload, function-table lifetime, exports, and `DllMain` semantics.
   This avoids making the device port depend on loose macOS dylibs. The Xenos
   GPU plugin needs equivalent static injection.
3. Prototype the guest memory arena on a physical iOS device before attempting
   the full game. The macOS layout reserves approximately 4.5 GiB of virtual
   address space and maps several physical-memory aliases. Virtual reservation
   is distinct from resident memory. Evaluate Apple's
   [extended virtual addressing entitlement](https://developer.apple.com/documentation/bundleresources/entitlements/com.apple.developer.kernel.extended-virtual-addressing)
   and the device's actual limits; do not assume that a successful simulator
   reservation proves device compatibility. Keep guest pages non-executable.
4. Verify or replace the native fiber backend on iOS. The current POSIX backend
   uses `getcontext`, `makecontext`, and `swapcontext`; Apple SDK availability
   and device behavior require an explicit compile and runtime check. Exercise
   fiber switching with nested native calls before running the game scheduler.
5. Use SDL's iOS window and lifecycle support, a `CAMetalLayer`, and an iOS
   MoltenVK build. [MoltenVK supports iOS](https://github.com/KhronosGroup/MoltenVK#introduction-to-moltenvk),
   but that alone does not establish compatibility with the Xenos backend's
   shader, storage, synchronization, and texture requirements. Test those
   features on device, then add memory and thermal budgets.
6. Provide user-controlled disc import into the app's container, save paths in
   its writable documents area, controller input, audio session handling, and
   suspend/resume behavior. Validate offline gameplay on macOS before using an
   iOS port to diagnose game-specific kernel or graphics failures.
   The shared installation workflow and platform pickers are specified in
   [installer.md](installer.md).

Success milestones are: a device memory and fiber probe; a statically linked
three-module dispatch test; first rendered frame; menu and save/load; then
stable gameplay with measured frame time and memory. A device build preset
should be added when the first two milestones pass, rather than exposing a
preset that only changes `CMAKE_SYSTEM_NAME`.
