# World rendering investigation

The 3D scene is visible in the macOS window as of 2026-10-05, confirmed by
the user. The original world shaders produce textured terrain, trees and cars.
The user initially reported no surface artifacts beyond wireframe. A later
test still shows wireframe-like edges on cars with both
`fh1_debug_wireframe=false` and `vulkan_tessellation_wireframe=false` explicitly
set. The cause of those edges remains unresolved. Complete driving, collision,
saves, normal shaded rendering and steady performance still need validation.

The black-world failure was in the SPIR-V rectangle-list vertex fallback.
Metal lacks geometry shaders, so this fallback runs the guest vertex shader
for all three rectangle vertices and generates a fourth corner. The final
world composite's vertex shader contains branches. Its program-counter
`OpPhi` was emitted before rectangle expansion added the next-vertex restart,
leaving one predecessor without an incoming value. The resulting shader had
invalid control flow. `patches/0013-fix-rectangle-shader-restarts.patch` defers
that instruction until all predecessors are known. This follows the
[SPIR-V requirement for one incoming value per predecessor](https://registry.khronos.org/SPIR-V/specs/unified1/SPIRV.html#OpPhi).

The observed incoming paths numbered three, while the original instruction
listed only two. The rebuilt composite includes all three. A narrow check of
437 translated modules dumped during the successful run found no `OpPhi`
predecessor mismatches; this is not a full SPIR-V validation suite. The plugin
build passes, and the successful run exited normally after 153 seconds.

Readbacks narrowed the failure before the fix:

| Stage | Observed result |
| --- | --- |
| World color targets before resolve | Textured geometry in three 4× MSAA HDR tiles |
| Packed EDRAM and resolved guest GPU memory | World pixels retained |
| Texture-cache reload | Nonzero full-size world color and finite exposure texture |
| Downsample passes | Nonzero color; some later bloom targets black |
| Final world composite before the fix | All 921,600 pixels had zero RGB and alpha |
| Final world composite after the fix | All 921,600 pixels had nonzero RGB and alpha |
| Presentation after the fix | Upright scene and cars in guest display captures; user confirms visible 3D |

The upside-down intermediate is consistent with the final composite's
`1 - UV` sampling. The rebuilt composite and display captures show upright
trees. Captures of intermediate targets are not proof of window presentation.
The text microcode disassembly labels the fullscreen fetch as VF0, while the
translated SPIR-V and fetch bitmap use VF95; the actual VF95 data contains
finite fullscreen corners and UVs.

Earlier trials of fragment shader interlock targets, disabled occlusion,
standard resolves, legacy render passes, synchronous wireframe compilation,
a temporary composite fragment replacement and disabled Metal fast math did
not restore the world. A global depth/stencil bypass broke the UI and was
removed. The temporary composite replacement is also removed. The working
correction retains the original shaders and game render state.

`patches/0014-synchronize-shared-memory-compute-writes.patch` separately adds
shader-write access to the shared-memory compute usage. This corrects resolve
write visibility; it did not independently fix the black world.

## Opt-in diagnostics

`patches/0012-add-opt-in-vulkan-world-diagnostics.patch` adds local debugging
controls. They are disabled during a normal launch:

```sh
sh scripts/run_macos.sh --mnk_mode=true --fh1_debug_wireframe=true
```

The wireframe mode identifies mesh shaders using vertex-fetch streams 89/90.
It replaces color draws with bright untextured lines and bypasses their depth,
stencil, culling, and blending. Depth-only passes and UI shaders keep their
normal behavior. This is a title-specific diagnostic, not a working alternate
renderer. It requires host render targets and non-solid fill support, and
automatically disables persistent shader storage to protect the normal cache.
Use `--async_shader_compilation=false` to wait for compilation before drawing.

`--vulkan_draw_trace_interval=120` traces one out of every 120 guest frames.
It logs draw state and fetch constants, interprets selected vertices, and
occasionally reads GPU buffer contents back to compare them with guest memory.
These readbacks wait for the GPU and can cause substantial stalls. Do not use
this mode to judge frame rate. The default interval of zero disables it.
Framebuffer capture also introduces GPU readback; leave its environment
variables unset during performance measurements.

For private shader inspection, `--dump_shaders=out/logs/shaders` also writes
translated SPIR-V modules. Keep shader dumps and captures under ignored `out/`.
They are excluded from the publication audit, including compound extensions.

`patches/0015-capture-world-rendering-stages.patch` adds bounded captures of
one world frame. Set a private directory and an optional earliest guest frame:

```sh
sh scripts/run_macos.sh --mnk_mode=true \
  --vulkan_debug_capture_targets=out/logs/world-targets \
  --vulkan_debug_capture_frame=1500
python3 scripts/inspect_render_captures.py out/logs/world-targets --preview
```

The first mesh color draw at or after that frame selects the capture frame.
Up to 32 color targets and 32 reloaded textures are captured, along with EDRAM
and resolved-memory buffers for mesh resolves. The readbacks are collected
after submission completion, without a forced GPU wait for each capture.
They still add copies, allocations and disk writes, so leave them disabled for
performance measurements. MSAA image captures use a temporary single-sample
resolve. Image copies are limited to 2048×1024, and metadata records cropping
and the relevant guest resolve fields. Raw guest buffers require Xenos format
and tiling interpretation; the inspection script skips them.

The preview script uses a diagnostic square-root curve for visibility, rather
than reproducing the game's tone mapping. Raw images stay unchanged. Captures,
shader dumps, previews and logs belong under ignored `out/` and stay private.

The next performance work is profiling loaded 3D scenes with diagnostic
wireframe, captures and tracing off. Separate compilation from steady
rendering and guest CPU work. The macOS profiling workflow is documented in
[profiling.md](profiling.md). The car edges need a separate inspection of the
car draws' guest polygon mode, translated shaders and resource bindings;
disabling diagnostic wireframe alone does not remove them. A Metal frame
capture can inspect the actual draw state without globally overriding the
UI's depth or blending.

## Rewriting the renderer

The current path translates Xenos commands and shaders to Vulkan, then uses
MoltenVK to render through Metal. A direct Metal backend could reduce command
translation overhead and allow Apple-specific handling of render targets and
memory. It would still need correct Xenos shader semantics, tiled textures,
EDRAM ownership, depth/stencil, and resolves. Changing the API does not by
itself fix errors in those shared responsibilities.

A replacement renderer hooked into FH1's scene submission could remove more
GPU emulation work. That requires reconstructing cameras, geometry submission,
materials, skinning, effects, and the relationship with the UI. It is a much
larger reverse-engineering task than adding a Metal backend.

No reliable performance multiplier is established for either option. A short
trace-free CPU run and a sparse stack sample are insufficient to separate GPU
execution, guest CPU work, synchronization, and API overhead. The successful
world composite correction shows why checking individual stages was useful
before replacing the backend. WMV hardware decoding remains deferred while
world rendering and gameplay are validated.
