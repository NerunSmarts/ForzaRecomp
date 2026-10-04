![ForzaRecomp Logo](ForzaRecompResources/logo.png)

# ForzaRecomp

An experimental Forza Horizon 1 static recompilation for Apple Silicon macOS,
using [ReXGlue](https://github.com/rexglue/rexglue-sdk). This is a development
project. Build and module loading success do not establish playable gameplay.
The current validation results are recorded in [docs/status.md](docs/status.md).

The project handles `default.xex`, `XMediaFacade_default.xex`, and
`SpeechFacade_default.xex` as separate guest modules, and contains patches for
ReXGlue's XEX allocation lifetime and code generation. The build uses Vulkan
through MoltenVK for the Xbox 360 GPU backend. It translates PPC instructions
to native C++; it does not recover the original developer source code.

Place your extracted disc files in `FH1/`, keeping the disc directory structure.
Only the disc revision identified in `config/disc.json` is currently supported.
The build verifies all three XEX hashes before applying address-specific
configuration. No game files or translated game sources are included in the
public project.

With Xcode, CMake, Ninja, Git, and Python 3 installed:

```sh
python3 scripts/bootstrap_macos.py
sh scripts/build_macos.sh
sh scripts/run_macos.sh
```

Bootstrap downloads the checksum-pinned official macOS ARM64 SDK, clones its
matching source revision, applies the patches, and builds the Release runtime,
codegen tool and Xenos graphics plugin. It stages them with matching dependency libraries
in `.tools/rexglue-patched/`. All downloaded dependencies and builds stay local.
The first build can take several minutes. Use `FH1_BUILD_JOBS=2` to reduce
parallel compilation on machines with less memory.

The launch script keeps saves in `out/user/` and diagnostics in `out/logs/`.
Use `FH1_GAME_DIRECTORY` and `FH1_USER_DIRECTORY` to choose runtime locations.
Additional ReXGlue command-line flags can be passed through the script.
The host starts in a regular window on macOS. `--fullscreen=true` opts into
fullscreen, which still needs further testing on Retina displays.
For keyboard controller emulation, pass `--mnk_mode=true`; Space is A and
Enter is Start. An SDL-compatible controller can also be used.
The title's writable `cache:` device maps into `out/user/cache/title/` by
default. The disc mount stays read-only.
The host enables `gpu_allow_invalid_fetch_constants` for FH1's unbound
vertex-fetch references. An explicit runtime flag or user configuration takes
precedence over this default.

For validation:

```sh
python3 -m unittest discover -s tests -v
python3 scripts/audit_public_tree.py
out/build/mac-arm64/fh1_xex_inspect FH1 out/images
out/build/mac-arm64/fh1_module_smoke FH1
out/build/mac-arm64/fh1_vmx_smoke
python3 scripts/smoke_boot.py --seconds 20
```

The inspector loads XEX data without running guest code and checks module
allocations. The module smoke test checks native function dispatch and facade
unload/reload without invoking `DllMain`. The bounded boot diagnostic launches
the game and stops it after the interval; remaining alive is only a diagnostic
result. Codegen output is checked for unresolved fatal calls and silently
discarded branches before the build proceeds.
The boot diagnostic writes a separate `out/logs/boot-runtime.log` and attempts
guest framebuffer captures in `out/logs/boot-frame.ppm` and numbered snapshots
every two seconds. These capture only the game output and stay ignored by Git.
Pass additional diagnostic flags after `--`, for example
`python3 scripts/smoke_boot.py --seconds 60 -- --gpu_allow_invalid_fetch_constants=false`.
To inspect missing
indirect entries, run `python3 tools/find_indirect_candidates.py` after dumping
images with the inspector. Its reports require manual disassembly review and
never change the translation configuration.

For a longer input diagnostic, set `FH1_INPUT_SCRIPT` to a local text file
under `out/` and pass `--seconds 180`. Each row contains start time and duration
in seconds, hexadecimal controller buttons, right trigger (0–255), and left
stick X (−32768–32767). For example, `38 0.5 0010 0 0` presses Start at 38 seconds.
This opt-in driver feeds only guest controller 0. It sends no host keystrokes.
Diagnostic intervals can be 1–600 seconds and end by intentionally stopping
the game.

`.gitignore` excludes the disc tree, translated game code, decrypted images,
native binaries, SDK downloads, logs, saves, and credentials. The publication
audit also catches ignored private files that were previously tracked. Run it
before committing or publishing. A compiled game binary contains translated
game instructions and is a private build artifact too.

[docs/architecture.md](docs/architecture.md) explains the module design and
runtime patches. [docs/ios-port.md](docs/ios-port.md) describes the remaining
iOS work. There is no validated iOS build target yet.
The planned first-launch disc installer is described in
[docs/installer.md](docs/installer.md).
ReXGlue's license is retained in [patches/REXGLUE-LICENSE.txt](patches/REXGLUE-LICENSE.txt).
