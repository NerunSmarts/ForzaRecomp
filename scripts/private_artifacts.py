"""Reserve a new directory for game-derived output beneath ignored out/."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def new_output_directory(path, root=ROOT):
    root = Path(root).resolve()
    output = Path(path).resolve()
    private_root = root / "out"
    if output == private_root or private_root not in output.parents:
        raise ValueError("Game-derived output must be in a new directory beneath this project's out/")
    output.parent.mkdir(parents=True, exist_ok=True)
    # Recheck after parent creation, including any pre-existing symlinks.
    if output.resolve() != output or output.parent.resolve() != output.parent:
        raise ValueError("Output directory resolves through a changed symlink")
    output.mkdir(exist_ok=False)
    return output
