![ForzaRecomp Logo](ForzaRecompResources/logo.png)

# FH1Recomp (ReXGlue-based)

Work-in-progress static recompilation setup for **Forza Horizon 1 (Xbox 360)** using **ReXGlue**.

## Status

- Active migration from earlier toolchain to ReXGlue.
- Runtime bring-up and crash triage are ongoing.
- Local workflow currently targets Windows (`win-amd64`).

## Legal / Content Policy

This repository intentionally excludes copyrighted game content.

- Do **not** commit extracted game files.
- `assets/` is ignored by git.
- Build output (`out/`), executables, and logs are ignored by git.

## Current Workspace Layout

- `FH1/` project config, generated code, and source patches.
- `bin/` local tools (ignored for executables).
- `include/`, `lib/`, `share/`, `licenses/` supporting SDK/runtime files.

## Notes

- ReXGlue SDK can be updated independently in the sibling repo.
- Generated files may be overwritten by regeneration; keep custom patch notes.
