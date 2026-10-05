// Synthetic compute validation of the actual patched translator helpers.
#define FH1_RECOMP 1
#include "shader_common.h"

struct FetchCase
{
    uint Slot; float Index; uint Stride; int Offset;
    uint Format; uint Signed; uint Integer; uint NoZero;
    uint Rounded; int Exponent; uint Swizzle; uint Predicate;
    uint Mini; int MiniOffset; uint MiniFormat; uint Reserved;
    float4 Before;
};
[[vk::binding(0, 0)]] StructuredBuffer<FetchCase> Cases;
[[vk::binding(1, 0)]] RWStructuredBuffer<float4> Results;

[numthreads(1, 1, 1)]
void main(uint3 id : SV_DispatchThreadID)
{
    FetchCase c = Cases[id.x];
    float4 output = c.Before;
    if (c.Reserved == 1)
    {
        output.x = fh1InitialVertexIndex(c.Slot);
        Results[id.x] = output;
        return;
    }
    if (c.Predicate)
    {
        int64_t address = fh1VertexFetchAddress(c.Index, c.Stride, c.Rounded != 0);
        float4 value = fh1VertexFetch(c.Slot, address, c.Offset, c.Format,
                                    c.Signed != 0, c.Integer != 0, c.NoZero != 0, c.Exponent);
        if (c.Mini)
        {
            // A mini fetch reuses the saved address even after the source changes.
            c.Index += 10;
            value = fh1VertexFetch(c.Slot, address, c.MiniOffset, c.MiniFormat,
                                   c.Signed != 0, c.Integer != 0, c.NoZero != 0, c.Exponent);
        }
        [unroll] for (uint lane = 0; lane < 4; ++lane)
        {
            uint swizzle = (c.Swizzle >> (3 * lane)) & 7;
            if (swizzle < 4) output[lane] = value[swizzle];
            else if (swizzle == 4) output[lane] = 0;
            else if (swizzle == 5) output[lane] = 1;
        }
    }
    Results[id.x] = output;
}
