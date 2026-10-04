# World rendering investigation

The world remains black as of 2026-10-04. Audio, video presentation, and the
menu UI work. The driving HUD and throttle response have appeared in earlier
captures; those results do not establish working 3D gameplay.

Temporary traces show world draw submissions reaching Vulkan, including mesh
vertex fetches and camera constants. Selected vertices interpreted on the CPU
have finite positions inside the visible clip volume. Readbacks of selected
GPU vertex-buffer ranges match guest memory byte-for-byte. These are samples,
not proof that every vertex, GPU shader, or render pass is correct.

Individual trials of fragment shader interlock render targets, disabled
occlusion queries, the standard resolve path, and legacy render passes did not
restore the world. A global depth/stencil bypass broke the UI and has been
removed. The later mesh-only wireframe trial remains black, including a run
with synchronous shader compilation. Its original vertex shaders and the
game's resolves and compositing remain in use. A black wireframe result alone
does not identify which of those stages fails.

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
execution, guest CPU work, synchronization, and API overhead. The next useful
correctness check is a capture of the world render target before resolve and
compositing. Performance measurements should then cover steady frame times,
shader compilation, GPU execution, and submission waits with tracing disabled.
WMV hardware decoding remains deferred until gameplay rendering works.
