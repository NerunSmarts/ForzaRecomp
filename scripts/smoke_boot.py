"""Run a bounded boot diagnostic. Surviving the timeout does not prove gameplay."""
import argparse
import os
from pathlib import Path
import signal
import subprocess

ROOT = Path(__file__).resolve().parents[1]

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--seconds", type=int, default=20)
    parser.add_argument("game_args", nargs=argparse.REMAINDER,
                        help="Additional runtime flags after --")
    args = parser.parse_args()
    if not 1 <= args.seconds <= 600:
        parser.error("--seconds must be between 1 and 600")
    logs = ROOT / "out/logs"
    logs.mkdir(parents=True, exist_ok=True)
    runtime_log = logs / "boot-runtime.log"
    for rotated_log in logs.glob("boot-runtime.*.log"):
        rotated_log.unlink()
    runtime_log.write_text("")
    frame = logs / "boot-frame.ppm"
    frame.unlink(missing_ok=True)
    for snapshot in logs.glob("boot-frame-*.ppm"):
        snapshot.unlink()
    environment = dict(os.environ, FH1_LOG_FILE=str(runtime_log), FH1_CAPTURE_FRAME=str(frame),
                       FH1_CAPTURE_SEQUENCE="1", FH1_CAPTURE_ATTEMPTS=str((args.seconds + 1) // 2))
    game_args = args.game_args[1:] if args.game_args[:1] == ["--"] else args.game_args
    with (logs / "boot-stdout.log").open("w") as output:
        process = subprocess.Popen(["sh", str(ROOT / "scripts/run_macos.sh"), "--headless",
                                    "--mnk_mode=true", "--log_level=debug", *game_args], cwd=ROOT, stdout=output,
                                   stderr=subprocess.STDOUT, env=environment)
        try:
            code = process.wait(timeout=args.seconds)
            print(f"Game exited during boot with status {code}; see {runtime_log.relative_to(ROOT)}")
            raise SystemExit(code if code > 0 else (1 if code < 0 else 0))
        except subprocess.TimeoutExpired:
            process.send_signal(signal.SIGTERM)
            try:
                process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                process.kill()
                process.wait()
            print(f"Game remained alive for {args.seconds}s; stopped after diagnostic interval")
