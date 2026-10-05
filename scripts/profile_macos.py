"""Record a bounded Instruments profile of FH1, with rendering diagnostics off."""
import argparse
from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path
import signal
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]


def binary_hashes():
    build = ROOT / "out/build/mac-arm64"
    paths = [build / name for name in ("fh1", "librexruntime.dylib", "librexgpu-xenos.dylib")]
    paths.extend(sorted(build.glob("libfh1_*.dylib")))
    hashes = {}
    for path in paths:
        if path.is_file():
            digest = hashlib.sha256()
            with path.open("rb") as source:
                for chunk in iter(lambda: source.read(1024 * 1024), b""):
                    digest.update(chunk)
            hashes[path.name] = digest.hexdigest()
    return hashes


def stop(process):
    if process is None or process.poll() is not None:
        return
    process.terminate()
    try:
        process.wait(timeout=8)
    except subprocess.TimeoutExpired:
        process.kill()
        process.wait()


def cpu_snapshot(pid):
    result = subprocess.run(["ps", "-p", str(pid), "-o", "time=", "-o", "rss=", "-o", "stat="],
                            capture_output=True, text=True)
    fields = result.stdout.split()
    if len(fields) != 3 or fields[2].startswith("Z"):
        return None
    cpu = sum(float(value) * 60 ** index
              for index, value in enumerate(reversed(fields[0].split(":"))))
    return cpu, int(fields[1])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--template", choices=["Game Performance", "Time Profiler", "Metal System Trace"],
                        default="Game Performance")
    parser.add_argument("--seconds", type=int, default=20, help="Recording duration (1–120 seconds)")
    parser.add_argument("--delay", type=int, default=90, help="Warm-up before recording (0–600 seconds)")
    parser.add_argument("--attach", type=int, help="Profile an existing PID; leave that process running")
    parser.add_argument("--input-script", type=Path, help="Optional guest controller script for a new launch")
    parser.add_argument("--output", type=Path, help="New private output directory under out/")
    parser.add_argument("--label", default="", help="Scene and workload description for the private metadata")
    parser.add_argument("game_args", nargs=argparse.REMAINDER, help="Runtime arguments after --")
    args = parser.parse_args()
    if sys.platform != "darwin":
        parser.error("Instruments requires macOS and Xcode")
    if not 1 <= args.seconds <= 120 or not 0 <= args.delay <= 600:
        parser.error("--seconds must be 1–120 and --delay must be 0–600")
    if args.attach is not None and args.attach <= 0:
        parser.error("--attach must be a positive PID")
    if args.attach and (args.input_script or args.game_args):
        parser.error("--input-script and runtime arguments apply only to a new launch")
    if args.input_script and not args.input_script.is_file():
        parser.error("--input-script must name an existing file")
    stamp = datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%SZ")
    folder = (args.output or ROOT / "out/profiles" / stamp).resolve()
    if not folder.is_relative_to((ROOT / "out").resolve()):
        parser.error("Keep profile data private in a directory under out/")
    if folder.exists():
        parser.error("--output must name a new directory to preserve earlier profiles")
    subprocess.run(["xcrun", "--find", "xctrace"], check=True, stdout=subprocess.DEVNULL)
    folder.mkdir(parents=True)
    trace = folder / "profile.trace"
    metadata = dict(template=args.template, warmup_seconds=args.delay,
                    requested_recording_seconds=args.seconds, started_utc=stamp,
                    commit=subprocess.check_output(["git", "rev-parse", "HEAD"], cwd=ROOT,
                                                   text=True).strip(), attached=bool(args.attach),
                    label=args.label, binary_sha256=binary_hashes())
    game, profiler = None, None
    try:
        with (folder / "game-stdout.log").open("w") as game_output, \
                (folder / "instruments.log").open("w") as profile_output, \
                (folder / "cpu.jsonl").open("w") as stats:
            if args.attach:
                pid = args.attach
                metadata["diagnostics"] = "Existing process: verify captures, tracing and wireframe are off"
            else:
                env = dict(os.environ)
                for name in list(env):
                    if name.startswith("FH1_CAPTURE_") or name == "FH1_INPUT_SCRIPT":
                        env.pop(name)
                env["FH1_LOG_FILE"] = str(folder / "runtime.log")
                if args.input_script:
                    env["FH1_INPUT_SCRIPT"] = str(args.input_script.resolve())
                runtime_args = args.game_args[1:] if args.game_args[:1] == ["--"] else args.game_args
                command = ["sh", str(ROOT / "scripts/run_macos.sh"), "--mnk_mode=true",
                           "--log_level=warning", *runtime_args,
                           "--fh1_debug_wireframe=false", "--vulkan_tessellation_wireframe=false",
                           "--vulkan_draw_trace_interval=0",
                           "--vulkan_debug_capture_targets=", "--dump_shaders="]
                metadata["command"] = command
                metadata["input_script"] = str(args.input_script.resolve()) if args.input_script else None
                game = subprocess.Popen(command, cwd=ROOT, env=env, stdout=game_output,
                                        stderr=subprocess.STDOUT)
                pid = game.pid
            metadata["pid"] = pid
            (folder / "pid.txt").write_text(str(pid) + "\n")
            print(f"FH1 PID {pid}: warming for {args.delay}s; {args.template} for {args.seconds}s", flush=True)
            print(f"Private profile: {folder}", flush=True)
            start = time.monotonic()
            previous = None
            recording = False
            while True:
                now = time.monotonic()
                snapshot = None if game is not None and game.poll() is not None else cpu_snapshot(pid)
                if snapshot is None:
                    if not recording:
                        raise RuntimeError("Game exited before recording started")
                    # Let Instruments finalize even after its target exits.
                    # Killing the collector here can discard a completed trace.
                    if "target_exit_seconds" not in metadata:
                        metadata["target_exit_seconds"] = round(now - start, 3)
                        print("Game exited; waiting for Instruments to save the trace", flush=True)
                else:
                    cpu, rss = snapshot
                    record = dict(seconds=round(now - start, 3), total_cpu_seconds=cpu,
                                  rss_kib=rss, phase="recording" if recording else "warmup")
                    if previous:
                        record["interval_cpu_percent"] = round(100 * (cpu - previous[1]) / (now - previous[0]), 2)
                    previous = now, cpu
                    stats.write(json.dumps(record) + "\n")
                    stats.flush()
                if not recording and now - start >= args.delay:
                    command = ["xcrun", "xctrace", "record", "--template", args.template,
                               "--attach", str(pid), "--time-limit", f"{args.seconds}s",
                               "--output", str(trace)]
                    metadata["instruments_command"] = command
                    metadata["recording_launch_seconds"] = round(now - start, 3)
                    profiler = subprocess.Popen(command, stdout=profile_output, stderr=subprocess.STDOUT)
                    recording = True
                    print("Recording now; keep the intended scene active", flush=True)
                if profiler is not None and profiler.poll() is not None:
                    metadata["instruments_exit"] = profiler.returncode
                    if profiler.returncode:
                        raise RuntimeError(f"Instruments failed; see {folder / 'instruments.log'}")
                    break
                if recording and now - start > args.delay + args.seconds + 90:
                    profiler.send_signal(signal.SIGINT)
                    try:
                        profiler.wait(timeout=15)
                    except subprocess.TimeoutExpired:
                        stop(profiler)
                    raise RuntimeError("Instruments exceeded its recording/finalization timeout")
                time.sleep(1)
            # Sampling windows exclude launch warm-up. Opening the trace shows
            # the exact recording interval; setup and finalization can add time.
            metadata["finished_seconds"] = round(time.monotonic() - start, 3)
        subprocess.run(["xcrun", "xctrace", "export", "--input", str(trace), "--toc",
                        "--output", str(folder / "trace-toc.xml")], check=True)
        print(f"Recorded {trace}\nOpen with: open {trace}", flush=True)
    except KeyboardInterrupt:
        metadata["interrupted"] = True
        if profiler is not None and profiler.poll() is None:
            profiler.send_signal(signal.SIGINT)
            try:
                profiler.wait(timeout=15)
            except subprocess.TimeoutExpired:
                stop(profiler)
        raise
    finally:
        stop(profiler)
        stop(game)
        if game is not None:
            metadata["game_exit"] = game.returncode
        (folder / "metadata.json").write_text(json.dumps(metadata, indent=2) + "\n")


if __name__ == "__main__":
    try:
        main()
    except (OSError, RuntimeError, subprocess.CalledProcessError) as error:
        sys.exit(str(error))
