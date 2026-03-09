#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831E66F0"))) PPC_WEAK_FUNC(sub_831E66F0);
PPC_FUNC_IMPL(__imp__sub_831E66F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8096
	ctx.r31.s64 = ctx.r10.s64 + -8096;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8096, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6718;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6720;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6738"))) PPC_WEAK_FUNC(sub_831E6738);
PPC_FUNC_IMPL(__imp__sub_831E6738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10424
	ctx.r31.s64 = ctx.r10.s64 + -10424;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10424, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6760;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6768;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6780"))) PPC_WEAK_FUNC(sub_831E6780);
PPC_FUNC_IMPL(__imp__sub_831E6780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10920
	ctx.r31.s64 = ctx.r10.s64 + -10920;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10920, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E67A8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E67B0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E67C8"))) PPC_WEAK_FUNC(sub_831E67C8);
PPC_FUNC_IMPL(__imp__sub_831E67C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13152
	ctx.r31.s64 = ctx.r10.s64 + -13152;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13152, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E67F0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E67F8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6810"))) PPC_WEAK_FUNC(sub_831E6810);
PPC_FUNC_IMPL(__imp__sub_831E6810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8788
	ctx.r31.s64 = ctx.r10.s64 + -8788;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8788, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6838;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6840;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6858"))) PPC_WEAK_FUNC(sub_831E6858);
PPC_FUNC_IMPL(__imp__sub_831E6858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10208
	ctx.r31.s64 = ctx.r10.s64 + -10208;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10208, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6880;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6888;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E68A0"))) PPC_WEAK_FUNC(sub_831E68A0);
PPC_FUNC_IMPL(__imp__sub_831E68A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12192
	ctx.r31.s64 = ctx.r10.s64 + -12192;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12192, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E68C8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E68D0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E68E8"))) PPC_WEAK_FUNC(sub_831E68E8);
PPC_FUNC_IMPL(__imp__sub_831E68E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11368
	ctx.r31.s64 = ctx.r10.s64 + -11368;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11368, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6910;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6918;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6930"))) PPC_WEAK_FUNC(sub_831E6930);
PPC_FUNC_IMPL(__imp__sub_831E6930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9584
	ctx.r31.s64 = ctx.r10.s64 + -9584;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9584, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6958;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6960;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6978"))) PPC_WEAK_FUNC(sub_831E6978);
PPC_FUNC_IMPL(__imp__sub_831E6978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10064
	ctx.r31.s64 = ctx.r10.s64 + -10064;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10064, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E69A0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E69A8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E69C0"))) PPC_WEAK_FUNC(sub_831E69C0);
PPC_FUNC_IMPL(__imp__sub_831E69C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12408
	ctx.r31.s64 = ctx.r10.s64 + -12408;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12408, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E69E8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E69F0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6A08"))) PPC_WEAK_FUNC(sub_831E6A08);
PPC_FUNC_IMPL(__imp__sub_831E6A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13736
	ctx.r31.s64 = ctx.r10.s64 + -13736;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13736, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6A30;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6A38;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6A50"))) PPC_WEAK_FUNC(sub_831E6A50);
PPC_FUNC_IMPL(__imp__sub_831E6A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9272
	ctx.r31.s64 = ctx.r10.s64 + -9272;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9272, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6A78;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6A80;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6A98"))) PPC_WEAK_FUNC(sub_831E6A98);
PPC_FUNC_IMPL(__imp__sub_831E6A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12984
	ctx.r31.s64 = ctx.r10.s64 + -12984;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12984, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6AC0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6AC8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6AE0"))) PPC_WEAK_FUNC(sub_831E6AE0);
PPC_FUNC_IMPL(__imp__sub_831E6AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12872
	ctx.r31.s64 = ctx.r10.s64 + -12872;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12872, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6B08;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6B10;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6B28"))) PPC_WEAK_FUNC(sub_831E6B28);
PPC_FUNC_IMPL(__imp__sub_831E6B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8716
	ctx.r31.s64 = ctx.r10.s64 + -8716;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8716, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6B50;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6B58;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6B70"))) PPC_WEAK_FUNC(sub_831E6B70);
PPC_FUNC_IMPL(__imp__sub_831E6B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11708
	ctx.r31.s64 = ctx.r10.s64 + -11708;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11708, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6B98;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6BA0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6BB8"))) PPC_WEAK_FUNC(sub_831E6BB8);
PPC_FUNC_IMPL(__imp__sub_831E6BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10688
	ctx.r31.s64 = ctx.r10.s64 + -10688;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10688, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6BE0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6BE8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6C00"))) PPC_WEAK_FUNC(sub_831E6C00);
PPC_FUNC_IMPL(__imp__sub_831E6C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10400
	ctx.r31.s64 = ctx.r10.s64 + -10400;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10400, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6C28;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6C30;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6C48"))) PPC_WEAK_FUNC(sub_831E6C48);
PPC_FUNC_IMPL(__imp__sub_831E6C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-7520
	ctx.r31.s64 = ctx.r10.s64 + -7520;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-7520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7520, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6C70;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6C78;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6C90"))) PPC_WEAK_FUNC(sub_831E6C90);
PPC_FUNC_IMPL(__imp__sub_831E6C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-7568
	ctx.r31.s64 = ctx.r10.s64 + -7568;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-7568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7568, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6CB8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6CC0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6CD8"))) PPC_WEAK_FUNC(sub_831E6CD8);
PPC_FUNC_IMPL(__imp__sub_831E6CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9028
	ctx.r31.s64 = ctx.r10.s64 + -9028;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9028, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6D00;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6D08;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6D20"))) PPC_WEAK_FUNC(sub_831E6D20);
PPC_FUNC_IMPL(__imp__sub_831E6D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10664
	ctx.r31.s64 = ctx.r10.s64 + -10664;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10664, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6D48;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6D50;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6D68"))) PPC_WEAK_FUNC(sub_831E6D68);
PPC_FUNC_IMPL(__imp__sub_831E6D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9296
	ctx.r31.s64 = ctx.r10.s64 + -9296;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9296, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6D90;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6D98;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6DB0"))) PPC_WEAK_FUNC(sub_831E6DB0);
PPC_FUNC_IMPL(__imp__sub_831E6DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9536
	ctx.r31.s64 = ctx.r10.s64 + -9536;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9536, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6DD8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6DE0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6DF8"))) PPC_WEAK_FUNC(sub_831E6DF8);
PPC_FUNC_IMPL(__imp__sub_831E6DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12240
	ctx.r31.s64 = ctx.r10.s64 + -12240;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12240, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6E20;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6E28;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6E40"))) PPC_WEAK_FUNC(sub_831E6E40);
PPC_FUNC_IMPL(__imp__sub_831E6E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12824
	ctx.r31.s64 = ctx.r10.s64 + -12824;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12824, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6E68;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6E70;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6E88"))) PPC_WEAK_FUNC(sub_831E6E88);
PPC_FUNC_IMPL(__imp__sub_831E6E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13808
	ctx.r31.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13808, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6EB0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6EB8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6ED0"))) PPC_WEAK_FUNC(sub_831E6ED0);
PPC_FUNC_IMPL(__imp__sub_831E6ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9176
	ctx.r31.s64 = ctx.r10.s64 + -9176;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9176, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6EF8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6F00;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6F18"))) PPC_WEAK_FUNC(sub_831E6F18);
PPC_FUNC_IMPL(__imp__sub_831E6F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13488
	ctx.r31.s64 = ctx.r10.s64 + -13488;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13488, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6F40;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6F48;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6F60"))) PPC_WEAK_FUNC(sub_831E6F60);
PPC_FUNC_IMPL(__imp__sub_831E6F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10088
	ctx.r31.s64 = ctx.r10.s64 + -10088;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10088, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6F88;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6F90;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6FA8"))) PPC_WEAK_FUNC(sub_831E6FA8);
PPC_FUNC_IMPL(__imp__sub_831E6FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13536
	ctx.r31.s64 = ctx.r10.s64 + -13536;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13536, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E6FD0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E6FD8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6FF0"))) PPC_WEAK_FUNC(sub_831E6FF0);
PPC_FUNC_IMPL(__imp__sub_831E6FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12020
	ctx.r31.s64 = ctx.r10.s64 + -12020;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12020, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7018;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7020;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7038"))) PPC_WEAK_FUNC(sub_831E7038);
PPC_FUNC_IMPL(__imp__sub_831E7038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11444
	ctx.r31.s64 = ctx.r10.s64 + -11444;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11444, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7060;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7068;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7080"))) PPC_WEAK_FUNC(sub_831E7080);
PPC_FUNC_IMPL(__imp__sub_831E7080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8500
	ctx.r31.s64 = ctx.r10.s64 + -8500;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8500, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E70A8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E70B0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E70C8"))) PPC_WEAK_FUNC(sub_831E70C8);
PPC_FUNC_IMPL(__imp__sub_831E70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10568
	ctx.r31.s64 = ctx.r10.s64 + -10568;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10568, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E70F0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E70F8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7110"))) PPC_WEAK_FUNC(sub_831E7110);
PPC_FUNC_IMPL(__imp__sub_831E7110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-7688
	ctx.r31.s64 = ctx.r10.s64 + -7688;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-7688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7688, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7138;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7140;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7158"))) PPC_WEAK_FUNC(sub_831E7158);
PPC_FUNC_IMPL(__imp__sub_831E7158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9080
	ctx.r31.s64 = ctx.r10.s64 + -9080;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9080, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7180;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7188;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E71A0"))) PPC_WEAK_FUNC(sub_831E71A0);
PPC_FUNC_IMPL(__imp__sub_831E71A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13648
	ctx.r31.s64 = ctx.r10.s64 + -13648;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13648, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E71C8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E71D0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E71E8"))) PPC_WEAK_FUNC(sub_831E71E8);
PPC_FUNC_IMPL(__imp__sub_831E71E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8884
	ctx.r31.s64 = ctx.r10.s64 + -8884;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8884, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7210;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7218;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7230"))) PPC_WEAK_FUNC(sub_831E7230);
PPC_FUNC_IMPL(__imp__sub_831E7230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8644
	ctx.r31.s64 = ctx.r10.s64 + -8644;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8644, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7258;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7260;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7278"))) PPC_WEAK_FUNC(sub_831E7278);
PPC_FUNC_IMPL(__imp__sub_831E7278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12144
	ctx.r31.s64 = ctx.r10.s64 + -12144;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12144, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E72A0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E72A8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E72C0"))) PPC_WEAK_FUNC(sub_831E72C0);
PPC_FUNC_IMPL(__imp__sub_831E72C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13200
	ctx.r31.s64 = ctx.r10.s64 + -13200;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13200, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E72E8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E72F0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7308"))) PPC_WEAK_FUNC(sub_831E7308);
PPC_FUNC_IMPL(__imp__sub_831E7308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9440
	ctx.r31.s64 = ctx.r10.s64 + -9440;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9440, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7330;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7338;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7350"))) PPC_WEAK_FUNC(sub_831E7350);
PPC_FUNC_IMPL(__imp__sub_831E7350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12384
	ctx.r31.s64 = ctx.r10.s64 + -12384;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12384, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7378;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7380;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7398"))) PPC_WEAK_FUNC(sub_831E7398);
PPC_FUNC_IMPL(__imp__sub_831E7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13080
	ctx.r31.s64 = ctx.r10.s64 + -13080;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13080, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E73C0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E73C8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E73E0"))) PPC_WEAK_FUNC(sub_831E73E0);
PPC_FUNC_IMPL(__imp__sub_831E73E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12264
	ctx.r31.s64 = ctx.r10.s64 + -12264;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12264, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7408;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7410;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7428"))) PPC_WEAK_FUNC(sub_831E7428);
PPC_FUNC_IMPL(__imp__sub_831E7428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11080
	ctx.r31.s64 = ctx.r10.s64 + -11080;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11080, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7450;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7458;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7470"))) PPC_WEAK_FUNC(sub_831E7470);
PPC_FUNC_IMPL(__imp__sub_831E7470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12848
	ctx.r31.s64 = ctx.r10.s64 + -12848;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12848, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7498;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E74A0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E74B8"))) PPC_WEAK_FUNC(sub_831E74B8);
PPC_FUNC_IMPL(__imp__sub_831E74B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11200
	ctx.r31.s64 = ctx.r10.s64 + -11200;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11200, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E74E0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E74E8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7500"))) PPC_WEAK_FUNC(sub_831E7500);
PPC_FUNC_IMPL(__imp__sub_831E7500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8692
	ctx.r31.s64 = ctx.r10.s64 + -8692;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8692, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7528;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7530;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7548"))) PPC_WEAK_FUNC(sub_831E7548);
PPC_FUNC_IMPL(__imp__sub_831E7548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12288
	ctx.r31.s64 = ctx.r10.s64 + -12288;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12288, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7570;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7578;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7590"))) PPC_WEAK_FUNC(sub_831E7590);
PPC_FUNC_IMPL(__imp__sub_831E7590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11296
	ctx.r31.s64 = ctx.r10.s64 + -11296;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11296, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E75B8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E75C0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E75D8"))) PPC_WEAK_FUNC(sub_831E75D8);
PPC_FUNC_IMPL(__imp__sub_831E75D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11804
	ctx.r31.s64 = ctx.r10.s64 + -11804;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11804, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7600;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7608;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7620"))) PPC_WEAK_FUNC(sub_831E7620);
PPC_FUNC_IMPL(__imp__sub_831E7620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-7952
	ctx.r31.s64 = ctx.r10.s64 + -7952;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-7952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7952, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7648;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7650;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7668"))) PPC_WEAK_FUNC(sub_831E7668);
PPC_FUNC_IMPL(__imp__sub_831E7668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8428
	ctx.r31.s64 = ctx.r10.s64 + -8428;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8428, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7690;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7698;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E76B0"))) PPC_WEAK_FUNC(sub_831E76B0);
PPC_FUNC_IMPL(__imp__sub_831E76B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9800
	ctx.r31.s64 = ctx.r10.s64 + -9800;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9800, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E76D8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E76E0;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E76F8"))) PPC_WEAK_FUNC(sub_831E76F8);
PPC_FUNC_IMPL(__imp__sub_831E76F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11924
	ctx.r31.s64 = ctx.r10.s64 + -11924;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11924, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7720;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7728;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7740"))) PPC_WEAK_FUNC(sub_831E7740);
PPC_FUNC_IMPL(__imp__sub_831E7740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-11732
	ctx.r31.s64 = ctx.r10.s64 + -11732;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-11732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11732, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7768;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7770;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7788"))) PPC_WEAK_FUNC(sub_831E7788);
PPC_FUNC_IMPL(__imp__sub_831E7788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-13784
	ctx.r31.s64 = ctx.r10.s64 + -13784;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-13784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13784, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E77B0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E77B8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E77D0"))) PPC_WEAK_FUNC(sub_831E77D0);
PPC_FUNC_IMPL(__imp__sub_831E77D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9944
	ctx.r31.s64 = ctx.r10.s64 + -9944;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9944, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E77F8;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7800;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7818"))) PPC_WEAK_FUNC(sub_831E7818);
PPC_FUNC_IMPL(__imp__sub_831E7818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-12480
	ctx.r31.s64 = ctx.r10.s64 + -12480;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-12480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12480, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7840;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7848;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7860"))) PPC_WEAK_FUNC(sub_831E7860);
PPC_FUNC_IMPL(__imp__sub_831E7860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-8048
	ctx.r31.s64 = ctx.r10.s64 + -8048;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-8048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8048, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7888;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7890;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E78A8"))) PPC_WEAK_FUNC(sub_831E78A8);
PPC_FUNC_IMPL(__imp__sub_831E78A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-9608
	ctx.r31.s64 = ctx.r10.s64 + -9608;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-9608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9608, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E78D0;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E78D8;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E78F0"))) PPC_WEAK_FUNC(sub_831E78F0);
PPC_FUNC_IMPL(__imp__sub_831E78F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r10,-10896
	ctx.r31.s64 = ctx.r10.s64 + -10896;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,-10896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10896, ctx.r11.u32);
	// bl 0x824976d0
	ctx.lr = 0x831E7918;
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829af4a0
	ctx.lr = 0x831E7920;
	sub_829AF4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7938"))) PPC_WEAK_FUNC(sub_831E7938);
PPC_FUNC_IMPL(__imp__sub_831E7938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-7376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7950"))) PPC_WEAK_FUNC(sub_831E7950);
PPC_FUNC_IMPL(__imp__sub_831E7950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,-7364
	ctx.r3.s64 = ctx.r11.s64 + -7364;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7960"))) PPC_WEAK_FUNC(sub_831E7960);
PPC_FUNC_IMPL(__imp__sub_831E7960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7970"))) PPC_WEAK_FUNC(sub_831E7970);
PPC_FUNC_IMPL(__imp__sub_831E7970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,-12936
	ctx.r11.s64 = ctx.r11.s64 + -12936;
	// addi r10,r10,-13140
	ctx.r10.s64 = ctx.r10.s64 + -13140;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831E79A8"))) PPC_WEAK_FUNC(sub_831E79A8);
PPC_FUNC_IMPL(__imp__sub_831E79A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r11,r11,17964
	ctx.r11.s64 = ctx.r11.s64 + 17964;
	// stw r11,26660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E79C0"))) PPC_WEAK_FUNC(sub_831E79C0);
PPC_FUNC_IMPL(__imp__sub_831E79C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,27560
	ctx.r3.s64 = ctx.r11.s64 + 27560;
	// b 0x82a908e0
	sub_82A908E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E79D0"))) PPC_WEAK_FUNC(sub_831E79D0);
PPC_FUNC_IMPL(__imp__sub_831E79D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r3,27596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831e7a0c
	if (ctx.cr6.eq) goto loc_831E7A0C;
	// bl 0x824e2c18
	ctx.lr = 0x831E79F0;
	sub_824E2C18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831e7a0c
	if (ctx.cr0.eq) goto loc_831E7A0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E7A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831E7A0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A20"))) PPC_WEAK_FUNC(sub_831E7A20);
PPC_FUNC_IMPL(__imp__sub_831E7A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,27604
	ctx.r3.s64 = ctx.r11.s64 + 27604;
	// b 0x82a90c68
	sub_82A90C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7A30"))) PPC_WEAK_FUNC(sub_831E7A30);
PPC_FUNC_IMPL(__imp__sub_831E7A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-23480
	ctx.r11.s64 = ctx.r11.s64 + -23480;
	// stw r11,-32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A48"))) PPC_WEAK_FUNC(sub_831E7A48);
PPC_FUNC_IMPL(__imp__sub_831E7A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-23480
	ctx.r11.s64 = ctx.r11.s64 + -23480;
	// stw r11,-32496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A60"))) PPC_WEAK_FUNC(sub_831E7A60);
PPC_FUNC_IMPL(__imp__sub_831E7A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-23480
	ctx.r11.s64 = ctx.r11.s64 + -23480;
	// stw r11,-32488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A78"))) PPC_WEAK_FUNC(sub_831E7A78);
PPC_FUNC_IMPL(__imp__sub_831E7A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,27736
	ctx.r3.s64 = ctx.r11.s64 + 27736;
	// b 0x82a908e0
	sub_82A908E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7A88"))) PPC_WEAK_FUNC(sub_831E7A88);
PPC_FUNC_IMPL(__imp__sub_831E7A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,27737
	ctx.r3.s64 = ctx.r11.s64 + 27737;
	// b 0x82a91cc8
	sub_82A91CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7A98"))) PPC_WEAK_FUNC(sub_831E7A98);
PPC_FUNC_IMPL(__imp__sub_831E7A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7AB0"))) PPC_WEAK_FUNC(sub_831E7AB0);
PPC_FUNC_IMPL(__imp__sub_831E7AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,27968
	ctx.r3.s64 = ctx.r11.s64 + 27968;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7AC0"))) PPC_WEAK_FUNC(sub_831E7AC0);
PPC_FUNC_IMPL(__imp__sub_831E7AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,-32316
	ctx.r11.s64 = ctx.r11.s64 + -32316;
	// addi r10,r10,-13140
	ctx.r10.s64 = ctx.r10.s64 + -13140;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831E7AF8"))) PPC_WEAK_FUNC(sub_831E7AF8);
PPC_FUNC_IMPL(__imp__sub_831E7AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7B10"))) PPC_WEAK_FUNC(sub_831E7B10);
PPC_FUNC_IMPL(__imp__sub_831E7B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7B20"))) PPC_WEAK_FUNC(sub_831E7B20);
PPC_FUNC_IMPL(__imp__sub_831E7B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7B38"))) PPC_WEAK_FUNC(sub_831E7B38);
PPC_FUNC_IMPL(__imp__sub_831E7B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28148
	ctx.r3.s64 = ctx.r11.s64 + 28148;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7B48"))) PPC_WEAK_FUNC(sub_831E7B48);
PPC_FUNC_IMPL(__imp__sub_831E7B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7B60"))) PPC_WEAK_FUNC(sub_831E7B60);
PPC_FUNC_IMPL(__imp__sub_831E7B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7B78"))) PPC_WEAK_FUNC(sub_831E7B78);
PPC_FUNC_IMPL(__imp__sub_831E7B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7B90"))) PPC_WEAK_FUNC(sub_831E7B90);
PPC_FUNC_IMPL(__imp__sub_831E7B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7BA8"))) PPC_WEAK_FUNC(sub_831E7BA8);
PPC_FUNC_IMPL(__imp__sub_831E7BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28212
	ctx.r3.s64 = ctx.r11.s64 + 28212;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7BB8"))) PPC_WEAK_FUNC(sub_831E7BB8);
PPC_FUNC_IMPL(__imp__sub_831E7BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28196
	ctx.r3.s64 = ctx.r11.s64 + 28196;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7BC8"))) PPC_WEAK_FUNC(sub_831E7BC8);
PPC_FUNC_IMPL(__imp__sub_831E7BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28180
	ctx.r3.s64 = ctx.r11.s64 + 28180;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7BD8"))) PPC_WEAK_FUNC(sub_831E7BD8);
PPC_FUNC_IMPL(__imp__sub_831E7BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28164
	ctx.r3.s64 = ctx.r11.s64 + 28164;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7BE8"))) PPC_WEAK_FUNC(sub_831E7BE8);
PPC_FUNC_IMPL(__imp__sub_831E7BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-32028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32028, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7C00"))) PPC_WEAK_FUNC(sub_831E7C00);
PPC_FUNC_IMPL(__imp__sub_831E7C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,-16624
	ctx.r11.s64 = ctx.r11.s64 + -16624;
	// stw r11,-31992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7C18"))) PPC_WEAK_FUNC(sub_831E7C18);
PPC_FUNC_IMPL(__imp__sub_831E7C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28244
	ctx.r3.s64 = ctx.r11.s64 + 28244;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7C28"))) PPC_WEAK_FUNC(sub_831E7C28);
PPC_FUNC_IMPL(__imp__sub_831E7C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// addi r3,r11,28228
	ctx.r3.s64 = ctx.r11.s64 + 28228;
	// b 0x82aaba38
	sub_82AABA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7C38"))) PPC_WEAK_FUNC(sub_831E7C38);
PPC_FUNC_IMPL(__imp__sub_831E7C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// b 0x82acb868
	sub_82ACB868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7C48"))) PPC_WEAK_FUNC(sub_831E7C48);
PPC_FUNC_IMPL(__imp__sub_831E7C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7C50"))) PPC_WEAK_FUNC(sub_831E7C50);
PPC_FUNC_IMPL(__imp__sub_831E7C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,-16124
	ctx.r3.s64 = ctx.r11.s64 + -16124;
	// b 0x82af4480
	sub_82AF4480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7C60"))) PPC_WEAK_FUNC(sub_831E7C60);
PPC_FUNC_IMPL(__imp__sub_831E7C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7C70"))) PPC_WEAK_FUNC(sub_831E7C70);
PPC_FUNC_IMPL(__imp__sub_831E7C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7C88"))) PPC_WEAK_FUNC(sub_831E7C88);
PPC_FUNC_IMPL(__imp__sub_831E7C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7CA0"))) PPC_WEAK_FUNC(sub_831E7CA0);
PPC_FUNC_IMPL(__imp__sub_831E7CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7CB8"))) PPC_WEAK_FUNC(sub_831E7CB8);
PPC_FUNC_IMPL(__imp__sub_831E7CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7CD0"))) PPC_WEAK_FUNC(sub_831E7CD0);
PPC_FUNC_IMPL(__imp__sub_831E7CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7CE8"))) PPC_WEAK_FUNC(sub_831E7CE8);
PPC_FUNC_IMPL(__imp__sub_831E7CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,28628
	ctx.r3.s64 = ctx.r11.s64 + 28628;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7CF8"))) PPC_WEAK_FUNC(sub_831E7CF8);
PPC_FUNC_IMPL(__imp__sub_831E7CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7D10"))) PPC_WEAK_FUNC(sub_831E7D10);
PPC_FUNC_IMPL(__imp__sub_831E7D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7D28"))) PPC_WEAK_FUNC(sub_831E7D28);
PPC_FUNC_IMPL(__imp__sub_831E7D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7D40"))) PPC_WEAK_FUNC(sub_831E7D40);
PPC_FUNC_IMPL(__imp__sub_831E7D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7D58"))) PPC_WEAK_FUNC(sub_831E7D58);
PPC_FUNC_IMPL(__imp__sub_831E7D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7D70"))) PPC_WEAK_FUNC(sub_831E7D70);
PPC_FUNC_IMPL(__imp__sub_831E7D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7D88"))) PPC_WEAK_FUNC(sub_831E7D88);
PPC_FUNC_IMPL(__imp__sub_831E7D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7DA0"))) PPC_WEAK_FUNC(sub_831E7DA0);
PPC_FUNC_IMPL(__imp__sub_831E7DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7DB8"))) PPC_WEAK_FUNC(sub_831E7DB8);
PPC_FUNC_IMPL(__imp__sub_831E7DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7DD0"))) PPC_WEAK_FUNC(sub_831E7DD0);
PPC_FUNC_IMPL(__imp__sub_831E7DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7DE8"))) PPC_WEAK_FUNC(sub_831E7DE8);
PPC_FUNC_IMPL(__imp__sub_831E7DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E00"))) PPC_WEAK_FUNC(sub_831E7E00);
PPC_FUNC_IMPL(__imp__sub_831E7E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E18"))) PPC_WEAK_FUNC(sub_831E7E18);
PPC_FUNC_IMPL(__imp__sub_831E7E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E30"))) PPC_WEAK_FUNC(sub_831E7E30);
PPC_FUNC_IMPL(__imp__sub_831E7E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E48"))) PPC_WEAK_FUNC(sub_831E7E48);
PPC_FUNC_IMPL(__imp__sub_831E7E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E60"))) PPC_WEAK_FUNC(sub_831E7E60);
PPC_FUNC_IMPL(__imp__sub_831E7E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E78"))) PPC_WEAK_FUNC(sub_831E7E78);
PPC_FUNC_IMPL(__imp__sub_831E7E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7E90"))) PPC_WEAK_FUNC(sub_831E7E90);
PPC_FUNC_IMPL(__imp__sub_831E7E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7EA8"))) PPC_WEAK_FUNC(sub_831E7EA8);
PPC_FUNC_IMPL(__imp__sub_831E7EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7EC0"))) PPC_WEAK_FUNC(sub_831E7EC0);
PPC_FUNC_IMPL(__imp__sub_831E7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7ED8"))) PPC_WEAK_FUNC(sub_831E7ED8);
PPC_FUNC_IMPL(__imp__sub_831E7ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7EF0"))) PPC_WEAK_FUNC(sub_831E7EF0);
PPC_FUNC_IMPL(__imp__sub_831E7EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7F08"))) PPC_WEAK_FUNC(sub_831E7F08);
PPC_FUNC_IMPL(__imp__sub_831E7F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r3,r31,28096
	ctx.r3.s64 = ctx.r31.s64 + 28096;
	// bl 0x82d172f8
	ctx.lr = 0x831E7F24;
	sub_82D172F8(ctx, base);
	// lwz r3,28096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28096);
	// bl 0x823fd208
	ctx.lr = 0x831E7F2C;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7F40"))) PPC_WEAK_FUNC(sub_831E7F40);
PPC_FUNC_IMPL(__imp__sub_831E7F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,31136
	ctx.r3.s64 = ctx.r11.s64 + 31136;
	// b 0x82b5ff70
	sub_82B5FF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7F50"))) PPC_WEAK_FUNC(sub_831E7F50);
PPC_FUNC_IMPL(__imp__sub_831E7F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7F68"))) PPC_WEAK_FUNC(sub_831E7F68);
PPC_FUNC_IMPL(__imp__sub_831E7F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7F80"))) PPC_WEAK_FUNC(sub_831E7F80);
PPC_FUNC_IMPL(__imp__sub_831E7F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7F98"))) PPC_WEAK_FUNC(sub_831E7F98);
PPC_FUNC_IMPL(__imp__sub_831E7F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7FB0"))) PPC_WEAK_FUNC(sub_831E7FB0);
PPC_FUNC_IMPL(__imp__sub_831E7FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7FC8"))) PPC_WEAK_FUNC(sub_831E7FC8);
PPC_FUNC_IMPL(__imp__sub_831E7FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7FE0"))) PPC_WEAK_FUNC(sub_831E7FE0);
PPC_FUNC_IMPL(__imp__sub_831E7FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7FF8"))) PPC_WEAK_FUNC(sub_831E7FF8);
PPC_FUNC_IMPL(__imp__sub_831E7FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8010"))) PPC_WEAK_FUNC(sub_831E8010);
PPC_FUNC_IMPL(__imp__sub_831E8010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8028"))) PPC_WEAK_FUNC(sub_831E8028);
PPC_FUNC_IMPL(__imp__sub_831E8028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8040"))) PPC_WEAK_FUNC(sub_831E8040);
PPC_FUNC_IMPL(__imp__sub_831E8040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8058"))) PPC_WEAK_FUNC(sub_831E8058);
PPC_FUNC_IMPL(__imp__sub_831E8058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8070"))) PPC_WEAK_FUNC(sub_831E8070);
PPC_FUNC_IMPL(__imp__sub_831E8070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8088"))) PPC_WEAK_FUNC(sub_831E8088);
PPC_FUNC_IMPL(__imp__sub_831E8088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E80A0"))) PPC_WEAK_FUNC(sub_831E80A0);
PPC_FUNC_IMPL(__imp__sub_831E80A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E80B8"))) PPC_WEAK_FUNC(sub_831E80B8);
PPC_FUNC_IMPL(__imp__sub_831E80B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E80D0"))) PPC_WEAK_FUNC(sub_831E80D0);
PPC_FUNC_IMPL(__imp__sub_831E80D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E80E8"))) PPC_WEAK_FUNC(sub_831E80E8);
PPC_FUNC_IMPL(__imp__sub_831E80E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8100"))) PPC_WEAK_FUNC(sub_831E8100);
PPC_FUNC_IMPL(__imp__sub_831E8100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8118"))) PPC_WEAK_FUNC(sub_831E8118);
PPC_FUNC_IMPL(__imp__sub_831E8118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8130"))) PPC_WEAK_FUNC(sub_831E8130);
PPC_FUNC_IMPL(__imp__sub_831E8130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8148"))) PPC_WEAK_FUNC(sub_831E8148);
PPC_FUNC_IMPL(__imp__sub_831E8148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8160"))) PPC_WEAK_FUNC(sub_831E8160);
PPC_FUNC_IMPL(__imp__sub_831E8160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8178"))) PPC_WEAK_FUNC(sub_831E8178);
PPC_FUNC_IMPL(__imp__sub_831E8178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8190"))) PPC_WEAK_FUNC(sub_831E8190);
PPC_FUNC_IMPL(__imp__sub_831E8190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E81A8"))) PPC_WEAK_FUNC(sub_831E81A8);
PPC_FUNC_IMPL(__imp__sub_831E81A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E81C0"))) PPC_WEAK_FUNC(sub_831E81C0);
PPC_FUNC_IMPL(__imp__sub_831E81C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E81D8"))) PPC_WEAK_FUNC(sub_831E81D8);
PPC_FUNC_IMPL(__imp__sub_831E81D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E81F0"))) PPC_WEAK_FUNC(sub_831E81F0);
PPC_FUNC_IMPL(__imp__sub_831E81F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8208"))) PPC_WEAK_FUNC(sub_831E8208);
PPC_FUNC_IMPL(__imp__sub_831E8208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8220"))) PPC_WEAK_FUNC(sub_831E8220);
PPC_FUNC_IMPL(__imp__sub_831E8220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8238"))) PPC_WEAK_FUNC(sub_831E8238);
PPC_FUNC_IMPL(__imp__sub_831E8238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8250"))) PPC_WEAK_FUNC(sub_831E8250);
PPC_FUNC_IMPL(__imp__sub_831E8250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8268"))) PPC_WEAK_FUNC(sub_831E8268);
PPC_FUNC_IMPL(__imp__sub_831E8268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8280"))) PPC_WEAK_FUNC(sub_831E8280);
PPC_FUNC_IMPL(__imp__sub_831E8280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8298"))) PPC_WEAK_FUNC(sub_831E8298);
PPC_FUNC_IMPL(__imp__sub_831E8298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E82B0"))) PPC_WEAK_FUNC(sub_831E82B0);
PPC_FUNC_IMPL(__imp__sub_831E82B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E82C8"))) PPC_WEAK_FUNC(sub_831E82C8);
PPC_FUNC_IMPL(__imp__sub_831E82C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E82E0"))) PPC_WEAK_FUNC(sub_831E82E0);
PPC_FUNC_IMPL(__imp__sub_831E82E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E82F8"))) PPC_WEAK_FUNC(sub_831E82F8);
PPC_FUNC_IMPL(__imp__sub_831E82F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8310"))) PPC_WEAK_FUNC(sub_831E8310);
PPC_FUNC_IMPL(__imp__sub_831E8310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8328"))) PPC_WEAK_FUNC(sub_831E8328);
PPC_FUNC_IMPL(__imp__sub_831E8328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8340"))) PPC_WEAK_FUNC(sub_831E8340);
PPC_FUNC_IMPL(__imp__sub_831E8340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8358"))) PPC_WEAK_FUNC(sub_831E8358);
PPC_FUNC_IMPL(__imp__sub_831E8358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8370"))) PPC_WEAK_FUNC(sub_831E8370);
PPC_FUNC_IMPL(__imp__sub_831E8370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8388"))) PPC_WEAK_FUNC(sub_831E8388);
PPC_FUNC_IMPL(__imp__sub_831E8388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E83A0"))) PPC_WEAK_FUNC(sub_831E83A0);
PPC_FUNC_IMPL(__imp__sub_831E83A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E83B8"))) PPC_WEAK_FUNC(sub_831E83B8);
PPC_FUNC_IMPL(__imp__sub_831E83B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E83D0"))) PPC_WEAK_FUNC(sub_831E83D0);
PPC_FUNC_IMPL(__imp__sub_831E83D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E83E8"))) PPC_WEAK_FUNC(sub_831E83E8);
PPC_FUNC_IMPL(__imp__sub_831E83E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8400"))) PPC_WEAK_FUNC(sub_831E8400);
PPC_FUNC_IMPL(__imp__sub_831E8400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8418"))) PPC_WEAK_FUNC(sub_831E8418);
PPC_FUNC_IMPL(__imp__sub_831E8418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8430"))) PPC_WEAK_FUNC(sub_831E8430);
PPC_FUNC_IMPL(__imp__sub_831E8430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8448"))) PPC_WEAK_FUNC(sub_831E8448);
PPC_FUNC_IMPL(__imp__sub_831E8448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,30916
	ctx.r3.s64 = ctx.r11.s64 + 30916;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E8458"))) PPC_WEAK_FUNC(sub_831E8458);
PPC_FUNC_IMPL(__imp__sub_831E8458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8470"))) PPC_WEAK_FUNC(sub_831E8470);
PPC_FUNC_IMPL(__imp__sub_831E8470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8488"))) PPC_WEAK_FUNC(sub_831E8488);
PPC_FUNC_IMPL(__imp__sub_831E8488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E84A0"))) PPC_WEAK_FUNC(sub_831E84A0);
PPC_FUNC_IMPL(__imp__sub_831E84A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E84B8"))) PPC_WEAK_FUNC(sub_831E84B8);
PPC_FUNC_IMPL(__imp__sub_831E84B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E84D0"))) PPC_WEAK_FUNC(sub_831E84D0);
PPC_FUNC_IMPL(__imp__sub_831E84D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,28960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28960, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E84E8"))) PPC_WEAK_FUNC(sub_831E84E8);
PPC_FUNC_IMPL(__imp__sub_831E84E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8500"))) PPC_WEAK_FUNC(sub_831E8500);
PPC_FUNC_IMPL(__imp__sub_831E8500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8518"))) PPC_WEAK_FUNC(sub_831E8518);
PPC_FUNC_IMPL(__imp__sub_831E8518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8530"))) PPC_WEAK_FUNC(sub_831E8530);
PPC_FUNC_IMPL(__imp__sub_831E8530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8548"))) PPC_WEAK_FUNC(sub_831E8548);
PPC_FUNC_IMPL(__imp__sub_831E8548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8560"))) PPC_WEAK_FUNC(sub_831E8560);
PPC_FUNC_IMPL(__imp__sub_831E8560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8578"))) PPC_WEAK_FUNC(sub_831E8578);
PPC_FUNC_IMPL(__imp__sub_831E8578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8590"))) PPC_WEAK_FUNC(sub_831E8590);
PPC_FUNC_IMPL(__imp__sub_831E8590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E85A8"))) PPC_WEAK_FUNC(sub_831E85A8);
PPC_FUNC_IMPL(__imp__sub_831E85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E85C0"))) PPC_WEAK_FUNC(sub_831E85C0);
PPC_FUNC_IMPL(__imp__sub_831E85C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E85D8"))) PPC_WEAK_FUNC(sub_831E85D8);
PPC_FUNC_IMPL(__imp__sub_831E85D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E85F0"))) PPC_WEAK_FUNC(sub_831E85F0);
PPC_FUNC_IMPL(__imp__sub_831E85F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8608"))) PPC_WEAK_FUNC(sub_831E8608);
PPC_FUNC_IMPL(__imp__sub_831E8608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8620"))) PPC_WEAK_FUNC(sub_831E8620);
PPC_FUNC_IMPL(__imp__sub_831E8620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8638"))) PPC_WEAK_FUNC(sub_831E8638);
PPC_FUNC_IMPL(__imp__sub_831E8638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8650"))) PPC_WEAK_FUNC(sub_831E8650);
PPC_FUNC_IMPL(__imp__sub_831E8650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8668"))) PPC_WEAK_FUNC(sub_831E8668);
PPC_FUNC_IMPL(__imp__sub_831E8668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8680"))) PPC_WEAK_FUNC(sub_831E8680);
PPC_FUNC_IMPL(__imp__sub_831E8680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8698"))) PPC_WEAK_FUNC(sub_831E8698);
PPC_FUNC_IMPL(__imp__sub_831E8698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E86B0"))) PPC_WEAK_FUNC(sub_831E86B0);
PPC_FUNC_IMPL(__imp__sub_831E86B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E86C8"))) PPC_WEAK_FUNC(sub_831E86C8);
PPC_FUNC_IMPL(__imp__sub_831E86C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E86E0"))) PPC_WEAK_FUNC(sub_831E86E0);
PPC_FUNC_IMPL(__imp__sub_831E86E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E86F8"))) PPC_WEAK_FUNC(sub_831E86F8);
PPC_FUNC_IMPL(__imp__sub_831E86F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8710"))) PPC_WEAK_FUNC(sub_831E8710);
PPC_FUNC_IMPL(__imp__sub_831E8710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8728"))) PPC_WEAK_FUNC(sub_831E8728);
PPC_FUNC_IMPL(__imp__sub_831E8728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30956, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8740"))) PPC_WEAK_FUNC(sub_831E8740);
PPC_FUNC_IMPL(__imp__sub_831E8740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8758"))) PPC_WEAK_FUNC(sub_831E8758);
PPC_FUNC_IMPL(__imp__sub_831E8758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8770"))) PPC_WEAK_FUNC(sub_831E8770);
PPC_FUNC_IMPL(__imp__sub_831E8770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8788"))) PPC_WEAK_FUNC(sub_831E8788);
PPC_FUNC_IMPL(__imp__sub_831E8788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E87A0"))) PPC_WEAK_FUNC(sub_831E87A0);
PPC_FUNC_IMPL(__imp__sub_831E87A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E87B8"))) PPC_WEAK_FUNC(sub_831E87B8);
PPC_FUNC_IMPL(__imp__sub_831E87B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E87D0"))) PPC_WEAK_FUNC(sub_831E87D0);
PPC_FUNC_IMPL(__imp__sub_831E87D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E87E8"))) PPC_WEAK_FUNC(sub_831E87E8);
PPC_FUNC_IMPL(__imp__sub_831E87E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8800"))) PPC_WEAK_FUNC(sub_831E8800);
PPC_FUNC_IMPL(__imp__sub_831E8800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8818"))) PPC_WEAK_FUNC(sub_831E8818);
PPC_FUNC_IMPL(__imp__sub_831E8818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8830"))) PPC_WEAK_FUNC(sub_831E8830);
PPC_FUNC_IMPL(__imp__sub_831E8830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8848"))) PPC_WEAK_FUNC(sub_831E8848);
PPC_FUNC_IMPL(__imp__sub_831E8848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8860"))) PPC_WEAK_FUNC(sub_831E8860);
PPC_FUNC_IMPL(__imp__sub_831E8860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,30868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8878"))) PPC_WEAK_FUNC(sub_831E8878);
PPC_FUNC_IMPL(__imp__sub_831E8878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8890"))) PPC_WEAK_FUNC(sub_831E8890);
PPC_FUNC_IMPL(__imp__sub_831E8890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,29584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E88A8"))) PPC_WEAK_FUNC(sub_831E88A8);
PPC_FUNC_IMPL(__imp__sub_831E88A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E88C0"))) PPC_WEAK_FUNC(sub_831E88C0);
PPC_FUNC_IMPL(__imp__sub_831E88C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E88D8"))) PPC_WEAK_FUNC(sub_831E88D8);
PPC_FUNC_IMPL(__imp__sub_831E88D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E88F0"))) PPC_WEAK_FUNC(sub_831E88F0);
PPC_FUNC_IMPL(__imp__sub_831E88F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,32248
	ctx.r3.s64 = ctx.r11.s64 + 32248;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E8900"))) PPC_WEAK_FUNC(sub_831E8900);
PPC_FUNC_IMPL(__imp__sub_831E8900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8918"))) PPC_WEAK_FUNC(sub_831E8918);
PPC_FUNC_IMPL(__imp__sub_831E8918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8930"))) PPC_WEAK_FUNC(sub_831E8930);
PPC_FUNC_IMPL(__imp__sub_831E8930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8948"))) PPC_WEAK_FUNC(sub_831E8948);
PPC_FUNC_IMPL(__imp__sub_831E8948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8960"))) PPC_WEAK_FUNC(sub_831E8960);
PPC_FUNC_IMPL(__imp__sub_831E8960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8978"))) PPC_WEAK_FUNC(sub_831E8978);
PPC_FUNC_IMPL(__imp__sub_831E8978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8990"))) PPC_WEAK_FUNC(sub_831E8990);
PPC_FUNC_IMPL(__imp__sub_831E8990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E89A8"))) PPC_WEAK_FUNC(sub_831E89A8);
PPC_FUNC_IMPL(__imp__sub_831E89A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E89C0"))) PPC_WEAK_FUNC(sub_831E89C0);
PPC_FUNC_IMPL(__imp__sub_831E89C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E89D8"))) PPC_WEAK_FUNC(sub_831E89D8);
PPC_FUNC_IMPL(__imp__sub_831E89D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E89F0"))) PPC_WEAK_FUNC(sub_831E89F0);
PPC_FUNC_IMPL(__imp__sub_831E89F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A08"))) PPC_WEAK_FUNC(sub_831E8A08);
PPC_FUNC_IMPL(__imp__sub_831E8A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A20"))) PPC_WEAK_FUNC(sub_831E8A20);
PPC_FUNC_IMPL(__imp__sub_831E8A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A38"))) PPC_WEAK_FUNC(sub_831E8A38);
PPC_FUNC_IMPL(__imp__sub_831E8A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A50"))) PPC_WEAK_FUNC(sub_831E8A50);
PPC_FUNC_IMPL(__imp__sub_831E8A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A68"))) PPC_WEAK_FUNC(sub_831E8A68);
PPC_FUNC_IMPL(__imp__sub_831E8A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A80"))) PPC_WEAK_FUNC(sub_831E8A80);
PPC_FUNC_IMPL(__imp__sub_831E8A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A98"))) PPC_WEAK_FUNC(sub_831E8A98);
PPC_FUNC_IMPL(__imp__sub_831E8A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8AB0"))) PPC_WEAK_FUNC(sub_831E8AB0);
PPC_FUNC_IMPL(__imp__sub_831E8AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8AC8"))) PPC_WEAK_FUNC(sub_831E8AC8);
PPC_FUNC_IMPL(__imp__sub_831E8AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8AE0"))) PPC_WEAK_FUNC(sub_831E8AE0);
PPC_FUNC_IMPL(__imp__sub_831E8AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8AF8"))) PPC_WEAK_FUNC(sub_831E8AF8);
PPC_FUNC_IMPL(__imp__sub_831E8AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8B10"))) PPC_WEAK_FUNC(sub_831E8B10);
PPC_FUNC_IMPL(__imp__sub_831E8B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8B28"))) PPC_WEAK_FUNC(sub_831E8B28);
PPC_FUNC_IMPL(__imp__sub_831E8B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8B40"))) PPC_WEAK_FUNC(sub_831E8B40);
PPC_FUNC_IMPL(__imp__sub_831E8B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8B58"))) PPC_WEAK_FUNC(sub_831E8B58);
PPC_FUNC_IMPL(__imp__sub_831E8B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8B70"))) PPC_WEAK_FUNC(sub_831E8B70);
PPC_FUNC_IMPL(__imp__sub_831E8B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8B88"))) PPC_WEAK_FUNC(sub_831E8B88);
PPC_FUNC_IMPL(__imp__sub_831E8B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8BA0"))) PPC_WEAK_FUNC(sub_831E8BA0);
PPC_FUNC_IMPL(__imp__sub_831E8BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8BB8"))) PPC_WEAK_FUNC(sub_831E8BB8);
PPC_FUNC_IMPL(__imp__sub_831E8BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8BD0"))) PPC_WEAK_FUNC(sub_831E8BD0);
PPC_FUNC_IMPL(__imp__sub_831E8BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8BE8"))) PPC_WEAK_FUNC(sub_831E8BE8);
PPC_FUNC_IMPL(__imp__sub_831E8BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C00"))) PPC_WEAK_FUNC(sub_831E8C00);
PPC_FUNC_IMPL(__imp__sub_831E8C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C18"))) PPC_WEAK_FUNC(sub_831E8C18);
PPC_FUNC_IMPL(__imp__sub_831E8C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C30"))) PPC_WEAK_FUNC(sub_831E8C30);
PPC_FUNC_IMPL(__imp__sub_831E8C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C48"))) PPC_WEAK_FUNC(sub_831E8C48);
PPC_FUNC_IMPL(__imp__sub_831E8C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C60"))) PPC_WEAK_FUNC(sub_831E8C60);
PPC_FUNC_IMPL(__imp__sub_831E8C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31960, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C78"))) PPC_WEAK_FUNC(sub_831E8C78);
PPC_FUNC_IMPL(__imp__sub_831E8C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C90"))) PPC_WEAK_FUNC(sub_831E8C90);
PPC_FUNC_IMPL(__imp__sub_831E8C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8CA8"))) PPC_WEAK_FUNC(sub_831E8CA8);
PPC_FUNC_IMPL(__imp__sub_831E8CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8CC0"))) PPC_WEAK_FUNC(sub_831E8CC0);
PPC_FUNC_IMPL(__imp__sub_831E8CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8CD8"))) PPC_WEAK_FUNC(sub_831E8CD8);
PPC_FUNC_IMPL(__imp__sub_831E8CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8CF0"))) PPC_WEAK_FUNC(sub_831E8CF0);
PPC_FUNC_IMPL(__imp__sub_831E8CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D08"))) PPC_WEAK_FUNC(sub_831E8D08);
PPC_FUNC_IMPL(__imp__sub_831E8D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D20"))) PPC_WEAK_FUNC(sub_831E8D20);
PPC_FUNC_IMPL(__imp__sub_831E8D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D38"))) PPC_WEAK_FUNC(sub_831E8D38);
PPC_FUNC_IMPL(__imp__sub_831E8D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D50"))) PPC_WEAK_FUNC(sub_831E8D50);
PPC_FUNC_IMPL(__imp__sub_831E8D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D68"))) PPC_WEAK_FUNC(sub_831E8D68);
PPC_FUNC_IMPL(__imp__sub_831E8D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,31456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D80"))) PPC_WEAK_FUNC(sub_831E8D80);
PPC_FUNC_IMPL(__imp__sub_831E8D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8D98"))) PPC_WEAK_FUNC(sub_831E8D98);
PPC_FUNC_IMPL(__imp__sub_831E8D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8DB0"))) PPC_WEAK_FUNC(sub_831E8DB0);
PPC_FUNC_IMPL(__imp__sub_831E8DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8DC8"))) PPC_WEAK_FUNC(sub_831E8DC8);
PPC_FUNC_IMPL(__imp__sub_831E8DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,25852
	ctx.r11.s64 = ctx.r11.s64 + 25852;
	// stw r11,32632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8DE0"))) PPC_WEAK_FUNC(sub_831E8DE0);
PPC_FUNC_IMPL(__imp__sub_831E8DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8DE8"))) PPC_WEAK_FUNC(sub_831E8DE8);
PPC_FUNC_IMPL(__imp__sub_831E8DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8E00"))) PPC_WEAK_FUNC(sub_831E8E00);
PPC_FUNC_IMPL(__imp__sub_831E8E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8E18"))) PPC_WEAK_FUNC(sub_831E8E18);
PPC_FUNC_IMPL(__imp__sub_831E8E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-31184
	ctx.r3.s64 = ctx.r11.s64 + -31184;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E8E28"))) PPC_WEAK_FUNC(sub_831E8E28);
PPC_FUNC_IMPL(__imp__sub_831E8E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8E40"))) PPC_WEAK_FUNC(sub_831E8E40);
PPC_FUNC_IMPL(__imp__sub_831E8E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8E58"))) PPC_WEAK_FUNC(sub_831E8E58);
PPC_FUNC_IMPL(__imp__sub_831E8E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8E70"))) PPC_WEAK_FUNC(sub_831E8E70);
PPC_FUNC_IMPL(__imp__sub_831E8E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31956, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8E88"))) PPC_WEAK_FUNC(sub_831E8E88);
PPC_FUNC_IMPL(__imp__sub_831E8E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8EA0"))) PPC_WEAK_FUNC(sub_831E8EA0);
PPC_FUNC_IMPL(__imp__sub_831E8EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8EB8"))) PPC_WEAK_FUNC(sub_831E8EB8);
PPC_FUNC_IMPL(__imp__sub_831E8EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8ED0"))) PPC_WEAK_FUNC(sub_831E8ED0);
PPC_FUNC_IMPL(__imp__sub_831E8ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8EE8"))) PPC_WEAK_FUNC(sub_831E8EE8);
PPC_FUNC_IMPL(__imp__sub_831E8EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F00"))) PPC_WEAK_FUNC(sub_831E8F00);
PPC_FUNC_IMPL(__imp__sub_831E8F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F18"))) PPC_WEAK_FUNC(sub_831E8F18);
PPC_FUNC_IMPL(__imp__sub_831E8F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F30"))) PPC_WEAK_FUNC(sub_831E8F30);
PPC_FUNC_IMPL(__imp__sub_831E8F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F48"))) PPC_WEAK_FUNC(sub_831E8F48);
PPC_FUNC_IMPL(__imp__sub_831E8F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F60"))) PPC_WEAK_FUNC(sub_831E8F60);
PPC_FUNC_IMPL(__imp__sub_831E8F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F78"))) PPC_WEAK_FUNC(sub_831E8F78);
PPC_FUNC_IMPL(__imp__sub_831E8F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8F90"))) PPC_WEAK_FUNC(sub_831E8F90);
PPC_FUNC_IMPL(__imp__sub_831E8F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8FA8"))) PPC_WEAK_FUNC(sub_831E8FA8);
PPC_FUNC_IMPL(__imp__sub_831E8FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8FC0"))) PPC_WEAK_FUNC(sub_831E8FC0);
PPC_FUNC_IMPL(__imp__sub_831E8FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8FD8"))) PPC_WEAK_FUNC(sub_831E8FD8);
PPC_FUNC_IMPL(__imp__sub_831E8FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8FF0"))) PPC_WEAK_FUNC(sub_831E8FF0);
PPC_FUNC_IMPL(__imp__sub_831E8FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9008"))) PPC_WEAK_FUNC(sub_831E9008);
PPC_FUNC_IMPL(__imp__sub_831E9008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9020"))) PPC_WEAK_FUNC(sub_831E9020);
PPC_FUNC_IMPL(__imp__sub_831E9020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9038"))) PPC_WEAK_FUNC(sub_831E9038);
PPC_FUNC_IMPL(__imp__sub_831E9038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9050"))) PPC_WEAK_FUNC(sub_831E9050);
PPC_FUNC_IMPL(__imp__sub_831E9050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9068"))) PPC_WEAK_FUNC(sub_831E9068);
PPC_FUNC_IMPL(__imp__sub_831E9068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9080"))) PPC_WEAK_FUNC(sub_831E9080);
PPC_FUNC_IMPL(__imp__sub_831E9080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9098"))) PPC_WEAK_FUNC(sub_831E9098);
PPC_FUNC_IMPL(__imp__sub_831E9098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E90B0"))) PPC_WEAK_FUNC(sub_831E90B0);
PPC_FUNC_IMPL(__imp__sub_831E90B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E90C8"))) PPC_WEAK_FUNC(sub_831E90C8);
PPC_FUNC_IMPL(__imp__sub_831E90C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E90E0"))) PPC_WEAK_FUNC(sub_831E90E0);
PPC_FUNC_IMPL(__imp__sub_831E90E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E90F8"))) PPC_WEAK_FUNC(sub_831E90F8);
PPC_FUNC_IMPL(__imp__sub_831E90F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9110"))) PPC_WEAK_FUNC(sub_831E9110);
PPC_FUNC_IMPL(__imp__sub_831E9110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9128"))) PPC_WEAK_FUNC(sub_831E9128);
PPC_FUNC_IMPL(__imp__sub_831E9128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9140"))) PPC_WEAK_FUNC(sub_831E9140);
PPC_FUNC_IMPL(__imp__sub_831E9140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9158"))) PPC_WEAK_FUNC(sub_831E9158);
PPC_FUNC_IMPL(__imp__sub_831E9158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9170"))) PPC_WEAK_FUNC(sub_831E9170);
PPC_FUNC_IMPL(__imp__sub_831E9170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9188"))) PPC_WEAK_FUNC(sub_831E9188);
PPC_FUNC_IMPL(__imp__sub_831E9188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E91A0"))) PPC_WEAK_FUNC(sub_831E91A0);
PPC_FUNC_IMPL(__imp__sub_831E91A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E91B8"))) PPC_WEAK_FUNC(sub_831E91B8);
PPC_FUNC_IMPL(__imp__sub_831E91B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E91D0"))) PPC_WEAK_FUNC(sub_831E91D0);
PPC_FUNC_IMPL(__imp__sub_831E91D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E91E8"))) PPC_WEAK_FUNC(sub_831E91E8);
PPC_FUNC_IMPL(__imp__sub_831E91E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9200"))) PPC_WEAK_FUNC(sub_831E9200);
PPC_FUNC_IMPL(__imp__sub_831E9200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9218"))) PPC_WEAK_FUNC(sub_831E9218);
PPC_FUNC_IMPL(__imp__sub_831E9218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9230"))) PPC_WEAK_FUNC(sub_831E9230);
PPC_FUNC_IMPL(__imp__sub_831E9230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-30976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9248"))) PPC_WEAK_FUNC(sub_831E9248);
PPC_FUNC_IMPL(__imp__sub_831E9248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9260"))) PPC_WEAK_FUNC(sub_831E9260);
PPC_FUNC_IMPL(__imp__sub_831E9260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32028, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9278"))) PPC_WEAK_FUNC(sub_831E9278);
PPC_FUNC_IMPL(__imp__sub_831E9278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31012, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9290"))) PPC_WEAK_FUNC(sub_831E9290);
PPC_FUNC_IMPL(__imp__sub_831E9290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E92A8"))) PPC_WEAK_FUNC(sub_831E92A8);
PPC_FUNC_IMPL(__imp__sub_831E92A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E92C0"))) PPC_WEAK_FUNC(sub_831E92C0);
PPC_FUNC_IMPL(__imp__sub_831E92C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E92D8"))) PPC_WEAK_FUNC(sub_831E92D8);
PPC_FUNC_IMPL(__imp__sub_831E92D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E92F0"))) PPC_WEAK_FUNC(sub_831E92F0);
PPC_FUNC_IMPL(__imp__sub_831E92F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9308"))) PPC_WEAK_FUNC(sub_831E9308);
PPC_FUNC_IMPL(__imp__sub_831E9308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9320"))) PPC_WEAK_FUNC(sub_831E9320);
PPC_FUNC_IMPL(__imp__sub_831E9320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9338"))) PPC_WEAK_FUNC(sub_831E9338);
PPC_FUNC_IMPL(__imp__sub_831E9338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9350"))) PPC_WEAK_FUNC(sub_831E9350);
PPC_FUNC_IMPL(__imp__sub_831E9350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9368"))) PPC_WEAK_FUNC(sub_831E9368);
PPC_FUNC_IMPL(__imp__sub_831E9368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,32764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9380"))) PPC_WEAK_FUNC(sub_831E9380);
PPC_FUNC_IMPL(__imp__sub_831E9380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9398"))) PPC_WEAK_FUNC(sub_831E9398);
PPC_FUNC_IMPL(__imp__sub_831E9398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E93B0"))) PPC_WEAK_FUNC(sub_831E93B0);
PPC_FUNC_IMPL(__imp__sub_831E93B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E93C8"))) PPC_WEAK_FUNC(sub_831E93C8);
PPC_FUNC_IMPL(__imp__sub_831E93C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E93E0"))) PPC_WEAK_FUNC(sub_831E93E0);
PPC_FUNC_IMPL(__imp__sub_831E93E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E93F8"))) PPC_WEAK_FUNC(sub_831E93F8);
PPC_FUNC_IMPL(__imp__sub_831E93F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9410"))) PPC_WEAK_FUNC(sub_831E9410);
PPC_FUNC_IMPL(__imp__sub_831E9410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9428"))) PPC_WEAK_FUNC(sub_831E9428);
PPC_FUNC_IMPL(__imp__sub_831E9428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9440"))) PPC_WEAK_FUNC(sub_831E9440);
PPC_FUNC_IMPL(__imp__sub_831E9440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31036, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9458"))) PPC_WEAK_FUNC(sub_831E9458);
PPC_FUNC_IMPL(__imp__sub_831E9458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9470"))) PPC_WEAK_FUNC(sub_831E9470);
PPC_FUNC_IMPL(__imp__sub_831E9470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9488"))) PPC_WEAK_FUNC(sub_831E9488);
PPC_FUNC_IMPL(__imp__sub_831E9488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E94A0"))) PPC_WEAK_FUNC(sub_831E94A0);
PPC_FUNC_IMPL(__imp__sub_831E94A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E94B8"))) PPC_WEAK_FUNC(sub_831E94B8);
PPC_FUNC_IMPL(__imp__sub_831E94B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E94D0"))) PPC_WEAK_FUNC(sub_831E94D0);
PPC_FUNC_IMPL(__imp__sub_831E94D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E94E8"))) PPC_WEAK_FUNC(sub_831E94E8);
PPC_FUNC_IMPL(__imp__sub_831E94E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-31352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9500"))) PPC_WEAK_FUNC(sub_831E9500);
PPC_FUNC_IMPL(__imp__sub_831E9500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9518"))) PPC_WEAK_FUNC(sub_831E9518);
PPC_FUNC_IMPL(__imp__sub_831E9518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9530"))) PPC_WEAK_FUNC(sub_831E9530);
PPC_FUNC_IMPL(__imp__sub_831E9530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-32292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9548"))) PPC_WEAK_FUNC(sub_831E9548);
PPC_FUNC_IMPL(__imp__sub_831E9548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9550"))) PPC_WEAK_FUNC(sub_831E9550);
PPC_FUNC_IMPL(__imp__sub_831E9550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9558"))) PPC_WEAK_FUNC(sub_831E9558);
PPC_FUNC_IMPL(__imp__sub_831E9558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9560"))) PPC_WEAK_FUNC(sub_831E9560);
PPC_FUNC_IMPL(__imp__sub_831E9560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9568"))) PPC_WEAK_FUNC(sub_831E9568);
PPC_FUNC_IMPL(__imp__sub_831E9568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30540
	ctx.r3.s64 = ctx.r11.s64 + -30540;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9578"))) PPC_WEAK_FUNC(sub_831E9578);
PPC_FUNC_IMPL(__imp__sub_831E9578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9580"))) PPC_WEAK_FUNC(sub_831E9580);
PPC_FUNC_IMPL(__imp__sub_831E9580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9590"))) PPC_WEAK_FUNC(sub_831E9590);
PPC_FUNC_IMPL(__imp__sub_831E9590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9598"))) PPC_WEAK_FUNC(sub_831E9598);
PPC_FUNC_IMPL(__imp__sub_831E9598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E95A8"))) PPC_WEAK_FUNC(sub_831E95A8);
PPC_FUNC_IMPL(__imp__sub_831E95A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r10,-30120
	ctx.r3.s64 = ctx.r10.s64 + -30120;
	// addi r11,r11,10304
	ctx.r11.s64 = ctx.r11.s64 + 10304;
	// stw r11,-30120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30120, ctx.r11.u32);
	// b 0x825a92d8
	sub_825A92D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E95C0"))) PPC_WEAK_FUNC(sub_831E95C0);
PPC_FUNC_IMPL(__imp__sub_831E95C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r10,-30096
	ctx.r3.s64 = ctx.r10.s64 + -30096;
	// addi r11,r11,28476
	ctx.r11.s64 = ctx.r11.s64 + 28476;
	// stw r11,-30096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30096, ctx.r11.u32);
	// b 0x82b7da48
	sub_82B7DA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E95D8"))) PPC_WEAK_FUNC(sub_831E95D8);
PPC_FUNC_IMPL(__imp__sub_831E95D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r10,-30072
	ctx.r3.s64 = ctx.r10.s64 + -30072;
	// addi r11,r11,10304
	ctx.r11.s64 = ctx.r11.s64 + 10304;
	// stw r11,-30072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30072, ctx.r11.u32);
	// b 0x825a92d8
	sub_825A92D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E95F0"))) PPC_WEAK_FUNC(sub_831E95F0);
PPC_FUNC_IMPL(__imp__sub_831E95F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-29608
	ctx.r3.s64 = ctx.r11.s64 + -29608;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9600"))) PPC_WEAK_FUNC(sub_831E9600);
PPC_FUNC_IMPL(__imp__sub_831E9600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-29760
	ctx.r3.s64 = ctx.r11.s64 + -29760;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9610"))) PPC_WEAK_FUNC(sub_831E9610);
PPC_FUNC_IMPL(__imp__sub_831E9610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-29648
	ctx.r3.s64 = ctx.r11.s64 + -29648;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9620"))) PPC_WEAK_FUNC(sub_831E9620);
PPC_FUNC_IMPL(__imp__sub_831E9620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9628"))) PPC_WEAK_FUNC(sub_831E9628);
PPC_FUNC_IMPL(__imp__sub_831E9628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9630"))) PPC_WEAK_FUNC(sub_831E9630);
PPC_FUNC_IMPL(__imp__sub_831E9630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,-29508
	ctx.r3.s64 = ctx.r11.s64 + -29508;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9640"))) PPC_WEAK_FUNC(sub_831E9640);
PPC_FUNC_IMPL(__imp__sub_831E9640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9658"))) PPC_WEAK_FUNC(sub_831E9658);
PPC_FUNC_IMPL(__imp__sub_831E9658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9670"))) PPC_WEAK_FUNC(sub_831E9670);
PPC_FUNC_IMPL(__imp__sub_831E9670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9688"))) PPC_WEAK_FUNC(sub_831E9688);
PPC_FUNC_IMPL(__imp__sub_831E9688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E96A0"))) PPC_WEAK_FUNC(sub_831E96A0);
PPC_FUNC_IMPL(__imp__sub_831E96A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E96B8"))) PPC_WEAK_FUNC(sub_831E96B8);
PPC_FUNC_IMPL(__imp__sub_831E96B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E96D0"))) PPC_WEAK_FUNC(sub_831E96D0);
PPC_FUNC_IMPL(__imp__sub_831E96D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E96E8"))) PPC_WEAK_FUNC(sub_831E96E8);
PPC_FUNC_IMPL(__imp__sub_831E96E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9700"))) PPC_WEAK_FUNC(sub_831E9700);
PPC_FUNC_IMPL(__imp__sub_831E9700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9718"))) PPC_WEAK_FUNC(sub_831E9718);
PPC_FUNC_IMPL(__imp__sub_831E9718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9730"))) PPC_WEAK_FUNC(sub_831E9730);
PPC_FUNC_IMPL(__imp__sub_831E9730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9748"))) PPC_WEAK_FUNC(sub_831E9748);
PPC_FUNC_IMPL(__imp__sub_831E9748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9760"))) PPC_WEAK_FUNC(sub_831E9760);
PPC_FUNC_IMPL(__imp__sub_831E9760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9778"))) PPC_WEAK_FUNC(sub_831E9778);
PPC_FUNC_IMPL(__imp__sub_831E9778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9790"))) PPC_WEAK_FUNC(sub_831E9790);
PPC_FUNC_IMPL(__imp__sub_831E9790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E97A8"))) PPC_WEAK_FUNC(sub_831E97A8);
PPC_FUNC_IMPL(__imp__sub_831E97A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E97C0"))) PPC_WEAK_FUNC(sub_831E97C0);
PPC_FUNC_IMPL(__imp__sub_831E97C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E97D8"))) PPC_WEAK_FUNC(sub_831E97D8);
PPC_FUNC_IMPL(__imp__sub_831E97D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E97F0"))) PPC_WEAK_FUNC(sub_831E97F0);
PPC_FUNC_IMPL(__imp__sub_831E97F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9808"))) PPC_WEAK_FUNC(sub_831E9808);
PPC_FUNC_IMPL(__imp__sub_831E9808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9820"))) PPC_WEAK_FUNC(sub_831E9820);
PPC_FUNC_IMPL(__imp__sub_831E9820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,18812
	ctx.r11.s64 = ctx.r11.s64 + 18812;
	// stw r11,-29468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9838"))) PPC_WEAK_FUNC(sub_831E9838);
PPC_FUNC_IMPL(__imp__sub_831E9838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// addi r3,r31,-29684
	ctx.r3.s64 = ctx.r31.s64 + -29684;
	// bl 0x82b9dea8
	ctx.lr = 0x831E9854;
	sub_82B9DEA8(ctx, base);
	// lwz r3,-29684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29684);
	// bl 0x823fd208
	ctx.lr = 0x831E985C;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9870"))) PPC_WEAK_FUNC(sub_831E9870);
PPC_FUNC_IMPL(__imp__sub_831E9870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// addi r3,r31,-29620
	ctx.r3.s64 = ctx.r31.s64 + -29620;
	// bl 0x82b9dea8
	ctx.lr = 0x831E988C;
	sub_82B9DEA8(ctx, base);
	// lwz r3,-29620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29620);
	// bl 0x823fd208
	ctx.lr = 0x831E9894;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E98A8"))) PPC_WEAK_FUNC(sub_831E98A8);
PPC_FUNC_IMPL(__imp__sub_831E98A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// addi r3,r31,-29480
	ctx.r3.s64 = ctx.r31.s64 + -29480;
	// bl 0x82b9dea8
	ctx.lr = 0x831E98C4;
	sub_82B9DEA8(ctx, base);
	// lwz r3,-29480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29480);
	// bl 0x823fd208
	ctx.lr = 0x831E98CC;
	sub_823FD208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E98E0"))) PPC_WEAK_FUNC(sub_831E98E0);
PPC_FUNC_IMPL(__imp__sub_831E98E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E98F0"))) PPC_WEAK_FUNC(sub_831E98F0);
PPC_FUNC_IMPL(__imp__sub_831E98F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E98F8"))) PPC_WEAK_FUNC(sub_831E98F8);
PPC_FUNC_IMPL(__imp__sub_831E98F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9900"))) PPC_WEAK_FUNC(sub_831E9900);
PPC_FUNC_IMPL(__imp__sub_831E9900) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-29152
	ctx.r11.s64 = ctx.r11.s64 + -29152;
	// addi r9,r9,-30124
	ctx.r9.s64 = ctx.r9.s64 + -30124;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831E9920:
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// bdnz 0x831e9920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831E9920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9940"))) PPC_WEAK_FUNC(sub_831E9940);
PPC_FUNC_IMPL(__imp__sub_831E9940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9948"))) PPC_WEAK_FUNC(sub_831E9948);
PPC_FUNC_IMPL(__imp__sub_831E9948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-28708
	ctx.r3.s64 = ctx.r11.s64 + -28708;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9958"))) PPC_WEAK_FUNC(sub_831E9958);
PPC_FUNC_IMPL(__imp__sub_831E9958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r30,20
	ctx.r30.s64 = 20;
	// addi r11,r11,-28096
	ctx.r11.s64 = ctx.r11.s64 + -28096;
	// addi r31,r11,588
	ctx.r31.s64 = ctx.r11.s64 + 588;
loc_831E997C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x831E9990;
	sub_82411478(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831e997c
	if (!ctx.cr0.lt) goto loc_831E997C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E99B0"))) PPC_WEAK_FUNC(sub_831E99B0);
PPC_FUNC_IMPL(__imp__sub_831E99B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-28656
	ctx.r11.s64 = ctx.r11.s64 + -28656;
	// addi r31,r11,560
	ctx.r31.s64 = ctx.r11.s64 + 560;
loc_831E99D4:
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1140
	ctx.lr = 0x831E99E0;
	sub_82BB1140(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82411478
	ctx.lr = 0x831E99F0;
	sub_82411478(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831e99d4
	if (!ctx.cr0.lt) goto loc_831E99D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9A10"))) PPC_WEAK_FUNC(sub_831E9A10);
PPC_FUNC_IMPL(__imp__sub_831E9A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9A20"))) PPC_WEAK_FUNC(sub_831E9A20);
PPC_FUNC_IMPL(__imp__sub_831E9A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27400
	ctx.r3.s64 = ctx.r11.s64 + -27400;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9A30"))) PPC_WEAK_FUNC(sub_831E9A30);
PPC_FUNC_IMPL(__imp__sub_831E9A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27404
	ctx.r3.s64 = ctx.r11.s64 + -27404;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9A40"))) PPC_WEAK_FUNC(sub_831E9A40);
PPC_FUNC_IMPL(__imp__sub_831E9A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-27252
	ctx.r11.s64 = ctx.r11.s64 + -27252;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_831E9A64:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7330
	ctx.lr = 0x831E9A70;
	sub_82DE7330(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831e9a64
	if (!ctx.cr0.lt) goto loc_831E9A64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9A90"))) PPC_WEAK_FUNC(sub_831E9A90);
PPC_FUNC_IMPL(__imp__sub_831E9A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9AA0"))) PPC_WEAK_FUNC(sub_831E9AA0);
PPC_FUNC_IMPL(__imp__sub_831E9AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27328
	ctx.r31.s64 = ctx.r11.s64 + -27328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d9c2d8
	ctx.lr = 0x831E9ACC;
	sub_82D9C2D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9AD4;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9AE8"))) PPC_WEAK_FUNC(sub_831E9AE8);
PPC_FUNC_IMPL(__imp__sub_831E9AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// b 0x82bcbf28
	sub_82BCBF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9AF8"))) PPC_WEAK_FUNC(sub_831E9AF8);
PPC_FUNC_IMPL(__imp__sub_831E9AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// b 0x82bcdc58
	sub_82BCDC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9B08"))) PPC_WEAK_FUNC(sub_831E9B08);
PPC_FUNC_IMPL(__imp__sub_831E9B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27344
	ctx.r31.s64 = ctx.r11.s64 + -27344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x828dc2c8
	ctx.lr = 0x831E9B34;
	sub_828DC2C8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9B3C;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9B50"))) PPC_WEAK_FUNC(sub_831E9B50);
PPC_FUNC_IMPL(__imp__sub_831E9B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27456
	ctx.r31.s64 = ctx.r11.s64 + -27456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82bcffd0
	ctx.lr = 0x831E9B7C;
	sub_82BCFFD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9B84;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9B98"))) PPC_WEAK_FUNC(sub_831E9B98);
PPC_FUNC_IMPL(__imp__sub_831E9B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-27120
	ctx.r3.s64 = ctx.r11.s64 + -27120;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9BA8"))) PPC_WEAK_FUNC(sub_831E9BA8);
PPC_FUNC_IMPL(__imp__sub_831E9BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27100
	ctx.r31.s64 = ctx.r11.s64 + -27100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82b9f9a0
	ctx.lr = 0x831E9BD4;
	sub_82B9F9A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9BDC;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9BF0"))) PPC_WEAK_FUNC(sub_831E9BF0);
PPC_FUNC_IMPL(__imp__sub_831E9BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27116
	ctx.r31.s64 = ctx.r11.s64 + -27116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82b9f9a0
	ctx.lr = 0x831E9C1C;
	sub_82B9F9A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9C24;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9C38"))) PPC_WEAK_FUNC(sub_831E9C38);
PPC_FUNC_IMPL(__imp__sub_831E9C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27152
	ctx.r31.s64 = ctx.r11.s64 + -27152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82b9f9a0
	ctx.lr = 0x831E9C64;
	sub_82B9F9A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9C6C;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9C80"))) PPC_WEAK_FUNC(sub_831E9C80);
PPC_FUNC_IMPL(__imp__sub_831E9C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-26976
	ctx.r3.s64 = ctx.r11.s64 + -26976;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9C90"))) PPC_WEAK_FUNC(sub_831E9C90);
PPC_FUNC_IMPL(__imp__sub_831E9C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9C98"))) PPC_WEAK_FUNC(sub_831E9C98);
PPC_FUNC_IMPL(__imp__sub_831E9C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9CA8"))) PPC_WEAK_FUNC(sub_831E9CA8);
PPC_FUNC_IMPL(__imp__sub_831E9CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r11,r11,-26904
	ctx.r11.s64 = ctx.r11.s64 + -26904;
	// addi r31,r11,280
	ctx.r31.s64 = ctx.r11.s64 + 280;
loc_831E9CCC:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411478
	ctx.lr = 0x831E9CE0;
	sub_82411478(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831e9ccc
	if (!ctx.cr0.lt) goto loc_831E9CCC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9D00"))) PPC_WEAK_FUNC(sub_831E9D00);
PPC_FUNC_IMPL(__imp__sub_831E9D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-26972
	ctx.r3.s64 = ctx.r11.s64 + -26972;
	// b 0x82bf1b80
	sub_82BF1B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9D10"))) PPC_WEAK_FUNC(sub_831E9D10);
PPC_FUNC_IMPL(__imp__sub_831E9D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9D18"))) PPC_WEAK_FUNC(sub_831E9D18);
PPC_FUNC_IMPL(__imp__sub_831E9D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-26504
	ctx.r3.s64 = ctx.r11.s64 + -26504;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9D28"))) PPC_WEAK_FUNC(sub_831E9D28);
PPC_FUNC_IMPL(__imp__sub_831E9D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9D30"))) PPC_WEAK_FUNC(sub_831E9D30);
PPC_FUNC_IMPL(__imp__sub_831E9D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9D38"))) PPC_WEAK_FUNC(sub_831E9D38);
PPC_FUNC_IMPL(__imp__sub_831E9D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9D40"))) PPC_WEAK_FUNC(sub_831E9D40);
PPC_FUNC_IMPL(__imp__sub_831E9D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,-26280
	ctx.r3.s64 = ctx.r11.s64 + -26280;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9D50"))) PPC_WEAK_FUNC(sub_831E9D50);
PPC_FUNC_IMPL(__imp__sub_831E9D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10788
	ctx.r3.s64 = ctx.r11.s64 + 10788;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9D68"))) PPC_WEAK_FUNC(sub_831E9D68);
PPC_FUNC_IMPL(__imp__sub_831E9D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,-22004
	ctx.r31.s64 = ctx.r11.s64 + -22004;
	// lwz r3,-22004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831e9d90
	if (ctx.cr6.eq) goto loc_831E9D90;
	// bl 0x823fd208
	ctx.lr = 0x831E9D90;
	sub_823FD208(ctx, base);
loc_831E9D90:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9DC0"))) PPC_WEAK_FUNC(sub_831E9DC0);
PPC_FUNC_IMPL(__imp__sub_831E9DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,10848
	ctx.r3.s64 = ctx.r11.s64 + 10848;
	// b 0x82c04890
	sub_82C04890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9DD0"))) PPC_WEAK_FUNC(sub_831E9DD0);
PPC_FUNC_IMPL(__imp__sub_831E9DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r10,11044
	ctx.r3.s64 = ctx.r10.s64 + 11044;
	// addi r11,r11,11424
	ctx.r11.s64 = ctx.r11.s64 + 11424;
	// stw r11,11044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11044, ctx.r11.u32);
	// b 0x82c04e50
	sub_82C04E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9DE8"))) PPC_WEAK_FUNC(sub_831E9DE8);
PPC_FUNC_IMPL(__imp__sub_831E9DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,11080
	ctx.r3.s64 = ctx.r11.s64 + 11080;
	// b 0x82c06038
	sub_82C06038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9DF8"))) PPC_WEAK_FUNC(sub_831E9DF8);
PPC_FUNC_IMPL(__imp__sub_831E9DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,11788
	ctx.r3.s64 = ctx.r11.s64 + 11788;
	// b 0x82c06d60
	sub_82C06D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9E08"))) PPC_WEAK_FUNC(sub_831E9E08);
PPC_FUNC_IMPL(__imp__sub_831E9E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,-3860
	ctx.r3.s64 = ctx.r11.s64 + -3860;
	// b 0x82c09fc0
	sub_82C09FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9E18"))) PPC_WEAK_FUNC(sub_831E9E18);
PPC_FUNC_IMPL(__imp__sub_831E9E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9E28"))) PPC_WEAK_FUNC(sub_831E9E28);
PPC_FUNC_IMPL(__imp__sub_831E9E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12120
	ctx.r3.s64 = ctx.r11.s64 + 12120;
	// bl 0x82c0e050
	ctx.lr = 0x831E9E40;
	sub_82C0E050(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9E50"))) PPC_WEAK_FUNC(sub_831E9E50);
PPC_FUNC_IMPL(__imp__sub_831E9E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12320
	ctx.r3.s64 = ctx.r11.s64 + 12320;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9E60"))) PPC_WEAK_FUNC(sub_831E9E60);
PPC_FUNC_IMPL(__imp__sub_831E9E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12180
	ctx.r3.s64 = ctx.r11.s64 + 12180;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411478
	sub_82411478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9E78"))) PPC_WEAK_FUNC(sub_831E9E78);
PPC_FUNC_IMPL(__imp__sub_831E9E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,12304
	ctx.r31.s64 = ctx.r11.s64 + 12304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c84f20
	ctx.lr = 0x831E9EA4;
	sub_82C84F20(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823fd208
	ctx.lr = 0x831E9EAC;
	sub_823FD208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9EC0"))) PPC_WEAK_FUNC(sub_831E9EC0);
PPC_FUNC_IMPL(__imp__sub_831E9EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12448
	ctx.r3.s64 = ctx.r11.s64 + 12448;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9ED0"))) PPC_WEAK_FUNC(sub_831E9ED0);
PPC_FUNC_IMPL(__imp__sub_831E9ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9ED8"))) PPC_WEAK_FUNC(sub_831E9ED8);
PPC_FUNC_IMPL(__imp__sub_831E9ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12344
	ctx.r3.s64 = ctx.r11.s64 + 12344;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9EE8"))) PPC_WEAK_FUNC(sub_831E9EE8);
PPC_FUNC_IMPL(__imp__sub_831E9EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9EF8"))) PPC_WEAK_FUNC(sub_831E9EF8);
PPC_FUNC_IMPL(__imp__sub_831E9EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12484
	ctx.r3.s64 = ctx.r11.s64 + 12484;
	// b 0x82c21160
	sub_82C21160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9F08"))) PPC_WEAK_FUNC(sub_831E9F08);
PPC_FUNC_IMPL(__imp__sub_831E9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9F18"))) PPC_WEAK_FUNC(sub_831E9F18);
PPC_FUNC_IMPL(__imp__sub_831E9F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9F20"))) PPC_WEAK_FUNC(sub_831E9F20);
PPC_FUNC_IMPL(__imp__sub_831E9F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9F30"))) PPC_WEAK_FUNC(sub_831E9F30);
PPC_FUNC_IMPL(__imp__sub_831E9F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,12980
	ctx.r3.s64 = ctx.r11.s64 + 12980;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9F40"))) PPC_WEAK_FUNC(sub_831E9F40);
PPC_FUNC_IMPL(__imp__sub_831E9F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,12876
	ctx.r31.s64 = ctx.r11.s64 + 12876;
	// lwz r3,12876(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831e9f68
	if (ctx.cr6.eq) goto loc_831E9F68;
	// bl 0x82a6d828
	ctx.lr = 0x831E9F68;
	sub_82A6D828(ctx, base);
loc_831E9F68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9F98"))) PPC_WEAK_FUNC(sub_831E9F98);
PPC_FUNC_IMPL(__imp__sub_831E9F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13044
	ctx.r3.s64 = ctx.r11.s64 + 13044;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9FA8"))) PPC_WEAK_FUNC(sub_831E9FA8);
PPC_FUNC_IMPL(__imp__sub_831E9FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13204
	ctx.r3.s64 = ctx.r11.s64 + 13204;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9FB8"))) PPC_WEAK_FUNC(sub_831E9FB8);
PPC_FUNC_IMPL(__imp__sub_831E9FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9FC0"))) PPC_WEAK_FUNC(sub_831E9FC0);
PPC_FUNC_IMPL(__imp__sub_831E9FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13232
	ctx.r3.s64 = ctx.r11.s64 + 13232;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9FD0"))) PPC_WEAK_FUNC(sub_831E9FD0);
PPC_FUNC_IMPL(__imp__sub_831E9FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13316
	ctx.r3.s64 = ctx.r11.s64 + 13316;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9FE0"))) PPC_WEAK_FUNC(sub_831E9FE0);
PPC_FUNC_IMPL(__imp__sub_831E9FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,13184
	ctx.r31.s64 = ctx.r11.s64 + 13184;
	// lwz r3,13184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ea008
	if (ctx.cr6.eq) goto loc_831EA008;
	// bl 0x82a6d828
	ctx.lr = 0x831EA008;
	sub_82A6D828(ctx, base);
loc_831EA008:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA038"))) PPC_WEAK_FUNC(sub_831EA038);
PPC_FUNC_IMPL(__imp__sub_831EA038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA048"))) PPC_WEAK_FUNC(sub_831EA048);
PPC_FUNC_IMPL(__imp__sub_831EA048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA050"))) PPC_WEAK_FUNC(sub_831EA050);
PPC_FUNC_IMPL(__imp__sub_831EA050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA060"))) PPC_WEAK_FUNC(sub_831EA060);
PPC_FUNC_IMPL(__imp__sub_831EA060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA070"))) PPC_WEAK_FUNC(sub_831EA070);
PPC_FUNC_IMPL(__imp__sub_831EA070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,13516
	ctx.r31.s64 = ctx.r11.s64 + 13516;
	// lwz r3,13516(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ea098
	if (ctx.cr6.eq) goto loc_831EA098;
	// bl 0x82a6d828
	ctx.lr = 0x831EA098;
	sub_82A6D828(ctx, base);
loc_831EA098:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA0C8"))) PPC_WEAK_FUNC(sub_831EA0C8);
PPC_FUNC_IMPL(__imp__sub_831EA0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// b 0x830b2320
	sub_830B2320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA0D8"))) PPC_WEAK_FUNC(sub_831EA0D8);
PPC_FUNC_IMPL(__imp__sub_831EA0D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA0E0"))) PPC_WEAK_FUNC(sub_831EA0E0);
PPC_FUNC_IMPL(__imp__sub_831EA0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,17720
	ctx.r3.s64 = ctx.r11.s64 + 17720;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA0F0"))) PPC_WEAK_FUNC(sub_831EA0F0);
PPC_FUNC_IMPL(__imp__sub_831EA0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,17940
	ctx.r3.s64 = ctx.r11.s64 + 17940;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA100"))) PPC_WEAK_FUNC(sub_831EA100);
PPC_FUNC_IMPL(__imp__sub_831EA100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,17700
	ctx.r31.s64 = ctx.r11.s64 + 17700;
	// lwz r3,17700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831ea128
	if (ctx.cr6.eq) goto loc_831EA128;
	// bl 0x82a6d828
	ctx.lr = 0x831EA128;
	sub_82A6D828(ctx, base);
loc_831EA128:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA158"))) PPC_WEAK_FUNC(sub_831EA158);
PPC_FUNC_IMPL(__imp__sub_831EA158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA160"))) PPC_WEAK_FUNC(sub_831EA160);
PPC_FUNC_IMPL(__imp__sub_831EA160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,18004
	ctx.r3.s64 = ctx.r11.s64 + 18004;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA170"))) PPC_WEAK_FUNC(sub_831EA170);
PPC_FUNC_IMPL(__imp__sub_831EA170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,18132
	ctx.r3.s64 = ctx.r11.s64 + 18132;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA180"))) PPC_WEAK_FUNC(sub_831EA180);
PPC_FUNC_IMPL(__imp__sub_831EA180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,18448
	ctx.r3.s64 = ctx.r11.s64 + 18448;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA190"))) PPC_WEAK_FUNC(sub_831EA190);
PPC_FUNC_IMPL(__imp__sub_831EA190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,18552
	ctx.r3.s64 = ctx.r11.s64 + 18552;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA1A0"))) PPC_WEAK_FUNC(sub_831EA1A0);
PPC_FUNC_IMPL(__imp__sub_831EA1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r31,r11,18656
	ctx.r31.s64 = ctx.r11.s64 + 18656;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82c33488
	ctx.lr = 0x831EA1C0;
	sub_82C33488(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x8282ea80
	ctx.lr = 0x831EA1C8;
	sub_8282EA80(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x8282ea80
	ctx.lr = 0x831EA1D0;
	sub_8282EA80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA1E8"))) PPC_WEAK_FUNC(sub_831EA1E8);
PPC_FUNC_IMPL(__imp__sub_831EA1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19344
	ctx.r3.s64 = ctx.r11.s64 + 19344;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA1F8"))) PPC_WEAK_FUNC(sub_831EA1F8);
PPC_FUNC_IMPL(__imp__sub_831EA1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// stw r11,15736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA210"))) PPC_WEAK_FUNC(sub_831EA210);
PPC_FUNC_IMPL(__imp__sub_831EA210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA218"))) PPC_WEAK_FUNC(sub_831EA218);
PPC_FUNC_IMPL(__imp__sub_831EA218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA220"))) PPC_WEAK_FUNC(sub_831EA220);
PPC_FUNC_IMPL(__imp__sub_831EA220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA228"))) PPC_WEAK_FUNC(sub_831EA228);
PPC_FUNC_IMPL(__imp__sub_831EA228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA230"))) PPC_WEAK_FUNC(sub_831EA230);
PPC_FUNC_IMPL(__imp__sub_831EA230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA238"))) PPC_WEAK_FUNC(sub_831EA238);
PPC_FUNC_IMPL(__imp__sub_831EA238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA240"))) PPC_WEAK_FUNC(sub_831EA240);
PPC_FUNC_IMPL(__imp__sub_831EA240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA248"))) PPC_WEAK_FUNC(sub_831EA248);
PPC_FUNC_IMPL(__imp__sub_831EA248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA250"))) PPC_WEAK_FUNC(sub_831EA250);
PPC_FUNC_IMPL(__imp__sub_831EA250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA258"))) PPC_WEAK_FUNC(sub_831EA258);
PPC_FUNC_IMPL(__imp__sub_831EA258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA260"))) PPC_WEAK_FUNC(sub_831EA260);
PPC_FUNC_IMPL(__imp__sub_831EA260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x82de7330
	sub_82DE7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA270"))) PPC_WEAK_FUNC(sub_831EA270);
PPC_FUNC_IMPL(__imp__sub_831EA270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31932
	ctx.r11.s64 = -2092695552;
	// addi r3,r11,19796
	ctx.r3.s64 = ctx.r11.s64 + 19796;
	// b 0x82d5b988
	sub_82D5B988(ctx, base);
	return;
}

