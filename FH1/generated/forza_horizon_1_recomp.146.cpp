#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831D12E8"))) PPC_WEAK_FUNC(sub_831D12E8);
PPC_FUNC_IMPL(__imp__sub_831D12E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8444
	ctx.r3.s64 = ctx.r11.s64 + -8444;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1308;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1320"))) PPC_WEAK_FUNC(sub_831D1320);
PPC_FUNC_IMPL(__imp__sub_831D1320) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8424
	ctx.r3.s64 = ctx.r11.s64 + -8424;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1340;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1358"))) PPC_WEAK_FUNC(sub_831D1358);
PPC_FUNC_IMPL(__imp__sub_831D1358) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8404
	ctx.r3.s64 = ctx.r11.s64 + -8404;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1378;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1390"))) PPC_WEAK_FUNC(sub_831D1390);
PPC_FUNC_IMPL(__imp__sub_831D1390) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D13B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D13C8"))) PPC_WEAK_FUNC(sub_831D13C8);
PPC_FUNC_IMPL(__imp__sub_831D13C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8364
	ctx.r3.s64 = ctx.r11.s64 + -8364;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D13E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1400"))) PPC_WEAK_FUNC(sub_831D1400);
PPC_FUNC_IMPL(__imp__sub_831D1400) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1420;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1438"))) PPC_WEAK_FUNC(sub_831D1438);
PPC_FUNC_IMPL(__imp__sub_831D1438) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8324
	ctx.r3.s64 = ctx.r11.s64 + -8324;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1458;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1470"))) PPC_WEAK_FUNC(sub_831D1470);
PPC_FUNC_IMPL(__imp__sub_831D1470) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8300
	ctx.r3.s64 = ctx.r11.s64 + -8300;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1490;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D14A8"))) PPC_WEAK_FUNC(sub_831D14A8);
PPC_FUNC_IMPL(__imp__sub_831D14A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8284
	ctx.r3.s64 = ctx.r11.s64 + -8284;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D14C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D14E0"))) PPC_WEAK_FUNC(sub_831D14E0);
PPC_FUNC_IMPL(__imp__sub_831D14E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8260
	ctx.r3.s64 = ctx.r11.s64 + -8260;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1500;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1518"))) PPC_WEAK_FUNC(sub_831D1518);
PPC_FUNC_IMPL(__imp__sub_831D1518) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8236
	ctx.r3.s64 = ctx.r11.s64 + -8236;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1538;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1550"))) PPC_WEAK_FUNC(sub_831D1550);
PPC_FUNC_IMPL(__imp__sub_831D1550) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8212
	ctx.r3.s64 = ctx.r11.s64 + -8212;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1570;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1588"))) PPC_WEAK_FUNC(sub_831D1588);
PPC_FUNC_IMPL(__imp__sub_831D1588) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8188
	ctx.r3.s64 = ctx.r11.s64 + -8188;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D15A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D15C0"))) PPC_WEAK_FUNC(sub_831D15C0);
PPC_FUNC_IMPL(__imp__sub_831D15C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8164
	ctx.r3.s64 = ctx.r11.s64 + -8164;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D15E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D15F8"))) PPC_WEAK_FUNC(sub_831D15F8);
PPC_FUNC_IMPL(__imp__sub_831D15F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8144
	ctx.r3.s64 = ctx.r11.s64 + -8144;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1618;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1630"))) PPC_WEAK_FUNC(sub_831D1630);
PPC_FUNC_IMPL(__imp__sub_831D1630) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8116
	ctx.r3.s64 = ctx.r11.s64 + -8116;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1650;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1668"))) PPC_WEAK_FUNC(sub_831D1668);
PPC_FUNC_IMPL(__imp__sub_831D1668) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8092
	ctx.r3.s64 = ctx.r11.s64 + -8092;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1688;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D16A0"))) PPC_WEAK_FUNC(sub_831D16A0);
PPC_FUNC_IMPL(__imp__sub_831D16A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8072
	ctx.r3.s64 = ctx.r11.s64 + -8072;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D16C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D16D8"))) PPC_WEAK_FUNC(sub_831D16D8);
PPC_FUNC_IMPL(__imp__sub_831D16D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8044
	ctx.r3.s64 = ctx.r11.s64 + -8044;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D16F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1710"))) PPC_WEAK_FUNC(sub_831D1710);
PPC_FUNC_IMPL(__imp__sub_831D1710) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-8020
	ctx.r3.s64 = ctx.r11.s64 + -8020;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1730;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1748"))) PPC_WEAK_FUNC(sub_831D1748);
PPC_FUNC_IMPL(__imp__sub_831D1748) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1768;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1780"))) PPC_WEAK_FUNC(sub_831D1780);
PPC_FUNC_IMPL(__imp__sub_831D1780) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7972
	ctx.r3.s64 = ctx.r11.s64 + -7972;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D17A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D17B8"))) PPC_WEAK_FUNC(sub_831D17B8);
PPC_FUNC_IMPL(__imp__sub_831D17B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7948
	ctx.r3.s64 = ctx.r11.s64 + -7948;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D17D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D17F0"))) PPC_WEAK_FUNC(sub_831D17F0);
PPC_FUNC_IMPL(__imp__sub_831D17F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7924
	ctx.r3.s64 = ctx.r11.s64 + -7924;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1810;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1828"))) PPC_WEAK_FUNC(sub_831D1828);
PPC_FUNC_IMPL(__imp__sub_831D1828) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7900
	ctx.r3.s64 = ctx.r11.s64 + -7900;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1848;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1860"))) PPC_WEAK_FUNC(sub_831D1860);
PPC_FUNC_IMPL(__imp__sub_831D1860) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1880;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1898"))) PPC_WEAK_FUNC(sub_831D1898);
PPC_FUNC_IMPL(__imp__sub_831D1898) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D18B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D18D0"))) PPC_WEAK_FUNC(sub_831D18D0);
PPC_FUNC_IMPL(__imp__sub_831D18D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7828
	ctx.r3.s64 = ctx.r11.s64 + -7828;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D18F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1908"))) PPC_WEAK_FUNC(sub_831D1908);
PPC_FUNC_IMPL(__imp__sub_831D1908) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1928;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1940"))) PPC_WEAK_FUNC(sub_831D1940);
PPC_FUNC_IMPL(__imp__sub_831D1940) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7776
	ctx.r3.s64 = ctx.r11.s64 + -7776;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1960;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1978"))) PPC_WEAK_FUNC(sub_831D1978);
PPC_FUNC_IMPL(__imp__sub_831D1978) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1998;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D19B0"))) PPC_WEAK_FUNC(sub_831D19B0);
PPC_FUNC_IMPL(__imp__sub_831D19B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7736
	ctx.r3.s64 = ctx.r11.s64 + -7736;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D19D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D19E8"))) PPC_WEAK_FUNC(sub_831D19E8);
PPC_FUNC_IMPL(__imp__sub_831D19E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7716
	ctx.r3.s64 = ctx.r11.s64 + -7716;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1A08;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1A20"))) PPC_WEAK_FUNC(sub_831D1A20);
PPC_FUNC_IMPL(__imp__sub_831D1A20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7700
	ctx.r3.s64 = ctx.r11.s64 + -7700;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1A40;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1A58"))) PPC_WEAK_FUNC(sub_831D1A58);
PPC_FUNC_IMPL(__imp__sub_831D1A58) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1A78;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1A90"))) PPC_WEAK_FUNC(sub_831D1A90);
PPC_FUNC_IMPL(__imp__sub_831D1A90) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7660
	ctx.r3.s64 = ctx.r11.s64 + -7660;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1AB0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1AC8"))) PPC_WEAK_FUNC(sub_831D1AC8);
PPC_FUNC_IMPL(__imp__sub_831D1AC8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7640
	ctx.r3.s64 = ctx.r11.s64 + -7640;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1AE8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1B00"))) PPC_WEAK_FUNC(sub_831D1B00);
PPC_FUNC_IMPL(__imp__sub_831D1B00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7616
	ctx.r3.s64 = ctx.r11.s64 + -7616;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1B20;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1B38"))) PPC_WEAK_FUNC(sub_831D1B38);
PPC_FUNC_IMPL(__imp__sub_831D1B38) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7592
	ctx.r3.s64 = ctx.r11.s64 + -7592;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1B58;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1B70"))) PPC_WEAK_FUNC(sub_831D1B70);
PPC_FUNC_IMPL(__imp__sub_831D1B70) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7568
	ctx.r3.s64 = ctx.r11.s64 + -7568;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1B90;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1BA8"))) PPC_WEAK_FUNC(sub_831D1BA8);
PPC_FUNC_IMPL(__imp__sub_831D1BA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7548
	ctx.r3.s64 = ctx.r11.s64 + -7548;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1BC8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1BE0"))) PPC_WEAK_FUNC(sub_831D1BE0);
PPC_FUNC_IMPL(__imp__sub_831D1BE0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7524
	ctx.r3.s64 = ctx.r11.s64 + -7524;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1C00;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1C18"))) PPC_WEAK_FUNC(sub_831D1C18);
PPC_FUNC_IMPL(__imp__sub_831D1C18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7500
	ctx.r3.s64 = ctx.r11.s64 + -7500;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1C38;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1C50"))) PPC_WEAK_FUNC(sub_831D1C50);
PPC_FUNC_IMPL(__imp__sub_831D1C50) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7472
	ctx.r3.s64 = ctx.r11.s64 + -7472;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1C70;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1C88"))) PPC_WEAK_FUNC(sub_831D1C88);
PPC_FUNC_IMPL(__imp__sub_831D1C88) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7452
	ctx.r3.s64 = ctx.r11.s64 + -7452;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1CA8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1CC0"))) PPC_WEAK_FUNC(sub_831D1CC0);
PPC_FUNC_IMPL(__imp__sub_831D1CC0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7420
	ctx.r3.s64 = ctx.r11.s64 + -7420;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1CE0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1CF8"))) PPC_WEAK_FUNC(sub_831D1CF8);
PPC_FUNC_IMPL(__imp__sub_831D1CF8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1D18;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1D30"))) PPC_WEAK_FUNC(sub_831D1D30);
PPC_FUNC_IMPL(__imp__sub_831D1D30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1D50;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1D68"))) PPC_WEAK_FUNC(sub_831D1D68);
PPC_FUNC_IMPL(__imp__sub_831D1D68) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7340
	ctx.r3.s64 = ctx.r11.s64 + -7340;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1D88;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1DA0"))) PPC_WEAK_FUNC(sub_831D1DA0);
PPC_FUNC_IMPL(__imp__sub_831D1DA0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7324
	ctx.r3.s64 = ctx.r11.s64 + -7324;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1DC0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1DD8"))) PPC_WEAK_FUNC(sub_831D1DD8);
PPC_FUNC_IMPL(__imp__sub_831D1DD8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7308
	ctx.r3.s64 = ctx.r11.s64 + -7308;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1DF8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1E10"))) PPC_WEAK_FUNC(sub_831D1E10);
PPC_FUNC_IMPL(__imp__sub_831D1E10) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1E30;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1E48"))) PPC_WEAK_FUNC(sub_831D1E48);
PPC_FUNC_IMPL(__imp__sub_831D1E48) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7284
	ctx.r3.s64 = ctx.r11.s64 + -7284;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1E68;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1E80"))) PPC_WEAK_FUNC(sub_831D1E80);
PPC_FUNC_IMPL(__imp__sub_831D1E80) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1EA0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1EB8"))) PPC_WEAK_FUNC(sub_831D1EB8);
PPC_FUNC_IMPL(__imp__sub_831D1EB8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1ED8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1EF0"))) PPC_WEAK_FUNC(sub_831D1EF0);
PPC_FUNC_IMPL(__imp__sub_831D1EF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1F10;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1F28"))) PPC_WEAK_FUNC(sub_831D1F28);
PPC_FUNC_IMPL(__imp__sub_831D1F28) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1F48;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1F60"))) PPC_WEAK_FUNC(sub_831D1F60);
PPC_FUNC_IMPL(__imp__sub_831D1F60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7212
	ctx.r3.s64 = ctx.r11.s64 + -7212;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1F80;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1F98"))) PPC_WEAK_FUNC(sub_831D1F98);
PPC_FUNC_IMPL(__imp__sub_831D1F98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7196
	ctx.r3.s64 = ctx.r11.s64 + -7196;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1FB8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D1FD0"))) PPC_WEAK_FUNC(sub_831D1FD0);
PPC_FUNC_IMPL(__imp__sub_831D1FD0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7172
	ctx.r3.s64 = ctx.r11.s64 + -7172;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D1FF0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2008"))) PPC_WEAK_FUNC(sub_831D2008);
PPC_FUNC_IMPL(__imp__sub_831D2008) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2028;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2040"))) PPC_WEAK_FUNC(sub_831D2040);
PPC_FUNC_IMPL(__imp__sub_831D2040) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7136
	ctx.r3.s64 = ctx.r11.s64 + -7136;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2060;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2078"))) PPC_WEAK_FUNC(sub_831D2078);
PPC_FUNC_IMPL(__imp__sub_831D2078) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7108
	ctx.r3.s64 = ctx.r11.s64 + -7108;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2098;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D20B0"))) PPC_WEAK_FUNC(sub_831D20B0);
PPC_FUNC_IMPL(__imp__sub_831D20B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7080
	ctx.r3.s64 = ctx.r11.s64 + -7080;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D20D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D20E8"))) PPC_WEAK_FUNC(sub_831D20E8);
PPC_FUNC_IMPL(__imp__sub_831D20E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7064
	ctx.r3.s64 = ctx.r11.s64 + -7064;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2108;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2120"))) PPC_WEAK_FUNC(sub_831D2120);
PPC_FUNC_IMPL(__imp__sub_831D2120) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7044
	ctx.r3.s64 = ctx.r11.s64 + -7044;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2140;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2158"))) PPC_WEAK_FUNC(sub_831D2158);
PPC_FUNC_IMPL(__imp__sub_831D2158) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2178;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2190"))) PPC_WEAK_FUNC(sub_831D2190);
PPC_FUNC_IMPL(__imp__sub_831D2190) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7004
	ctx.r3.s64 = ctx.r11.s64 + -7004;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D21B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D21C8"))) PPC_WEAK_FUNC(sub_831D21C8);
PPC_FUNC_IMPL(__imp__sub_831D21C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6984
	ctx.r3.s64 = ctx.r11.s64 + -6984;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D21E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2200"))) PPC_WEAK_FUNC(sub_831D2200);
PPC_FUNC_IMPL(__imp__sub_831D2200) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6964
	ctx.r3.s64 = ctx.r11.s64 + -6964;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2220;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2238"))) PPC_WEAK_FUNC(sub_831D2238);
PPC_FUNC_IMPL(__imp__sub_831D2238) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6940
	ctx.r3.s64 = ctx.r11.s64 + -6940;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2258;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2270"))) PPC_WEAK_FUNC(sub_831D2270);
PPC_FUNC_IMPL(__imp__sub_831D2270) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6920
	ctx.r3.s64 = ctx.r11.s64 + -6920;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2290;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D22A8"))) PPC_WEAK_FUNC(sub_831D22A8);
PPC_FUNC_IMPL(__imp__sub_831D22A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6900
	ctx.r3.s64 = ctx.r11.s64 + -6900;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D22C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D22E0"))) PPC_WEAK_FUNC(sub_831D22E0);
PPC_FUNC_IMPL(__imp__sub_831D22E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2300;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2318"))) PPC_WEAK_FUNC(sub_831D2318);
PPC_FUNC_IMPL(__imp__sub_831D2318) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6860
	ctx.r3.s64 = ctx.r11.s64 + -6860;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2338;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2350"))) PPC_WEAK_FUNC(sub_831D2350);
PPC_FUNC_IMPL(__imp__sub_831D2350) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2370;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2388"))) PPC_WEAK_FUNC(sub_831D2388);
PPC_FUNC_IMPL(__imp__sub_831D2388) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6820
	ctx.r3.s64 = ctx.r11.s64 + -6820;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D23A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D23C0"))) PPC_WEAK_FUNC(sub_831D23C0);
PPC_FUNC_IMPL(__imp__sub_831D23C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6808
	ctx.r3.s64 = ctx.r11.s64 + -6808;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D23E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D23F8"))) PPC_WEAK_FUNC(sub_831D23F8);
PPC_FUNC_IMPL(__imp__sub_831D23F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2418;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2430"))) PPC_WEAK_FUNC(sub_831D2430);
PPC_FUNC_IMPL(__imp__sub_831D2430) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2450;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2468"))) PPC_WEAK_FUNC(sub_831D2468);
PPC_FUNC_IMPL(__imp__sub_831D2468) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2488;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D24A0"))) PPC_WEAK_FUNC(sub_831D24A0);
PPC_FUNC_IMPL(__imp__sub_831D24A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D24C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D24D8"))) PPC_WEAK_FUNC(sub_831D24D8);
PPC_FUNC_IMPL(__imp__sub_831D24D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6732
	ctx.r3.s64 = ctx.r11.s64 + -6732;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D24F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2510"))) PPC_WEAK_FUNC(sub_831D2510);
PPC_FUNC_IMPL(__imp__sub_831D2510) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6716
	ctx.r3.s64 = ctx.r11.s64 + -6716;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2530;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2548"))) PPC_WEAK_FUNC(sub_831D2548);
PPC_FUNC_IMPL(__imp__sub_831D2548) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6700
	ctx.r3.s64 = ctx.r11.s64 + -6700;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2568;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2580"))) PPC_WEAK_FUNC(sub_831D2580);
PPC_FUNC_IMPL(__imp__sub_831D2580) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6684
	ctx.r3.s64 = ctx.r11.s64 + -6684;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D25A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D25B8"))) PPC_WEAK_FUNC(sub_831D25B8);
PPC_FUNC_IMPL(__imp__sub_831D25B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6668
	ctx.r3.s64 = ctx.r11.s64 + -6668;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D25D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D25F0"))) PPC_WEAK_FUNC(sub_831D25F0);
PPC_FUNC_IMPL(__imp__sub_831D25F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2610;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2628"))) PPC_WEAK_FUNC(sub_831D2628);
PPC_FUNC_IMPL(__imp__sub_831D2628) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6644
	ctx.r3.s64 = ctx.r11.s64 + -6644;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2648;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2660"))) PPC_WEAK_FUNC(sub_831D2660);
PPC_FUNC_IMPL(__imp__sub_831D2660) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6628
	ctx.r3.s64 = ctx.r11.s64 + -6628;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2680;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2698"))) PPC_WEAK_FUNC(sub_831D2698);
PPC_FUNC_IMPL(__imp__sub_831D2698) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6616
	ctx.r3.s64 = ctx.r11.s64 + -6616;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D26B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D26D0"))) PPC_WEAK_FUNC(sub_831D26D0);
PPC_FUNC_IMPL(__imp__sub_831D26D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6604
	ctx.r3.s64 = ctx.r11.s64 + -6604;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D26F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2708"))) PPC_WEAK_FUNC(sub_831D2708);
PPC_FUNC_IMPL(__imp__sub_831D2708) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2728;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2740"))) PPC_WEAK_FUNC(sub_831D2740);
PPC_FUNC_IMPL(__imp__sub_831D2740) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2760;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2778"))) PPC_WEAK_FUNC(sub_831D2778);
PPC_FUNC_IMPL(__imp__sub_831D2778) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6540
	ctx.r3.s64 = ctx.r11.s64 + -6540;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2798;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D27B0"))) PPC_WEAK_FUNC(sub_831D27B0);
PPC_FUNC_IMPL(__imp__sub_831D27B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D27D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D27E8"))) PPC_WEAK_FUNC(sub_831D27E8);
PPC_FUNC_IMPL(__imp__sub_831D27E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6508
	ctx.r3.s64 = ctx.r11.s64 + -6508;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2808;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2820"))) PPC_WEAK_FUNC(sub_831D2820);
PPC_FUNC_IMPL(__imp__sub_831D2820) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2840;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2858"))) PPC_WEAK_FUNC(sub_831D2858);
PPC_FUNC_IMPL(__imp__sub_831D2858) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2878;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2890"))) PPC_WEAK_FUNC(sub_831D2890);
PPC_FUNC_IMPL(__imp__sub_831D2890) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D28B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D28C8"))) PPC_WEAK_FUNC(sub_831D28C8);
PPC_FUNC_IMPL(__imp__sub_831D28C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D28E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2900"))) PPC_WEAK_FUNC(sub_831D2900);
PPC_FUNC_IMPL(__imp__sub_831D2900) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2920;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2938"))) PPC_WEAK_FUNC(sub_831D2938);
PPC_FUNC_IMPL(__imp__sub_831D2938) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2958;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2970"))) PPC_WEAK_FUNC(sub_831D2970);
PPC_FUNC_IMPL(__imp__sub_831D2970) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6348
	ctx.r3.s64 = ctx.r11.s64 + -6348;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2990;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D29A8"))) PPC_WEAK_FUNC(sub_831D29A8);
PPC_FUNC_IMPL(__imp__sub_831D29A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6324
	ctx.r3.s64 = ctx.r11.s64 + -6324;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D29C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D29E0"))) PPC_WEAK_FUNC(sub_831D29E0);
PPC_FUNC_IMPL(__imp__sub_831D29E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6300
	ctx.r3.s64 = ctx.r11.s64 + -6300;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2A00;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2A18"))) PPC_WEAK_FUNC(sub_831D2A18);
PPC_FUNC_IMPL(__imp__sub_831D2A18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6276
	ctx.r3.s64 = ctx.r11.s64 + -6276;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2A38;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2A50"))) PPC_WEAK_FUNC(sub_831D2A50);
PPC_FUNC_IMPL(__imp__sub_831D2A50) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6252
	ctx.r3.s64 = ctx.r11.s64 + -6252;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2A70;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2A88"))) PPC_WEAK_FUNC(sub_831D2A88);
PPC_FUNC_IMPL(__imp__sub_831D2A88) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6228
	ctx.r3.s64 = ctx.r11.s64 + -6228;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2AA8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2AC0"))) PPC_WEAK_FUNC(sub_831D2AC0);
PPC_FUNC_IMPL(__imp__sub_831D2AC0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6204
	ctx.r3.s64 = ctx.r11.s64 + -6204;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2AE0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2AF8"))) PPC_WEAK_FUNC(sub_831D2AF8);
PPC_FUNC_IMPL(__imp__sub_831D2AF8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6180
	ctx.r3.s64 = ctx.r11.s64 + -6180;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2B18;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2B30"))) PPC_WEAK_FUNC(sub_831D2B30);
PPC_FUNC_IMPL(__imp__sub_831D2B30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6156
	ctx.r3.s64 = ctx.r11.s64 + -6156;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2B50;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2B68"))) PPC_WEAK_FUNC(sub_831D2B68);
PPC_FUNC_IMPL(__imp__sub_831D2B68) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6136
	ctx.r3.s64 = ctx.r11.s64 + -6136;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2B88;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2BA0"))) PPC_WEAK_FUNC(sub_831D2BA0);
PPC_FUNC_IMPL(__imp__sub_831D2BA0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6116
	ctx.r3.s64 = ctx.r11.s64 + -6116;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2BC0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2BD8"))) PPC_WEAK_FUNC(sub_831D2BD8);
PPC_FUNC_IMPL(__imp__sub_831D2BD8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2BF8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2C10"))) PPC_WEAK_FUNC(sub_831D2C10);
PPC_FUNC_IMPL(__imp__sub_831D2C10) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2C30;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2C48"))) PPC_WEAK_FUNC(sub_831D2C48);
PPC_FUNC_IMPL(__imp__sub_831D2C48) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6048
	ctx.r3.s64 = ctx.r11.s64 + -6048;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2C68;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2C80"))) PPC_WEAK_FUNC(sub_831D2C80);
PPC_FUNC_IMPL(__imp__sub_831D2C80) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6024
	ctx.r3.s64 = ctx.r11.s64 + -6024;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2CA0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2CB8"))) PPC_WEAK_FUNC(sub_831D2CB8);
PPC_FUNC_IMPL(__imp__sub_831D2CB8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5996
	ctx.r3.s64 = ctx.r11.s64 + -5996;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2CD8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2CF0"))) PPC_WEAK_FUNC(sub_831D2CF0);
PPC_FUNC_IMPL(__imp__sub_831D2CF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2D10;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2D28"))) PPC_WEAK_FUNC(sub_831D2D28);
PPC_FUNC_IMPL(__imp__sub_831D2D28) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2D48;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2D60"))) PPC_WEAK_FUNC(sub_831D2D60);
PPC_FUNC_IMPL(__imp__sub_831D2D60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2D80;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2D98"))) PPC_WEAK_FUNC(sub_831D2D98);
PPC_FUNC_IMPL(__imp__sub_831D2D98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5912
	ctx.r3.s64 = ctx.r11.s64 + -5912;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2DB8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2DD0"))) PPC_WEAK_FUNC(sub_831D2DD0);
PPC_FUNC_IMPL(__imp__sub_831D2DD0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2DF0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2E08"))) PPC_WEAK_FUNC(sub_831D2E08);
PPC_FUNC_IMPL(__imp__sub_831D2E08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2E28;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2E40"))) PPC_WEAK_FUNC(sub_831D2E40);
PPC_FUNC_IMPL(__imp__sub_831D2E40) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5836
	ctx.r3.s64 = ctx.r11.s64 + -5836;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2E60;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2E78"))) PPC_WEAK_FUNC(sub_831D2E78);
PPC_FUNC_IMPL(__imp__sub_831D2E78) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5828
	ctx.r3.s64 = ctx.r11.s64 + -5828;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2E98;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2EB0"))) PPC_WEAK_FUNC(sub_831D2EB0);
PPC_FUNC_IMPL(__imp__sub_831D2EB0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2ED0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2EE8"))) PPC_WEAK_FUNC(sub_831D2EE8);
PPC_FUNC_IMPL(__imp__sub_831D2EE8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5788
	ctx.r3.s64 = ctx.r11.s64 + -5788;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2F08;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2F20"))) PPC_WEAK_FUNC(sub_831D2F20);
PPC_FUNC_IMPL(__imp__sub_831D2F20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5768
	ctx.r3.s64 = ctx.r11.s64 + -5768;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2F40;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2F58"))) PPC_WEAK_FUNC(sub_831D2F58);
PPC_FUNC_IMPL(__imp__sub_831D2F58) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5748
	ctx.r3.s64 = ctx.r11.s64 + -5748;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2F78;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2F90"))) PPC_WEAK_FUNC(sub_831D2F90);
PPC_FUNC_IMPL(__imp__sub_831D2F90) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5720
	ctx.r3.s64 = ctx.r11.s64 + -5720;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2FB0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D2FC8"))) PPC_WEAK_FUNC(sub_831D2FC8);
PPC_FUNC_IMPL(__imp__sub_831D2FC8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D2FE8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3000"))) PPC_WEAK_FUNC(sub_831D3000);
PPC_FUNC_IMPL(__imp__sub_831D3000) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5676
	ctx.r3.s64 = ctx.r11.s64 + -5676;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3020;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3038"))) PPC_WEAK_FUNC(sub_831D3038);
PPC_FUNC_IMPL(__imp__sub_831D3038) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3058;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3070"))) PPC_WEAK_FUNC(sub_831D3070);
PPC_FUNC_IMPL(__imp__sub_831D3070) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5636
	ctx.r3.s64 = ctx.r11.s64 + -5636;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3090;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D30A8"))) PPC_WEAK_FUNC(sub_831D30A8);
PPC_FUNC_IMPL(__imp__sub_831D30A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5608
	ctx.r3.s64 = ctx.r11.s64 + -5608;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D30C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D30E0"))) PPC_WEAK_FUNC(sub_831D30E0);
PPC_FUNC_IMPL(__imp__sub_831D30E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5592
	ctx.r3.s64 = ctx.r11.s64 + -5592;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3100;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3118"))) PPC_WEAK_FUNC(sub_831D3118);
PPC_FUNC_IMPL(__imp__sub_831D3118) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3138;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3150"))) PPC_WEAK_FUNC(sub_831D3150);
PPC_FUNC_IMPL(__imp__sub_831D3150) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5560
	ctx.r3.s64 = ctx.r11.s64 + -5560;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3170;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3188"))) PPC_WEAK_FUNC(sub_831D3188);
PPC_FUNC_IMPL(__imp__sub_831D3188) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D31A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D31C0"))) PPC_WEAK_FUNC(sub_831D31C0);
PPC_FUNC_IMPL(__imp__sub_831D31C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5516
	ctx.r3.s64 = ctx.r11.s64 + -5516;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D31E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D31F8"))) PPC_WEAK_FUNC(sub_831D31F8);
PPC_FUNC_IMPL(__imp__sub_831D31F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5492
	ctx.r3.s64 = ctx.r11.s64 + -5492;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3218;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3230"))) PPC_WEAK_FUNC(sub_831D3230);
PPC_FUNC_IMPL(__imp__sub_831D3230) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3250;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3268"))) PPC_WEAK_FUNC(sub_831D3268);
PPC_FUNC_IMPL(__imp__sub_831D3268) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5444
	ctx.r3.s64 = ctx.r11.s64 + -5444;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3288;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D32A0"))) PPC_WEAK_FUNC(sub_831D32A0);
PPC_FUNC_IMPL(__imp__sub_831D32A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5424
	ctx.r3.s64 = ctx.r11.s64 + -5424;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D32C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D32D8"))) PPC_WEAK_FUNC(sub_831D32D8);
PPC_FUNC_IMPL(__imp__sub_831D32D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D32F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3310"))) PPC_WEAK_FUNC(sub_831D3310);
PPC_FUNC_IMPL(__imp__sub_831D3310) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5376
	ctx.r3.s64 = ctx.r11.s64 + -5376;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3330;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3348"))) PPC_WEAK_FUNC(sub_831D3348);
PPC_FUNC_IMPL(__imp__sub_831D3348) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5344
	ctx.r3.s64 = ctx.r11.s64 + -5344;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3368;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3380"))) PPC_WEAK_FUNC(sub_831D3380);
PPC_FUNC_IMPL(__imp__sub_831D3380) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5328
	ctx.r3.s64 = ctx.r11.s64 + -5328;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D33A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D33B8"))) PPC_WEAK_FUNC(sub_831D33B8);
PPC_FUNC_IMPL(__imp__sub_831D33B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5308
	ctx.r3.s64 = ctx.r11.s64 + -5308;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D33D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D33F0"))) PPC_WEAK_FUNC(sub_831D33F0);
PPC_FUNC_IMPL(__imp__sub_831D33F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5288
	ctx.r3.s64 = ctx.r11.s64 + -5288;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3410;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3428"))) PPC_WEAK_FUNC(sub_831D3428);
PPC_FUNC_IMPL(__imp__sub_831D3428) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5256
	ctx.r3.s64 = ctx.r11.s64 + -5256;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3448;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3460"))) PPC_WEAK_FUNC(sub_831D3460);
PPC_FUNC_IMPL(__imp__sub_831D3460) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3480;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3498"))) PPC_WEAK_FUNC(sub_831D3498);
PPC_FUNC_IMPL(__imp__sub_831D3498) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5236
	ctx.r3.s64 = ctx.r11.s64 + -5236;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D34B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D34D0"))) PPC_WEAK_FUNC(sub_831D34D0);
PPC_FUNC_IMPL(__imp__sub_831D34D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5216
	ctx.r3.s64 = ctx.r11.s64 + -5216;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D34F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3508"))) PPC_WEAK_FUNC(sub_831D3508);
PPC_FUNC_IMPL(__imp__sub_831D3508) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3528;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3540"))) PPC_WEAK_FUNC(sub_831D3540);
PPC_FUNC_IMPL(__imp__sub_831D3540) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5156
	ctx.r3.s64 = ctx.r11.s64 + -5156;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3560;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3578"))) PPC_WEAK_FUNC(sub_831D3578);
PPC_FUNC_IMPL(__imp__sub_831D3578) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5124
	ctx.r3.s64 = ctx.r11.s64 + -5124;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3598;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D35B0"))) PPC_WEAK_FUNC(sub_831D35B0);
PPC_FUNC_IMPL(__imp__sub_831D35B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5088
	ctx.r3.s64 = ctx.r11.s64 + -5088;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D35D0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D35E8"))) PPC_WEAK_FUNC(sub_831D35E8);
PPC_FUNC_IMPL(__imp__sub_831D35E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5064
	ctx.r3.s64 = ctx.r11.s64 + -5064;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3608;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3620"))) PPC_WEAK_FUNC(sub_831D3620);
PPC_FUNC_IMPL(__imp__sub_831D3620) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5028
	ctx.r3.s64 = ctx.r11.s64 + -5028;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3640;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3658"))) PPC_WEAK_FUNC(sub_831D3658);
PPC_FUNC_IMPL(__imp__sub_831D3658) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3678;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3690"))) PPC_WEAK_FUNC(sub_831D3690);
PPC_FUNC_IMPL(__imp__sub_831D3690) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D36B0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D36C8"))) PPC_WEAK_FUNC(sub_831D36C8);
PPC_FUNC_IMPL(__imp__sub_831D36C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4956
	ctx.r3.s64 = ctx.r11.s64 + -4956;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D36E8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3700"))) PPC_WEAK_FUNC(sub_831D3700);
PPC_FUNC_IMPL(__imp__sub_831D3700) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3720;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3738"))) PPC_WEAK_FUNC(sub_831D3738);
PPC_FUNC_IMPL(__imp__sub_831D3738) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4908
	ctx.r3.s64 = ctx.r11.s64 + -4908;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3758;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3770"))) PPC_WEAK_FUNC(sub_831D3770);
PPC_FUNC_IMPL(__imp__sub_831D3770) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3790;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D37A8"))) PPC_WEAK_FUNC(sub_831D37A8);
PPC_FUNC_IMPL(__imp__sub_831D37A8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4860
	ctx.r3.s64 = ctx.r11.s64 + -4860;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D37C8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D37E0"))) PPC_WEAK_FUNC(sub_831D37E0);
PPC_FUNC_IMPL(__imp__sub_831D37E0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4828
	ctx.r3.s64 = ctx.r11.s64 + -4828;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3800;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3818"))) PPC_WEAK_FUNC(sub_831D3818);
PPC_FUNC_IMPL(__imp__sub_831D3818) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4800
	ctx.r3.s64 = ctx.r11.s64 + -4800;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3838;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3850"))) PPC_WEAK_FUNC(sub_831D3850);
PPC_FUNC_IMPL(__imp__sub_831D3850) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4772
	ctx.r3.s64 = ctx.r11.s64 + -4772;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3870;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3888"))) PPC_WEAK_FUNC(sub_831D3888);
PPC_FUNC_IMPL(__imp__sub_831D3888) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4744
	ctx.r3.s64 = ctx.r11.s64 + -4744;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D38A8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D38C0"))) PPC_WEAK_FUNC(sub_831D38C0);
PPC_FUNC_IMPL(__imp__sub_831D38C0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4724
	ctx.r3.s64 = ctx.r11.s64 + -4724;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D38E0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D38F8"))) PPC_WEAK_FUNC(sub_831D38F8);
PPC_FUNC_IMPL(__imp__sub_831D38F8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3918;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3930"))) PPC_WEAK_FUNC(sub_831D3930);
PPC_FUNC_IMPL(__imp__sub_831D3930) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4684
	ctx.r3.s64 = ctx.r11.s64 + -4684;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3950;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3968"))) PPC_WEAK_FUNC(sub_831D3968);
PPC_FUNC_IMPL(__imp__sub_831D3968) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4656
	ctx.r3.s64 = ctx.r11.s64 + -4656;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3988;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D39A0"))) PPC_WEAK_FUNC(sub_831D39A0);
PPC_FUNC_IMPL(__imp__sub_831D39A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4640
	ctx.r3.s64 = ctx.r11.s64 + -4640;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D39C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D39D8"))) PPC_WEAK_FUNC(sub_831D39D8);
PPC_FUNC_IMPL(__imp__sub_831D39D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4620
	ctx.r3.s64 = ctx.r11.s64 + -4620;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D39F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3A10"))) PPC_WEAK_FUNC(sub_831D3A10);
PPC_FUNC_IMPL(__imp__sub_831D3A10) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4596
	ctx.r3.s64 = ctx.r11.s64 + -4596;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3A30;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3A48"))) PPC_WEAK_FUNC(sub_831D3A48);
PPC_FUNC_IMPL(__imp__sub_831D3A48) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4580
	ctx.r3.s64 = ctx.r11.s64 + -4580;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3A68;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3A80"))) PPC_WEAK_FUNC(sub_831D3A80);
PPC_FUNC_IMPL(__imp__sub_831D3A80) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4560
	ctx.r3.s64 = ctx.r11.s64 + -4560;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3AA0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3AB8"))) PPC_WEAK_FUNC(sub_831D3AB8);
PPC_FUNC_IMPL(__imp__sub_831D3AB8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4540
	ctx.r3.s64 = ctx.r11.s64 + -4540;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3AD8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3AF0"))) PPC_WEAK_FUNC(sub_831D3AF0);
PPC_FUNC_IMPL(__imp__sub_831D3AF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4520
	ctx.r3.s64 = ctx.r11.s64 + -4520;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3B10;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3B28"))) PPC_WEAK_FUNC(sub_831D3B28);
PPC_FUNC_IMPL(__imp__sub_831D3B28) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4500
	ctx.r3.s64 = ctx.r11.s64 + -4500;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3B48;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3B60"))) PPC_WEAK_FUNC(sub_831D3B60);
PPC_FUNC_IMPL(__imp__sub_831D3B60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4484
	ctx.r3.s64 = ctx.r11.s64 + -4484;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3B80;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3B98"))) PPC_WEAK_FUNC(sub_831D3B98);
PPC_FUNC_IMPL(__imp__sub_831D3B98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4468
	ctx.r3.s64 = ctx.r11.s64 + -4468;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3BB8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3BD0"))) PPC_WEAK_FUNC(sub_831D3BD0);
PPC_FUNC_IMPL(__imp__sub_831D3BD0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4452
	ctx.r3.s64 = ctx.r11.s64 + -4452;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3BF0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3C08"))) PPC_WEAK_FUNC(sub_831D3C08);
PPC_FUNC_IMPL(__imp__sub_831D3C08) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4428
	ctx.r3.s64 = ctx.r11.s64 + -4428;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3C28;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3C40"))) PPC_WEAK_FUNC(sub_831D3C40);
PPC_FUNC_IMPL(__imp__sub_831D3C40) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4416
	ctx.r3.s64 = ctx.r11.s64 + -4416;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3C60;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3C78"))) PPC_WEAK_FUNC(sub_831D3C78);
PPC_FUNC_IMPL(__imp__sub_831D3C78) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4404
	ctx.r3.s64 = ctx.r11.s64 + -4404;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3C98;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3CB0"))) PPC_WEAK_FUNC(sub_831D3CB0);
PPC_FUNC_IMPL(__imp__sub_831D3CB0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4388
	ctx.r3.s64 = ctx.r11.s64 + -4388;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3CD0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3CE8"))) PPC_WEAK_FUNC(sub_831D3CE8);
PPC_FUNC_IMPL(__imp__sub_831D3CE8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3D08;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3D20"))) PPC_WEAK_FUNC(sub_831D3D20);
PPC_FUNC_IMPL(__imp__sub_831D3D20) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3D40;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3D58"))) PPC_WEAK_FUNC(sub_831D3D58);
PPC_FUNC_IMPL(__imp__sub_831D3D58) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4332
	ctx.r3.s64 = ctx.r11.s64 + -4332;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3D78;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3D90"))) PPC_WEAK_FUNC(sub_831D3D90);
PPC_FUNC_IMPL(__imp__sub_831D3D90) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4308
	ctx.r3.s64 = ctx.r11.s64 + -4308;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3DB0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3DC8"))) PPC_WEAK_FUNC(sub_831D3DC8);
PPC_FUNC_IMPL(__imp__sub_831D3DC8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3DE8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3E00"))) PPC_WEAK_FUNC(sub_831D3E00);
PPC_FUNC_IMPL(__imp__sub_831D3E00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4256
	ctx.r3.s64 = ctx.r11.s64 + -4256;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3E20;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3E38"))) PPC_WEAK_FUNC(sub_831D3E38);
PPC_FUNC_IMPL(__imp__sub_831D3E38) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4232
	ctx.r3.s64 = ctx.r11.s64 + -4232;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3E58;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3E70"))) PPC_WEAK_FUNC(sub_831D3E70);
PPC_FUNC_IMPL(__imp__sub_831D3E70) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4212
	ctx.r3.s64 = ctx.r11.s64 + -4212;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3E90;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3EA8"))) PPC_WEAK_FUNC(sub_831D3EA8);
PPC_FUNC_IMPL(__imp__sub_831D3EA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4188
	ctx.r3.s64 = ctx.r11.s64 + -4188;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3EC8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3EE0"))) PPC_WEAK_FUNC(sub_831D3EE0);
PPC_FUNC_IMPL(__imp__sub_831D3EE0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4164
	ctx.r3.s64 = ctx.r11.s64 + -4164;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3F00;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3F18"))) PPC_WEAK_FUNC(sub_831D3F18);
PPC_FUNC_IMPL(__imp__sub_831D3F18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4140
	ctx.r3.s64 = ctx.r11.s64 + -4140;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3F38;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3F50"))) PPC_WEAK_FUNC(sub_831D3F50);
PPC_FUNC_IMPL(__imp__sub_831D3F50) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4112
	ctx.r3.s64 = ctx.r11.s64 + -4112;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3F70;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3F88"))) PPC_WEAK_FUNC(sub_831D3F88);
PPC_FUNC_IMPL(__imp__sub_831D3F88) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4092
	ctx.r3.s64 = ctx.r11.s64 + -4092;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3FA8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3FC0"))) PPC_WEAK_FUNC(sub_831D3FC0);
PPC_FUNC_IMPL(__imp__sub_831D3FC0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4072
	ctx.r3.s64 = ctx.r11.s64 + -4072;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D3FE0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D3FF8"))) PPC_WEAK_FUNC(sub_831D3FF8);
PPC_FUNC_IMPL(__imp__sub_831D3FF8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4052
	ctx.r3.s64 = ctx.r11.s64 + -4052;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4018;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4030"))) PPC_WEAK_FUNC(sub_831D4030);
PPC_FUNC_IMPL(__imp__sub_831D4030) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4050;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4068"))) PPC_WEAK_FUNC(sub_831D4068);
PPC_FUNC_IMPL(__imp__sub_831D4068) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4088;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D40A0"))) PPC_WEAK_FUNC(sub_831D40A0);
PPC_FUNC_IMPL(__imp__sub_831D40A0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4000
	ctx.r3.s64 = ctx.r11.s64 + -4000;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D40C0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D40D8"))) PPC_WEAK_FUNC(sub_831D40D8);
PPC_FUNC_IMPL(__imp__sub_831D40D8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3980
	ctx.r3.s64 = ctx.r11.s64 + -3980;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D40F8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4110"))) PPC_WEAK_FUNC(sub_831D4110);
PPC_FUNC_IMPL(__imp__sub_831D4110) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3960
	ctx.r3.s64 = ctx.r11.s64 + -3960;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4130;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4148"))) PPC_WEAK_FUNC(sub_831D4148);
PPC_FUNC_IMPL(__imp__sub_831D4148) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3936
	ctx.r3.s64 = ctx.r11.s64 + -3936;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4168;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4180"))) PPC_WEAK_FUNC(sub_831D4180);
PPC_FUNC_IMPL(__imp__sub_831D4180) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D41A0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D41B8"))) PPC_WEAK_FUNC(sub_831D41B8);
PPC_FUNC_IMPL(__imp__sub_831D41B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3896
	ctx.r3.s64 = ctx.r11.s64 + -3896;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D41D8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D41F0"))) PPC_WEAK_FUNC(sub_831D41F0);
PPC_FUNC_IMPL(__imp__sub_831D41F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3876
	ctx.r3.s64 = ctx.r11.s64 + -3876;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4210;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4228"))) PPC_WEAK_FUNC(sub_831D4228);
PPC_FUNC_IMPL(__imp__sub_831D4228) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3856
	ctx.r3.s64 = ctx.r11.s64 + -3856;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4248;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4260"))) PPC_WEAK_FUNC(sub_831D4260);
PPC_FUNC_IMPL(__imp__sub_831D4260) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3836
	ctx.r3.s64 = ctx.r11.s64 + -3836;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4280;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4298"))) PPC_WEAK_FUNC(sub_831D4298);
PPC_FUNC_IMPL(__imp__sub_831D4298) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3820
	ctx.r3.s64 = ctx.r11.s64 + -3820;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D42B8;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,20804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D42D0"))) PPC_WEAK_FUNC(sub_831D42D0);
PPC_FUNC_IMPL(__imp__sub_831D42D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3804
	ctx.r3.s64 = ctx.r11.s64 + -3804;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D42F0;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,19208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4308"))) PPC_WEAK_FUNC(sub_831D4308);
PPC_FUNC_IMPL(__imp__sub_831D4308) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3788
	ctx.r3.s64 = ctx.r11.s64 + -3788;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4328;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4340"))) PPC_WEAK_FUNC(sub_831D4340);
PPC_FUNC_IMPL(__imp__sub_831D4340) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82cfc648
	ctx.lr = 0x831D4360;
	sub_82CFC648(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// stw r3,21052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4378"))) PPC_WEAK_FUNC(sub_831D4378);
PPC_FUNC_IMPL(__imp__sub_831D4378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13384
	ctx.r3.s64 = ctx.r11.s64 + -13384;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D4388"))) PPC_WEAK_FUNC(sub_831D4388);
PPC_FUNC_IMPL(__imp__sub_831D4388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3756
	ctx.r9.s64 = ctx.r10.s64 + -3756;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D439C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d43c4
	if (!ctx.cr6.lt) goto loc_831D43C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d439c
	if (!ctx.cr0.eq) goto loc_831D439C;
loc_831D43C4:
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,20420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D43D8"))) PPC_WEAK_FUNC(sub_831D43D8);
PPC_FUNC_IMPL(__imp__sub_831D43D8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,19556
	ctx.r3.s64 = ctx.r11.s64 + 19556;
	// bl 0x8247f018
	ctx.lr = 0x831D43F4;
	sub_8247F018(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D4400;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4410"))) PPC_WEAK_FUNC(sub_831D4410);
PPC_FUNC_IMPL(__imp__sub_831D4410) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// bl 0x824683b0
	ctx.lr = 0x831D442C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D4438;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4448"))) PPC_WEAK_FUNC(sub_831D4448);
PPC_FUNC_IMPL(__imp__sub_831D4448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D4458"))) PPC_WEAK_FUNC(sub_831D4458);
PPC_FUNC_IMPL(__imp__sub_831D4458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r10,r10,-15576
	ctx.r10.s64 = ctx.r10.s64 + -15576;
	// lwz r11,-15776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15776);
	// stw r11,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, ctx.r11.u32);
	// stw r11,580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 580, ctx.r11.u32);
	// stw r11,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// stw r11,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r11.u32);
	// stw r11,688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 688, ctx.r11.u32);
	// stw r11,724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 724, ctx.r11.u32);
	// stw r11,760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 760, ctx.r11.u32);
	// stw r11,796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 796, ctx.r11.u32);
	// stw r11,832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 832, ctx.r11.u32);
	// stw r11,868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 868, ctx.r11.u32);
	// stw r11,904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 904, ctx.r11.u32);
	// stw r11,940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 940, ctx.r11.u32);
	// stw r11,976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 976, ctx.r11.u32);
	// stw r11,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// stw r11,1048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1048, ctx.r11.u32);
	// stw r11,1084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1084, ctx.r11.u32);
	// stw r11,1120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1120, ctx.r11.u32);
	// stw r11,1156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1156, ctx.r11.u32);
	// stw r11,1192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1192, ctx.r11.u32);
	// stw r11,1228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1228, ctx.r11.u32);
	// stw r11,1264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1264, ctx.r11.u32);
	// stw r11,1300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1300, ctx.r11.u32);
	// stw r11,1336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1336, ctx.r11.u32);
	// stw r11,1372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1372, ctx.r11.u32);
	// stw r11,1408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1408, ctx.r11.u32);
	// stw r11,1444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1444, ctx.r11.u32);
	// stw r11,1480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1480, ctx.r11.u32);
	// stw r11,1516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1516, ctx.r11.u32);
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// stw r11,1588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1588, ctx.r11.u32);
	// stw r11,1624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1624, ctx.r11.u32);
	// stw r11,1660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1660, ctx.r11.u32);
	// stw r11,1696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1696, ctx.r11.u32);
	// stw r11,1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1732, ctx.r11.u32);
	// stw r11,1768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1768, ctx.r11.u32);
	// stw r11,1804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1804, ctx.r11.u32);
	// stw r11,1840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1840, ctx.r11.u32);
	// stw r11,1876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1876, ctx.r11.u32);
	// stw r11,1912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1912, ctx.r11.u32);
	// stw r11,1948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1948, ctx.r11.u32);
	// stw r11,1984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1984, ctx.r11.u32);
	// stw r11,2020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4518"))) PPC_WEAK_FUNC(sub_831D4518);
PPC_FUNC_IMPL(__imp__sub_831D4518) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,21480
	ctx.r3.s64 = ctx.r11.s64 + 21480;
	// bl 0x82e9d5c0
	ctx.lr = 0x831D4530;
	sub_82E9D5C0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D453C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4550"))) PPC_WEAK_FUNC(sub_831D4550);
PPC_FUNC_IMPL(__imp__sub_831D4550) {
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,16720
	ctx.r3.s64 = ctx.r11.s64 + 16720;
	// bl 0x823ff9e8
	ctx.lr = 0x831D4568;
	sub_823FF9E8(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// sth r3,-7088(r10)
	PPC_STORE_U16(ctx.r10.u32 + -7088, ctx.r3.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4580"))) PPC_WEAK_FUNC(sub_831D4580);
PPC_FUNC_IMPL(__imp__sub_831D4580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15496
	ctx.r9.s64 = ctx.r10.s64 + -15496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4594:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d45bc
	if (!ctx.cr6.lt) goto loc_831D45BC;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4594
	if (!ctx.cr0.eq) goto loc_831D4594;
loc_831D45BC:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D45D0"))) PPC_WEAK_FUNC(sub_831D45D0);
PPC_FUNC_IMPL(__imp__sub_831D45D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15476
	ctx.r9.s64 = ctx.r10.s64 + -15476;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D45E4:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d460c
	if (!ctx.cr6.lt) goto loc_831D460C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d45e4
	if (!ctx.cr0.eq) goto loc_831D45E4;
loc_831D460C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-7076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4620"))) PPC_WEAK_FUNC(sub_831D4620);
PPC_FUNC_IMPL(__imp__sub_831D4620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15456
	ctx.r9.s64 = ctx.r10.s64 + -15456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4634:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d465c
	if (!ctx.cr6.lt) goto loc_831D465C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4634
	if (!ctx.cr0.eq) goto loc_831D4634;
loc_831D465C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4670"))) PPC_WEAK_FUNC(sub_831D4670);
PPC_FUNC_IMPL(__imp__sub_831D4670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15436
	ctx.r9.s64 = ctx.r10.s64 + -15436;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4684:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d46ac
	if (!ctx.cr6.lt) goto loc_831D46AC;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4684
	if (!ctx.cr0.eq) goto loc_831D4684;
loc_831D46AC:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-7008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D46C0"))) PPC_WEAK_FUNC(sub_831D46C0);
PPC_FUNC_IMPL(__imp__sub_831D46C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15420
	ctx.r9.s64 = ctx.r10.s64 + -15420;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D46D4:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d46fc
	if (!ctx.cr6.lt) goto loc_831D46FC;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d46d4
	if (!ctx.cr0.eq) goto loc_831D46D4;
loc_831D46FC:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6972, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4710"))) PPC_WEAK_FUNC(sub_831D4710);
PPC_FUNC_IMPL(__imp__sub_831D4710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15404
	ctx.r9.s64 = ctx.r10.s64 + -15404;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4724:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d474c
	if (!ctx.cr6.lt) goto loc_831D474C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4724
	if (!ctx.cr0.eq) goto loc_831D4724;
loc_831D474C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4760"))) PPC_WEAK_FUNC(sub_831D4760);
PPC_FUNC_IMPL(__imp__sub_831D4760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15384
	ctx.r9.s64 = ctx.r10.s64 + -15384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4774:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d479c
	if (!ctx.cr6.lt) goto loc_831D479C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4774
	if (!ctx.cr0.eq) goto loc_831D4774;
loc_831D479C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D47B0"))) PPC_WEAK_FUNC(sub_831D47B0);
PPC_FUNC_IMPL(__imp__sub_831D47B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15360
	ctx.r9.s64 = ctx.r10.s64 + -15360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D47C4:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d47ec
	if (!ctx.cr6.lt) goto loc_831D47EC;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d47c4
	if (!ctx.cr0.eq) goto loc_831D47C4;
loc_831D47EC:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-7080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4800"))) PPC_WEAK_FUNC(sub_831D4800);
PPC_FUNC_IMPL(__imp__sub_831D4800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15340
	ctx.r9.s64 = ctx.r10.s64 + -15340;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4814:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d483c
	if (!ctx.cr6.lt) goto loc_831D483C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4814
	if (!ctx.cr0.eq) goto loc_831D4814;
loc_831D483C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-7000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4850"))) PPC_WEAK_FUNC(sub_831D4850);
PPC_FUNC_IMPL(__imp__sub_831D4850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15316
	ctx.r9.s64 = ctx.r10.s64 + -15316;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4864:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d488c
	if (!ctx.cr6.lt) goto loc_831D488C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4864
	if (!ctx.cr0.eq) goto loc_831D4864;
loc_831D488C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6964, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D48A0"))) PPC_WEAK_FUNC(sub_831D48A0);
PPC_FUNC_IMPL(__imp__sub_831D48A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15292
	ctx.r9.s64 = ctx.r10.s64 + -15292;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D48B4:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d48dc
	if (!ctx.cr6.lt) goto loc_831D48DC;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d48b4
	if (!ctx.cr0.eq) goto loc_831D48B4;
loc_831D48DC:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6960, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D48F0"))) PPC_WEAK_FUNC(sub_831D48F0);
PPC_FUNC_IMPL(__imp__sub_831D48F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15264
	ctx.r9.s64 = ctx.r10.s64 + -15264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4904:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d492c
	if (!ctx.cr6.lt) goto loc_831D492C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4904
	if (!ctx.cr0.eq) goto loc_831D4904;
loc_831D492C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4940"))) PPC_WEAK_FUNC(sub_831D4940);
PPC_FUNC_IMPL(__imp__sub_831D4940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15244
	ctx.r9.s64 = ctx.r10.s64 + -15244;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4954:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d497c
	if (!ctx.cr6.lt) goto loc_831D497C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4954
	if (!ctx.cr0.eq) goto loc_831D4954;
loc_831D497C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4990"))) PPC_WEAK_FUNC(sub_831D4990);
PPC_FUNC_IMPL(__imp__sub_831D4990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15220
	ctx.r9.s64 = ctx.r10.s64 + -15220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D49A4:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d49cc
	if (!ctx.cr6.lt) goto loc_831D49CC;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d49a4
	if (!ctx.cr0.eq) goto loc_831D49A4;
loc_831D49CC:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D49E0"))) PPC_WEAK_FUNC(sub_831D49E0);
PPC_FUNC_IMPL(__imp__sub_831D49E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15204
	ctx.r9.s64 = ctx.r10.s64 + -15204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D49F4:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4a1c
	if (!ctx.cr6.lt) goto loc_831D4A1C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d49f4
	if (!ctx.cr0.eq) goto loc_831D49F4;
loc_831D4A1C:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-7004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4A30"))) PPC_WEAK_FUNC(sub_831D4A30);
PPC_FUNC_IMPL(__imp__sub_831D4A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// addi r4,r11,-6888
	ctx.r4.s64 = ctx.r11.s64 + -6888;
	// addi r3,r10,-7072
	ctx.r3.s64 = ctx.r10.s64 + -7072;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x823f3138
	sub_823F3138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D4A48"))) PPC_WEAK_FUNC(sub_831D4A48);
PPC_FUNC_IMPL(__imp__sub_831D4A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15496
	ctx.r9.s64 = ctx.r10.s64 + -15496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4A5C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4a84
	if (!ctx.cr6.lt) goto loc_831D4A84;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4a5c
	if (!ctx.cr0.eq) goto loc_831D4A5C;
loc_831D4A84:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4A98"))) PPC_WEAK_FUNC(sub_831D4A98);
PPC_FUNC_IMPL(__imp__sub_831D4A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15476
	ctx.r9.s64 = ctx.r10.s64 + -15476;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4AAC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4ad4
	if (!ctx.cr6.lt) goto loc_831D4AD4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4aac
	if (!ctx.cr0.eq) goto loc_831D4AAC;
loc_831D4AD4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4AE8"))) PPC_WEAK_FUNC(sub_831D4AE8);
PPC_FUNC_IMPL(__imp__sub_831D4AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15456
	ctx.r9.s64 = ctx.r10.s64 + -15456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4AFC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4b24
	if (!ctx.cr6.lt) goto loc_831D4B24;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4afc
	if (!ctx.cr0.eq) goto loc_831D4AFC;
loc_831D4B24:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4B38"))) PPC_WEAK_FUNC(sub_831D4B38);
PPC_FUNC_IMPL(__imp__sub_831D4B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15436
	ctx.r9.s64 = ctx.r10.s64 + -15436;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4B4C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4b74
	if (!ctx.cr6.lt) goto loc_831D4B74;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4b4c
	if (!ctx.cr0.eq) goto loc_831D4B4C;
loc_831D4B74:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4B88"))) PPC_WEAK_FUNC(sub_831D4B88);
PPC_FUNC_IMPL(__imp__sub_831D4B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15420
	ctx.r9.s64 = ctx.r10.s64 + -15420;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4B9C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4bc4
	if (!ctx.cr6.lt) goto loc_831D4BC4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4b9c
	if (!ctx.cr0.eq) goto loc_831D4B9C;
loc_831D4BC4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4BD8"))) PPC_WEAK_FUNC(sub_831D4BD8);
PPC_FUNC_IMPL(__imp__sub_831D4BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15404
	ctx.r9.s64 = ctx.r10.s64 + -15404;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4BEC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4c14
	if (!ctx.cr6.lt) goto loc_831D4C14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4bec
	if (!ctx.cr0.eq) goto loc_831D4BEC;
loc_831D4C14:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4C28"))) PPC_WEAK_FUNC(sub_831D4C28);
PPC_FUNC_IMPL(__imp__sub_831D4C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15384
	ctx.r9.s64 = ctx.r10.s64 + -15384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4C3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4c64
	if (!ctx.cr6.lt) goto loc_831D4C64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4c3c
	if (!ctx.cr0.eq) goto loc_831D4C3C;
loc_831D4C64:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4C78"))) PPC_WEAK_FUNC(sub_831D4C78);
PPC_FUNC_IMPL(__imp__sub_831D4C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15360
	ctx.r9.s64 = ctx.r10.s64 + -15360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4C8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4cb4
	if (!ctx.cr6.lt) goto loc_831D4CB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4c8c
	if (!ctx.cr0.eq) goto loc_831D4C8C;
loc_831D4CB4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4CC8"))) PPC_WEAK_FUNC(sub_831D4CC8);
PPC_FUNC_IMPL(__imp__sub_831D4CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15340
	ctx.r9.s64 = ctx.r10.s64 + -15340;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4CDC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4d04
	if (!ctx.cr6.lt) goto loc_831D4D04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4cdc
	if (!ctx.cr0.eq) goto loc_831D4CDC;
loc_831D4D04:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4D18"))) PPC_WEAK_FUNC(sub_831D4D18);
PPC_FUNC_IMPL(__imp__sub_831D4D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15316
	ctx.r9.s64 = ctx.r10.s64 + -15316;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4D2C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4d54
	if (!ctx.cr6.lt) goto loc_831D4D54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4d2c
	if (!ctx.cr0.eq) goto loc_831D4D2C;
loc_831D4D54:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4D68"))) PPC_WEAK_FUNC(sub_831D4D68);
PPC_FUNC_IMPL(__imp__sub_831D4D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15292
	ctx.r9.s64 = ctx.r10.s64 + -15292;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4D7C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4da4
	if (!ctx.cr6.lt) goto loc_831D4DA4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4d7c
	if (!ctx.cr0.eq) goto loc_831D4D7C;
loc_831D4DA4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4DB8"))) PPC_WEAK_FUNC(sub_831D4DB8);
PPC_FUNC_IMPL(__imp__sub_831D4DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15264
	ctx.r9.s64 = ctx.r10.s64 + -15264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4DCC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4df4
	if (!ctx.cr6.lt) goto loc_831D4DF4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4dcc
	if (!ctx.cr0.eq) goto loc_831D4DCC;
loc_831D4DF4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4E08"))) PPC_WEAK_FUNC(sub_831D4E08);
PPC_FUNC_IMPL(__imp__sub_831D4E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15244
	ctx.r9.s64 = ctx.r10.s64 + -15244;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4E1C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4e44
	if (!ctx.cr6.lt) goto loc_831D4E44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4e1c
	if (!ctx.cr0.eq) goto loc_831D4E1C;
loc_831D4E44:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4E58"))) PPC_WEAK_FUNC(sub_831D4E58);
PPC_FUNC_IMPL(__imp__sub_831D4E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15220
	ctx.r9.s64 = ctx.r10.s64 + -15220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4E6C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4e94
	if (!ctx.cr6.lt) goto loc_831D4E94;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4e6c
	if (!ctx.cr0.eq) goto loc_831D4E6C;
loc_831D4E94:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4EA8"))) PPC_WEAK_FUNC(sub_831D4EA8);
PPC_FUNC_IMPL(__imp__sub_831D4EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15204
	ctx.r9.s64 = ctx.r10.s64 + -15204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4EBC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4ee4
	if (!ctx.cr6.lt) goto loc_831D4EE4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4ebc
	if (!ctx.cr0.eq) goto loc_831D4EBC;
loc_831D4EE4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4EF8"))) PPC_WEAK_FUNC(sub_831D4EF8);
PPC_FUNC_IMPL(__imp__sub_831D4EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15496
	ctx.r9.s64 = ctx.r10.s64 + -15496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4F0C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4f34
	if (!ctx.cr6.lt) goto loc_831D4F34;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4f0c
	if (!ctx.cr0.eq) goto loc_831D4F0C;
loc_831D4F34:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4F48"))) PPC_WEAK_FUNC(sub_831D4F48);
PPC_FUNC_IMPL(__imp__sub_831D4F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15476
	ctx.r9.s64 = ctx.r10.s64 + -15476;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4F5C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4f84
	if (!ctx.cr6.lt) goto loc_831D4F84;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4f5c
	if (!ctx.cr0.eq) goto loc_831D4F5C;
loc_831D4F84:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4F98"))) PPC_WEAK_FUNC(sub_831D4F98);
PPC_FUNC_IMPL(__imp__sub_831D4F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15456
	ctx.r9.s64 = ctx.r10.s64 + -15456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4FAC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d4fd4
	if (!ctx.cr6.lt) goto loc_831D4FD4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4fac
	if (!ctx.cr0.eq) goto loc_831D4FAC;
loc_831D4FD4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D4FE8"))) PPC_WEAK_FUNC(sub_831D4FE8);
PPC_FUNC_IMPL(__imp__sub_831D4FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15436
	ctx.r9.s64 = ctx.r10.s64 + -15436;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D4FFC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5024
	if (!ctx.cr6.lt) goto loc_831D5024;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d4ffc
	if (!ctx.cr0.eq) goto loc_831D4FFC;
loc_831D5024:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5038"))) PPC_WEAK_FUNC(sub_831D5038);
PPC_FUNC_IMPL(__imp__sub_831D5038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15420
	ctx.r9.s64 = ctx.r10.s64 + -15420;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D504C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5074
	if (!ctx.cr6.lt) goto loc_831D5074;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d504c
	if (!ctx.cr0.eq) goto loc_831D504C;
loc_831D5074:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5088"))) PPC_WEAK_FUNC(sub_831D5088);
PPC_FUNC_IMPL(__imp__sub_831D5088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15404
	ctx.r9.s64 = ctx.r10.s64 + -15404;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D509C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d50c4
	if (!ctx.cr6.lt) goto loc_831D50C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d509c
	if (!ctx.cr0.eq) goto loc_831D509C;
loc_831D50C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D50D8"))) PPC_WEAK_FUNC(sub_831D50D8);
PPC_FUNC_IMPL(__imp__sub_831D50D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15384
	ctx.r9.s64 = ctx.r10.s64 + -15384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D50EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5114
	if (!ctx.cr6.lt) goto loc_831D5114;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d50ec
	if (!ctx.cr0.eq) goto loc_831D50EC;
loc_831D5114:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5128"))) PPC_WEAK_FUNC(sub_831D5128);
PPC_FUNC_IMPL(__imp__sub_831D5128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15360
	ctx.r9.s64 = ctx.r10.s64 + -15360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D513C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5164
	if (!ctx.cr6.lt) goto loc_831D5164;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d513c
	if (!ctx.cr0.eq) goto loc_831D513C;
loc_831D5164:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5178"))) PPC_WEAK_FUNC(sub_831D5178);
PPC_FUNC_IMPL(__imp__sub_831D5178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15340
	ctx.r9.s64 = ctx.r10.s64 + -15340;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D518C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d51b4
	if (!ctx.cr6.lt) goto loc_831D51B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d518c
	if (!ctx.cr0.eq) goto loc_831D518C;
loc_831D51B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D51C8"))) PPC_WEAK_FUNC(sub_831D51C8);
PPC_FUNC_IMPL(__imp__sub_831D51C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15316
	ctx.r9.s64 = ctx.r10.s64 + -15316;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D51DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5204
	if (!ctx.cr6.lt) goto loc_831D5204;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d51dc
	if (!ctx.cr0.eq) goto loc_831D51DC;
loc_831D5204:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5218"))) PPC_WEAK_FUNC(sub_831D5218);
PPC_FUNC_IMPL(__imp__sub_831D5218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15292
	ctx.r9.s64 = ctx.r10.s64 + -15292;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D522C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5254
	if (!ctx.cr6.lt) goto loc_831D5254;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d522c
	if (!ctx.cr0.eq) goto loc_831D522C;
loc_831D5254:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5268"))) PPC_WEAK_FUNC(sub_831D5268);
PPC_FUNC_IMPL(__imp__sub_831D5268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15264
	ctx.r9.s64 = ctx.r10.s64 + -15264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D527C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d52a4
	if (!ctx.cr6.lt) goto loc_831D52A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d527c
	if (!ctx.cr0.eq) goto loc_831D527C;
loc_831D52A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D52B8"))) PPC_WEAK_FUNC(sub_831D52B8);
PPC_FUNC_IMPL(__imp__sub_831D52B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15244
	ctx.r9.s64 = ctx.r10.s64 + -15244;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D52CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d52f4
	if (!ctx.cr6.lt) goto loc_831D52F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d52cc
	if (!ctx.cr0.eq) goto loc_831D52CC;
loc_831D52F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5308"))) PPC_WEAK_FUNC(sub_831D5308);
PPC_FUNC_IMPL(__imp__sub_831D5308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15220
	ctx.r9.s64 = ctx.r10.s64 + -15220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D531C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5344
	if (!ctx.cr6.lt) goto loc_831D5344;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d531c
	if (!ctx.cr0.eq) goto loc_831D531C;
loc_831D5344:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5358"))) PPC_WEAK_FUNC(sub_831D5358);
PPC_FUNC_IMPL(__imp__sub_831D5358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15204
	ctx.r9.s64 = ctx.r10.s64 + -15204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D536C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5394
	if (!ctx.cr6.lt) goto loc_831D5394;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d536c
	if (!ctx.cr0.eq) goto loc_831D536C;
loc_831D5394:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D53A8"))) PPC_WEAK_FUNC(sub_831D53A8);
PPC_FUNC_IMPL(__imp__sub_831D53A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16076
	ctx.r9.s64 = ctx.r10.s64 + -16076;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D53BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d53e4
	if (!ctx.cr6.lt) goto loc_831D53E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d53bc
	if (!ctx.cr0.eq) goto loc_831D53BC;
loc_831D53E4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D53F8"))) PPC_WEAK_FUNC(sub_831D53F8);
PPC_FUNC_IMPL(__imp__sub_831D53F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16064
	ctx.r9.s64 = ctx.r10.s64 + -16064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D540C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5434
	if (!ctx.cr6.lt) goto loc_831D5434;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d540c
	if (!ctx.cr0.eq) goto loc_831D540C;
loc_831D5434:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5448"))) PPC_WEAK_FUNC(sub_831D5448);
PPC_FUNC_IMPL(__imp__sub_831D5448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16052
	ctx.r9.s64 = ctx.r10.s64 + -16052;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D545C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5484
	if (!ctx.cr6.lt) goto loc_831D5484;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d545c
	if (!ctx.cr0.eq) goto loc_831D545C;
loc_831D5484:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5498"))) PPC_WEAK_FUNC(sub_831D5498);
PPC_FUNC_IMPL(__imp__sub_831D5498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16032
	ctx.r9.s64 = ctx.r10.s64 + -16032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D54AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d54d4
	if (!ctx.cr6.lt) goto loc_831D54D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d54ac
	if (!ctx.cr0.eq) goto loc_831D54AC;
loc_831D54D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6828, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D54E8"))) PPC_WEAK_FUNC(sub_831D54E8);
PPC_FUNC_IMPL(__imp__sub_831D54E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16012
	ctx.r9.s64 = ctx.r10.s64 + -16012;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D54FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5524
	if (!ctx.cr6.lt) goto loc_831D5524;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d54fc
	if (!ctx.cr0.eq) goto loc_831D54FC;
loc_831D5524:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5538"))) PPC_WEAK_FUNC(sub_831D5538);
PPC_FUNC_IMPL(__imp__sub_831D5538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16000
	ctx.r9.s64 = ctx.r10.s64 + -16000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D554C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5574
	if (!ctx.cr6.lt) goto loc_831D5574;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d554c
	if (!ctx.cr0.eq) goto loc_831D554C;
loc_831D5574:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5588"))) PPC_WEAK_FUNC(sub_831D5588);
PPC_FUNC_IMPL(__imp__sub_831D5588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15988
	ctx.r9.s64 = ctx.r10.s64 + -15988;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D559C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d55c4
	if (!ctx.cr6.lt) goto loc_831D55C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d559c
	if (!ctx.cr0.eq) goto loc_831D559C;
loc_831D55C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D55D8"))) PPC_WEAK_FUNC(sub_831D55D8);
PPC_FUNC_IMPL(__imp__sub_831D55D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15972
	ctx.r9.s64 = ctx.r10.s64 + -15972;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D55EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5614
	if (!ctx.cr6.lt) goto loc_831D5614;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d55ec
	if (!ctx.cr0.eq) goto loc_831D55EC;
loc_831D5614:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5628"))) PPC_WEAK_FUNC(sub_831D5628);
PPC_FUNC_IMPL(__imp__sub_831D5628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15956
	ctx.r9.s64 = ctx.r10.s64 + -15956;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D563C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5664
	if (!ctx.cr6.lt) goto loc_831D5664;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d563c
	if (!ctx.cr0.eq) goto loc_831D563C;
loc_831D5664:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5678"))) PPC_WEAK_FUNC(sub_831D5678);
PPC_FUNC_IMPL(__imp__sub_831D5678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15936
	ctx.r9.s64 = ctx.r10.s64 + -15936;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D568C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d56b4
	if (!ctx.cr6.lt) goto loc_831D56B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d568c
	if (!ctx.cr0.eq) goto loc_831D568C;
loc_831D56B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D56C8"))) PPC_WEAK_FUNC(sub_831D56C8);
PPC_FUNC_IMPL(__imp__sub_831D56C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15920
	ctx.r9.s64 = ctx.r10.s64 + -15920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D56DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5704
	if (!ctx.cr6.lt) goto loc_831D5704;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d56dc
	if (!ctx.cr0.eq) goto loc_831D56DC;
loc_831D5704:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5718"))) PPC_WEAK_FUNC(sub_831D5718);
PPC_FUNC_IMPL(__imp__sub_831D5718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15900
	ctx.r9.s64 = ctx.r10.s64 + -15900;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D572C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5754
	if (!ctx.cr6.lt) goto loc_831D5754;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d572c
	if (!ctx.cr0.eq) goto loc_831D572C;
loc_831D5754:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6832, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5768"))) PPC_WEAK_FUNC(sub_831D5768);
PPC_FUNC_IMPL(__imp__sub_831D5768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15876
	ctx.r9.s64 = ctx.r10.s64 + -15876;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D577C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d57a4
	if (!ctx.cr6.lt) goto loc_831D57A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d577c
	if (!ctx.cr0.eq) goto loc_831D577C;
loc_831D57A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D57B8"))) PPC_WEAK_FUNC(sub_831D57B8);
PPC_FUNC_IMPL(__imp__sub_831D57B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15856
	ctx.r9.s64 = ctx.r10.s64 + -15856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D57CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d57f4
	if (!ctx.cr6.lt) goto loc_831D57F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d57cc
	if (!ctx.cr0.eq) goto loc_831D57CC;
loc_831D57F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5808"))) PPC_WEAK_FUNC(sub_831D5808);
PPC_FUNC_IMPL(__imp__sub_831D5808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15840
	ctx.r9.s64 = ctx.r10.s64 + -15840;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D581C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5844
	if (!ctx.cr6.lt) goto loc_831D5844;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d581c
	if (!ctx.cr0.eq) goto loc_831D581C;
loc_831D5844:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5858"))) PPC_WEAK_FUNC(sub_831D5858);
PPC_FUNC_IMPL(__imp__sub_831D5858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15820
	ctx.r9.s64 = ctx.r10.s64 + -15820;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D586C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5894
	if (!ctx.cr6.lt) goto loc_831D5894;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d586c
	if (!ctx.cr0.eq) goto loc_831D586C;
loc_831D5894:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D58A8"))) PPC_WEAK_FUNC(sub_831D58A8);
PPC_FUNC_IMPL(__imp__sub_831D58A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15796
	ctx.r9.s64 = ctx.r10.s64 + -15796;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D58BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d58e4
	if (!ctx.cr6.lt) goto loc_831D58E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d58bc
	if (!ctx.cr0.eq) goto loc_831D58BC;
loc_831D58E4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D58F8"))) PPC_WEAK_FUNC(sub_831D58F8);
PPC_FUNC_IMPL(__imp__sub_831D58F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15788
	ctx.r9.s64 = ctx.r10.s64 + -15788;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D590C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5934
	if (!ctx.cr6.lt) goto loc_831D5934;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d590c
	if (!ctx.cr0.eq) goto loc_831D590C;
loc_831D5934:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5948"))) PPC_WEAK_FUNC(sub_831D5948);
PPC_FUNC_IMPL(__imp__sub_831D5948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15776
	ctx.r9.s64 = ctx.r10.s64 + -15776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D595C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5984
	if (!ctx.cr6.lt) goto loc_831D5984;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d595c
	if (!ctx.cr0.eq) goto loc_831D595C;
loc_831D5984:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5998"))) PPC_WEAK_FUNC(sub_831D5998);
PPC_FUNC_IMPL(__imp__sub_831D5998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15768
	ctx.r9.s64 = ctx.r10.s64 + -15768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D59AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d59d4
	if (!ctx.cr6.lt) goto loc_831D59D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d59ac
	if (!ctx.cr0.eq) goto loc_831D59AC;
loc_831D59D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D59E8"))) PPC_WEAK_FUNC(sub_831D59E8);
PPC_FUNC_IMPL(__imp__sub_831D59E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15760
	ctx.r9.s64 = ctx.r10.s64 + -15760;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D59FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5a24
	if (!ctx.cr6.lt) goto loc_831D5A24;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d59fc
	if (!ctx.cr0.eq) goto loc_831D59FC;
loc_831D5A24:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5A38"))) PPC_WEAK_FUNC(sub_831D5A38);
PPC_FUNC_IMPL(__imp__sub_831D5A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15752
	ctx.r9.s64 = ctx.r10.s64 + -15752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5A4C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5a74
	if (!ctx.cr6.lt) goto loc_831D5A74;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5a4c
	if (!ctx.cr0.eq) goto loc_831D5A4C;
loc_831D5A74:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5A88"))) PPC_WEAK_FUNC(sub_831D5A88);
PPC_FUNC_IMPL(__imp__sub_831D5A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,12988
	ctx.r9.s64 = ctx.r10.s64 + 12988;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5A9C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5ac4
	if (!ctx.cr6.lt) goto loc_831D5AC4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5a9c
	if (!ctx.cr0.eq) goto loc_831D5A9C;
loc_831D5AC4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5AD8"))) PPC_WEAK_FUNC(sub_831D5AD8);
PPC_FUNC_IMPL(__imp__sub_831D5AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27388
	ctx.r9.s64 = ctx.r10.s64 + -27388;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5AEC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5b14
	if (!ctx.cr6.lt) goto loc_831D5B14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5aec
	if (!ctx.cr0.eq) goto loc_831D5AEC;
loc_831D5B14:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5B28"))) PPC_WEAK_FUNC(sub_831D5B28);
PPC_FUNC_IMPL(__imp__sub_831D5B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,25904
	ctx.r9.s64 = ctx.r10.s64 + 25904;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5B3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5b64
	if (!ctx.cr6.lt) goto loc_831D5B64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5b3c
	if (!ctx.cr0.eq) goto loc_831D5B3C;
loc_831D5B64:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5B78"))) PPC_WEAK_FUNC(sub_831D5B78);
PPC_FUNC_IMPL(__imp__sub_831D5B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22100
	ctx.r9.s64 = ctx.r10.s64 + 22100;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5B8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5bb4
	if (!ctx.cr6.lt) goto loc_831D5BB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5b8c
	if (!ctx.cr0.eq) goto loc_831D5B8C;
loc_831D5BB4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5BC8"))) PPC_WEAK_FUNC(sub_831D5BC8);
PPC_FUNC_IMPL(__imp__sub_831D5BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22112
	ctx.r9.s64 = ctx.r10.s64 + 22112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5BDC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5c04
	if (!ctx.cr6.lt) goto loc_831D5C04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5bdc
	if (!ctx.cr0.eq) goto loc_831D5BDC;
loc_831D5C04:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5C18"))) PPC_WEAK_FUNC(sub_831D5C18);
PPC_FUNC_IMPL(__imp__sub_831D5C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24732
	ctx.r9.s64 = ctx.r10.s64 + -24732;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5C2C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5c54
	if (!ctx.cr6.lt) goto loc_831D5C54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5c2c
	if (!ctx.cr0.eq) goto loc_831D5C2C;
loc_831D5C54:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5C68"))) PPC_WEAK_FUNC(sub_831D5C68);
PPC_FUNC_IMPL(__imp__sub_831D5C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31856
	ctx.r9.s64 = ctx.r10.s64 + 31856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5C7C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5ca4
	if (!ctx.cr6.lt) goto loc_831D5CA4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5c7c
	if (!ctx.cr0.eq) goto loc_831D5C7C;
loc_831D5CA4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5CB8"))) PPC_WEAK_FUNC(sub_831D5CB8);
PPC_FUNC_IMPL(__imp__sub_831D5CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31868
	ctx.r9.s64 = ctx.r10.s64 + 31868;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5CCC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5cf4
	if (!ctx.cr6.lt) goto loc_831D5CF4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5ccc
	if (!ctx.cr0.eq) goto loc_831D5CCC;
loc_831D5CF4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5D08"))) PPC_WEAK_FUNC(sub_831D5D08);
PPC_FUNC_IMPL(__imp__sub_831D5D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31880
	ctx.r9.s64 = ctx.r10.s64 + 31880;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5D1C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5d44
	if (!ctx.cr6.lt) goto loc_831D5D44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5d1c
	if (!ctx.cr0.eq) goto loc_831D5D1C;
loc_831D5D44:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5D58"))) PPC_WEAK_FUNC(sub_831D5D58);
PPC_FUNC_IMPL(__imp__sub_831D5D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22120
	ctx.r9.s64 = ctx.r10.s64 + 22120;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5D6C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5d94
	if (!ctx.cr6.lt) goto loc_831D5D94;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5d6c
	if (!ctx.cr0.eq) goto loc_831D5D6C;
loc_831D5D94:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5DA8"))) PPC_WEAK_FUNC(sub_831D5DA8);
PPC_FUNC_IMPL(__imp__sub_831D5DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22132
	ctx.r9.s64 = ctx.r10.s64 + 22132;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5DBC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5de4
	if (!ctx.cr6.lt) goto loc_831D5DE4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5dbc
	if (!ctx.cr0.eq) goto loc_831D5DBC;
loc_831D5DE4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5DF8"))) PPC_WEAK_FUNC(sub_831D5DF8);
PPC_FUNC_IMPL(__imp__sub_831D5DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22144
	ctx.r9.s64 = ctx.r10.s64 + 22144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5E0C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5e34
	if (!ctx.cr6.lt) goto loc_831D5E34;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5e0c
	if (!ctx.cr0.eq) goto loc_831D5E0C;
loc_831D5E34:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5E48"))) PPC_WEAK_FUNC(sub_831D5E48);
PPC_FUNC_IMPL(__imp__sub_831D5E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22156
	ctx.r9.s64 = ctx.r10.s64 + 22156;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5E5C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5e84
	if (!ctx.cr6.lt) goto loc_831D5E84;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5e5c
	if (!ctx.cr0.eq) goto loc_831D5E5C;
loc_831D5E84:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5E98"))) PPC_WEAK_FUNC(sub_831D5E98);
PPC_FUNC_IMPL(__imp__sub_831D5E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22164
	ctx.r9.s64 = ctx.r10.s64 + 22164;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5EAC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5ed4
	if (!ctx.cr6.lt) goto loc_831D5ED4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5eac
	if (!ctx.cr0.eq) goto loc_831D5EAC;
loc_831D5ED4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5EE8"))) PPC_WEAK_FUNC(sub_831D5EE8);
PPC_FUNC_IMPL(__imp__sub_831D5EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22172
	ctx.r9.s64 = ctx.r10.s64 + 22172;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5EFC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5f24
	if (!ctx.cr6.lt) goto loc_831D5F24;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5efc
	if (!ctx.cr0.eq) goto loc_831D5EFC;
loc_831D5F24:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5F38"))) PPC_WEAK_FUNC(sub_831D5F38);
PPC_FUNC_IMPL(__imp__sub_831D5F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22180
	ctx.r9.s64 = ctx.r10.s64 + 22180;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5F4C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5f74
	if (!ctx.cr6.lt) goto loc_831D5F74;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5f4c
	if (!ctx.cr0.eq) goto loc_831D5F4C;
loc_831D5F74:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5F88"))) PPC_WEAK_FUNC(sub_831D5F88);
PPC_FUNC_IMPL(__imp__sub_831D5F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22188
	ctx.r9.s64 = ctx.r10.s64 + 22188;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5F9C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d5fc4
	if (!ctx.cr6.lt) goto loc_831D5FC4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5f9c
	if (!ctx.cr0.eq) goto loc_831D5F9C;
loc_831D5FC4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D5FD8"))) PPC_WEAK_FUNC(sub_831D5FD8);
PPC_FUNC_IMPL(__imp__sub_831D5FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22196
	ctx.r9.s64 = ctx.r10.s64 + 22196;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D5FEC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6014
	if (!ctx.cr6.lt) goto loc_831D6014;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d5fec
	if (!ctx.cr0.eq) goto loc_831D5FEC;
loc_831D6014:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6028"))) PPC_WEAK_FUNC(sub_831D6028);
PPC_FUNC_IMPL(__imp__sub_831D6028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22204
	ctx.r9.s64 = ctx.r10.s64 + 22204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D603C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6064
	if (!ctx.cr6.lt) goto loc_831D6064;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d603c
	if (!ctx.cr0.eq) goto loc_831D603C;
loc_831D6064:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6078"))) PPC_WEAK_FUNC(sub_831D6078);
PPC_FUNC_IMPL(__imp__sub_831D6078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22220
	ctx.r9.s64 = ctx.r10.s64 + 22220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D608C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d60b4
	if (!ctx.cr6.lt) goto loc_831D60B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d608c
	if (!ctx.cr0.eq) goto loc_831D608C;
loc_831D60B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D60C8"))) PPC_WEAK_FUNC(sub_831D60C8);
PPC_FUNC_IMPL(__imp__sub_831D60C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22232
	ctx.r9.s64 = ctx.r10.s64 + 22232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D60DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6104
	if (!ctx.cr6.lt) goto loc_831D6104;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d60dc
	if (!ctx.cr0.eq) goto loc_831D60DC;
loc_831D6104:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6118"))) PPC_WEAK_FUNC(sub_831D6118);
PPC_FUNC_IMPL(__imp__sub_831D6118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22244
	ctx.r9.s64 = ctx.r10.s64 + 22244;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D612C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6154
	if (!ctx.cr6.lt) goto loc_831D6154;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d612c
	if (!ctx.cr0.eq) goto loc_831D612C;
loc_831D6154:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6168"))) PPC_WEAK_FUNC(sub_831D6168);
PPC_FUNC_IMPL(__imp__sub_831D6168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30896
	ctx.r9.s64 = ctx.r10.s64 + 30896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D617C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d61a4
	if (!ctx.cr6.lt) goto loc_831D61A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d617c
	if (!ctx.cr0.eq) goto loc_831D617C;
loc_831D61A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D61B8"))) PPC_WEAK_FUNC(sub_831D61B8);
PPC_FUNC_IMPL(__imp__sub_831D61B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22252
	ctx.r9.s64 = ctx.r10.s64 + 22252;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D61CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d61f4
	if (!ctx.cr6.lt) goto loc_831D61F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d61cc
	if (!ctx.cr0.eq) goto loc_831D61CC;
loc_831D61F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6208"))) PPC_WEAK_FUNC(sub_831D6208);
PPC_FUNC_IMPL(__imp__sub_831D6208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22260
	ctx.r9.s64 = ctx.r10.s64 + 22260;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D621C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6244
	if (!ctx.cr6.lt) goto loc_831D6244;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d621c
	if (!ctx.cr0.eq) goto loc_831D621C;
loc_831D6244:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6258"))) PPC_WEAK_FUNC(sub_831D6258);
PPC_FUNC_IMPL(__imp__sub_831D6258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22268
	ctx.r9.s64 = ctx.r10.s64 + 22268;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D626C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6294
	if (!ctx.cr6.lt) goto loc_831D6294;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d626c
	if (!ctx.cr0.eq) goto loc_831D626C;
loc_831D6294:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D62A8"))) PPC_WEAK_FUNC(sub_831D62A8);
PPC_FUNC_IMPL(__imp__sub_831D62A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22280
	ctx.r9.s64 = ctx.r10.s64 + 22280;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D62BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d62e4
	if (!ctx.cr6.lt) goto loc_831D62E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d62bc
	if (!ctx.cr0.eq) goto loc_831D62BC;
loc_831D62E4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D62F8"))) PPC_WEAK_FUNC(sub_831D62F8);
PPC_FUNC_IMPL(__imp__sub_831D62F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22292
	ctx.r9.s64 = ctx.r10.s64 + 22292;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D630C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6334
	if (!ctx.cr6.lt) goto loc_831D6334;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d630c
	if (!ctx.cr0.eq) goto loc_831D630C;
loc_831D6334:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6348"))) PPC_WEAK_FUNC(sub_831D6348);
PPC_FUNC_IMPL(__imp__sub_831D6348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22304
	ctx.r9.s64 = ctx.r10.s64 + 22304;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D635C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6384
	if (!ctx.cr6.lt) goto loc_831D6384;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d635c
	if (!ctx.cr0.eq) goto loc_831D635C;
loc_831D6384:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6398"))) PPC_WEAK_FUNC(sub_831D6398);
PPC_FUNC_IMPL(__imp__sub_831D6398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22316
	ctx.r9.s64 = ctx.r10.s64 + 22316;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D63AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d63d4
	if (!ctx.cr6.lt) goto loc_831D63D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d63ac
	if (!ctx.cr0.eq) goto loc_831D63AC;
loc_831D63D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D63E8"))) PPC_WEAK_FUNC(sub_831D63E8);
PPC_FUNC_IMPL(__imp__sub_831D63E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32604
	ctx.r9.s64 = ctx.r10.s64 + 32604;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D63FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6424
	if (!ctx.cr6.lt) goto loc_831D6424;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d63fc
	if (!ctx.cr0.eq) goto loc_831D63FC;
loc_831D6424:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6438"))) PPC_WEAK_FUNC(sub_831D6438);
PPC_FUNC_IMPL(__imp__sub_831D6438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22332
	ctx.r9.s64 = ctx.r10.s64 + 22332;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D644C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6474
	if (!ctx.cr6.lt) goto loc_831D6474;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d644c
	if (!ctx.cr0.eq) goto loc_831D644C;
loc_831D6474:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6488"))) PPC_WEAK_FUNC(sub_831D6488);
PPC_FUNC_IMPL(__imp__sub_831D6488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6912
	ctx.r9.s64 = ctx.r10.s64 + -6912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D649C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d64c4
	if (!ctx.cr6.lt) goto loc_831D64C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d649c
	if (!ctx.cr0.eq) goto loc_831D649C;
loc_831D64C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D64D8"))) PPC_WEAK_FUNC(sub_831D64D8);
PPC_FUNC_IMPL(__imp__sub_831D64D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22348
	ctx.r9.s64 = ctx.r10.s64 + 22348;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D64EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6514
	if (!ctx.cr6.lt) goto loc_831D6514;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d64ec
	if (!ctx.cr0.eq) goto loc_831D64EC;
loc_831D6514:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6528"))) PPC_WEAK_FUNC(sub_831D6528);
PPC_FUNC_IMPL(__imp__sub_831D6528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22360
	ctx.r9.s64 = ctx.r10.s64 + 22360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D653C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6564
	if (!ctx.cr6.lt) goto loc_831D6564;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d653c
	if (!ctx.cr0.eq) goto loc_831D653C;
loc_831D6564:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6578"))) PPC_WEAK_FUNC(sub_831D6578);
PPC_FUNC_IMPL(__imp__sub_831D6578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22368
	ctx.r9.s64 = ctx.r10.s64 + 22368;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D658C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d65b4
	if (!ctx.cr6.lt) goto loc_831D65B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d658c
	if (!ctx.cr0.eq) goto loc_831D658C;
loc_831D65B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D65C8"))) PPC_WEAK_FUNC(sub_831D65C8);
PPC_FUNC_IMPL(__imp__sub_831D65C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22384
	ctx.r9.s64 = ctx.r10.s64 + 22384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D65DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6604
	if (!ctx.cr6.lt) goto loc_831D6604;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d65dc
	if (!ctx.cr0.eq) goto loc_831D65DC;
loc_831D6604:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6618"))) PPC_WEAK_FUNC(sub_831D6618);
PPC_FUNC_IMPL(__imp__sub_831D6618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22400
	ctx.r9.s64 = ctx.r10.s64 + 22400;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D662C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6654
	if (!ctx.cr6.lt) goto loc_831D6654;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d662c
	if (!ctx.cr0.eq) goto loc_831D662C;
loc_831D6654:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6668"))) PPC_WEAK_FUNC(sub_831D6668);
PPC_FUNC_IMPL(__imp__sub_831D6668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22416
	ctx.r9.s64 = ctx.r10.s64 + 22416;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D667C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d66a4
	if (!ctx.cr6.lt) goto loc_831D66A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d667c
	if (!ctx.cr0.eq) goto loc_831D667C;
loc_831D66A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D66B8"))) PPC_WEAK_FUNC(sub_831D66B8);
PPC_FUNC_IMPL(__imp__sub_831D66B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22432
	ctx.r9.s64 = ctx.r10.s64 + 22432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D66CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d66f4
	if (!ctx.cr6.lt) goto loc_831D66F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d66cc
	if (!ctx.cr0.eq) goto loc_831D66CC;
loc_831D66F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6708"))) PPC_WEAK_FUNC(sub_831D6708);
PPC_FUNC_IMPL(__imp__sub_831D6708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22448
	ctx.r9.s64 = ctx.r10.s64 + 22448;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D671C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6744
	if (!ctx.cr6.lt) goto loc_831D6744;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d671c
	if (!ctx.cr0.eq) goto loc_831D671C;
loc_831D6744:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6758"))) PPC_WEAK_FUNC(sub_831D6758);
PPC_FUNC_IMPL(__imp__sub_831D6758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22464
	ctx.r9.s64 = ctx.r10.s64 + 22464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D676C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6794
	if (!ctx.cr6.lt) goto loc_831D6794;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d676c
	if (!ctx.cr0.eq) goto loc_831D676C;
loc_831D6794:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D67A8"))) PPC_WEAK_FUNC(sub_831D67A8);
PPC_FUNC_IMPL(__imp__sub_831D67A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22480
	ctx.r9.s64 = ctx.r10.s64 + 22480;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D67BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d67e4
	if (!ctx.cr6.lt) goto loc_831D67E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d67bc
	if (!ctx.cr0.eq) goto loc_831D67BC;
loc_831D67E4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D67F8"))) PPC_WEAK_FUNC(sub_831D67F8);
PPC_FUNC_IMPL(__imp__sub_831D67F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22496
	ctx.r9.s64 = ctx.r10.s64 + 22496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D680C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6834
	if (!ctx.cr6.lt) goto loc_831D6834;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d680c
	if (!ctx.cr0.eq) goto loc_831D680C;
loc_831D6834:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6848"))) PPC_WEAK_FUNC(sub_831D6848);
PPC_FUNC_IMPL(__imp__sub_831D6848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22512
	ctx.r9.s64 = ctx.r10.s64 + 22512;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D685C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6884
	if (!ctx.cr6.lt) goto loc_831D6884;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d685c
	if (!ctx.cr0.eq) goto loc_831D685C;
loc_831D6884:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6898"))) PPC_WEAK_FUNC(sub_831D6898);
PPC_FUNC_IMPL(__imp__sub_831D6898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22528
	ctx.r9.s64 = ctx.r10.s64 + 22528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D68AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d68d4
	if (!ctx.cr6.lt) goto loc_831D68D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d68ac
	if (!ctx.cr0.eq) goto loc_831D68AC;
loc_831D68D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D68E8"))) PPC_WEAK_FUNC(sub_831D68E8);
PPC_FUNC_IMPL(__imp__sub_831D68E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22544
	ctx.r9.s64 = ctx.r10.s64 + 22544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D68FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6924
	if (!ctx.cr6.lt) goto loc_831D6924;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d68fc
	if (!ctx.cr0.eq) goto loc_831D68FC;
loc_831D6924:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6938"))) PPC_WEAK_FUNC(sub_831D6938);
PPC_FUNC_IMPL(__imp__sub_831D6938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22556
	ctx.r9.s64 = ctx.r10.s64 + 22556;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D694C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6974
	if (!ctx.cr6.lt) goto loc_831D6974;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d694c
	if (!ctx.cr0.eq) goto loc_831D694C;
loc_831D6974:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6988"))) PPC_WEAK_FUNC(sub_831D6988);
PPC_FUNC_IMPL(__imp__sub_831D6988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22568
	ctx.r9.s64 = ctx.r10.s64 + 22568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D699C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d69c4
	if (!ctx.cr6.lt) goto loc_831D69C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d699c
	if (!ctx.cr0.eq) goto loc_831D699C;
loc_831D69C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D69D8"))) PPC_WEAK_FUNC(sub_831D69D8);
PPC_FUNC_IMPL(__imp__sub_831D69D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22580
	ctx.r9.s64 = ctx.r10.s64 + 22580;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D69EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6a14
	if (!ctx.cr6.lt) goto loc_831D6A14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d69ec
	if (!ctx.cr0.eq) goto loc_831D69EC;
loc_831D6A14:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6A28"))) PPC_WEAK_FUNC(sub_831D6A28);
PPC_FUNC_IMPL(__imp__sub_831D6A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22592
	ctx.r9.s64 = ctx.r10.s64 + 22592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6A3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6a64
	if (!ctx.cr6.lt) goto loc_831D6A64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6a3c
	if (!ctx.cr0.eq) goto loc_831D6A3C;
loc_831D6A64:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6A78"))) PPC_WEAK_FUNC(sub_831D6A78);
PPC_FUNC_IMPL(__imp__sub_831D6A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22604
	ctx.r9.s64 = ctx.r10.s64 + 22604;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6A8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6ab4
	if (!ctx.cr6.lt) goto loc_831D6AB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6a8c
	if (!ctx.cr0.eq) goto loc_831D6A8C;
loc_831D6AB4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6AC8"))) PPC_WEAK_FUNC(sub_831D6AC8);
PPC_FUNC_IMPL(__imp__sub_831D6AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22616
	ctx.r9.s64 = ctx.r10.s64 + 22616;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6ADC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6b04
	if (!ctx.cr6.lt) goto loc_831D6B04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6adc
	if (!ctx.cr0.eq) goto loc_831D6ADC;
loc_831D6B04:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6B18"))) PPC_WEAK_FUNC(sub_831D6B18);
PPC_FUNC_IMPL(__imp__sub_831D6B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22628
	ctx.r9.s64 = ctx.r10.s64 + 22628;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6B2C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6b54
	if (!ctx.cr6.lt) goto loc_831D6B54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6b2c
	if (!ctx.cr0.eq) goto loc_831D6B2C;
loc_831D6B54:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6B68"))) PPC_WEAK_FUNC(sub_831D6B68);
PPC_FUNC_IMPL(__imp__sub_831D6B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22640
	ctx.r9.s64 = ctx.r10.s64 + 22640;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6B7C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6ba4
	if (!ctx.cr6.lt) goto loc_831D6BA4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6b7c
	if (!ctx.cr0.eq) goto loc_831D6B7C;
loc_831D6BA4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6BB8"))) PPC_WEAK_FUNC(sub_831D6BB8);
PPC_FUNC_IMPL(__imp__sub_831D6BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22652
	ctx.r9.s64 = ctx.r10.s64 + 22652;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6BCC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6bf4
	if (!ctx.cr6.lt) goto loc_831D6BF4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6bcc
	if (!ctx.cr0.eq) goto loc_831D6BCC;
loc_831D6BF4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6C08"))) PPC_WEAK_FUNC(sub_831D6C08);
PPC_FUNC_IMPL(__imp__sub_831D6C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22668
	ctx.r9.s64 = ctx.r10.s64 + 22668;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6C1C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6c44
	if (!ctx.cr6.lt) goto loc_831D6C44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6c1c
	if (!ctx.cr0.eq) goto loc_831D6C1C;
loc_831D6C44:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6C58"))) PPC_WEAK_FUNC(sub_831D6C58);
PPC_FUNC_IMPL(__imp__sub_831D6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22680
	ctx.r9.s64 = ctx.r10.s64 + 22680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6C6C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6c94
	if (!ctx.cr6.lt) goto loc_831D6C94;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6c6c
	if (!ctx.cr0.eq) goto loc_831D6C6C;
loc_831D6C94:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6CA8"))) PPC_WEAK_FUNC(sub_831D6CA8);
PPC_FUNC_IMPL(__imp__sub_831D6CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22692
	ctx.r9.s64 = ctx.r10.s64 + 22692;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6CBC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6ce4
	if (!ctx.cr6.lt) goto loc_831D6CE4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6cbc
	if (!ctx.cr0.eq) goto loc_831D6CBC;
loc_831D6CE4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6CF8"))) PPC_WEAK_FUNC(sub_831D6CF8);
PPC_FUNC_IMPL(__imp__sub_831D6CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22704
	ctx.r9.s64 = ctx.r10.s64 + 22704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6D0C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6d34
	if (!ctx.cr6.lt) goto loc_831D6D34;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6d0c
	if (!ctx.cr0.eq) goto loc_831D6D0C;
loc_831D6D34:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6D48"))) PPC_WEAK_FUNC(sub_831D6D48);
PPC_FUNC_IMPL(__imp__sub_831D6D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22712
	ctx.r9.s64 = ctx.r10.s64 + 22712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6D5C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6d84
	if (!ctx.cr6.lt) goto loc_831D6D84;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6d5c
	if (!ctx.cr0.eq) goto loc_831D6D5C;
loc_831D6D84:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6D98"))) PPC_WEAK_FUNC(sub_831D6D98);
PPC_FUNC_IMPL(__imp__sub_831D6D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22720
	ctx.r9.s64 = ctx.r10.s64 + 22720;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6DAC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6dd4
	if (!ctx.cr6.lt) goto loc_831D6DD4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6dac
	if (!ctx.cr0.eq) goto loc_831D6DAC;
loc_831D6DD4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6DE8"))) PPC_WEAK_FUNC(sub_831D6DE8);
PPC_FUNC_IMPL(__imp__sub_831D6DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22728
	ctx.r9.s64 = ctx.r10.s64 + 22728;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6DFC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6e24
	if (!ctx.cr6.lt) goto loc_831D6E24;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6dfc
	if (!ctx.cr0.eq) goto loc_831D6DFC;
loc_831D6E24:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6E38"))) PPC_WEAK_FUNC(sub_831D6E38);
PPC_FUNC_IMPL(__imp__sub_831D6E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22736
	ctx.r9.s64 = ctx.r10.s64 + 22736;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6E4C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6e74
	if (!ctx.cr6.lt) goto loc_831D6E74;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6e4c
	if (!ctx.cr0.eq) goto loc_831D6E4C;
loc_831D6E74:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6E88"))) PPC_WEAK_FUNC(sub_831D6E88);
PPC_FUNC_IMPL(__imp__sub_831D6E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22752
	ctx.r9.s64 = ctx.r10.s64 + 22752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6E9C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6ec4
	if (!ctx.cr6.lt) goto loc_831D6EC4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6e9c
	if (!ctx.cr0.eq) goto loc_831D6E9C;
loc_831D6EC4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6ED8"))) PPC_WEAK_FUNC(sub_831D6ED8);
PPC_FUNC_IMPL(__imp__sub_831D6ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22768
	ctx.r9.s64 = ctx.r10.s64 + 22768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6EEC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6f14
	if (!ctx.cr6.lt) goto loc_831D6F14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6eec
	if (!ctx.cr0.eq) goto loc_831D6EEC;
loc_831D6F14:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6F28"))) PPC_WEAK_FUNC(sub_831D6F28);
PPC_FUNC_IMPL(__imp__sub_831D6F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22784
	ctx.r9.s64 = ctx.r10.s64 + 22784;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6F3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6f64
	if (!ctx.cr6.lt) goto loc_831D6F64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6f3c
	if (!ctx.cr0.eq) goto loc_831D6F3C;
loc_831D6F64:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6F78"))) PPC_WEAK_FUNC(sub_831D6F78);
PPC_FUNC_IMPL(__imp__sub_831D6F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22796
	ctx.r9.s64 = ctx.r10.s64 + 22796;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6F8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d6fb4
	if (!ctx.cr6.lt) goto loc_831D6FB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6f8c
	if (!ctx.cr0.eq) goto loc_831D6F8C;
loc_831D6FB4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D6FC8"))) PPC_WEAK_FUNC(sub_831D6FC8);
PPC_FUNC_IMPL(__imp__sub_831D6FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,16232
	ctx.r9.s64 = ctx.r10.s64 + 16232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D6FDC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7004
	if (!ctx.cr6.lt) goto loc_831D7004;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d6fdc
	if (!ctx.cr0.eq) goto loc_831D6FDC;
loc_831D7004:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7018"))) PPC_WEAK_FUNC(sub_831D7018);
PPC_FUNC_IMPL(__imp__sub_831D7018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22808
	ctx.r9.s64 = ctx.r10.s64 + 22808;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D702C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7054
	if (!ctx.cr6.lt) goto loc_831D7054;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d702c
	if (!ctx.cr0.eq) goto loc_831D702C;
loc_831D7054:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7068"))) PPC_WEAK_FUNC(sub_831D7068);
PPC_FUNC_IMPL(__imp__sub_831D7068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22824
	ctx.r9.s64 = ctx.r10.s64 + 22824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D707C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d70a4
	if (!ctx.cr6.lt) goto loc_831D70A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d707c
	if (!ctx.cr0.eq) goto loc_831D707C;
loc_831D70A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D70B8"))) PPC_WEAK_FUNC(sub_831D70B8);
PPC_FUNC_IMPL(__imp__sub_831D70B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22840
	ctx.r9.s64 = ctx.r10.s64 + 22840;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D70CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d70f4
	if (!ctx.cr6.lt) goto loc_831D70F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d70cc
	if (!ctx.cr0.eq) goto loc_831D70CC;
loc_831D70F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7108"))) PPC_WEAK_FUNC(sub_831D7108);
PPC_FUNC_IMPL(__imp__sub_831D7108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22852
	ctx.r9.s64 = ctx.r10.s64 + 22852;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D711C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7144
	if (!ctx.cr6.lt) goto loc_831D7144;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d711c
	if (!ctx.cr0.eq) goto loc_831D711C;
loc_831D7144:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7158"))) PPC_WEAK_FUNC(sub_831D7158);
PPC_FUNC_IMPL(__imp__sub_831D7158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22864
	ctx.r9.s64 = ctx.r10.s64 + 22864;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D716C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7194
	if (!ctx.cr6.lt) goto loc_831D7194;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d716c
	if (!ctx.cr0.eq) goto loc_831D716C;
loc_831D7194:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D71A8"))) PPC_WEAK_FUNC(sub_831D71A8);
PPC_FUNC_IMPL(__imp__sub_831D71A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22876
	ctx.r9.s64 = ctx.r10.s64 + 22876;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D71BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d71e4
	if (!ctx.cr6.lt) goto loc_831D71E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d71bc
	if (!ctx.cr0.eq) goto loc_831D71BC;
loc_831D71E4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D71F8"))) PPC_WEAK_FUNC(sub_831D71F8);
PPC_FUNC_IMPL(__imp__sub_831D71F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22888
	ctx.r9.s64 = ctx.r10.s64 + 22888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D720C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7234
	if (!ctx.cr6.lt) goto loc_831D7234;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d720c
	if (!ctx.cr0.eq) goto loc_831D720C;
loc_831D7234:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7248"))) PPC_WEAK_FUNC(sub_831D7248);
PPC_FUNC_IMPL(__imp__sub_831D7248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-18232
	ctx.r9.s64 = ctx.r10.s64 + -18232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D725C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7284
	if (!ctx.cr6.lt) goto loc_831D7284;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d725c
	if (!ctx.cr0.eq) goto loc_831D725C;
loc_831D7284:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7298"))) PPC_WEAK_FUNC(sub_831D7298);
PPC_FUNC_IMPL(__imp__sub_831D7298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22900
	ctx.r9.s64 = ctx.r10.s64 + 22900;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D72AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d72d4
	if (!ctx.cr6.lt) goto loc_831D72D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d72ac
	if (!ctx.cr0.eq) goto loc_831D72AC;
loc_831D72D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D72E8"))) PPC_WEAK_FUNC(sub_831D72E8);
PPC_FUNC_IMPL(__imp__sub_831D72E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22912
	ctx.r9.s64 = ctx.r10.s64 + 22912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D72FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7324
	if (!ctx.cr6.lt) goto loc_831D7324;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d72fc
	if (!ctx.cr0.eq) goto loc_831D72FC;
loc_831D7324:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7338"))) PPC_WEAK_FUNC(sub_831D7338);
PPC_FUNC_IMPL(__imp__sub_831D7338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,18232
	ctx.r9.s64 = ctx.r10.s64 + 18232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D734C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7374
	if (!ctx.cr6.lt) goto loc_831D7374;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d734c
	if (!ctx.cr0.eq) goto loc_831D734C;
loc_831D7374:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7388"))) PPC_WEAK_FUNC(sub_831D7388);
PPC_FUNC_IMPL(__imp__sub_831D7388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22920
	ctx.r9.s64 = ctx.r10.s64 + 22920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D739C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d73c4
	if (!ctx.cr6.lt) goto loc_831D73C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d739c
	if (!ctx.cr0.eq) goto loc_831D739C;
loc_831D73C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D73D8"))) PPC_WEAK_FUNC(sub_831D73D8);
PPC_FUNC_IMPL(__imp__sub_831D73D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10864
	ctx.r9.s64 = ctx.r10.s64 + 10864;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D73EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7414
	if (!ctx.cr6.lt) goto loc_831D7414;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d73ec
	if (!ctx.cr0.eq) goto loc_831D73EC;
loc_831D7414:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7428"))) PPC_WEAK_FUNC(sub_831D7428);
PPC_FUNC_IMPL(__imp__sub_831D7428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22932
	ctx.r9.s64 = ctx.r10.s64 + 22932;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D743C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7464
	if (!ctx.cr6.lt) goto loc_831D7464;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d743c
	if (!ctx.cr0.eq) goto loc_831D743C;
loc_831D7464:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7478"))) PPC_WEAK_FUNC(sub_831D7478);
PPC_FUNC_IMPL(__imp__sub_831D7478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22944
	ctx.r9.s64 = ctx.r10.s64 + 22944;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D748C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d74b4
	if (!ctx.cr6.lt) goto loc_831D74B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d748c
	if (!ctx.cr0.eq) goto loc_831D748C;
loc_831D74B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D74C8"))) PPC_WEAK_FUNC(sub_831D74C8);
PPC_FUNC_IMPL(__imp__sub_831D74C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22956
	ctx.r9.s64 = ctx.r10.s64 + 22956;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D74DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7504
	if (!ctx.cr6.lt) goto loc_831D7504;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d74dc
	if (!ctx.cr0.eq) goto loc_831D74DC;
loc_831D7504:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7518"))) PPC_WEAK_FUNC(sub_831D7518);
PPC_FUNC_IMPL(__imp__sub_831D7518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22968
	ctx.r9.s64 = ctx.r10.s64 + 22968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D752C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7554
	if (!ctx.cr6.lt) goto loc_831D7554;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d752c
	if (!ctx.cr0.eq) goto loc_831D752C;
loc_831D7554:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7568"))) PPC_WEAK_FUNC(sub_831D7568);
PPC_FUNC_IMPL(__imp__sub_831D7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22980
	ctx.r9.s64 = ctx.r10.s64 + 22980;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D757C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d75a4
	if (!ctx.cr6.lt) goto loc_831D75A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d757c
	if (!ctx.cr0.eq) goto loc_831D757C;
loc_831D75A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D75B8"))) PPC_WEAK_FUNC(sub_831D75B8);
PPC_FUNC_IMPL(__imp__sub_831D75B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22992
	ctx.r9.s64 = ctx.r10.s64 + 22992;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D75CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d75f4
	if (!ctx.cr6.lt) goto loc_831D75F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d75cc
	if (!ctx.cr0.eq) goto loc_831D75CC;
loc_831D75F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7608"))) PPC_WEAK_FUNC(sub_831D7608);
PPC_FUNC_IMPL(__imp__sub_831D7608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23008
	ctx.r9.s64 = ctx.r10.s64 + 23008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D761C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7644
	if (!ctx.cr6.lt) goto loc_831D7644;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d761c
	if (!ctx.cr0.eq) goto loc_831D761C;
loc_831D7644:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7658"))) PPC_WEAK_FUNC(sub_831D7658);
PPC_FUNC_IMPL(__imp__sub_831D7658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23020
	ctx.r9.s64 = ctx.r10.s64 + 23020;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D766C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7694
	if (!ctx.cr6.lt) goto loc_831D7694;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d766c
	if (!ctx.cr0.eq) goto loc_831D766C;
loc_831D7694:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D76A8"))) PPC_WEAK_FUNC(sub_831D76A8);
PPC_FUNC_IMPL(__imp__sub_831D76A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26208
	ctx.r9.s64 = ctx.r10.s64 + 26208;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D76BC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d76e4
	if (!ctx.cr6.lt) goto loc_831D76E4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d76bc
	if (!ctx.cr0.eq) goto loc_831D76BC;
loc_831D76E4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D76F8"))) PPC_WEAK_FUNC(sub_831D76F8);
PPC_FUNC_IMPL(__imp__sub_831D76F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,23032
	ctx.r9.s64 = ctx.r10.s64 + 23032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D770C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7734
	if (!ctx.cr6.lt) goto loc_831D7734;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d770c
	if (!ctx.cr0.eq) goto loc_831D770C;
loc_831D7734:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// stw r11,-6576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7748"))) PPC_WEAK_FUNC(sub_831D7748);
PPC_FUNC_IMPL(__imp__sub_831D7748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15496
	ctx.r9.s64 = ctx.r10.s64 + -15496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D775C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7784
	if (!ctx.cr6.lt) goto loc_831D7784;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d775c
	if (!ctx.cr0.eq) goto loc_831D775C;
loc_831D7784:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7798"))) PPC_WEAK_FUNC(sub_831D7798);
PPC_FUNC_IMPL(__imp__sub_831D7798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15476
	ctx.r9.s64 = ctx.r10.s64 + -15476;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D77AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d77d4
	if (!ctx.cr6.lt) goto loc_831D77D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d77ac
	if (!ctx.cr0.eq) goto loc_831D77AC;
loc_831D77D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D77E8"))) PPC_WEAK_FUNC(sub_831D77E8);
PPC_FUNC_IMPL(__imp__sub_831D77E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15456
	ctx.r9.s64 = ctx.r10.s64 + -15456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D77FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7824
	if (!ctx.cr6.lt) goto loc_831D7824;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d77fc
	if (!ctx.cr0.eq) goto loc_831D77FC;
loc_831D7824:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7838"))) PPC_WEAK_FUNC(sub_831D7838);
PPC_FUNC_IMPL(__imp__sub_831D7838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15436
	ctx.r9.s64 = ctx.r10.s64 + -15436;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D784C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7874
	if (!ctx.cr6.lt) goto loc_831D7874;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d784c
	if (!ctx.cr0.eq) goto loc_831D784C;
loc_831D7874:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7888"))) PPC_WEAK_FUNC(sub_831D7888);
PPC_FUNC_IMPL(__imp__sub_831D7888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15420
	ctx.r9.s64 = ctx.r10.s64 + -15420;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D789C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d78c4
	if (!ctx.cr6.lt) goto loc_831D78C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d789c
	if (!ctx.cr0.eq) goto loc_831D789C;
loc_831D78C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D78D8"))) PPC_WEAK_FUNC(sub_831D78D8);
PPC_FUNC_IMPL(__imp__sub_831D78D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15404
	ctx.r9.s64 = ctx.r10.s64 + -15404;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D78EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7914
	if (!ctx.cr6.lt) goto loc_831D7914;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d78ec
	if (!ctx.cr0.eq) goto loc_831D78EC;
loc_831D7914:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7928"))) PPC_WEAK_FUNC(sub_831D7928);
PPC_FUNC_IMPL(__imp__sub_831D7928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15384
	ctx.r9.s64 = ctx.r10.s64 + -15384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D793C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7964
	if (!ctx.cr6.lt) goto loc_831D7964;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d793c
	if (!ctx.cr0.eq) goto loc_831D793C;
loc_831D7964:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7978"))) PPC_WEAK_FUNC(sub_831D7978);
PPC_FUNC_IMPL(__imp__sub_831D7978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15360
	ctx.r9.s64 = ctx.r10.s64 + -15360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D798C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d79b4
	if (!ctx.cr6.lt) goto loc_831D79B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d798c
	if (!ctx.cr0.eq) goto loc_831D798C;
loc_831D79B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D79C8"))) PPC_WEAK_FUNC(sub_831D79C8);
PPC_FUNC_IMPL(__imp__sub_831D79C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15340
	ctx.r9.s64 = ctx.r10.s64 + -15340;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D79DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7a04
	if (!ctx.cr6.lt) goto loc_831D7A04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d79dc
	if (!ctx.cr0.eq) goto loc_831D79DC;
loc_831D7A04:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7A18"))) PPC_WEAK_FUNC(sub_831D7A18);
PPC_FUNC_IMPL(__imp__sub_831D7A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15316
	ctx.r9.s64 = ctx.r10.s64 + -15316;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7A2C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7a54
	if (!ctx.cr6.lt) goto loc_831D7A54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7a2c
	if (!ctx.cr0.eq) goto loc_831D7A2C;
loc_831D7A54:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7A68"))) PPC_WEAK_FUNC(sub_831D7A68);
PPC_FUNC_IMPL(__imp__sub_831D7A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15292
	ctx.r9.s64 = ctx.r10.s64 + -15292;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7A7C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7aa4
	if (!ctx.cr6.lt) goto loc_831D7AA4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7a7c
	if (!ctx.cr0.eq) goto loc_831D7A7C;
loc_831D7AA4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7AB8"))) PPC_WEAK_FUNC(sub_831D7AB8);
PPC_FUNC_IMPL(__imp__sub_831D7AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15264
	ctx.r9.s64 = ctx.r10.s64 + -15264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7ACC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7af4
	if (!ctx.cr6.lt) goto loc_831D7AF4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7acc
	if (!ctx.cr0.eq) goto loc_831D7ACC;
loc_831D7AF4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7B08"))) PPC_WEAK_FUNC(sub_831D7B08);
PPC_FUNC_IMPL(__imp__sub_831D7B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15244
	ctx.r9.s64 = ctx.r10.s64 + -15244;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7B1C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7b44
	if (!ctx.cr6.lt) goto loc_831D7B44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7b1c
	if (!ctx.cr0.eq) goto loc_831D7B1C;
loc_831D7B44:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7B58"))) PPC_WEAK_FUNC(sub_831D7B58);
PPC_FUNC_IMPL(__imp__sub_831D7B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15220
	ctx.r9.s64 = ctx.r10.s64 + -15220;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7B6C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7b94
	if (!ctx.cr6.lt) goto loc_831D7B94;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7b6c
	if (!ctx.cr0.eq) goto loc_831D7B6C;
loc_831D7B94:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7BA8"))) PPC_WEAK_FUNC(sub_831D7BA8);
PPC_FUNC_IMPL(__imp__sub_831D7BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15204
	ctx.r9.s64 = ctx.r10.s64 + -15204;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7BBC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7be4
	if (!ctx.cr6.lt) goto loc_831D7BE4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7bbc
	if (!ctx.cr0.eq) goto loc_831D7BBC;
loc_831D7BE4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7BF8"))) PPC_WEAK_FUNC(sub_831D7BF8);
PPC_FUNC_IMPL(__imp__sub_831D7BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-21948
	ctx.r10.s64 = ctx.r11.s64 + -21948;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_831D7C0C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x831d7c34
	if (!ctx.cr6.lt) goto loc_831D7C34;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x831d7c0c
	if (!ctx.cr0.eq) goto loc_831D7C0C;
loc_831D7C34:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// stw r9,-6232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6232, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7C40"))) PPC_WEAK_FUNC(sub_831D7C40);
PPC_FUNC_IMPL(__imp__sub_831D7C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,18008
	ctx.r10.s64 = ctx.r11.s64 + 18008;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_831D7C54:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x831d7c7c
	if (!ctx.cr6.lt) goto loc_831D7C7C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x831d7c54
	if (!ctx.cr0.eq) goto loc_831D7C54;
loc_831D7C7C:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// stw r9,-6136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6136, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7C88"))) PPC_WEAK_FUNC(sub_831D7C88);
PPC_FUNC_IMPL(__imp__sub_831D7C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16076
	ctx.r9.s64 = ctx.r10.s64 + -16076;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7C9C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7cc4
	if (!ctx.cr6.lt) goto loc_831D7CC4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7c9c
	if (!ctx.cr0.eq) goto loc_831D7C9C;
loc_831D7CC4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7CD8"))) PPC_WEAK_FUNC(sub_831D7CD8);
PPC_FUNC_IMPL(__imp__sub_831D7CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16064
	ctx.r9.s64 = ctx.r10.s64 + -16064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7CEC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7d14
	if (!ctx.cr6.lt) goto loc_831D7D14;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7cec
	if (!ctx.cr0.eq) goto loc_831D7CEC;
loc_831D7D14:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7D28"))) PPC_WEAK_FUNC(sub_831D7D28);
PPC_FUNC_IMPL(__imp__sub_831D7D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16052
	ctx.r9.s64 = ctx.r10.s64 + -16052;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7D3C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7d64
	if (!ctx.cr6.lt) goto loc_831D7D64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7d3c
	if (!ctx.cr0.eq) goto loc_831D7D3C;
loc_831D7D64:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7D78"))) PPC_WEAK_FUNC(sub_831D7D78);
PPC_FUNC_IMPL(__imp__sub_831D7D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16032
	ctx.r9.s64 = ctx.r10.s64 + -16032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7D8C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7db4
	if (!ctx.cr6.lt) goto loc_831D7DB4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7d8c
	if (!ctx.cr0.eq) goto loc_831D7D8C;
loc_831D7DB4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7DC8"))) PPC_WEAK_FUNC(sub_831D7DC8);
PPC_FUNC_IMPL(__imp__sub_831D7DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16012
	ctx.r9.s64 = ctx.r10.s64 + -16012;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7DDC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7e04
	if (!ctx.cr6.lt) goto loc_831D7E04;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7ddc
	if (!ctx.cr0.eq) goto loc_831D7DDC;
loc_831D7E04:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7E18"))) PPC_WEAK_FUNC(sub_831D7E18);
PPC_FUNC_IMPL(__imp__sub_831D7E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16000
	ctx.r9.s64 = ctx.r10.s64 + -16000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7E2C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7e54
	if (!ctx.cr6.lt) goto loc_831D7E54;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7e2c
	if (!ctx.cr0.eq) goto loc_831D7E2C;
loc_831D7E54:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7E68"))) PPC_WEAK_FUNC(sub_831D7E68);
PPC_FUNC_IMPL(__imp__sub_831D7E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15988
	ctx.r9.s64 = ctx.r10.s64 + -15988;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7E7C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7ea4
	if (!ctx.cr6.lt) goto loc_831D7EA4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7e7c
	if (!ctx.cr0.eq) goto loc_831D7E7C;
loc_831D7EA4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7EB8"))) PPC_WEAK_FUNC(sub_831D7EB8);
PPC_FUNC_IMPL(__imp__sub_831D7EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15972
	ctx.r9.s64 = ctx.r10.s64 + -15972;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7ECC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7ef4
	if (!ctx.cr6.lt) goto loc_831D7EF4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7ecc
	if (!ctx.cr0.eq) goto loc_831D7ECC;
loc_831D7EF4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7F08"))) PPC_WEAK_FUNC(sub_831D7F08);
PPC_FUNC_IMPL(__imp__sub_831D7F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15956
	ctx.r9.s64 = ctx.r10.s64 + -15956;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7F1C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7f44
	if (!ctx.cr6.lt) goto loc_831D7F44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7f1c
	if (!ctx.cr0.eq) goto loc_831D7F1C;
loc_831D7F44:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7F58"))) PPC_WEAK_FUNC(sub_831D7F58);
PPC_FUNC_IMPL(__imp__sub_831D7F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15936
	ctx.r9.s64 = ctx.r10.s64 + -15936;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7F6C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7f94
	if (!ctx.cr6.lt) goto loc_831D7F94;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7f6c
	if (!ctx.cr0.eq) goto loc_831D7F6C;
loc_831D7F94:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7FA8"))) PPC_WEAK_FUNC(sub_831D7FA8);
PPC_FUNC_IMPL(__imp__sub_831D7FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15920
	ctx.r9.s64 = ctx.r10.s64 + -15920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D7FBC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d7fe4
	if (!ctx.cr6.lt) goto loc_831D7FE4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d7fbc
	if (!ctx.cr0.eq) goto loc_831D7FBC;
loc_831D7FE4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D7FF8"))) PPC_WEAK_FUNC(sub_831D7FF8);
PPC_FUNC_IMPL(__imp__sub_831D7FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15900
	ctx.r9.s64 = ctx.r10.s64 + -15900;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D800C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8034
	if (!ctx.cr6.lt) goto loc_831D8034;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d800c
	if (!ctx.cr0.eq) goto loc_831D800C;
loc_831D8034:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8048"))) PPC_WEAK_FUNC(sub_831D8048);
PPC_FUNC_IMPL(__imp__sub_831D8048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15876
	ctx.r9.s64 = ctx.r10.s64 + -15876;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D805C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8084
	if (!ctx.cr6.lt) goto loc_831D8084;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d805c
	if (!ctx.cr0.eq) goto loc_831D805C;
loc_831D8084:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8098"))) PPC_WEAK_FUNC(sub_831D8098);
PPC_FUNC_IMPL(__imp__sub_831D8098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15856
	ctx.r9.s64 = ctx.r10.s64 + -15856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D80AC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d80d4
	if (!ctx.cr6.lt) goto loc_831D80D4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d80ac
	if (!ctx.cr0.eq) goto loc_831D80AC;
loc_831D80D4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D80E8"))) PPC_WEAK_FUNC(sub_831D80E8);
PPC_FUNC_IMPL(__imp__sub_831D80E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15840
	ctx.r9.s64 = ctx.r10.s64 + -15840;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D80FC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8124
	if (!ctx.cr6.lt) goto loc_831D8124;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d80fc
	if (!ctx.cr0.eq) goto loc_831D80FC;
loc_831D8124:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8138"))) PPC_WEAK_FUNC(sub_831D8138);
PPC_FUNC_IMPL(__imp__sub_831D8138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15820
	ctx.r9.s64 = ctx.r10.s64 + -15820;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D814C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8174
	if (!ctx.cr6.lt) goto loc_831D8174;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d814c
	if (!ctx.cr0.eq) goto loc_831D814C;
loc_831D8174:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8188"))) PPC_WEAK_FUNC(sub_831D8188);
PPC_FUNC_IMPL(__imp__sub_831D8188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15796
	ctx.r9.s64 = ctx.r10.s64 + -15796;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D819C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d81c4
	if (!ctx.cr6.lt) goto loc_831D81C4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d819c
	if (!ctx.cr0.eq) goto loc_831D819C;
loc_831D81C4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D81D8"))) PPC_WEAK_FUNC(sub_831D81D8);
PPC_FUNC_IMPL(__imp__sub_831D81D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15788
	ctx.r9.s64 = ctx.r10.s64 + -15788;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D81EC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8214
	if (!ctx.cr6.lt) goto loc_831D8214;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d81ec
	if (!ctx.cr0.eq) goto loc_831D81EC;
loc_831D8214:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8228"))) PPC_WEAK_FUNC(sub_831D8228);
PPC_FUNC_IMPL(__imp__sub_831D8228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15776
	ctx.r9.s64 = ctx.r10.s64 + -15776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D823C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8264
	if (!ctx.cr6.lt) goto loc_831D8264;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d823c
	if (!ctx.cr0.eq) goto loc_831D823C;
loc_831D8264:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8278"))) PPC_WEAK_FUNC(sub_831D8278);
PPC_FUNC_IMPL(__imp__sub_831D8278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15768
	ctx.r9.s64 = ctx.r10.s64 + -15768;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D828C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d82b4
	if (!ctx.cr6.lt) goto loc_831D82B4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d828c
	if (!ctx.cr0.eq) goto loc_831D828C;
loc_831D82B4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D82C8"))) PPC_WEAK_FUNC(sub_831D82C8);
PPC_FUNC_IMPL(__imp__sub_831D82C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15760
	ctx.r9.s64 = ctx.r10.s64 + -15760;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D82DC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8304
	if (!ctx.cr6.lt) goto loc_831D8304;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d82dc
	if (!ctx.cr0.eq) goto loc_831D82DC;
loc_831D8304:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8318"))) PPC_WEAK_FUNC(sub_831D8318);
PPC_FUNC_IMPL(__imp__sub_831D8318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15752
	ctx.r9.s64 = ctx.r10.s64 + -15752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D832C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d8354
	if (!ctx.cr6.lt) goto loc_831D8354;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d832c
	if (!ctx.cr0.eq) goto loc_831D832C;
loc_831D8354:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8368"))) PPC_WEAK_FUNC(sub_831D8368);
PPC_FUNC_IMPL(__imp__sub_831D8368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,12988
	ctx.r9.s64 = ctx.r10.s64 + 12988;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D837C:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d83a4
	if (!ctx.cr6.lt) goto loc_831D83A4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d837c
	if (!ctx.cr0.eq) goto loc_831D837C;
loc_831D83A4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D83B8"))) PPC_WEAK_FUNC(sub_831D83B8);
PPC_FUNC_IMPL(__imp__sub_831D83B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-27388
	ctx.r9.s64 = ctx.r10.s64 + -27388;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_831D83CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x831d83f4
	if (!ctx.cr6.lt) goto loc_831D83F4;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x831d83cc
	if (!ctx.cr0.eq) goto loc_831D83CC;
loc_831D83F4:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,-6144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8408"))) PPC_WEAK_FUNC(sub_831D8408);
PPC_FUNC_IMPL(__imp__sub_831D8408) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6208
	ctx.r3.s64 = ctx.r11.s64 + -6208;
	// bl 0x82f2af08
	ctx.lr = 0x831D8420;
	sub_82F2AF08(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D842C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8440"))) PPC_WEAK_FUNC(sub_831D8440);
PPC_FUNC_IMPL(__imp__sub_831D8440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf0
	ctx.lr = 0x831D8448;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a7e310
	ctx.lr = 0x831D8450;
	__savefpr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r31,r11,-5552
	ctx.r31.s64 = ctx.r11.s64 + -5552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,21
	ctx.r3.s64 = ctx.r31.s64 + 21;
	// bl 0x82a7f140
	ctx.lr = 0x831D846C;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r30,r11,-24548
	ctx.r30.s64 = ctx.r11.s64 + -24548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r3,r31,31
	ctx.r3.s64 = ctx.r31.s64 + 31;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// stb r11,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8498;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r28,-32216
	ctx.r28.s64 = -2111307776;
	// addi r29,r11,-24560
	ctx.r29.s64 = ctx.r11.s64 + -24560;
	// addi r27,r28,-24964
	ctx.r27.s64 = ctx.r28.s64 + -24964;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-24572
	ctx.r11.s64 = ctx.r11.s64 + -24572;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r3,r31,69
	ctx.r3.s64 = ctx.r31.s64 + 69;
	// lfs f0,-32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,-36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -36);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stb r10,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r10.u8);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// bl 0x82a7f140
	ctx.lr = 0x831D84F8;
	sub_82A7F140(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,13
	ctx.r5.s64 = 13;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,79
	ctx.r3.s64 = ctx.r31.s64 + 79;
	// sth r11,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// stb r10,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r10.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8518;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f30,-72(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -72);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r11,-24588
	ctx.r26.s64 = ctx.r11.s64 + -24588;
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f30,100(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r25,r10,-24596
	ctx.r25.s64 = ctx.r10.s64 + -24596;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// addi r10,r31,122
	ctx.r10.s64 = ctx.r31.s64 + 122;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r5,11
	ctx.r5.s64 = 11;
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r31,129
	ctx.r3.s64 = ctx.r31.s64 + 129;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// sth r9,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r9.u16);
	// sth r30,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r30.u16);
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8598;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r11,-24612
	ctx.r29.s64 = ctx.r11.s64 + -24612;
	// lfs f0,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stfs f30,148(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r11,r31,170
	ctx.r11.s64 = ctx.r31.s64 + 170;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,177
	ctx.r3.s64 = ctx.r31.s64 + 177;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// sth r9,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r9.u16);
	// sth r30,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r30.u16);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8608;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// stfs f31,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// addi r26,r11,-24628
	ctx.r26.s64 = ctx.r11.s64 + -24628;
	// stfs f30,196(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f31,200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r29,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
	// addi r11,r31,218
	ctx.r11.s64 = ctx.r31.s64 + 218;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r31,225
	ctx.r3.s64 = ctx.r31.s64 + 225;
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// stw r6,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r6.u32);
	// sth r10,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r10.u16);
	// sth r30,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r30.u16);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// stb r8,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r8.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8670;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f28,-68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -68);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lfs f27,-64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -64);
	ctx.f27.f64 = double(temp.f32);
	// addi r29,r11,-24644
	ctx.r29.s64 = ctx.r11.s64 + -24644;
	// lfs f0,-28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r10,-24648
	ctx.r25.s64 = ctx.r10.s64 + -24648;
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stfs f28,240(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stfs f27,244(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// addi r11,r31,266
	ctx.r11.s64 = ctx.r31.s64 + 266;
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r3,r31,271
	ctx.r3.s64 = ctx.r31.s64 + 271;
	// lhz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lbz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// stw r7,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r7.u32);
	// stw r6,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r6.u32);
	// sth r10,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r10.u16);
	// sth r30,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r30.u16);
	// sth r26,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r26.u16);
	// stb r11,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r11.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D86F0;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f0,-24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lfs f30,-56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -56);
	ctx.f30.f64 = double(temp.f32);
	// addi r9,r11,-24664
	ctx.r9.s64 = ctx.r11.s64 + -24664;
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// addi r26,r10,-24672
	ctx.r26.s64 = ctx.r10.s64 + -24672;
	// stfs f30,292(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lfs f29,-48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -48);
	ctx.f29.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r24,r7,-24680
	ctx.r24.s64 = ctx.r7.s64 + -24680;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r23,8(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r5,9
	ctx.r5.s64 = 9;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// addi r3,r31,355
	ctx.r3.s64 = ctx.r31.s64 + 355;
	// lwz r22,0(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r11,r31,313
	ctx.r11.s64 = ctx.r31.s64 + 313;
	// stw r7,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r7.u32);
	// addi r11,r31,322
	ctx.r11.s64 = ctx.r31.s64 + 322;
	// stb r10,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r10.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r6,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
	// stw r23,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r23.u32);
	// stb r30,313(r31)
	PPC_STORE_U8(ctx.r31.u32 + 313, ctx.r30.u8);
	// stb r30,314(r31)
	PPC_STORE_U8(ctx.r31.u32 + 314, ctx.r30.u8);
	// stb r30,315(r31)
	PPC_STORE_U8(ctx.r31.u32 + 315, ctx.r30.u8);
	// sth r8,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r8.u16);
	// stw r22,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r22.u32);
	// sth r30,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r30.u16);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// lbz r8,6(r24)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + 6);
	// sth r30,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r30.u16);
	// sth r30,326(r31)
	PPC_STORE_U16(ctx.r31.u32 + 326, ctx.r30.u16);
	// sth r30,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r30.u16);
	// sth r30,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r30.u16);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stfs f29,340(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// stfs f29,344(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// sth r9,352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 352, ctx.r9.u16);
	// stb r8,354(r31)
	PPC_STORE_U8(ctx.r31.u32 + 354, ctx.r8.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D87C8;
	sub_82A7F140(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,366
	ctx.r3.s64 = ctx.r31.s64 + 366;
	// lhz r29,-26616(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + -26616);
	// sth r29,364(r31)
	PPC_STORE_U16(ctx.r31.u32 + 364, ctx.r29.u16);
	// bl 0x82a7f140
	ctx.lr = 0x831D87E4;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f26,-44(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -44);
	ctx.f26.f64 = double(temp.f32);
	// stfs f26,384(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r23,r11,-24696
	ctx.r23.s64 = ctx.r11.s64 + -24696;
	// stfs f30,388(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f31,392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r24,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r24.u32);
	// addi r11,r31,411
	ctx.r11.s64 = ctx.r31.s64 + 411;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r3,r31,415
	ctx.r3.s64 = ctx.r31.s64 + 415;
	// lbz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// lhz r24,12(r23)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r23.u32 + 12);
	// lhz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r6,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r6.u32);
	// sth r24,408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 408, ctx.r24.u16);
	// stb r9,410(r31)
	PPC_STORE_U8(ctx.r31.u32 + 410, ctx.r9.u8);
	// stb r30,411(r31)
	PPC_STORE_U8(ctx.r31.u32 + 411, ctx.r30.u8);
	// sth r8,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r8.u16);
	// stb r10,414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 414, ctx.r10.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D885C;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lhz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lfs f25,-12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	ctx.f25.f64 = double(temp.f32);
	// addi r24,r11,-24712
	ctx.r24.s64 = ctx.r11.s64 + -24712;
	// stfs f28,432(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// addi r11,r31,458
	ctx.r11.s64 = ctx.r31.s64 + 458;
	// stfs f27,436(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stfs f25,440(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r23.u32);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r31,463
	ctx.r3.s64 = ctx.r31.s64 + 463;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r7,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r7.u32);
	// stw r6,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r6.u32);
	// sth r9,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r9.u16);
	// sth r30,458(r31)
	PPC_STORE_U16(ctx.r31.u32 + 458, ctx.r30.u16);
	// sth r8,460(r31)
	PPC_STORE_U16(ctx.r31.u32 + 460, ctx.r8.u16);
	// stb r10,462(r31)
	PPC_STORE_U8(ctx.r31.u32 + 462, ctx.r10.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D88CC;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f24,-8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -8);
	ctx.f24.f64 = double(temp.f32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// addi r9,r11,-24728
	ctx.r9.s64 = ctx.r11.s64 + -24728;
	// stfs f30,484(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stfs f24,488(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lhz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r23,r11,-24736
	ctx.r23.s64 = ctx.r11.s64 + -24736;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r7,r22,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r31,547
	ctx.r3.s64 = ctx.r31.s64 + 547;
	// lbz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// addi r11,r31,505
	ctx.r11.s64 = ctx.r31.s64 + 505;
	// stw r5,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r5.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r8,504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 504, ctx.r8.u8);
	// stb r30,505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 505, ctx.r30.u8);
	// stb r30,506(r31)
	PPC_STORE_U8(ctx.r31.u32 + 506, ctx.r30.u8);
	// stb r30,507(r31)
	PPC_STORE_U8(ctx.r31.u32 + 507, ctx.r30.u8);
	// stw r7,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r7.u32);
	// addi r11,r31,514
	ctx.r11.s64 = ctx.r31.s64 + 514;
	// sth r6,512(r31)
	PPC_STORE_U16(ctx.r31.u32 + 512, ctx.r6.u16);
	// lfs f23,-4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	ctx.f23.f64 = double(temp.f32);
	// sth r30,514(r31)
	PPC_STORE_U16(ctx.r31.u32 + 514, ctx.r30.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// lbz r8,6(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 6);
	// sth r30,516(r31)
	PPC_STORE_U16(ctx.r31.u32 + 516, ctx.r30.u16);
	// sth r30,518(r31)
	PPC_STORE_U16(ctx.r31.u32 + 518, ctx.r30.u16);
	// sth r30,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r30.u16);
	// sth r30,522(r31)
	PPC_STORE_U16(ctx.r31.u32 + 522, ctx.r30.u16);
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// stfs f29,532(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stfs f23,536(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// sth r9,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r9.u16);
	// stb r8,546(r31)
	PPC_STORE_U8(ctx.r31.u32 + 546, ctx.r8.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8998;
	sub_82A7F140(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// sth r29,556(r31)
	PPC_STORE_U16(ctx.r31.u32 + 556, ctx.r29.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,558
	ctx.r3.s64 = ctx.r31.s64 + 558;
	// bl 0x82a7f140
	ctx.lr = 0x831D89AC;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f22,-24964(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -24964);
	ctx.f22.f64 = double(temp.f32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r28,r11,-24752
	ctx.r28.s64 = ctx.r11.s64 + -24752;
	// lhz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stfs f26,576(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f30,580(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// addi r11,r31,603
	ctx.r11.s64 = ctx.r31.s64 + 603;
	// stfs f22,584(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r31,607
	ctx.r3.s64 = ctx.r31.s64 + 607;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lbz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// lhz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// stw r23,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r23.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r7,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r7.u32);
	// stw r6,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r6.u32);
	// sth r27,600(r31)
	PPC_STORE_U16(ctx.r31.u32 + 600, ctx.r27.u16);
	// stb r9,602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 602, ctx.r9.u8);
	// stb r30,603(r31)
	PPC_STORE_U8(ctx.r31.u32 + 603, ctx.r30.u8);
	// sth r8,604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 604, ctx.r8.u16);
	// stb r10,606(r31)
	PPC_STORE_U8(ctx.r31.u32 + 606, ctx.r10.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8A24;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lhz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stfs f28,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// addi r27,r11,-24768
	ctx.r27.s64 = ctx.r11.s64 + -24768;
	// stfs f27,628(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f25,632(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r31,655
	ctx.r3.s64 = ctx.r31.s64 + 655;
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r31,650
	ctx.r11.s64 = ctx.r31.s64 + 650;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// stw r7,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r7.u32);
	// stw r6,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
	// stw r28,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r28.u32);
	// sth r9,648(r31)
	PPC_STORE_U16(ctx.r31.u32 + 648, ctx.r9.u16);
	// sth r30,650(r31)
	PPC_STORE_U16(ctx.r31.u32 + 650, ctx.r30.u16);
	// sth r8,652(r31)
	PPC_STORE_U16(ctx.r31.u32 + 652, ctx.r8.u16);
	// stb r10,654(r31)
	PPC_STORE_U8(ctx.r31.u32 + 654, ctx.r10.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8A90;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lhz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r10,r11,-24784
	ctx.r10.s64 = ctx.r11.s64 + -24784;
	// stfs f31,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// addi r28,r9,-24792
	ctx.r28.s64 = ctx.r9.s64 + -24792;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stfs f30,676(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stfs f24,680(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// addi r11,r31,697
	ctx.r11.s64 = ctx.r31.s64 + 697;
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r31,706
	ctx.r11.s64 = ctx.r31.s64 + 706;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r24,8(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// addi r3,r31,739
	ctx.r3.s64 = ctx.r31.s64 + 739;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r27.u32);
	// stw r26,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r26.u32);
	// stw r24,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r24.u32);
	// stb r8,696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 696, ctx.r8.u8);
	// stb r30,697(r31)
	PPC_STORE_U8(ctx.r31.u32 + 697, ctx.r30.u8);
	// stb r30,698(r31)
	PPC_STORE_U8(ctx.r31.u32 + 698, ctx.r30.u8);
	// stb r30,699(r31)
	PPC_STORE_U8(ctx.r31.u32 + 699, ctx.r30.u8);
	// stw r9,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r9.u32);
	// sth r7,704(r31)
	PPC_STORE_U16(ctx.r31.u32 + 704, ctx.r7.u16);
	// sth r30,706(r31)
	PPC_STORE_U16(ctx.r31.u32 + 706, ctx.r30.u16);
	// lbz r9,6(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// lwz r23,0(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// sth r30,708(r31)
	PPC_STORE_U16(ctx.r31.u32 + 708, ctx.r30.u16);
	// sth r30,710(r31)
	PPC_STORE_U16(ctx.r31.u32 + 710, ctx.r30.u16);
	// sth r30,712(r31)
	PPC_STORE_U16(ctx.r31.u32 + 712, ctx.r30.u16);
	// sth r30,714(r31)
	PPC_STORE_U16(ctx.r31.u32 + 714, ctx.r30.u16);
	// stfs f31,720(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 720, temp.u32);
	// stw r10,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
	// stfs f29,724(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// stw r23,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r23.u32);
	// stfs f23,728(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// sth r11,736(r31)
	PPC_STORE_U16(ctx.r31.u32 + 736, ctx.r11.u16);
	// stb r9,738(r31)
	PPC_STORE_U8(ctx.r31.u32 + 738, ctx.r9.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8B4C;
	sub_82A7F140(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// sth r29,748(r31)
	PPC_STORE_U16(ctx.r31.u32 + 748, ctx.r29.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,750
	ctx.r3.s64 = ctx.r31.s64 + 750;
	// bl 0x82a7f140
	ctx.lr = 0x831D8B60;
	sub_82A7F140(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r28,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r28.u32);
	// stfs f26,768(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 768, temp.u32);
	// addi r29,r11,-24808
	ctx.r29.s64 = ctx.r11.s64 + -24808;
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r11,r31,795
	ctx.r11.s64 = ctx.r31.s64 + 795;
	// lbz r8,2(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f30,772(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stfs f22,776(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r31,799
	ctx.r3.s64 = ctx.r31.s64 + 799;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r28,12(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// stw r7,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r7.u32);
	// stw r6,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r6.u32);
	// sth r28,792(r31)
	PPC_STORE_U16(ctx.r31.u32 + 792, ctx.r28.u16);
	// stb r10,794(r31)
	PPC_STORE_U8(ctx.r31.u32 + 794, ctx.r10.u8);
	// stb r30,795(r31)
	PPC_STORE_U8(ctx.r31.u32 + 795, ctx.r30.u8);
	// sth r9,796(r31)
	PPC_STORE_U16(ctx.r31.u32 + 796, ctx.r9.u16);
	// stb r8,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r8.u8);
	// bl 0x82a7f140
	ctx.lr = 0x831D8BD0;
	sub_82A7F140(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r29.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a7e35c
	ctx.lr = 0x831D8BE4;
	__restfpr_22(ctx, base);
	// b 0x82a7de40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8BE8"))) PPC_WEAK_FUNC(sub_831D8BE8);
PPC_FUNC_IMPL(__imp__sub_831D8BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// addi r7,r11,20008
	ctx.r7.s64 = ctx.r11.s64 + 20008;
	// lis r6,-31924
	ctx.r6.s64 = -2092171264;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,76(r7)
	PPC_STORE_U32(ctx.r7.u32 + 76, ctx.r11.u32);
	// stw r10,-6024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6024, ctx.r10.u32);
	// stw r9,-6020(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6020, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8C18"))) PPC_WEAK_FUNC(sub_831D8C18);
PPC_FUNC_IMPL(__imp__sub_831D8C18) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6016
	ctx.r3.s64 = ctx.r11.s64 + -6016;
	// bl 0x82f90a00
	ctx.lr = 0x831D8C30;
	sub_82F90A00(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-13200
	ctx.r3.s64 = ctx.r10.s64 + -13200;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D8C3C;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8C50"))) PPC_WEAK_FUNC(sub_831D8C50);
PPC_FUNC_IMPL(__imp__sub_831D8C50) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// bl 0x82f89820
	ctx.lr = 0x831D8C68;
	sub_82F89820(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-13104
	ctx.r3.s64 = ctx.r10.s64 + -13104;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D8C74;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8C88"))) PPC_WEAK_FUNC(sub_831D8C88);
PPC_FUNC_IMPL(__imp__sub_831D8C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r11,r11,25952
	ctx.r11.s64 = ctx.r11.s64 + 25952;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82fa6a28
	sub_82FA6A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8C98"))) PPC_WEAK_FUNC(sub_831D8C98);
PPC_FUNC_IMPL(__imp__sub_831D8C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r11,r11,26544
	ctx.r11.s64 = ctx.r11.s64 + 26544;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82fa6a28
	sub_82FA6A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8CA8"))) PPC_WEAK_FUNC(sub_831D8CA8);
PPC_FUNC_IMPL(__imp__sub_831D8CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// li r8,8363
	ctx.r8.s64 = 8363;
	// addi r11,r11,8944
	ctx.r11.s64 = ctx.r11.s64 + 8944;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831D8CC4:
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stb r9,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stwu r10,52(r11)
	ea = 52 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831d8cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831D8CC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8CE8"))) PPC_WEAK_FUNC(sub_831D8CE8);
PPC_FUNC_IMPL(__imp__sub_831D8CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31920
	ctx.r11.s64 = -2091909120;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,-10932
	ctx.r3.s64 = ctx.r11.s64 + -10932;
	// b 0x83099618
	sub_83099618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8CF8"))) PPC_WEAK_FUNC(sub_831D8CF8);
PPC_FUNC_IMPL(__imp__sub_831D8CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31920
	ctx.r11.s64 = -2091909120;
	// lis r10,-31920
	ctx.r10.s64 = -2091909120;
	// addi r4,r11,-10932
	ctx.r4.s64 = ctx.r11.s64 + -10932;
	// addi r3,r10,-10888
	ctx.r3.s64 = ctx.r10.s64 + -10888;
	// b 0x83099678
	sub_83099678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8D10"))) PPC_WEAK_FUNC(sub_831D8D10);
PPC_FUNC_IMPL(__imp__sub_831D8D10) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-26632
	ctx.r31.s64 = ctx.r11.s64 + -26632;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a7f140
	ctx.lr = 0x831D8D38;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D8D4C;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D8D5C;
	sub_82A7F140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8DA0"))) PPC_WEAK_FUNC(sub_831D8DA0);
PPC_FUNC_IMPL(__imp__sub_831D8DA0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-25560
	ctx.r31.s64 = ctx.r11.s64 + -25560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x82a7f140
	ctx.lr = 0x831D8DC8;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D8DDC;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D8DEC;
	sub_82A7F140(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8E30"))) PPC_WEAK_FUNC(sub_831D8E30);
PPC_FUNC_IMPL(__imp__sub_831D8E30) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-24488
	ctx.r31.s64 = ctx.r11.s64 + -24488;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x82a7f140
	ctx.lr = 0x831D8E58;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D8E6C;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D8E7C;
	sub_82A7F140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8EC0"))) PPC_WEAK_FUNC(sub_831D8EC0);
PPC_FUNC_IMPL(__imp__sub_831D8EC0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-23416
	ctx.r31.s64 = ctx.r11.s64 + -23416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82a7f140
	ctx.lr = 0x831D8EE8;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D8EFC;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D8F0C;
	sub_82A7F140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8F50"))) PPC_WEAK_FUNC(sub_831D8F50);
PPC_FUNC_IMPL(__imp__sub_831D8F50) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-22344
	ctx.r31.s64 = ctx.r11.s64 + -22344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82a7f140
	ctx.lr = 0x831D8F78;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D8F8C;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D8F9C;
	sub_82A7F140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D8FE0"))) PPC_WEAK_FUNC(sub_831D8FE0);
PPC_FUNC_IMPL(__imp__sub_831D8FE0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82a7f140
	ctx.lr = 0x831D9008;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D901C;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D902C;
	sub_82A7F140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D9070"))) PPC_WEAK_FUNC(sub_831D9070);
PPC_FUNC_IMPL(__imp__sub_831D9070) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-20200
	ctx.r31.s64 = ctx.r11.s64 + -20200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x82a7f140
	ctx.lr = 0x831D9098;
	sub_82A7F140(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-12304
	ctx.r4.s64 = ctx.r11.s64 + -12304;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a7d730
	ctx.lr = 0x831D90AC;
	sub_82A7D730(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82a7f140
	ctx.lr = 0x831D90BC;
	sub_82A7F140(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831D9100"))) PPC_WEAK_FUNC(sub_831D9100);
PPC_FUNC_IMPL(__imp__sub_831D9100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,23528
	ctx.r4.s64 = ctx.r11.s64 + 23528;
	// addi r3,r10,-28392
	ctx.r3.s64 = ctx.r10.s64 + -28392;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9118"))) PPC_WEAK_FUNC(sub_831D9118);
PPC_FUNC_IMPL(__imp__sub_831D9118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,23600
	ctx.r4.s64 = ctx.r11.s64 + 23600;
	// addi r3,r10,-28384
	ctx.r3.s64 = ctx.r10.s64 + -28384;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9130"))) PPC_WEAK_FUNC(sub_831D9130);
PPC_FUNC_IMPL(__imp__sub_831D9130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,23672
	ctx.r4.s64 = ctx.r11.s64 + 23672;
	// addi r3,r10,-28376
	ctx.r3.s64 = ctx.r10.s64 + -28376;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9148"))) PPC_WEAK_FUNC(sub_831D9148);
PPC_FUNC_IMPL(__imp__sub_831D9148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,23744
	ctx.r4.s64 = ctx.r11.s64 + 23744;
	// addi r3,r10,-28368
	ctx.r3.s64 = ctx.r10.s64 + -28368;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9160"))) PPC_WEAK_FUNC(sub_831D9160);
PPC_FUNC_IMPL(__imp__sub_831D9160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,23816
	ctx.r4.s64 = ctx.r11.s64 + 23816;
	// addi r3,r10,-28360
	ctx.r3.s64 = ctx.r10.s64 + -28360;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9178"))) PPC_WEAK_FUNC(sub_831D9178);
PPC_FUNC_IMPL(__imp__sub_831D9178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// addi r3,r10,-28352
	ctx.r3.s64 = ctx.r10.s64 + -28352;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9190"))) PPC_WEAK_FUNC(sub_831D9190);
PPC_FUNC_IMPL(__imp__sub_831D9190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,24104
	ctx.r4.s64 = ctx.r11.s64 + 24104;
	// addi r3,r10,-28344
	ctx.r3.s64 = ctx.r10.s64 + -28344;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D91A8"))) PPC_WEAK_FUNC(sub_831D91A8);
PPC_FUNC_IMPL(__imp__sub_831D91A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,25976
	ctx.r4.s64 = ctx.r11.s64 + 25976;
	// addi r3,r10,-28336
	ctx.r3.s64 = ctx.r10.s64 + -28336;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D91C0"))) PPC_WEAK_FUNC(sub_831D91C0);
PPC_FUNC_IMPL(__imp__sub_831D91C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,26120
	ctx.r4.s64 = ctx.r11.s64 + 26120;
	// addi r3,r10,-28328
	ctx.r3.s64 = ctx.r10.s64 + -28328;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D91D8"))) PPC_WEAK_FUNC(sub_831D91D8);
PPC_FUNC_IMPL(__imp__sub_831D91D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,26336
	ctx.r4.s64 = ctx.r11.s64 + 26336;
	// addi r3,r10,-28320
	ctx.r3.s64 = ctx.r10.s64 + -28320;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D91F0"))) PPC_WEAK_FUNC(sub_831D91F0);
PPC_FUNC_IMPL(__imp__sub_831D91F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// addi r3,r10,-28312
	ctx.r3.s64 = ctx.r10.s64 + -28312;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9208"))) PPC_WEAK_FUNC(sub_831D9208);
PPC_FUNC_IMPL(__imp__sub_831D9208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,26768
	ctx.r4.s64 = ctx.r11.s64 + 26768;
	// addi r3,r10,-28304
	ctx.r3.s64 = ctx.r10.s64 + -28304;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9220"))) PPC_WEAK_FUNC(sub_831D9220);
PPC_FUNC_IMPL(__imp__sub_831D9220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,26840
	ctx.r4.s64 = ctx.r11.s64 + 26840;
	// addi r3,r10,-28296
	ctx.r3.s64 = ctx.r10.s64 + -28296;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9238"))) PPC_WEAK_FUNC(sub_831D9238);
PPC_FUNC_IMPL(__imp__sub_831D9238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,26984
	ctx.r4.s64 = ctx.r11.s64 + 26984;
	// addi r3,r10,-28288
	ctx.r3.s64 = ctx.r10.s64 + -28288;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9250"))) PPC_WEAK_FUNC(sub_831D9250);
PPC_FUNC_IMPL(__imp__sub_831D9250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27128
	ctx.r4.s64 = ctx.r11.s64 + 27128;
	// addi r3,r10,-28280
	ctx.r3.s64 = ctx.r10.s64 + -28280;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9268"))) PPC_WEAK_FUNC(sub_831D9268);
PPC_FUNC_IMPL(__imp__sub_831D9268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27344
	ctx.r4.s64 = ctx.r11.s64 + 27344;
	// addi r3,r10,-28272
	ctx.r3.s64 = ctx.r10.s64 + -28272;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9280"))) PPC_WEAK_FUNC(sub_831D9280);
PPC_FUNC_IMPL(__imp__sub_831D9280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27524
	ctx.r4.s64 = ctx.r11.s64 + 27524;
	// addi r3,r10,-28264
	ctx.r3.s64 = ctx.r10.s64 + -28264;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9298"))) PPC_WEAK_FUNC(sub_831D9298);
PPC_FUNC_IMPL(__imp__sub_831D9298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27632
	ctx.r4.s64 = ctx.r11.s64 + 27632;
	// addi r3,r10,-28256
	ctx.r3.s64 = ctx.r10.s64 + -28256;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D92B0"))) PPC_WEAK_FUNC(sub_831D92B0);
PPC_FUNC_IMPL(__imp__sub_831D92B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27704
	ctx.r4.s64 = ctx.r11.s64 + 27704;
	// addi r3,r10,-28248
	ctx.r3.s64 = ctx.r10.s64 + -28248;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D92C8"))) PPC_WEAK_FUNC(sub_831D92C8);
PPC_FUNC_IMPL(__imp__sub_831D92C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27776
	ctx.r4.s64 = ctx.r11.s64 + 27776;
	// addi r3,r10,-28240
	ctx.r3.s64 = ctx.r10.s64 + -28240;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D92E0"))) PPC_WEAK_FUNC(sub_831D92E0);
PPC_FUNC_IMPL(__imp__sub_831D92E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,27884
	ctx.r4.s64 = ctx.r11.s64 + 27884;
	// addi r3,r10,-28232
	ctx.r3.s64 = ctx.r10.s64 + -28232;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D92F8"))) PPC_WEAK_FUNC(sub_831D92F8);
PPC_FUNC_IMPL(__imp__sub_831D92F8) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r11,r11,-17568
	ctx.r11.s64 = ctx.r11.s64 + -17568;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ecf1c
	ctx.lr = 0x831D9318;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-13088
	ctx.r3.s64 = ctx.r10.s64 + -13088;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D9324;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9338"))) PPC_WEAK_FUNC(sub_831D9338);
PPC_FUNC_IMPL(__imp__sub_831D9338) {
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
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-28224
	ctx.r3.s64 = ctx.r11.s64 + -28224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82aa3e48
	ctx.lr = 0x831D9358;
	sub_82AA3E48(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r3,r10,-13064
	ctx.r3.s64 = ctx.r10.s64 + -13064;
	// bl 0x82a7e6b0
	ctx.lr = 0x831D9364;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9378"))) PPC_WEAK_FUNC(sub_831D9378);
PPC_FUNC_IMPL(__imp__sub_831D9378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,-28448
	ctx.r4.s64 = ctx.r11.s64 + -28448;
	// addi r3,r10,-28208
	ctx.r3.s64 = ctx.r10.s64 + -28208;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9390"))) PPC_WEAK_FUNC(sub_831D9390);
PPC_FUNC_IMPL(__imp__sub_831D9390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,-28232
	ctx.r4.s64 = ctx.r11.s64 + -28232;
	// addi r3,r10,-28200
	ctx.r3.s64 = ctx.r10.s64 + -28200;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D93A8"))) PPC_WEAK_FUNC(sub_831D93A8);
PPC_FUNC_IMPL(__imp__sub_831D93A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,-28088
	ctx.r4.s64 = ctx.r11.s64 + -28088;
	// addi r3,r10,-28192
	ctx.r3.s64 = ctx.r10.s64 + -28192;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D93C0"))) PPC_WEAK_FUNC(sub_831D93C0);
PPC_FUNC_IMPL(__imp__sub_831D93C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r4,r11,-27944
	ctx.r4.s64 = ctx.r11.s64 + -27944;
	// addi r3,r10,-28184
	ctx.r3.s64 = ctx.r10.s64 + -28184;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82a93090
	sub_82A93090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D93D8"))) PPC_WEAK_FUNC(sub_831D93D8);
PPC_FUNC_IMPL(__imp__sub_831D93D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D93E8"))) PPC_WEAK_FUNC(sub_831D93E8);
PPC_FUNC_IMPL(__imp__sub_831D93E8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,442
	ctx.r4.s64 = 442;
	// addi r3,r11,29296
	ctx.r3.s64 = ctx.r11.s64 + 29296;
	// bl 0x8310c788
	ctx.lr = 0x831D9404;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9420"))) PPC_WEAK_FUNC(sub_831D9420);
PPC_FUNC_IMPL(__imp__sub_831D9420) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r11,29296
	ctx.r3.s64 = ctx.r11.s64 + 29296;
	// bl 0x8310c788
	ctx.lr = 0x831D943C;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9458"))) PPC_WEAK_FUNC(sub_831D9458);
PPC_FUNC_IMPL(__imp__sub_831D9458) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,642
	ctx.r4.s64 = 642;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D9474;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9490"))) PPC_WEAK_FUNC(sub_831D9490);
PPC_FUNC_IMPL(__imp__sub_831D9490) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,643
	ctx.r4.s64 = 643;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D94AC;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D94C8"))) PPC_WEAK_FUNC(sub_831D94C8);
PPC_FUNC_IMPL(__imp__sub_831D94C8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,644
	ctx.r4.s64 = 644;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D94E4;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9500"))) PPC_WEAK_FUNC(sub_831D9500);
PPC_FUNC_IMPL(__imp__sub_831D9500) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,645
	ctx.r4.s64 = 645;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D951C;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9538"))) PPC_WEAK_FUNC(sub_831D9538);
PPC_FUNC_IMPL(__imp__sub_831D9538) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,646
	ctx.r4.s64 = 646;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D9554;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9570"))) PPC_WEAK_FUNC(sub_831D9570);
PPC_FUNC_IMPL(__imp__sub_831D9570) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,647
	ctx.r4.s64 = 647;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D958C;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D95A8"))) PPC_WEAK_FUNC(sub_831D95A8);
PPC_FUNC_IMPL(__imp__sub_831D95A8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,648
	ctx.r4.s64 = 648;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D95C4;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D95E0"))) PPC_WEAK_FUNC(sub_831D95E0);
PPC_FUNC_IMPL(__imp__sub_831D95E0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,649
	ctx.r4.s64 = 649;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// bl 0x8310c788
	ctx.lr = 0x831D95FC;
	sub_8310C788(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-28176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9618"))) PPC_WEAK_FUNC(sub_831D9618);
PPC_FUNC_IMPL(__imp__sub_831D9618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// addi r11,r11,-17372
	ctx.r11.s64 = ctx.r11.s64 + -17372;
	// addi r10,r10,-17356
	ctx.r10.s64 = ctx.r10.s64 + -17356;
	// addi r9,r9,-17340
	ctx.r9.s64 = ctx.r9.s64 + -17340;
	// addi r8,r8,-17324
	ctx.r8.s64 = ctx.r8.s64 + -17324;
	// addi r7,r7,-17308
	ctx.r7.s64 = ctx.r7.s64 + -17308;
	// addi r5,r6,-28116
	ctx.r5.s64 = ctx.r6.s64 + -28116;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-28116(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + -28116, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9678"))) PPC_WEAK_FUNC(sub_831D9678);
PPC_FUNC_IMPL(__imp__sub_831D9678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// addi r11,r11,-17292
	ctx.r11.s64 = ctx.r11.s64 + -17292;
	// addi r10,r10,-17276
	ctx.r10.s64 = ctx.r10.s64 + -17276;
	// addi r9,r9,-17260
	ctx.r9.s64 = ctx.r9.s64 + -17260;
	// addi r8,r8,-17244
	ctx.r8.s64 = ctx.r8.s64 + -17244;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r7,-28096
	ctx.r6.s64 = ctx.r7.s64 + -28096;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,-28096(r7)
	PPC_STORE_U32(ctx.r7.u32 + -28096, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D96C8"))) PPC_WEAK_FUNC(sub_831D96C8);
PPC_FUNC_IMPL(__imp__sub_831D96C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r11,-17228
	ctx.r11.s64 = ctx.r11.s64 + -17228;
	// addi r10,r10,-17212
	ctx.r10.s64 = ctx.r10.s64 + -17212;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,-17196
	ctx.r9.s64 = ctx.r9.s64 + -17196;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,-17180
	ctx.r8.s64 = ctx.r8.s64 + -17180;
	// addi r7,r7,-17164
	ctx.r7.s64 = ctx.r7.s64 + -17164;
	// addi r5,r6,-28080
	ctx.r5.s64 = ctx.r6.s64 + -28080;
	// stw r11,-28080(r6)
	PPC_STORE_U32(ctx.r6.u32 + -28080, ctx.r11.u32);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9728"))) PPC_WEAK_FUNC(sub_831D9728);
PPC_FUNC_IMPL(__imp__sub_831D9728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r11,r11,-28048
	ctx.r11.s64 = ctx.r11.s64 + -28048;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9740"))) PPC_WEAK_FUNC(sub_831D9740);
PPC_FUNC_IMPL(__imp__sub_831D9740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r11,r11,-28032
	ctx.r11.s64 = ctx.r11.s64 + -28032;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9758"))) PPC_WEAK_FUNC(sub_831D9758);
PPC_FUNC_IMPL(__imp__sub_831D9758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,-23200
	ctx.r11.s64 = ctx.r11.s64 + -23200;
	// addi r10,r10,-23216
	ctx.r10.s64 = ctx.r10.s64 + -23216;
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// addi r9,r9,-23248
	ctx.r9.s64 = ctx.r9.s64 + -23248;
	// addi r8,r8,-23264
	ctx.r8.s64 = ctx.r8.s64 + -23264;
	// addi r6,r6,-23296
	ctx.r6.s64 = ctx.r6.s64 + -23296;
	// addi r11,r5,-23232
	ctx.r11.s64 = ctx.r5.s64 + -23232;
	// addi r7,r7,-23280
	ctx.r7.s64 = ctx.r7.s64 + -23280;
	// addi r10,r4,-23312
	ctx.r10.s64 = ctx.r4.s64 + -23312;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// lvx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-31919
	ctx.r30.s64 = -2091843584;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,-23328
	ctx.r9.s64 = ctx.r3.s64 + -23328;
	// lvx128 v56,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r30,-28016
	ctx.r7.s64 = ctx.r30.s64 + -28016;
	// addi r8,r31,-23344
	ctx.r8.s64 = ctx.r31.s64 + -23344;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,64
	ctx.r9.s64 = 64;
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,80
	ctx.r8.s64 = 80;
	// stvx128 v62,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// stvx128 v61,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,112
	ctx.r6.s64 = 112;
	// stvx128 v60,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,144
	ctx.r10.s64 = 144;
	// stvx128 v59,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r7,r8
	ea = (ctx.r7.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9838"))) PPC_WEAK_FUNC(sub_831D9838);
PPC_FUNC_IMPL(__imp__sub_831D9838) {
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
	// bl 0x823f18b8
	ctx.lr = 0x831D984C;
	sub_823F18B8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// addi r31,r11,-5640
	ctx.r31.s64 = ctx.r11.s64 + -5640;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,16960
	ctx.r9.u64 = ctx.r9.u64 | 16960;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// bl 0x823f18b8
	ctx.lr = 0x831D9890;
	sub_823F18B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x823f18b8
	ctx.lr = 0x831D98A0;
	sub_823F18B8(ctx, base);
	// bl 0x82a7fd90
	ctx.lr = 0x831D98A4;
	sub_82A7FD90(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x831ecfbc
	ctx.lr = 0x831D98AC;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_831D98C0"))) PPC_WEAK_FUNC(sub_831D98C0);
PPC_FUNC_IMPL(__imp__sub_831D98C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D98D0"))) PPC_WEAK_FUNC(sub_831D98D0);
PPC_FUNC_IMPL(__imp__sub_831D98D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-9984
	ctx.r9.s64 = ctx.r11.s64 + -9984;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9900"))) PPC_WEAK_FUNC(sub_831D9900);
PPC_FUNC_IMPL(__imp__sub_831D9900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10000
	ctx.r9.s64 = ctx.r11.s64 + -10000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9930"))) PPC_WEAK_FUNC(sub_831D9930);
PPC_FUNC_IMPL(__imp__sub_831D9930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10048
	ctx.r9.s64 = ctx.r11.s64 + -10048;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9960"))) PPC_WEAK_FUNC(sub_831D9960);
PPC_FUNC_IMPL(__imp__sub_831D9960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-10016
	ctx.r9.s64 = ctx.r11.s64 + -10016;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9990"))) PPC_WEAK_FUNC(sub_831D9990);
PPC_FUNC_IMPL(__imp__sub_831D9990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-10032
	ctx.r10.s64 = ctx.r10.s64 + -10032;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D99B0"))) PPC_WEAK_FUNC(sub_831D99B0);
PPC_FUNC_IMPL(__imp__sub_831D99B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-10064
	ctx.r10.s64 = ctx.r10.s64 + -10064;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

