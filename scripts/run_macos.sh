#!/bin/sh
set -eu
project_root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
game_directory=${FH1_GAME_DIRECTORY:-"$project_root/FH1"}
user_directory=${FH1_USER_DIRECTORY:-"$project_root/out/user"}
executable="$project_root/out/build/mac-arm64/fh1"
log_file=${FH1_LOG_FILE:-"$project_root/out/logs/runtime.log"}
if [ ! -x "$executable" ]; then
    printf '%s\n' 'Build with sh scripts/build_macos.sh first.' >&2
    exit 1
fi
mkdir -p "$user_directory" "$project_root/out/logs"
exec "$executable" --game_data_root="$game_directory" \
    --user_data_root="$user_directory" --gpu_plugin=xenos \
    --log_file="$log_file" "$@"
