"""Reject known incomplete translations even if ReXGlue exits successfully."""
from pathlib import Path
import re
import sys

root = Path(__file__).resolve().parents[1] / "generated"
bad = []
for module in ("default", "media", "speech"):
    files = list((root / module).glob("*_recomp.*.cpp"))
    if not files:
        bad.append(f"{module}: no generated sources")
    for path in files:
        for number, line in enumerate(path.read_text().splitlines(), 1):
            if re.search(r'REX_FATAL\("Unresolved|/\* branch to .* outside function \*/', line):
                bad.append(f"{path.relative_to(root.parent)}:{number}: {line.strip()}")
if bad:
    print("Incomplete translations:\n" + "\n".join(bad), file=sys.stderr)
    sys.exit(1)
print("All three generated modules passed the incomplete-translation check")
