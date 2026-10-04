#!/bin/sh
set -eu
project_root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
cd "$project_root"
python3 scripts/verify_disc.py
sdk_cli="$project_root/.tools/rexglue-patched/bin/rexglue"
if [ ! -x "$sdk_cli" ]; then
    printf '%s\n' 'Run python3 scripts/bootstrap_macos.py first.' >&2
    exit 1
fi
"$sdk_cli" codegen "$project_root/fh1_manifest.toml"
python3 scripts/check_generated.py
cmake --preset mac-arm64-release
cmake --build --preset mac-arm64-release --parallel "${FH1_BUILD_JOBS:-4}"
