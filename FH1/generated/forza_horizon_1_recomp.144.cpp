#include "forza_horizon_1_init.h"

__attribute__((alias("__imp__sub_831C3390"))) PPC_WEAK_FUNC(sub_831C3390);
PPC_FUNC_IMPL(__imp__sub_831C3390) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4156
	ctx.r3.s64 = ctx.r11.s64 + 4156;
	// bl 0x82ca7538
	ctx.lr = 0x831C33A8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C33C0"))) PPC_WEAK_FUNC(sub_831C33C0);
PPC_FUNC_IMPL(__imp__sub_831C33C0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4192
	ctx.r3.s64 = ctx.r11.s64 + 4192;
	// bl 0x82ca7538
	ctx.lr = 0x831C33D8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C33F0"))) PPC_WEAK_FUNC(sub_831C33F0);
PPC_FUNC_IMPL(__imp__sub_831C33F0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4228
	ctx.r3.s64 = ctx.r11.s64 + 4228;
	// bl 0x82ca7538
	ctx.lr = 0x831C3408;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3420"))) PPC_WEAK_FUNC(sub_831C3420);
PPC_FUNC_IMPL(__imp__sub_831C3420) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4260
	ctx.r3.s64 = ctx.r11.s64 + 4260;
	// bl 0x82ca7538
	ctx.lr = 0x831C3438;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3450"))) PPC_WEAK_FUNC(sub_831C3450);
PPC_FUNC_IMPL(__imp__sub_831C3450) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// bl 0x82ca7538
	ctx.lr = 0x831C3468;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3480"))) PPC_WEAK_FUNC(sub_831C3480);
PPC_FUNC_IMPL(__imp__sub_831C3480) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4312
	ctx.r3.s64 = ctx.r11.s64 + 4312;
	// bl 0x82ca7538
	ctx.lr = 0x831C3498;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C34B0"))) PPC_WEAK_FUNC(sub_831C34B0);
PPC_FUNC_IMPL(__imp__sub_831C34B0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4332
	ctx.r3.s64 = ctx.r11.s64 + 4332;
	// bl 0x82ca7538
	ctx.lr = 0x831C34C8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C34E0"))) PPC_WEAK_FUNC(sub_831C34E0);
PPC_FUNC_IMPL(__imp__sub_831C34E0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,4356
	ctx.r3.s64 = ctx.r11.s64 + 4356;
	// bl 0x82ca7538
	ctx.lr = 0x831C34F8;
	sub_82CA7538(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,30772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3510"))) PPC_WEAK_FUNC(sub_831C3510);
PPC_FUNC_IMPL(__imp__sub_831C3510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30912
	ctx.r9.s64 = ctx.r11.s64 + 30912;
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

__attribute__((alias("__imp__sub_831C3540"))) PPC_WEAK_FUNC(sub_831C3540);
PPC_FUNC_IMPL(__imp__sub_831C3540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30896
	ctx.r9.s64 = ctx.r11.s64 + 30896;
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

__attribute__((alias("__imp__sub_831C3570"))) PPC_WEAK_FUNC(sub_831C3570);
PPC_FUNC_IMPL(__imp__sub_831C3570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30848
	ctx.r9.s64 = ctx.r11.s64 + 30848;
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

__attribute__((alias("__imp__sub_831C35A0"))) PPC_WEAK_FUNC(sub_831C35A0);
PPC_FUNC_IMPL(__imp__sub_831C35A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,30880
	ctx.r9.s64 = ctx.r11.s64 + 30880;
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

__attribute__((alias("__imp__sub_831C35D0"))) PPC_WEAK_FUNC(sub_831C35D0);
PPC_FUNC_IMPL(__imp__sub_831C35D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,30864
	ctx.r10.s64 = ctx.r10.s64 + 30864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C35F0"))) PPC_WEAK_FUNC(sub_831C35F0);
PPC_FUNC_IMPL(__imp__sub_831C35F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,30832
	ctx.r10.s64 = ctx.r10.s64 + 30832;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3610"))) PPC_WEAK_FUNC(sub_831C3610);
PPC_FUNC_IMPL(__imp__sub_831C3610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C3620"))) PPC_WEAK_FUNC(sub_831C3620);
PPC_FUNC_IMPL(__imp__sub_831C3620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,3392
	ctx.r11.s64 = ctx.r11.s64 + 3392;
	// addi r10,r10,30960
	ctx.r10.s64 = ctx.r10.s64 + 30960;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3640"))) PPC_WEAK_FUNC(sub_831C3640);
PPC_FUNC_IMPL(__imp__sub_831C3640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// addi r10,r10,30928
	ctx.r10.s64 = ctx.r10.s64 + 30928;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3660"))) PPC_WEAK_FUNC(sub_831C3660);
PPC_FUNC_IMPL(__imp__sub_831C3660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// addi r11,r11,20592
	ctx.r11.s64 = ctx.r11.s64 + 20592;
	// addi r10,r10,30976
	ctx.r10.s64 = ctx.r10.s64 + 30976;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3680"))) PPC_WEAK_FUNC(sub_831C3680);
PPC_FUNC_IMPL(__imp__sub_831C3680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C3690"))) PPC_WEAK_FUNC(sub_831C3690);
PPC_FUNC_IMPL(__imp__sub_831C3690) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-436
	ctx.r3.s64 = ctx.r11.s64 + -436;
	// bl 0x824683b0
	ctx.lr = 0x831C36AC;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C36B8;
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

__attribute__((alias("__imp__sub_831C36C8"))) PPC_WEAK_FUNC(sub_831C36C8);
PPC_FUNC_IMPL(__imp__sub_831C36C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C36D8"))) PPC_WEAK_FUNC(sub_831C36D8);
PPC_FUNC_IMPL(__imp__sub_831C36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C36E8"))) PPC_WEAK_FUNC(sub_831C36E8);
PPC_FUNC_IMPL(__imp__sub_831C36E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-480
	ctx.r9.s64 = ctx.r11.s64 + -480;
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

__attribute__((alias("__imp__sub_831C3718"))) PPC_WEAK_FUNC(sub_831C3718);
PPC_FUNC_IMPL(__imp__sub_831C3718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-512
	ctx.r9.s64 = ctx.r11.s64 + -512;
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

__attribute__((alias("__imp__sub_831C3748"))) PPC_WEAK_FUNC(sub_831C3748);
PPC_FUNC_IMPL(__imp__sub_831C3748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-560
	ctx.r9.s64 = ctx.r11.s64 + -560;
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

__attribute__((alias("__imp__sub_831C3778"))) PPC_WEAK_FUNC(sub_831C3778);
PPC_FUNC_IMPL(__imp__sub_831C3778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-528
	ctx.r9.s64 = ctx.r11.s64 + -528;
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

__attribute__((alias("__imp__sub_831C37A8"))) PPC_WEAK_FUNC(sub_831C37A8);
PPC_FUNC_IMPL(__imp__sub_831C37A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-544
	ctx.r10.s64 = ctx.r10.s64 + -544;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C37C8"))) PPC_WEAK_FUNC(sub_831C37C8);
PPC_FUNC_IMPL(__imp__sub_831C37C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-576
	ctx.r10.s64 = ctx.r10.s64 + -576;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C37E8"))) PPC_WEAK_FUNC(sub_831C37E8);
PPC_FUNC_IMPL(__imp__sub_831C37E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-496
	ctx.r10.s64 = ctx.r10.s64 + -496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3808"))) PPC_WEAK_FUNC(sub_831C3808);
PPC_FUNC_IMPL(__imp__sub_831C3808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-408
	ctx.r3.s64 = ctx.r11.s64 + -408;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C3818"))) PPC_WEAK_FUNC(sub_831C3818);
PPC_FUNC_IMPL(__imp__sub_831C3818) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// bl 0x824683b0
	ctx.lr = 0x831C3834;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21600
	ctx.r3.s64 = ctx.r11.s64 + -21600;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C3840;
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

__attribute__((alias("__imp__sub_831C3850"))) PPC_WEAK_FUNC(sub_831C3850);
PPC_FUNC_IMPL(__imp__sub_831C3850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddf0
	ctx.lr = 0x831C3858;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,29507
	ctx.r10.s64 = 1933770752;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r10,20565
	ctx.r10.u64 = ctx.r10.u64 | 20565;
	// addi r11,r11,11492
	ctx.r11.s64 = ctx.r11.s64 + 11492;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r29,8
	ctx.r29.s64 = 8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r23,10
	ctx.r23.s64 = 10;
	// stb r28,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r28.u8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r9,29511
	ctx.r9.s64 = 1934032896;
	// addi r31,r11,-21468
	ctx.r31.s64 = ctx.r11.s64 + -21468;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r11,r10,11476
	ctx.r11.s64 = ctx.r10.s64 + 11476;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// ori r10,r9,20565
	ctx.r10.u64 = ctx.r9.u64 | 20565;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stb r28,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// bl 0x82cc66e8
	ctx.lr = 0x831C38E8;
	sub_82CC66E8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stb r28,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r28.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r28,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r28.u8);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C390C;
	sub_82CC66E8(ctx, base);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r11,r8,-28776
	ctx.r11.s64 = ctx.r8.s64 + -28776;
	// stw r28,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r28,780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 780, ctx.r28.u8);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lis r8,26179
	ctx.r8.s64 = 1715666944;
	// stb r28,784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 784, ctx.r28.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r28,781(r31)
	PPC_STORE_U8(ctx.r31.u32 + 781, ctx.r28.u8);
	// addi r10,r9,11464
	ctx.r10.s64 = ctx.r9.s64 + 11464;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// ori r24,r8,20565
	ctx.r24.u64 = ctx.r8.u64 | 20565;
	// stb r28,786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 786, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r26,512
	ctx.r26.s64 = 512;
	// stb r28,785(r31)
	PPC_STORE_U8(ctx.r31.u32 + 785, ctx.r28.u8);
	// lis r8,26183
	ctx.r8.s64 = 1715929088;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// ori r25,r8,20565
	ctx.r25.u64 = ctx.r8.u64 | 20565;
	// stw r28,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r28.u32);
	// addi r11,r11,11452
	ctx.r11.s64 = ctx.r11.s64 + 11452;
	// stw r28,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// bl 0x82cc66e8
	ctx.lr = 0x831C39C4;
	sub_82CC66E8(ctx, base);
	// stw r28,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,1184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1184, ctx.r28.u8);
	// addi r3,r31,1188
	ctx.r3.s64 = ctx.r31.s64 + 1188;
	// stb r28,1185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1185, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C39E8;
	sub_82CC66E8(ctx, base);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r11,r8,-28780
	ctx.r11.s64 = ctx.r8.s64 + -28780;
	// stw r28,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r28.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stb r28,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r28.u8);
	// lis r7,28227
	ctx.r7.s64 = 1849884672;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r28,1572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1572, ctx.r28.u8);
	// addi r9,r8,11444
	ctx.r9.s64 = ctx.r8.s64 + 11444;
	// stb r28,1568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1568, ctx.r28.u8);
	// ori r8,r7,20565
	ctx.r8.u64 = ctx.r7.u64 | 20565;
	// stb r28,1569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1569, ctx.r28.u8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r8,28231
	ctx.r8.s64 = 1850146816;
	// stb r28,1573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1573, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r10,r9,11436
	ctx.r10.s64 = ctx.r9.s64 + 11436;
	// stb r28,1574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1574, ctx.r28.u8);
	// ori r11,r8,20565
	ctx.r11.u64 = ctx.r8.u64 | 20565;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r22,33
	ctx.r22.s64 = 33;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r28,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r28.u32);
	// addi r3,r31,1592
	ctx.r3.s64 = ctx.r31.s64 + 1592;
	// stw r29,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r28,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r28.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x82cc66e8
	ctx.lr = 0x831C3A9C;
	sub_82CC66E8(ctx, base);
	// stw r28,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r28.u32);
	// stb r28,1972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1972, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,1973(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1973, ctx.r28.u8);
	// addi r3,r31,1976
	ctx.r3.s64 = ctx.r31.s64 + 1976;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C3AC0;
	sub_82CC66E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r9,r11,-10848
	ctx.r9.s64 = ctx.r11.s64 + -10848;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r9,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lis r7,24899
	ctx.r7.s64 = 1631780864;
	// stw r28,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r28.u32);
	// addi r8,r8,11424
	ctx.r8.s64 = ctx.r8.s64 + 11424;
	// stb r28,2356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2356, ctx.r28.u8);
	// ori r7,r7,20565
	ctx.r7.u64 = ctx.r7.u64 | 20565;
	// stb r28,2357(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2357, ctx.r28.u8);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lis r7,24903
	ctx.r7.s64 = 1632043008;
	// stb r28,2360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2360, ctx.r28.u8);
	// addi r11,r8,11412
	ctx.r11.s64 = ctx.r8.s64 + 11412;
	// stb r28,2361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2361, ctx.r28.u8);
	// ori r10,r7,20565
	ctx.r10.u64 = ctx.r7.u64 | 20565;
	// stb r28,2362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2362, ctx.r28.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r31,2380
	ctx.r3.s64 = ctx.r31.s64 + 2380;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// stw r28,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r28.u32);
	// stw r28,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r28.u32);
	// stw r29,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// bl 0x82cc66e8
	ctx.lr = 0x831C3B6C;
	sub_82CC66E8(ctx, base);
	// stw r28,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r28.u32);
	// stb r28,2760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2760, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,2761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2761, ctx.r28.u8);
	// addi r3,r31,2764
	ctx.r3.s64 = ctx.r31.s64 + 2764;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C3B90;
	sub_82CC66E8(ctx, base);
	// lis r6,25411
	ctx.r6.s64 = 1665335296;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// ori r10,r6,20565
	ctx.r10.u64 = ctx.r6.u64 | 20565;
	// stw r28,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,3144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3144, ctx.r28.u8);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// stb r28,3145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3145, ctx.r28.u8);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stb r28,3148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3148, ctx.r28.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r9,r8,-28792
	ctx.r9.s64 = ctx.r8.s64 + -28792;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r7,r7,11396
	ctx.r7.s64 = ctx.r7.s64 + 11396;
	// stw r9,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r9.u32);
	// li r23,38
	ctx.r23.s64 = 38;
	// stb r28,3149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3149, ctx.r28.u8);
	// lis r10,25415
	ctx.r10.s64 = 1665597440;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r11,r11,11380
	ctx.r11.s64 = ctx.r11.s64 + 11380;
	// stb r28,3150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3150, ctx.r28.u8);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// ori r10,r10,20565
	ctx.r10.u64 = ctx.r10.u64 | 20565;
	// stw r28,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r28,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r28.u32);
	// stw r29,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,3168
	ctx.r3.s64 = ctx.r31.s64 + 3168;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// bl 0x82cc66e8
	ctx.lr = 0x831C3C44;
	sub_82CC66E8(ctx, base);
	// stw r28,3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3544, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,3548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3548, ctx.r28.u8);
	// addi r3,r31,3552
	ctx.r3.s64 = ctx.r31.s64 + 3552;
	// stb r28,3549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3549, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C3C68;
	sub_82CC66E8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r9,r11,11364
	ctx.r9.s64 = ctx.r11.s64 + 11364;
	// stb r28,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r28.u8);
	// addi r8,r8,11340
	ctx.r8.s64 = ctx.r8.s64 + 11340;
	// stb r28,3932(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3932, ctx.r28.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,3940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3940, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r28,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,3933(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3933, ctx.r28.u8);
	// addi r11,r8,11316
	ctx.r11.s64 = ctx.r8.s64 + 11316;
	// stb r28,3936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3936, ctx.r28.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r28,3937(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3937, ctx.r28.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r30,3938(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3938, ctx.r30.u8);
	// addi r3,r31,3956
	ctx.r3.s64 = ctx.r31.s64 + 3956;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r28,3944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3944, ctx.r28.u32);
	// stw r28,3948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3948, ctx.r28.u32);
	// stw r29,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r28,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r28.u8);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x82cc66e8
	ctx.lr = 0x831C3D0C;
	sub_82CC66E8(ctx, base);
	// stw r28,4332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4332, ctx.r28.u32);
	// stb r28,4336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4336, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,4337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4337, ctx.r28.u8);
	// addi r3,r31,4340
	ctx.r3.s64 = ctx.r31.s64 + 4340;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C3D30;
	sub_82CC66E8(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r9,r9,-28808
	ctx.r9.s64 = ctx.r9.s64 + -28808;
	// stw r28,4716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4716, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r28,4720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4720, ctx.r28.u8);
	// stb r28,4721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4721, ctx.r28.u8);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stb r28,4724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4724, ctx.r28.u8);
	// lis r7,30275
	ctx.r7.s64 = 1984102400;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stb r28,4725(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4725, ctx.r28.u8);
	// stw r9,4728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4728, ctx.r9.u32);
	// stb r28,4726(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4726, ctx.r28.u8);
	// addi r8,r8,11304
	ctx.r8.s64 = ctx.r8.s64 + 11304;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// ori r24,r7,20565
	ctx.r24.u64 = ctx.r7.u64 | 20565;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lis r11,30279
	ctx.r11.s64 = 1984364544;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// ori r25,r11,20565
	ctx.r25.u64 = ctx.r11.u64 | 20565;
	// stw r28,4732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4732, ctx.r28.u32);
	// addi r11,r8,11292
	ctx.r11.s64 = ctx.r8.s64 + 11292;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r28,4736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4736, ctx.r28.u32);
	// addi r3,r31,4744
	ctx.r3.s64 = ctx.r31.s64 + 4744;
	// stw r29,4740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4740, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// bl 0x82cc66e8
	ctx.lr = 0x831C3DD8;
	sub_82CC66E8(ctx, base);
	// stw r28,5120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5120, ctx.r28.u32);
	// stb r28,5124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5124, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,5125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5125, ctx.r28.u8);
	// addi r3,r31,5128
	ctx.r3.s64 = ctx.r31.s64 + 5128;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82cc66e8
	ctx.lr = 0x831C3DFC;
	sub_82CC66E8(ctx, base);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r11,r7,11280
	ctx.r11.s64 = ctx.r7.s64 + 11280;
	// stw r28,5504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5504, ctx.r28.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stb r28,5508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5508, ctx.r28.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r8,11272
	ctx.r11.s64 = ctx.r8.s64 + 11272;
	// stb r28,5509(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5509, ctx.r28.u8);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r11,5516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5516, ctx.r11.u32);
	// addi r3,r31,5532
	ctx.r3.s64 = ctx.r31.s64 + 5532;
	// stb r28,5512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5512, ctx.r28.u8);
	// addi r8,r8,11260
	ctx.r8.s64 = ctx.r8.s64 + 11260;
	// stb r28,5513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5513, ctx.r28.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r28,5514(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5514, ctx.r28.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// stw r28,5520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5520, ctx.r28.u32);
	// stw r28,5524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5524, ctx.r28.u32);
	// stw r29,5528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5528, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// bl 0x82cc66e8
	ctx.lr = 0x831C3E9C;
	sub_82CC66E8(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,5908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5908, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r28,5912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5912, ctx.r28.u8);
	// stb r28,5913(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5913, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,5916
	ctx.r3.s64 = ctx.r31.s64 + 5916;
	// bl 0x82cc66e8
	ctx.lr = 0x831C3EC0;
	sub_82CC66E8(ctx, base);
	// stw r28,6292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6292, ctx.r28.u32);
	// stb r28,6296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6296, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,6297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6297, ctx.r28.u8);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r28,6300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6300, ctx.r28.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r28,6301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6301, ctx.r28.u8);
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// stb r28,6302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6302, ctx.r28.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C3EF0;
	sub_82A7E6B0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a7de40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C3EF8"))) PPC_WEAK_FUNC(sub_831C3EF8);
PPC_FUNC_IMPL(__imp__sub_831C3EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21064
	ctx.r3.s64 = ctx.r11.s64 + -21064;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C3F08"))) PPC_WEAK_FUNC(sub_831C3F08);
PPC_FUNC_IMPL(__imp__sub_831C3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21048
	ctx.r3.s64 = ctx.r11.s64 + -21048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C3F18"))) PPC_WEAK_FUNC(sub_831C3F18);
PPC_FUNC_IMPL(__imp__sub_831C3F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32176
	ctx.r9.s64 = ctx.r11.s64 + -32176;
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

__attribute__((alias("__imp__sub_831C3F48"))) PPC_WEAK_FUNC(sub_831C3F48);
PPC_FUNC_IMPL(__imp__sub_831C3F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32192
	ctx.r9.s64 = ctx.r11.s64 + -32192;
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

__attribute__((alias("__imp__sub_831C3F78"))) PPC_WEAK_FUNC(sub_831C3F78);
PPC_FUNC_IMPL(__imp__sub_831C3F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32240
	ctx.r9.s64 = ctx.r11.s64 + -32240;
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

__attribute__((alias("__imp__sub_831C3FA8"))) PPC_WEAK_FUNC(sub_831C3FA8);
PPC_FUNC_IMPL(__imp__sub_831C3FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-32208
	ctx.r9.s64 = ctx.r11.s64 + -32208;
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

__attribute__((alias("__imp__sub_831C3FD8"))) PPC_WEAK_FUNC(sub_831C3FD8);
PPC_FUNC_IMPL(__imp__sub_831C3FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-32224
	ctx.r10.s64 = ctx.r10.s64 + -32224;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C3FF8"))) PPC_WEAK_FUNC(sub_831C3FF8);
PPC_FUNC_IMPL(__imp__sub_831C3FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-32256
	ctx.r10.s64 = ctx.r10.s64 + -32256;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4018"))) PPC_WEAK_FUNC(sub_831C4018);
PPC_FUNC_IMPL(__imp__sub_831C4018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfd f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12168);
	// bl 0x823f2ad8
	ctx.lr = 0x831C4030;
	sub_823F2AD8(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-32156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32156, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4050"))) PPC_WEAK_FUNC(sub_831C4050);
PPC_FUNC_IMPL(__imp__sub_831C4050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfd f1,12176(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12176);
	// bl 0x823f2ad8
	ctx.lr = 0x831C4068;
	sub_823F2AD8(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-32140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32140, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4088"))) PPC_WEAK_FUNC(sub_831C4088);
PPC_FUNC_IMPL(__imp__sub_831C4088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,10008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-32144(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C40A8"))) PPC_WEAK_FUNC(sub_831C40A8);
PPC_FUNC_IMPL(__imp__sub_831C40A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,19696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19696);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32156);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-32016(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32016, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C40C8"))) PPC_WEAK_FUNC(sub_831C40C8);
PPC_FUNC_IMPL(__imp__sub_831C40C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-12804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-32136(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C40E8"))) PPC_WEAK_FUNC(sub_831C40E8);
PPC_FUNC_IMPL(__imp__sub_831C40E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,21592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32156);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-32132(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4108"))) PPC_WEAK_FUNC(sub_831C4108);
PPC_FUNC_IMPL(__imp__sub_831C4108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-32012(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32012, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4128"))) PPC_WEAK_FUNC(sub_831C4128);
PPC_FUNC_IMPL(__imp__sub_831C4128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32156);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-32148(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4148"))) PPC_WEAK_FUNC(sub_831C4148);
PPC_FUNC_IMPL(__imp__sub_831C4148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-32140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-32004(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32004, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4168"))) PPC_WEAK_FUNC(sub_831C4168);
PPC_FUNC_IMPL(__imp__sub_831C4168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-32156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,22244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22244);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-32000(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32000, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4188"))) PPC_WEAK_FUNC(sub_831C4188);
PPC_FUNC_IMPL(__imp__sub_831C4188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-32140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-9688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9688);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-32160(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C41A8"))) PPC_WEAK_FUNC(sub_831C41A8);
PPC_FUNC_IMPL(__imp__sub_831C41A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-32156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,22088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22088);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-32152(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32152, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C41C8"))) PPC_WEAK_FUNC(sub_831C41C8);
PPC_FUNC_IMPL(__imp__sub_831C41C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C41D8"))) PPC_WEAK_FUNC(sub_831C41D8);
PPC_FUNC_IMPL(__imp__sub_831C41D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21000
	ctx.r3.s64 = ctx.r11.s64 + -21000;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C41E8"))) PPC_WEAK_FUNC(sub_831C41E8);
PPC_FUNC_IMPL(__imp__sub_831C41E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21032
	ctx.r3.s64 = ctx.r11.s64 + -21032;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C41F8"))) PPC_WEAK_FUNC(sub_831C41F8);
PPC_FUNC_IMPL(__imp__sub_831C41F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21024
	ctx.r3.s64 = ctx.r11.s64 + -21024;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4208"))) PPC_WEAK_FUNC(sub_831C4208);
PPC_FUNC_IMPL(__imp__sub_831C4208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4218"))) PPC_WEAK_FUNC(sub_831C4218);
PPC_FUNC_IMPL(__imp__sub_831C4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,-32128
	ctx.r3.s64 = ctx.r11.s64 + -32128;
	// b 0x82462098
	sub_82462098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4228"))) PPC_WEAK_FUNC(sub_831C4228);
PPC_FUNC_IMPL(__imp__sub_831C4228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4238"))) PPC_WEAK_FUNC(sub_831C4238);
PPC_FUNC_IMPL(__imp__sub_831C4238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31280
	ctx.r9.s64 = ctx.r11.s64 + -31280;
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

__attribute__((alias("__imp__sub_831C4268"))) PPC_WEAK_FUNC(sub_831C4268);
PPC_FUNC_IMPL(__imp__sub_831C4268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31312
	ctx.r9.s64 = ctx.r11.s64 + -31312;
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

__attribute__((alias("__imp__sub_831C4298"))) PPC_WEAK_FUNC(sub_831C4298);
PPC_FUNC_IMPL(__imp__sub_831C4298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31360
	ctx.r9.s64 = ctx.r11.s64 + -31360;
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

__attribute__((alias("__imp__sub_831C42C8"))) PPC_WEAK_FUNC(sub_831C42C8);
PPC_FUNC_IMPL(__imp__sub_831C42C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31328
	ctx.r9.s64 = ctx.r11.s64 + -31328;
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

__attribute__((alias("__imp__sub_831C42F8"))) PPC_WEAK_FUNC(sub_831C42F8);
PPC_FUNC_IMPL(__imp__sub_831C42F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-31344
	ctx.r10.s64 = ctx.r10.s64 + -31344;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4318"))) PPC_WEAK_FUNC(sub_831C4318);
PPC_FUNC_IMPL(__imp__sub_831C4318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-31376
	ctx.r10.s64 = ctx.r10.s64 + -31376;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4338"))) PPC_WEAK_FUNC(sub_831C4338);
PPC_FUNC_IMPL(__imp__sub_831C4338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-20864
	ctx.r3.s64 = ctx.r11.s64 + -20864;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4348"))) PPC_WEAK_FUNC(sub_831C4348);
PPC_FUNC_IMPL(__imp__sub_831C4348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-31296
	ctx.r10.s64 = ctx.r10.s64 + -31296;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4368"))) PPC_WEAK_FUNC(sub_831C4368);
PPC_FUNC_IMPL(__imp__sub_831C4368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-31216
	ctx.r3.s64 = ctx.r11.s64 + -31216;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4378"))) PPC_WEAK_FUNC(sub_831C4378);
PPC_FUNC_IMPL(__imp__sub_831C4378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-31264
	ctx.r30.s64 = ctx.r31.s64 + -31264;
	// addi r4,r11,14684
	ctx.r4.s64 = ctx.r11.s64 + 14684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C43A4;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-10068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10068);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-20848
	ctx.r3.s64 = ctx.r10.s64 + -20848;
	// lfs f11,14680(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14680);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31264, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C43EC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4408"))) PPC_WEAK_FUNC(sub_831C4408);
PPC_FUNC_IMPL(__imp__sub_831C4408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-31228
	ctx.r30.s64 = ctx.r31.s64 + -31228;
	// addi r4,r11,14744
	ctx.r4.s64 = ctx.r11.s64 + 14744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4434;
	sub_82C07410(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-20896
	ctx.r3.s64 = ctx.r9.s64 + -20896;
	// lfs f0,-32368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32368);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-31228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31228, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4458;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4470"))) PPC_WEAK_FUNC(sub_831C4470);
PPC_FUNC_IMPL(__imp__sub_831C4470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-20872
	ctx.r3.s64 = ctx.r11.s64 + -20872;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4480"))) PPC_WEAK_FUNC(sub_831C4480);
PPC_FUNC_IMPL(__imp__sub_831C4480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-30112
	ctx.r9.s64 = ctx.r11.s64 + -30112;
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

__attribute__((alias("__imp__sub_831C44B0"))) PPC_WEAK_FUNC(sub_831C44B0);
PPC_FUNC_IMPL(__imp__sub_831C44B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31056
	ctx.r9.s64 = ctx.r11.s64 + -31056;
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

__attribute__((alias("__imp__sub_831C44E0"))) PPC_WEAK_FUNC(sub_831C44E0);
PPC_FUNC_IMPL(__imp__sub_831C44E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31104
	ctx.r9.s64 = ctx.r11.s64 + -31104;
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

__attribute__((alias("__imp__sub_831C4510"))) PPC_WEAK_FUNC(sub_831C4510);
PPC_FUNC_IMPL(__imp__sub_831C4510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-31072
	ctx.r9.s64 = ctx.r11.s64 + -31072;
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

__attribute__((alias("__imp__sub_831C4540"))) PPC_WEAK_FUNC(sub_831C4540);
PPC_FUNC_IMPL(__imp__sub_831C4540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-31088
	ctx.r10.s64 = ctx.r10.s64 + -31088;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4560"))) PPC_WEAK_FUNC(sub_831C4560);
PPC_FUNC_IMPL(__imp__sub_831C4560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-31120
	ctx.r10.s64 = ctx.r10.s64 + -31120;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4580"))) PPC_WEAK_FUNC(sub_831C4580);
PPC_FUNC_IMPL(__imp__sub_831C4580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11760);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-31124(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -31124, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C45A0"))) PPC_WEAK_FUNC(sub_831C45A0);
PPC_FUNC_IMPL(__imp__sub_831C45A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-11760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3432);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-30220(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -30220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C45C0"))) PPC_WEAK_FUNC(sub_831C45C0);
PPC_FUNC_IMPL(__imp__sub_831C45C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-11760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30220);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-30120(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -30120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C45E0"))) PPC_WEAK_FUNC(sub_831C45E0);
PPC_FUNC_IMPL(__imp__sub_831C45E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lfs f0,-30220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-30116(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -30116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C45F8"))) PPC_WEAK_FUNC(sub_831C45F8);
PPC_FUNC_IMPL(__imp__sub_831C45F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// lfs f0,-11760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30220);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-30392(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -30392, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4618"))) PPC_WEAK_FUNC(sub_831C4618);
PPC_FUNC_IMPL(__imp__sub_831C4618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// lfs f0,-30220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-30024(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -30024, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C4630"))) PPC_WEAK_FUNC(sub_831C4630);
PPC_FUNC_IMPL(__imp__sub_831C4630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-19288
	ctx.r3.s64 = ctx.r11.s64 + -19288;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C4640"))) PPC_WEAK_FUNC(sub_831C4640);
PPC_FUNC_IMPL(__imp__sub_831C4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30728
	ctx.r30.s64 = ctx.r31.s64 + -30728;
	// addi r4,r11,14912
	ctx.r4.s64 = ctx.r11.s64 + 14912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C466C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19272
	ctx.r3.s64 = ctx.r7.s64 + -19272;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30728, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C46AC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C46C8"))) PPC_WEAK_FUNC(sub_831C46C8);
PPC_FUNC_IMPL(__imp__sub_831C46C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30144
	ctx.r30.s64 = ctx.r31.s64 + -30144;
	// addi r4,r11,14984
	ctx.r4.s64 = ctx.r11.s64 + 14984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C46F4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19248
	ctx.r3.s64 = ctx.r7.s64 + -19248;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30144, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4734;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4750"))) PPC_WEAK_FUNC(sub_831C4750);
PPC_FUNC_IMPL(__imp__sub_831C4750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30464
	ctx.r30.s64 = ctx.r31.s64 + -30464;
	// addi r4,r11,15056
	ctx.r4.s64 = ctx.r11.s64 + 15056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C477C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19224
	ctx.r3.s64 = ctx.r7.s64 + -19224;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30464, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C47BC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C47D8"))) PPC_WEAK_FUNC(sub_831C47D8);
PPC_FUNC_IMPL(__imp__sub_831C47D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30316
	ctx.r30.s64 = ctx.r31.s64 + -30316;
	// addi r4,r11,15128
	ctx.r4.s64 = ctx.r11.s64 + 15128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4804;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19200
	ctx.r3.s64 = ctx.r7.s64 + -19200;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30316, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4844;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4860"))) PPC_WEAK_FUNC(sub_831C4860);
PPC_FUNC_IMPL(__imp__sub_831C4860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30072
	ctx.r30.s64 = ctx.r31.s64 + -30072;
	// addi r4,r11,15200
	ctx.r4.s64 = ctx.r11.s64 + 15200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C488C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19176
	ctx.r3.s64 = ctx.r7.s64 + -19176;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30072, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C48CC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C48E8"))) PPC_WEAK_FUNC(sub_831C48E8);
PPC_FUNC_IMPL(__imp__sub_831C48E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29824
	ctx.r30.s64 = ctx.r31.s64 + -29824;
	// addi r4,r11,15264
	ctx.r4.s64 = ctx.r11.s64 + 15264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4914;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19152
	ctx.r3.s64 = ctx.r7.s64 + -19152;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29824, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4954;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4970"))) PPC_WEAK_FUNC(sub_831C4970);
PPC_FUNC_IMPL(__imp__sub_831C4970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30096
	ctx.r30.s64 = ctx.r31.s64 + -30096;
	// addi r4,r11,15336
	ctx.r4.s64 = ctx.r11.s64 + 15336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C499C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19128
	ctx.r3.s64 = ctx.r7.s64 + -19128;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30096, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C49DC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C49F8"))) PPC_WEAK_FUNC(sub_831C49F8);
PPC_FUNC_IMPL(__imp__sub_831C49F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30488
	ctx.r30.s64 = ctx.r31.s64 + -30488;
	// addi r4,r11,15408
	ctx.r4.s64 = ctx.r11.s64 + 15408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4A24;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-19104
	ctx.r3.s64 = ctx.r10.s64 + -19104;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30488, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4A6C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4A88"))) PPC_WEAK_FUNC(sub_831C4A88);
PPC_FUNC_IMPL(__imp__sub_831C4A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30560
	ctx.r30.s64 = ctx.r31.s64 + -30560;
	// addi r4,r11,15480
	ctx.r4.s64 = ctx.r11.s64 + 15480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4AB4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-19080
	ctx.r3.s64 = ctx.r8.s64 + -19080;
	// lfs f13,-5348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5348);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-30560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30560, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4AEC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4B08"))) PPC_WEAK_FUNC(sub_831C4B08);
PPC_FUNC_IMPL(__imp__sub_831C4B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30752
	ctx.r30.s64 = ctx.r31.s64 + -30752;
	// addi r4,r11,15552
	ctx.r4.s64 = ctx.r11.s64 + 15552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4B34;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-19056
	ctx.r3.s64 = ctx.r7.s64 + -19056;
	// lfs f12,3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3368);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30752, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4B74;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4B90"))) PPC_WEAK_FUNC(sub_831C4B90);
PPC_FUNC_IMPL(__imp__sub_831C4B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30512
	ctx.r30.s64 = ctx.r31.s64 + -30512;
	// addi r4,r11,15632
	ctx.r4.s64 = ctx.r11.s64 + 15632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4BBC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19032
	ctx.r3.s64 = ctx.r7.s64 + -19032;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30512, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4BFC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4C18"))) PPC_WEAK_FUNC(sub_831C4C18);
PPC_FUNC_IMPL(__imp__sub_831C4C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29776
	ctx.r30.s64 = ctx.r31.s64 + -29776;
	// addi r4,r11,15696
	ctx.r4.s64 = ctx.r11.s64 + 15696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4C44;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-19008
	ctx.r3.s64 = ctx.r7.s64 + -19008;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29776, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4C84;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4CA0"))) PPC_WEAK_FUNC(sub_831C4CA0);
PPC_FUNC_IMPL(__imp__sub_831C4CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30776
	ctx.r30.s64 = ctx.r31.s64 + -30776;
	// addi r4,r11,15760
	ctx.r4.s64 = ctx.r11.s64 + 15760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4CCC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18984
	ctx.r3.s64 = ctx.r7.s64 + -18984;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30776, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4D0C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4D28"))) PPC_WEAK_FUNC(sub_831C4D28);
PPC_FUNC_IMPL(__imp__sub_831C4D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29896
	ctx.r30.s64 = ctx.r31.s64 + -29896;
	// addi r4,r11,15832
	ctx.r4.s64 = ctx.r11.s64 + 15832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4D54;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18960
	ctx.r3.s64 = ctx.r7.s64 + -18960;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29896, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4D94;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4DB0"))) PPC_WEAK_FUNC(sub_831C4DB0);
PPC_FUNC_IMPL(__imp__sub_831C4DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30216
	ctx.r30.s64 = ctx.r31.s64 + -30216;
	// addi r4,r11,15900
	ctx.r4.s64 = ctx.r11.s64 + 15900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4DDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18936
	ctx.r3.s64 = ctx.r7.s64 + -18936;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30216, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4E1C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4E38"))) PPC_WEAK_FUNC(sub_831C4E38);
PPC_FUNC_IMPL(__imp__sub_831C4E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30632
	ctx.r30.s64 = ctx.r31.s64 + -30632;
	// addi r4,r11,15968
	ctx.r4.s64 = ctx.r11.s64 + 15968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4E64;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18912
	ctx.r3.s64 = ctx.r7.s64 + -18912;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30632, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4EA4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4EC0"))) PPC_WEAK_FUNC(sub_831C4EC0);
PPC_FUNC_IMPL(__imp__sub_831C4EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29848
	ctx.r30.s64 = ctx.r31.s64 + -29848;
	// addi r4,r11,16040
	ctx.r4.s64 = ctx.r11.s64 + 16040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4EEC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18888
	ctx.r3.s64 = ctx.r7.s64 + -18888;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29848, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4F2C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4F48"))) PPC_WEAK_FUNC(sub_831C4F48);
PPC_FUNC_IMPL(__imp__sub_831C4F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30992
	ctx.r30.s64 = ctx.r31.s64 + -30992;
	// addi r4,r11,16112
	ctx.r4.s64 = ctx.r11.s64 + 16112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C4F74;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18864
	ctx.r3.s64 = ctx.r10.s64 + -18864;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30992, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C4FBC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C4FD8"))) PPC_WEAK_FUNC(sub_831C4FD8);
PPC_FUNC_IMPL(__imp__sub_831C4FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30872
	ctx.r30.s64 = ctx.r31.s64 + -30872;
	// addi r4,r11,16184
	ctx.r4.s64 = ctx.r11.s64 + 16184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5004;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-18840
	ctx.r3.s64 = ctx.r8.s64 + -18840;
	// lfs f13,-5348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5348);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-30872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30872, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C503C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5058"))) PPC_WEAK_FUNC(sub_831C5058);
PPC_FUNC_IMPL(__imp__sub_831C5058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29800
	ctx.r30.s64 = ctx.r31.s64 + -29800;
	// addi r4,r11,16256
	ctx.r4.s64 = ctx.r11.s64 + 16256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5084;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-18816
	ctx.r3.s64 = ctx.r7.s64 + -18816;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29800, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C50C4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C50E0"))) PPC_WEAK_FUNC(sub_831C50E0);
PPC_FUNC_IMPL(__imp__sub_831C50E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30920
	ctx.r30.s64 = ctx.r31.s64 + -30920;
	// addi r4,r11,16336
	ctx.r4.s64 = ctx.r11.s64 + 16336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C510C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18792
	ctx.r3.s64 = ctx.r7.s64 + -18792;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30920, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C514C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5168"))) PPC_WEAK_FUNC(sub_831C5168);
PPC_FUNC_IMPL(__imp__sub_831C5168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30824
	ctx.r30.s64 = ctx.r31.s64 + -30824;
	// addi r4,r11,16424
	ctx.r4.s64 = ctx.r11.s64 + 16424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5194;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18768
	ctx.r3.s64 = ctx.r7.s64 + -18768;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30824, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C51D4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C51F0"))) PPC_WEAK_FUNC(sub_831C51F0);
PPC_FUNC_IMPL(__imp__sub_831C51F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30656
	ctx.r30.s64 = ctx.r31.s64 + -30656;
	// addi r4,r11,16512
	ctx.r4.s64 = ctx.r11.s64 + 16512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C521C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18744
	ctx.r3.s64 = ctx.r7.s64 + -18744;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30656, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C525C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5278"))) PPC_WEAK_FUNC(sub_831C5278);
PPC_FUNC_IMPL(__imp__sub_831C5278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30440
	ctx.r30.s64 = ctx.r31.s64 + -30440;
	// addi r4,r11,16600
	ctx.r4.s64 = ctx.r11.s64 + 16600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C52A4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18720
	ctx.r3.s64 = ctx.r7.s64 + -18720;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30440, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C52E4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5300"))) PPC_WEAK_FUNC(sub_831C5300);
PPC_FUNC_IMPL(__imp__sub_831C5300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29920
	ctx.r30.s64 = ctx.r31.s64 + -29920;
	// addi r4,r11,16688
	ctx.r4.s64 = ctx.r11.s64 + 16688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C532C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18696
	ctx.r3.s64 = ctx.r7.s64 + -18696;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29920, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C536C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5388"))) PPC_WEAK_FUNC(sub_831C5388);
PPC_FUNC_IMPL(__imp__sub_831C5388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30048
	ctx.r30.s64 = ctx.r31.s64 + -30048;
	// addi r4,r11,16776
	ctx.r4.s64 = ctx.r11.s64 + 16776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C53B4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18672
	ctx.r3.s64 = ctx.r7.s64 + -18672;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30048, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C53F4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5410"))) PPC_WEAK_FUNC(sub_831C5410);
PPC_FUNC_IMPL(__imp__sub_831C5410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29996
	ctx.r30.s64 = ctx.r31.s64 + -29996;
	// addi r4,r11,16864
	ctx.r4.s64 = ctx.r11.s64 + 16864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C543C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18648
	ctx.r3.s64 = ctx.r7.s64 + -18648;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29996, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C547C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5498"))) PPC_WEAK_FUNC(sub_831C5498);
PPC_FUNC_IMPL(__imp__sub_831C5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30800
	ctx.r30.s64 = ctx.r31.s64 + -30800;
	// addi r4,r11,16960
	ctx.r4.s64 = ctx.r11.s64 + 16960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C54C4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18624
	ctx.r3.s64 = ctx.r10.s64 + -18624;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30800, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C550C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5528"))) PPC_WEAK_FUNC(sub_831C5528);
PPC_FUNC_IMPL(__imp__sub_831C5528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29972
	ctx.r30.s64 = ctx.r31.s64 + -29972;
	// addi r4,r11,17056
	ctx.r4.s64 = ctx.r11.s64 + 17056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5554;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-18600
	ctx.r3.s64 = ctx.r8.s64 + -18600;
	// lfs f13,-5348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5348);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-29972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29972, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C558C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C55A8"))) PPC_WEAK_FUNC(sub_831C55A8);
PPC_FUNC_IMPL(__imp__sub_831C55A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-31016
	ctx.r30.s64 = ctx.r31.s64 + -31016;
	// addi r4,r11,17152
	ctx.r4.s64 = ctx.r11.s64 + 17152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C55D4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18576
	ctx.r3.s64 = ctx.r10.s64 + -18576;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-31016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31016, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C561C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5638"))) PPC_WEAK_FUNC(sub_831C5638);
PPC_FUNC_IMPL(__imp__sub_831C5638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30364
	ctx.r30.s64 = ctx.r31.s64 + -30364;
	// addi r4,r11,17248
	ctx.r4.s64 = ctx.r11.s64 + 17248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5664;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18552
	ctx.r3.s64 = ctx.r7.s64 + -18552;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30364, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C56A4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C56C0"))) PPC_WEAK_FUNC(sub_831C56C0);
PPC_FUNC_IMPL(__imp__sub_831C56C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30244
	ctx.r30.s64 = ctx.r31.s64 + -30244;
	// addi r4,r11,17320
	ctx.r4.s64 = ctx.r11.s64 + 17320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C56EC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18528
	ctx.r3.s64 = ctx.r7.s64 + -18528;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30244, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C572C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5748"))) PPC_WEAK_FUNC(sub_831C5748);
PPC_FUNC_IMPL(__imp__sub_831C5748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30680
	ctx.r30.s64 = ctx.r31.s64 + -30680;
	// addi r4,r11,17392
	ctx.r4.s64 = ctx.r11.s64 + 17392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5774;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18504
	ctx.r3.s64 = ctx.r7.s64 + -18504;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30680, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C57B4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C57D0"))) PPC_WEAK_FUNC(sub_831C57D0);
PPC_FUNC_IMPL(__imp__sub_831C57D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30020
	ctx.r30.s64 = ctx.r31.s64 + -30020;
	// addi r4,r11,17464
	ctx.r4.s64 = ctx.r11.s64 + 17464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C57FC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18480
	ctx.r3.s64 = ctx.r7.s64 + -18480;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30020, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C583C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5858"))) PPC_WEAK_FUNC(sub_831C5858);
PPC_FUNC_IMPL(__imp__sub_831C5858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30168
	ctx.r30.s64 = ctx.r31.s64 + -30168;
	// addi r4,r11,17536
	ctx.r4.s64 = ctx.r11.s64 + 17536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5884;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18456
	ctx.r3.s64 = ctx.r7.s64 + -18456;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30168, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C58C4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C58E0"))) PPC_WEAK_FUNC(sub_831C58E0);
PPC_FUNC_IMPL(__imp__sub_831C58E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30388
	ctx.r30.s64 = ctx.r31.s64 + -30388;
	// addi r4,r11,17608
	ctx.r4.s64 = ctx.r11.s64 + 17608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C590C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18432
	ctx.r3.s64 = ctx.r7.s64 + -18432;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30388, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C594C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5968"))) PPC_WEAK_FUNC(sub_831C5968);
PPC_FUNC_IMPL(__imp__sub_831C5968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30608
	ctx.r30.s64 = ctx.r31.s64 + -30608;
	// addi r4,r11,17680
	ctx.r4.s64 = ctx.r11.s64 + 17680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5994;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18408
	ctx.r3.s64 = ctx.r7.s64 + -18408;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30608, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C59D4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C59F0"))) PPC_WEAK_FUNC(sub_831C59F0);
PPC_FUNC_IMPL(__imp__sub_831C59F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30536
	ctx.r30.s64 = ctx.r31.s64 + -30536;
	// addi r4,r11,17760
	ctx.r4.s64 = ctx.r11.s64 + 17760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5A1C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18384
	ctx.r3.s64 = ctx.r10.s64 + -18384;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30536, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5A64;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5A80"))) PPC_WEAK_FUNC(sub_831C5A80);
PPC_FUNC_IMPL(__imp__sub_831C5A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30416
	ctx.r30.s64 = ctx.r31.s64 + -30416;
	// addi r4,r11,17840
	ctx.r4.s64 = ctx.r11.s64 + 17840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5AAC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-18360
	ctx.r3.s64 = ctx.r8.s64 + -18360;
	// lfs f13,-5348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5348);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-30416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30416, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5AE4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5B00"))) PPC_WEAK_FUNC(sub_831C5B00);
PPC_FUNC_IMPL(__imp__sub_831C5B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30292
	ctx.r30.s64 = ctx.r31.s64 + -30292;
	// addi r4,r11,17920
	ctx.r4.s64 = ctx.r11.s64 + 17920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5B2C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18336
	ctx.r3.s64 = ctx.r10.s64 + -18336;
	// lfs f11,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30292, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5B74;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5B90"))) PPC_WEAK_FUNC(sub_831C5B90);
PPC_FUNC_IMPL(__imp__sub_831C5B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-31040
	ctx.r30.s64 = ctx.r31.s64 + -31040;
	// addi r4,r11,18000
	ctx.r4.s64 = ctx.r11.s64 + 18000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5BBC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18312
	ctx.r3.s64 = ctx.r7.s64 + -18312;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-31040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31040, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5BFC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5C18"))) PPC_WEAK_FUNC(sub_831C5C18);
PPC_FUNC_IMPL(__imp__sub_831C5C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29872
	ctx.r30.s64 = ctx.r31.s64 + -29872;
	// addi r4,r11,18072
	ctx.r4.s64 = ctx.r11.s64 + 18072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5C44;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18288
	ctx.r3.s64 = ctx.r7.s64 + -18288;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29872, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5C84;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5CA0"))) PPC_WEAK_FUNC(sub_831C5CA0);
PPC_FUNC_IMPL(__imp__sub_831C5CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30340
	ctx.r30.s64 = ctx.r31.s64 + -30340;
	// addi r4,r11,18144
	ctx.r4.s64 = ctx.r11.s64 + 18144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5CCC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18264
	ctx.r3.s64 = ctx.r7.s64 + -18264;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30340, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5D0C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5D28"))) PPC_WEAK_FUNC(sub_831C5D28);
PPC_FUNC_IMPL(__imp__sub_831C5D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30268
	ctx.r30.s64 = ctx.r31.s64 + -30268;
	// addi r4,r11,18216
	ctx.r4.s64 = ctx.r11.s64 + 18216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5D54;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18240
	ctx.r3.s64 = ctx.r7.s64 + -18240;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30268, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5D94;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5DB0"))) PPC_WEAK_FUNC(sub_831C5DB0);
PPC_FUNC_IMPL(__imp__sub_831C5DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30704
	ctx.r30.s64 = ctx.r31.s64 + -30704;
	// addi r4,r11,18288
	ctx.r4.s64 = ctx.r11.s64 + 18288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5DDC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18216
	ctx.r3.s64 = ctx.r7.s64 + -18216;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30704, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5E1C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5E38"))) PPC_WEAK_FUNC(sub_831C5E38);
PPC_FUNC_IMPL(__imp__sub_831C5E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29948
	ctx.r30.s64 = ctx.r31.s64 + -29948;
	// addi r4,r11,18360
	ctx.r4.s64 = ctx.r11.s64 + 18360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5E64;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18192
	ctx.r3.s64 = ctx.r7.s64 + -18192;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29948, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5EA4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5EC0"))) PPC_WEAK_FUNC(sub_831C5EC0);
PPC_FUNC_IMPL(__imp__sub_831C5EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30584
	ctx.r30.s64 = ctx.r31.s64 + -30584;
	// addi r4,r11,18432
	ctx.r4.s64 = ctx.r11.s64 + 18432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5EEC;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,29264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r7,-18168
	ctx.r3.s64 = ctx.r7.s64 + -18168;
	// lfs f12,-5348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5348);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30584, ctx.r11.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5F2C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5F48"))) PPC_WEAK_FUNC(sub_831C5F48);
PPC_FUNC_IMPL(__imp__sub_831C5F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30848
	ctx.r30.s64 = ctx.r31.s64 + -30848;
	// addi r4,r11,18512
	ctx.r4.s64 = ctx.r11.s64 + 18512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C5F74;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3488);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18144
	ctx.r3.s64 = ctx.r10.s64 + -18144;
	// lfs f11,-5348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5348);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30848, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C5FBC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C5FD8"))) PPC_WEAK_FUNC(sub_831C5FD8);
PPC_FUNC_IMPL(__imp__sub_831C5FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30944
	ctx.r30.s64 = ctx.r31.s64 + -30944;
	// addi r4,r11,18592
	ctx.r4.s64 = ctx.r11.s64 + 18592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C6004;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-18120
	ctx.r3.s64 = ctx.r8.s64 + -18120;
	// lfs f13,-5348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5348);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-30944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30944, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C603C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C6058"))) PPC_WEAK_FUNC(sub_831C6058);
PPC_FUNC_IMPL(__imp__sub_831C6058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30968
	ctx.r30.s64 = ctx.r31.s64 + -30968;
	// addi r4,r11,18672
	ctx.r4.s64 = ctx.r11.s64 + 18672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C6084;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-18096
	ctx.r3.s64 = ctx.r7.s64 + -18096;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-30968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30968, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C60C4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C60E0"))) PPC_WEAK_FUNC(sub_831C60E0);
PPC_FUNC_IMPL(__imp__sub_831C60E0) {
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30896
	ctx.r30.s64 = ctx.r31.s64 + -30896;
	// addi r4,r11,18752
	ctx.r4.s64 = ctx.r11.s64 + 18752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C610C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,25548
	ctx.r10.s64 = ctx.r10.s64 + 25548;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,-30896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30896, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-19312
	ctx.r3.s64 = ctx.r11.s64 + -19312;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C6144;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C6160"))) PPC_WEAK_FUNC(sub_831C6160);
PPC_FUNC_IMPL(__imp__sub_831C6160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-30192
	ctx.r30.s64 = ctx.r31.s64 + -30192;
	// addi r4,r11,18796
	ctx.r4.s64 = ctx.r11.s64 + 18796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C618C;
	sub_82C07410(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14812);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f13,3368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,-18072
	ctx.r3.s64 = ctx.r10.s64 + -18072;
	// lfs f11,3400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3400);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,-30192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30192, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C61D4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C61F0"))) PPC_WEAK_FUNC(sub_831C61F0);
PPC_FUNC_IMPL(__imp__sub_831C61F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6200"))) PPC_WEAK_FUNC(sub_831C6200);
PPC_FUNC_IMPL(__imp__sub_831C6200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29520
	ctx.r9.s64 = ctx.r11.s64 + -29520;
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

__attribute__((alias("__imp__sub_831C6230"))) PPC_WEAK_FUNC(sub_831C6230);
PPC_FUNC_IMPL(__imp__sub_831C6230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29648
	ctx.r9.s64 = ctx.r11.s64 + -29648;
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

__attribute__((alias("__imp__sub_831C6260"))) PPC_WEAK_FUNC(sub_831C6260);
PPC_FUNC_IMPL(__imp__sub_831C6260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29696
	ctx.r9.s64 = ctx.r11.s64 + -29696;
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

__attribute__((alias("__imp__sub_831C6290"))) PPC_WEAK_FUNC(sub_831C6290);
PPC_FUNC_IMPL(__imp__sub_831C6290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29664
	ctx.r9.s64 = ctx.r11.s64 + -29664;
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

__attribute__((alias("__imp__sub_831C62C0"))) PPC_WEAK_FUNC(sub_831C62C0);
PPC_FUNC_IMPL(__imp__sub_831C62C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29680
	ctx.r10.s64 = ctx.r10.s64 + -29680;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C62E0"))) PPC_WEAK_FUNC(sub_831C62E0);
PPC_FUNC_IMPL(__imp__sub_831C62E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-29712
	ctx.r10.s64 = ctx.r10.s64 + -29712;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6300"))) PPC_WEAK_FUNC(sub_831C6300);
PPC_FUNC_IMPL(__imp__sub_831C6300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-29536
	ctx.r10.s64 = ctx.r10.s64 + -29536;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6320"))) PPC_WEAK_FUNC(sub_831C6320);
PPC_FUNC_IMPL(__imp__sub_831C6320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29608
	ctx.r3.s64 = ctx.r11.s64 + -29608;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6330"))) PPC_WEAK_FUNC(sub_831C6330);
PPC_FUNC_IMPL(__imp__sub_831C6330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29632
	ctx.r30.s64 = ctx.r31.s64 + -29632;
	// addi r4,r11,20956
	ctx.r4.s64 = ctx.r11.s64 + 20956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C635C;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-18032
	ctx.r3.s64 = ctx.r7.s64 + -18032;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29632, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C639C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C63B8"))) PPC_WEAK_FUNC(sub_831C63B8);
PPC_FUNC_IMPL(__imp__sub_831C63B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r31,-31925
	ctx.r31.s64 = -2092236800;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r31,-29740
	ctx.r30.s64 = ctx.r31.s64 + -29740;
	// addi r4,r11,20980
	ctx.r4.s64 = ctx.r11.s64 + 20980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c07410
	ctx.lr = 0x831C63E4;
	sub_82C07410(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-31969
	ctx.r7.s64 = -2095120384;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lfs f0,3368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-18008
	ctx.r3.s64 = ctx.r7.s64 + -18008;
	// lfs f12,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-29740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29740, ctx.r11.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x82a7e6b0
	ctx.lr = 0x831C6424;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C6440"))) PPC_WEAK_FUNC(sub_831C6440);
PPC_FUNC_IMPL(__imp__sub_831C6440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29424
	ctx.r9.s64 = ctx.r11.s64 + -29424;
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

__attribute__((alias("__imp__sub_831C6470"))) PPC_WEAK_FUNC(sub_831C6470);
PPC_FUNC_IMPL(__imp__sub_831C6470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29440
	ctx.r9.s64 = ctx.r11.s64 + -29440;
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

__attribute__((alias("__imp__sub_831C64A0"))) PPC_WEAK_FUNC(sub_831C64A0);
PPC_FUNC_IMPL(__imp__sub_831C64A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29488
	ctx.r9.s64 = ctx.r11.s64 + -29488;
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

__attribute__((alias("__imp__sub_831C64D0"))) PPC_WEAK_FUNC(sub_831C64D0);
PPC_FUNC_IMPL(__imp__sub_831C64D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29456
	ctx.r9.s64 = ctx.r11.s64 + -29456;
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

__attribute__((alias("__imp__sub_831C6500"))) PPC_WEAK_FUNC(sub_831C6500);
PPC_FUNC_IMPL(__imp__sub_831C6500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29472
	ctx.r10.s64 = ctx.r10.s64 + -29472;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6520"))) PPC_WEAK_FUNC(sub_831C6520);
PPC_FUNC_IMPL(__imp__sub_831C6520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-29504
	ctx.r10.s64 = ctx.r10.s64 + -29504;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6540"))) PPC_WEAK_FUNC(sub_831C6540);
PPC_FUNC_IMPL(__imp__sub_831C6540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6550"))) PPC_WEAK_FUNC(sub_831C6550);
PPC_FUNC_IMPL(__imp__sub_831C6550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6560"))) PPC_WEAK_FUNC(sub_831C6560);
PPC_FUNC_IMPL(__imp__sub_831C6560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17960
	ctx.r3.s64 = ctx.r11.s64 + -17960;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6570"))) PPC_WEAK_FUNC(sub_831C6570);
PPC_FUNC_IMPL(__imp__sub_831C6570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29232
	ctx.r9.s64 = ctx.r11.s64 + -29232;
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

__attribute__((alias("__imp__sub_831C65A0"))) PPC_WEAK_FUNC(sub_831C65A0);
PPC_FUNC_IMPL(__imp__sub_831C65A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29248
	ctx.r9.s64 = ctx.r11.s64 + -29248;
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

__attribute__((alias("__imp__sub_831C65D0"))) PPC_WEAK_FUNC(sub_831C65D0);
PPC_FUNC_IMPL(__imp__sub_831C65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29296
	ctx.r9.s64 = ctx.r11.s64 + -29296;
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

__attribute__((alias("__imp__sub_831C6600"))) PPC_WEAK_FUNC(sub_831C6600);
PPC_FUNC_IMPL(__imp__sub_831C6600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29264
	ctx.r9.s64 = ctx.r11.s64 + -29264;
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

__attribute__((alias("__imp__sub_831C6630"))) PPC_WEAK_FUNC(sub_831C6630);
PPC_FUNC_IMPL(__imp__sub_831C6630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29280
	ctx.r10.s64 = ctx.r10.s64 + -29280;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6650"))) PPC_WEAK_FUNC(sub_831C6650);
PPC_FUNC_IMPL(__imp__sub_831C6650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-29312
	ctx.r10.s64 = ctx.r10.s64 + -29312;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6670"))) PPC_WEAK_FUNC(sub_831C6670);
PPC_FUNC_IMPL(__imp__sub_831C6670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17904
	ctx.r3.s64 = ctx.r11.s64 + -17904;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6680"))) PPC_WEAK_FUNC(sub_831C6680);
PPC_FUNC_IMPL(__imp__sub_831C6680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-28960
	ctx.r9.s64 = ctx.r11.s64 + -28960;
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

__attribute__((alias("__imp__sub_831C66B0"))) PPC_WEAK_FUNC(sub_831C66B0);
PPC_FUNC_IMPL(__imp__sub_831C66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29104
	ctx.r9.s64 = ctx.r11.s64 + -29104;
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

__attribute__((alias("__imp__sub_831C66E0"))) PPC_WEAK_FUNC(sub_831C66E0);
PPC_FUNC_IMPL(__imp__sub_831C66E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29152
	ctx.r9.s64 = ctx.r11.s64 + -29152;
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

__attribute__((alias("__imp__sub_831C6710"))) PPC_WEAK_FUNC(sub_831C6710);
PPC_FUNC_IMPL(__imp__sub_831C6710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-29120
	ctx.r9.s64 = ctx.r11.s64 + -29120;
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

__attribute__((alias("__imp__sub_831C6740"))) PPC_WEAK_FUNC(sub_831C6740);
PPC_FUNC_IMPL(__imp__sub_831C6740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-29136
	ctx.r10.s64 = ctx.r10.s64 + -29136;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6760"))) PPC_WEAK_FUNC(sub_831C6760);
PPC_FUNC_IMPL(__imp__sub_831C6760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-29168
	ctx.r10.s64 = ctx.r10.s64 + -29168;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6780"))) PPC_WEAK_FUNC(sub_831C6780);
PPC_FUNC_IMPL(__imp__sub_831C6780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-29048
	ctx.r3.s64 = ctx.r11.s64 + -29048;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6790"))) PPC_WEAK_FUNC(sub_831C6790);
PPC_FUNC_IMPL(__imp__sub_831C6790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-28976
	ctx.r10.s64 = ctx.r10.s64 + -28976;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C67B0"))) PPC_WEAK_FUNC(sub_831C67B0);
PPC_FUNC_IMPL(__imp__sub_831C67B0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r4,r11,22980
	ctx.r4.s64 = ctx.r11.s64 + 22980;
	// addi r3,r10,-29088
	ctx.r3.s64 = ctx.r10.s64 + -29088;
	// bl 0x82450f48
	ctx.lr = 0x831C67D0;
	sub_82450F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17888
	ctx.r3.s64 = ctx.r11.s64 + -17888;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C67DC;
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

__attribute__((alias("__imp__sub_831C67F0"))) PPC_WEAK_FUNC(sub_831C67F0);
PPC_FUNC_IMPL(__imp__sub_831C67F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17864
	ctx.r3.s64 = ctx.r11.s64 + -17864;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6800"))) PPC_WEAK_FUNC(sub_831C6800);
PPC_FUNC_IMPL(__imp__sub_831C6800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6810"))) PPC_WEAK_FUNC(sub_831C6810);
PPC_FUNC_IMPL(__imp__sub_831C6810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26992
	ctx.r9.s64 = ctx.r11.s64 + -26992;
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

__attribute__((alias("__imp__sub_831C6840"))) PPC_WEAK_FUNC(sub_831C6840);
PPC_FUNC_IMPL(__imp__sub_831C6840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-28848
	ctx.r9.s64 = ctx.r11.s64 + -28848;
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

__attribute__((alias("__imp__sub_831C6870"))) PPC_WEAK_FUNC(sub_831C6870);
PPC_FUNC_IMPL(__imp__sub_831C6870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-28912
	ctx.r9.s64 = ctx.r11.s64 + -28912;
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

__attribute__((alias("__imp__sub_831C68A0"))) PPC_WEAK_FUNC(sub_831C68A0);
PPC_FUNC_IMPL(__imp__sub_831C68A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-28864
	ctx.r9.s64 = ctx.r11.s64 + -28864;
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

__attribute__((alias("__imp__sub_831C68D0"))) PPC_WEAK_FUNC(sub_831C68D0);
PPC_FUNC_IMPL(__imp__sub_831C68D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-28880
	ctx.r10.s64 = ctx.r10.s64 + -28880;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C68F0"))) PPC_WEAK_FUNC(sub_831C68F0);
PPC_FUNC_IMPL(__imp__sub_831C68F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-28928
	ctx.r10.s64 = ctx.r10.s64 + -28928;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6910"))) PPC_WEAK_FUNC(sub_831C6910);
PPC_FUNC_IMPL(__imp__sub_831C6910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-27008
	ctx.r10.s64 = ctx.r10.s64 + -27008;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6930"))) PPC_WEAK_FUNC(sub_831C6930);
PPC_FUNC_IMPL(__imp__sub_831C6930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26976
	ctx.r3.s64 = ctx.r11.s64 + -26976;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6940"))) PPC_WEAK_FUNC(sub_831C6940);
PPC_FUNC_IMPL(__imp__sub_831C6940) {
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
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// bl 0x82cfc2b8
	ctx.lr = 0x831C6958;
	sub_82CFC2B8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17560
	ctx.r3.s64 = ctx.r11.s64 + -17560;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C6964;
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

__attribute__((alias("__imp__sub_831C6978"))) PPC_WEAK_FUNC(sub_831C6978);
PPC_FUNC_IMPL(__imp__sub_831C6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17776
	ctx.r3.s64 = ctx.r11.s64 + -17776;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6988"))) PPC_WEAK_FUNC(sub_831C6988);
PPC_FUNC_IMPL(__imp__sub_831C6988) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-28896
	ctx.r9.s64 = ctx.r10.s64 + -28896;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r11,-28896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28896, ctx.r11.u32);
	// addi r3,r8,-17760
	ctx.r3.s64 = ctx.r8.s64 + -17760;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C69B0"))) PPC_WEAK_FUNC(sub_831C69B0);
PPC_FUNC_IMPL(__imp__sub_831C69B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C69C0"))) PPC_WEAK_FUNC(sub_831C69C0);
PPC_FUNC_IMPL(__imp__sub_831C69C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C69D0"))) PPC_WEAK_FUNC(sub_831C69D0);
PPC_FUNC_IMPL(__imp__sub_831C69D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C69E0"))) PPC_WEAK_FUNC(sub_831C69E0);
PPC_FUNC_IMPL(__imp__sub_831C69E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C69F0"))) PPC_WEAK_FUNC(sub_831C69F0);
PPC_FUNC_IMPL(__imp__sub_831C69F0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-26904
	ctx.r3.s64 = ctx.r11.s64 + -26904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cef228
	ctx.lr = 0x831C6A10;
	sub_82CEF228(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17632
	ctx.r3.s64 = ctx.r11.s64 + -17632;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C6A1C;
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

__attribute__((alias("__imp__sub_831C6A30"))) PPC_WEAK_FUNC(sub_831C6A30);
PPC_FUNC_IMPL(__imp__sub_831C6A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6A40"))) PPC_WEAK_FUNC(sub_831C6A40);
PPC_FUNC_IMPL(__imp__sub_831C6A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26800
	ctx.r9.s64 = ctx.r11.s64 + -26800;
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

__attribute__((alias("__imp__sub_831C6A70"))) PPC_WEAK_FUNC(sub_831C6A70);
PPC_FUNC_IMPL(__imp__sub_831C6A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26816
	ctx.r9.s64 = ctx.r11.s64 + -26816;
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

__attribute__((alias("__imp__sub_831C6AA0"))) PPC_WEAK_FUNC(sub_831C6AA0);
PPC_FUNC_IMPL(__imp__sub_831C6AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26864
	ctx.r9.s64 = ctx.r11.s64 + -26864;
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

__attribute__((alias("__imp__sub_831C6AD0"))) PPC_WEAK_FUNC(sub_831C6AD0);
PPC_FUNC_IMPL(__imp__sub_831C6AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26832
	ctx.r9.s64 = ctx.r11.s64 + -26832;
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

__attribute__((alias("__imp__sub_831C6B00"))) PPC_WEAK_FUNC(sub_831C6B00);
PPC_FUNC_IMPL(__imp__sub_831C6B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26848
	ctx.r10.s64 = ctx.r10.s64 + -26848;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6B20"))) PPC_WEAK_FUNC(sub_831C6B20);
PPC_FUNC_IMPL(__imp__sub_831C6B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26880
	ctx.r10.s64 = ctx.r10.s64 + -26880;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6B40"))) PPC_WEAK_FUNC(sub_831C6B40);
PPC_FUNC_IMPL(__imp__sub_831C6B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6B50"))) PPC_WEAK_FUNC(sub_831C6B50);
PPC_FUNC_IMPL(__imp__sub_831C6B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26592
	ctx.r9.s64 = ctx.r11.s64 + -26592;
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

__attribute__((alias("__imp__sub_831C6B80"))) PPC_WEAK_FUNC(sub_831C6B80);
PPC_FUNC_IMPL(__imp__sub_831C6B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26624
	ctx.r9.s64 = ctx.r11.s64 + -26624;
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

__attribute__((alias("__imp__sub_831C6BB0"))) PPC_WEAK_FUNC(sub_831C6BB0);
PPC_FUNC_IMPL(__imp__sub_831C6BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26672
	ctx.r9.s64 = ctx.r11.s64 + -26672;
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

__attribute__((alias("__imp__sub_831C6BE0"))) PPC_WEAK_FUNC(sub_831C6BE0);
PPC_FUNC_IMPL(__imp__sub_831C6BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26640
	ctx.r9.s64 = ctx.r11.s64 + -26640;
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

__attribute__((alias("__imp__sub_831C6C10"))) PPC_WEAK_FUNC(sub_831C6C10);
PPC_FUNC_IMPL(__imp__sub_831C6C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26656
	ctx.r10.s64 = ctx.r10.s64 + -26656;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6C30"))) PPC_WEAK_FUNC(sub_831C6C30);
PPC_FUNC_IMPL(__imp__sub_831C6C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26688
	ctx.r10.s64 = ctx.r10.s64 + -26688;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6C50"))) PPC_WEAK_FUNC(sub_831C6C50);
PPC_FUNC_IMPL(__imp__sub_831C6C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-26608
	ctx.r10.s64 = ctx.r10.s64 + -26608;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6C70"))) PPC_WEAK_FUNC(sub_831C6C70);
PPC_FUNC_IMPL(__imp__sub_831C6C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-26760
	ctx.r3.s64 = ctx.r11.s64 + -26760;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6C80"))) PPC_WEAK_FUNC(sub_831C6C80);
PPC_FUNC_IMPL(__imp__sub_831C6C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26384
	ctx.r9.s64 = ctx.r11.s64 + -26384;
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

__attribute__((alias("__imp__sub_831C6CB0"))) PPC_WEAK_FUNC(sub_831C6CB0);
PPC_FUNC_IMPL(__imp__sub_831C6CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26464
	ctx.r9.s64 = ctx.r11.s64 + -26464;
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

__attribute__((alias("__imp__sub_831C6CE0"))) PPC_WEAK_FUNC(sub_831C6CE0);
PPC_FUNC_IMPL(__imp__sub_831C6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26528
	ctx.r9.s64 = ctx.r11.s64 + -26528;
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

__attribute__((alias("__imp__sub_831C6D10"))) PPC_WEAK_FUNC(sub_831C6D10);
PPC_FUNC_IMPL(__imp__sub_831C6D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26480
	ctx.r9.s64 = ctx.r11.s64 + -26480;
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

__attribute__((alias("__imp__sub_831C6D40"))) PPC_WEAK_FUNC(sub_831C6D40);
PPC_FUNC_IMPL(__imp__sub_831C6D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6D60"))) PPC_WEAK_FUNC(sub_831C6D60);
PPC_FUNC_IMPL(__imp__sub_831C6D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26560
	ctx.r10.s64 = ctx.r10.s64 + -26560;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6D80"))) PPC_WEAK_FUNC(sub_831C6D80);
PPC_FUNC_IMPL(__imp__sub_831C6D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C6D90"))) PPC_WEAK_FUNC(sub_831C6D90);
PPC_FUNC_IMPL(__imp__sub_831C6D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3260
	ctx.r11.s64 = ctx.r11.s64 + 3260;
	// addi r10,r10,-26272
	ctx.r10.s64 = ctx.r10.s64 + -26272;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6DB0"))) PPC_WEAK_FUNC(sub_831C6DB0);
PPC_FUNC_IMPL(__imp__sub_831C6DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,26192
	ctx.r11.s64 = ctx.r11.s64 + 26192;
	// addi r10,r10,-26352
	ctx.r10.s64 = ctx.r10.s64 + -26352;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6DD0"))) PPC_WEAK_FUNC(sub_831C6DD0);
PPC_FUNC_IMPL(__imp__sub_831C6DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// addi r10,r10,-26304
	ctx.r10.s64 = ctx.r10.s64 + -26304;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6DF0"))) PPC_WEAK_FUNC(sub_831C6DF0);
PPC_FUNC_IMPL(__imp__sub_831C6DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r11,-26256
	ctx.r8.s64 = ctx.r11.s64 + -26256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6E20"))) PPC_WEAK_FUNC(sub_831C6E20);
PPC_FUNC_IMPL(__imp__sub_831C6E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26400
	ctx.r9.s64 = ctx.r11.s64 + -26400;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
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

__attribute__((alias("__imp__sub_831C6E50"))) PPC_WEAK_FUNC(sub_831C6E50);
PPC_FUNC_IMPL(__imp__sub_831C6E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,26684
	ctx.r11.s64 = ctx.r11.s64 + 26684;
	// addi r10,r10,-26448
	ctx.r10.s64 = ctx.r10.s64 + -26448;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6E70"))) PPC_WEAK_FUNC(sub_831C6E70);
PPC_FUNC_IMPL(__imp__sub_831C6E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3280
	ctx.r11.s64 = ctx.r11.s64 + 3280;
	// addi r10,r10,-26320
	ctx.r10.s64 = ctx.r10.s64 + -26320;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6E90"))) PPC_WEAK_FUNC(sub_831C6E90);
PPC_FUNC_IMPL(__imp__sub_831C6E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6EA8"))) PPC_WEAK_FUNC(sub_831C6EA8);
PPC_FUNC_IMPL(__imp__sub_831C6EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21544
	ctx.r11.s64 = ctx.r11.s64 + 21544;
	// addi r10,r10,-26336
	ctx.r10.s64 = ctx.r10.s64 + -26336;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6EC8"))) PPC_WEAK_FUNC(sub_831C6EC8);
PPC_FUNC_IMPL(__imp__sub_831C6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-7516
	ctx.r11.s64 = ctx.r11.s64 + -7516;
	// addi r10,r10,-26544
	ctx.r10.s64 = ctx.r10.s64 + -26544;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C6EE8"))) PPC_WEAK_FUNC(sub_831C6EE8);
PPC_FUNC_IMPL(__imp__sub_831C6EE8) {
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
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// bl 0x824683b0
	ctx.lr = 0x831C6F04;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C6F10;
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

__attribute__((alias("__imp__sub_831C6F20"))) PPC_WEAK_FUNC(sub_831C6F20);
PPC_FUNC_IMPL(__imp__sub_831C6F20) {
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
	// addi r3,r11,-26512
	ctx.r3.s64 = ctx.r11.s64 + -26512;
	// bl 0x82b50840
	ctx.lr = 0x831C6F3C;
	sub_82B50840(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C6F48;
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

__attribute__((alias("__imp__sub_831C6F58"))) PPC_WEAK_FUNC(sub_831C6F58);
PPC_FUNC_IMPL(__imp__sub_831C6F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26032
	ctx.r9.s64 = ctx.r11.s64 + -26032;
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

__attribute__((alias("__imp__sub_831C6F88"))) PPC_WEAK_FUNC(sub_831C6F88);
PPC_FUNC_IMPL(__imp__sub_831C6F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26064
	ctx.r9.s64 = ctx.r11.s64 + -26064;
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

__attribute__((alias("__imp__sub_831C6FB8"))) PPC_WEAK_FUNC(sub_831C6FB8);
PPC_FUNC_IMPL(__imp__sub_831C6FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26128
	ctx.r9.s64 = ctx.r11.s64 + -26128;
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

__attribute__((alias("__imp__sub_831C6FE8"))) PPC_WEAK_FUNC(sub_831C6FE8);
PPC_FUNC_IMPL(__imp__sub_831C6FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-26080
	ctx.r9.s64 = ctx.r11.s64 + -26080;
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

__attribute__((alias("__imp__sub_831C7018"))) PPC_WEAK_FUNC(sub_831C7018);
PPC_FUNC_IMPL(__imp__sub_831C7018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-26112
	ctx.r10.s64 = ctx.r10.s64 + -26112;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7038"))) PPC_WEAK_FUNC(sub_831C7038);
PPC_FUNC_IMPL(__imp__sub_831C7038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-26144
	ctx.r10.s64 = ctx.r10.s64 + -26144;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7058"))) PPC_WEAK_FUNC(sub_831C7058);
PPC_FUNC_IMPL(__imp__sub_831C7058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C7068"))) PPC_WEAK_FUNC(sub_831C7068);
PPC_FUNC_IMPL(__imp__sub_831C7068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-25968
	ctx.r3.s64 = ctx.r11.s64 + -25968;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C7078"))) PPC_WEAK_FUNC(sub_831C7078);
PPC_FUNC_IMPL(__imp__sub_831C7078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3208
	ctx.r11.s64 = ctx.r11.s64 + 3208;
	// addi r10,r10,-25984
	ctx.r10.s64 = ctx.r10.s64 + -25984;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7098"))) PPC_WEAK_FUNC(sub_831C7098);
PPC_FUNC_IMPL(__imp__sub_831C7098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,31936
	ctx.r11.s64 = ctx.r11.s64 + 31936;
	// addi r10,r10,-25888
	ctx.r10.s64 = ctx.r10.s64 + -25888;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C70B8"))) PPC_WEAK_FUNC(sub_831C70B8);
PPC_FUNC_IMPL(__imp__sub_831C70B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,26828
	ctx.r11.s64 = ctx.r11.s64 + 26828;
	// addi r10,r10,-25872
	ctx.r10.s64 = ctx.r10.s64 + -25872;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C70D8"))) PPC_WEAK_FUNC(sub_831C70D8);
PPC_FUNC_IMPL(__imp__sub_831C70D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3220
	ctx.r11.s64 = ctx.r11.s64 + 3220;
	// addi r10,r10,-26096
	ctx.r10.s64 = ctx.r10.s64 + -26096;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C70F8"))) PPC_WEAK_FUNC(sub_831C70F8);
PPC_FUNC_IMPL(__imp__sub_831C70F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3444
	ctx.r11.s64 = ctx.r11.s64 + 3444;
	// addi r10,r10,-26160
	ctx.r10.s64 = ctx.r10.s64 + -26160;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7118"))) PPC_WEAK_FUNC(sub_831C7118);
PPC_FUNC_IMPL(__imp__sub_831C7118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,7792
	ctx.r11.s64 = ctx.r11.s64 + 7792;
	// addi r10,r10,-26048
	ctx.r10.s64 = ctx.r10.s64 + -26048;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7138"))) PPC_WEAK_FUNC(sub_831C7138);
PPC_FUNC_IMPL(__imp__sub_831C7138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3220
	ctx.r11.s64 = ctx.r11.s64 + 3220;
	// addi r10,r10,-26016
	ctx.r10.s64 = ctx.r10.s64 + -26016;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7158"))) PPC_WEAK_FUNC(sub_831C7158);
PPC_FUNC_IMPL(__imp__sub_831C7158) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-4640
	ctx.r3.s64 = ctx.r31.s64 + -4640;
	// bl 0x82d34b48
	ctx.lr = 0x831C7178;
	sub_82D34B48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-4640(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4640, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_831C7198"))) PPC_WEAK_FUNC(sub_831C7198);
PPC_FUNC_IMPL(__imp__sub_831C7198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25616
	ctx.r9.s64 = ctx.r11.s64 + -25616;
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

__attribute__((alias("__imp__sub_831C71C8"))) PPC_WEAK_FUNC(sub_831C71C8);
PPC_FUNC_IMPL(__imp__sub_831C71C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25760
	ctx.r9.s64 = ctx.r11.s64 + -25760;
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

__attribute__((alias("__imp__sub_831C71F8"))) PPC_WEAK_FUNC(sub_831C71F8);
PPC_FUNC_IMPL(__imp__sub_831C71F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25824
	ctx.r9.s64 = ctx.r11.s64 + -25824;
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

__attribute__((alias("__imp__sub_831C7228"))) PPC_WEAK_FUNC(sub_831C7228);
PPC_FUNC_IMPL(__imp__sub_831C7228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-25776
	ctx.r9.s64 = ctx.r11.s64 + -25776;
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

__attribute__((alias("__imp__sub_831C7258"))) PPC_WEAK_FUNC(sub_831C7258);
PPC_FUNC_IMPL(__imp__sub_831C7258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-25792
	ctx.r10.s64 = ctx.r10.s64 + -25792;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7278"))) PPC_WEAK_FUNC(sub_831C7278);
PPC_FUNC_IMPL(__imp__sub_831C7278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-25840
	ctx.r10.s64 = ctx.r10.s64 + -25840;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7298"))) PPC_WEAK_FUNC(sub_831C7298);
PPC_FUNC_IMPL(__imp__sub_831C7298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C72A8"))) PPC_WEAK_FUNC(sub_831C72A8);
PPC_FUNC_IMPL(__imp__sub_831C72A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfd f1,32432(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32432);
	// bl 0x823fec10
	ctx.lr = 0x831C72C0;
	sub_823FEC10(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-25504(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -25504, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C72E0"))) PPC_WEAK_FUNC(sub_831C72E0);
PPC_FUNC_IMPL(__imp__sub_831C72E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,32480
	ctx.r11.s64 = ctx.r11.s64 + 32480;
	// addi r10,r10,32464
	ctx.r10.s64 = ctx.r10.s64 + 32464;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-31925
	ctx.r7.s64 = -2092236800;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,32448
	ctx.r9.s64 = ctx.r9.s64 + 32448;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,4944
	ctx.r8.s64 = ctx.r8.s64 + 4944;
	// addi r7,r7,-25424
	ctx.r7.s64 = ctx.r7.s64 + -25424;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7338"))) PPC_WEAK_FUNC(sub_831C7338);
PPC_FUNC_IMPL(__imp__sub_831C7338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,8016
	ctx.r11.s64 = ctx.r11.s64 + 8016;
	// addi r10,r10,-25648
	ctx.r10.s64 = ctx.r10.s64 + -25648;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7358"))) PPC_WEAK_FUNC(sub_831C7358);
PPC_FUNC_IMPL(__imp__sub_831C7358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-26736
	ctx.r11.s64 = ctx.r11.s64 + -26736;
	// addi r10,r10,-25472
	ctx.r10.s64 = ctx.r10.s64 + -25472;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7378"))) PPC_WEAK_FUNC(sub_831C7378);
PPC_FUNC_IMPL(__imp__sub_831C7378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// addi r10,r10,-25456
	ctx.r10.s64 = ctx.r10.s64 + -25456;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7398"))) PPC_WEAK_FUNC(sub_831C7398);
PPC_FUNC_IMPL(__imp__sub_831C7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-25520
	ctx.r10.s64 = ctx.r10.s64 + -25520;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C73B8"))) PPC_WEAK_FUNC(sub_831C73B8);
PPC_FUNC_IMPL(__imp__sub_831C73B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-25440
	ctx.r10.s64 = ctx.r10.s64 + -25440;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C73D8"))) PPC_WEAK_FUNC(sub_831C73D8);
PPC_FUNC_IMPL(__imp__sub_831C73D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4400
	ctx.r11.s64 = ctx.r11.s64 + 4400;
	// addi r10,r10,-25536
	ctx.r10.s64 = ctx.r10.s64 + -25536;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C73F8"))) PPC_WEAK_FUNC(sub_831C73F8);
PPC_FUNC_IMPL(__imp__sub_831C73F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// addi r10,r10,-25728
	ctx.r10.s64 = ctx.r10.s64 + -25728;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7418"))) PPC_WEAK_FUNC(sub_831C7418);
PPC_FUNC_IMPL(__imp__sub_831C7418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,26324
	ctx.r11.s64 = ctx.r11.s64 + 26324;
	// addi r10,r10,-25856
	ctx.r10.s64 = ctx.r10.s64 + -25856;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7438"))) PPC_WEAK_FUNC(sub_831C7438);
PPC_FUNC_IMPL(__imp__sub_831C7438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,96
	ctx.r10.s64 = 96;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,-25680
	ctx.r10.s64 = ctx.r9.s64 + -25680;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7460"))) PPC_WEAK_FUNC(sub_831C7460);
PPC_FUNC_IMPL(__imp__sub_831C7460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,56
	ctx.r10.s64 = 56;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,-25696
	ctx.r10.s64 = ctx.r9.s64 + -25696;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7488"))) PPC_WEAK_FUNC(sub_831C7488);
PPC_FUNC_IMPL(__imp__sub_831C7488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,-25552
	ctx.r10.s64 = ctx.r9.s64 + -25552;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C74B0"))) PPC_WEAK_FUNC(sub_831C74B0);
PPC_FUNC_IMPL(__imp__sub_831C74B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,255
	ctx.r10.s64 = 255;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,-25584
	ctx.r10.s64 = ctx.r9.s64 + -25584;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,8,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C74D8"))) PPC_WEAK_FUNC(sub_831C74D8);
PPC_FUNC_IMPL(__imp__sub_831C74D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,255
	ctx.r10.s64 = 255;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,-25488
	ctx.r10.s64 = ctx.r9.s64 + -25488;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 4));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7500"))) PPC_WEAK_FUNC(sub_831C7500);
PPC_FUNC_IMPL(__imp__sub_831C7500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,255
	ctx.r10.s64 = 255;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,-25712
	ctx.r10.s64 = ctx.r9.s64 + -25712;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 78), 2));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7528"))) PPC_WEAK_FUNC(sub_831C7528);
PPC_FUNC_IMPL(__imp__sub_831C7528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,32496
	ctx.r11.s64 = ctx.r11.s64 + 32496;
	// addi r10,r10,-25600
	ctx.r10.s64 = ctx.r10.s64 + -25600;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7548"))) PPC_WEAK_FUNC(sub_831C7548);
PPC_FUNC_IMPL(__imp__sub_831C7548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r10,r10,-25808
	ctx.r10.s64 = ctx.r10.s64 + -25808;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7568"))) PPC_WEAK_FUNC(sub_831C7568);
PPC_FUNC_IMPL(__imp__sub_831C7568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// addi r10,r10,-25744
	ctx.r10.s64 = ctx.r10.s64 + -25744;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7588"))) PPC_WEAK_FUNC(sub_831C7588);
PPC_FUNC_IMPL(__imp__sub_831C7588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a7ddec
	ctx.lr = 0x831C7590;
	__savegprlr_21(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// stw r23,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r23.u32);
	// li r23,4
	ctx.r23.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r23,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r23.u32);
	// li r23,7
	ctx.r23.s64 = 7;
	// li r22,2
	ctx.r22.s64 = 2;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r23,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r23.u32);
	// li r23,10
	ctx.r23.s64 = 10;
	// li r21,3
	ctx.r21.s64 = 3;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r23,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r23.u32);
	// li r23,13
	ctx.r23.s64 = 13;
	// stw r22,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r22.u32);
	// li r22,5
	ctx.r22.s64 = 5;
	// stw r23,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r23.u32);
	// li r23,16
	ctx.r23.s64 = 16;
	// stw r23,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r23.u32);
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// li r21,6
	ctx.r21.s64 = 6;
	// stw r22,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// li r22,8
	ctx.r22.s64 = 8;
	// stw r21,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r21.u32);
	// li r21,9
	ctx.r21.s64 = 9;
	// stw r22,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r22.u32);
	// li r22,11
	ctx.r22.s64 = 11;
	// stw r21,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r21.u32);
	// li r21,12
	ctx.r21.s64 = 12;
	// stw r22,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r22.u32);
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stw r21,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r21.u32);
	// addi r10,r1,-172
	ctx.r10.s64 = ctx.r1.s64 + -172;
	// addi r8,r1,-168
	ctx.r8.s64 = ctx.r1.s64 + -168;
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// li r22,14
	ctx.r22.s64 = 14;
	// li r21,15
	ctx.r21.s64 = 15;
	// addi r7,r1,-164
	ctx.r7.s64 = ctx.r1.s64 + -164;
	// stw r22,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r22.u32);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// stw r21,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r21.u32);
	// addi r5,r1,-156
	ctx.r5.s64 = ctx.r1.s64 + -156;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-152
	ctx.r4.s64 = ctx.r1.s64 + -152;
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-148
	ctx.r3.s64 = ctx.r1.s64 + -148;
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// lvlx128 v59,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-140
	ctx.r30.s64 = ctx.r1.s64 + -140;
	// lvlx128 v58,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-136
	ctx.r29.s64 = ctx.r1.s64 + -136;
	// lvlx128 v57,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,-132
	ctx.r28.s64 = ctx.r1.s64 + -132;
	// lvlx128 v56,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,-128
	ctx.r27.s64 = ctx.r1.s64 + -128;
	// lvlx128 v55,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r1,-124
	ctx.r26.s64 = ctx.r1.s64 + -124;
	// lvlx128 v54,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r25,r1,-120
	ctx.r25.s64 = ctx.r1.s64 + -120;
	// lvlx128 v53,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r1,-116
	ctx.r24.s64 = ctx.r1.s64 + -116;
	// lvlx128 v52,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-25360
	ctx.r9.s64 = ctx.r9.s64 + -25360;
	// lvlx128 v51,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r22,17
	ctx.r22.s64 = 17;
	// lvlx128 v50,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r21,18
	ctx.r21.s64 = 18;
	// lvlx128 v49,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r23,19
	ctx.r23.s64 = 19;
	// lvlx128 v48,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r22,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r22.u32);
	// stw r21,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r21.u32);
	// addi r11,r1,-168
	ctx.r11.s64 = ctx.r1.s64 + -168;
	// stw r23,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r23.u32);
	// addi r10,r1,-172
	ctx.r10.s64 = ctx.r1.s64 + -172;
	// addi r8,r1,-164
	ctx.r8.s64 = ctx.r1.s64 + -164;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v63,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v45,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltw128 v59,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltw128 v58,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw128 v57,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// li r7,64
	ctx.r7.s64 = 64;
	// vspltw128 v56,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// li r6,80
	ctx.r6.s64 = 80;
	// vspltw128 v55,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// li r5,96
	ctx.r5.s64 = 96;
	// vspltw128 v54,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// li r4,112
	ctx.r4.s64 = 112;
	// vspltw128 v53,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// li r3,128
	ctx.r3.s64 = 128;
	// vspltw128 v52,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// li r31,144
	ctx.r31.s64 = 144;
	// vspltw128 v51,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// li r30,160
	ctx.r30.s64 = 160;
	// vspltw128 v50,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// li r29,176
	ctx.r29.s64 = 176;
	// vspltw128 v49,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// stvx128 v63,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v48,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stvx128 v61,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v47,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// li r11,288
	ctx.r11.s64 = 288;
	// vspltw128 v46,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// li r8,20
	ctx.r8.s64 = 20;
	// vspltw128 v45,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// stvx128 v62,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,192
	ctx.r28.s64 = 192;
	// stvx128 v60,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,208
	ctx.r27.s64 = 208;
	// stvx128 v59,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,224
	ctx.r26.s64 = 224;
	// stw r8,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r8.u32);
	// li r25,240
	ctx.r25.s64 = 240;
	// stvx128 v58,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,256
	ctx.r24.s64 = 256;
	// stvx128 v57,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r23,272
	ctx.r23.s64 = 272;
	// stvx128 v56,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,304
	ctx.r10.s64 = 304;
	// stvx128 v55,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r9,r30
	ea = (ctx.r9.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,21
	ctx.r7.s64 = 21;
	// stvx128 v53,r9,r29
	ea = (ctx.r9.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,22
	ctx.r6.s64 = 22;
	// li r8,23
	ctx.r8.s64 = 23;
	// stvx128 v46,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,24
	ctx.r5.s64 = 24;
	// stvx128 v52,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,25
	ctx.r4.s64 = 25;
	// stvx128 v51,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,26
	ctx.r3.s64 = 26;
	// stw r7,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r7.u32);
	// li r31,27
	ctx.r31.s64 = 27;
	// stvx128 v50,r9,r26
	ea = (ctx.r9.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,28
	ctx.r30.s64 = 28;
	// stw r6,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r6.u32);
	// li r29,29
	ctx.r29.s64 = 29;
	// stvx128 v49,r9,r25
	ea = (ctx.r9.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r8,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r8.u32);
	// stvx128 v48,r9,r24
	ea = (ctx.r9.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r5.u32);
	// stvx128 v47,r9,r23
	ea = (ctx.r9.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r4,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r4.u32);
	// stvx128 v45,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r3.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// stw r30,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r30.u32);
	// stw r29,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r29.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r8,36
	ctx.r8.s64 = 36;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r8,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// stw r11,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// addi r11,r1,-116
	ctx.r11.s64 = ctx.r1.s64 + -116;
	// addi r10,r1,-120
	ctx.r10.s64 = ctx.r1.s64 + -120;
	// stw r8,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// addi r8,r1,-124
	ctx.r8.s64 = ctx.r1.s64 + -124;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r6,r1,-132
	ctx.r6.s64 = ctx.r1.s64 + -132;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-140
	ctx.r11.s64 = ctx.r1.s64 + -140;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-136
	ctx.r5.s64 = ctx.r1.s64 + -136;
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-148
	ctx.r8.s64 = ctx.r1.s64 + -148;
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-152
	ctx.r7.s64 = ctx.r1.s64 + -152;
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-156
	ctx.r11.s64 = ctx.r1.s64 + -156;
	// lvlx128 v58,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-164
	ctx.r5.s64 = ctx.r1.s64 + -164;
	// addi r10,r1,-168
	ctx.r10.s64 = ctx.r1.s64 + -168;
	// lvlx128 v55,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-172
	ctx.r8.s64 = ctx.r1.s64 + -172;
	// lvlx128 v54,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lvlx128 v52,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// lvlx128 v51,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-108
	ctx.r6.s64 = ctx.r1.s64 + -108;
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-104
	ctx.r5.s64 = ctx.r1.s64 + -104;
	// addi r10,r1,-100
	ctx.r10.s64 = ctx.r1.s64 + -100;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v49,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,320
	ctx.r8.s64 = 320;
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v48,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v46,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v45,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,352
	ctx.r11.s64 = 352;
	// stvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,336
	ctx.r7.s64 = 336;
	// vspltw128 v57,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// li r6,368
	ctx.r6.s64 = 368;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r10,400
	ctx.r10.s64 = 400;
	// li r8,40
	ctx.r8.s64 = 40;
	// stvx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,416
	ctx.r11.s64 = 416;
	// stvx128 v60,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r8,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// stvx128 v59,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-100
	ctx.r10.s64 = ctx.r1.s64 + -100;
	// vspltw128 v63,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vspltw128 v62,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// li r8,432
	ctx.r8.s64 = 432;
	// vspltw128 v61,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// li r7,448
	ctx.r7.s64 = 448;
	// vspltw128 v60,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// li r6,464
	ctx.r6.s64 = 464;
	// li r5,480
	ctx.r5.s64 = 480;
	// vspltw128 v59,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// lvlx128 v43,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// vspltw128 v56,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// stvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// li r10,496
	ctx.r10.s64 = 496;
	// vspltw128 v54,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// li r4,512
	ctx.r4.s64 = 512;
	// vspltw128 v53,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// li r3,528
	ctx.r3.s64 = 528;
	// vspltw128 v52,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// li r31,544
	ctx.r31.s64 = 544;
	// vspltw128 v51,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// li r30,560
	ctx.r30.s64 = 560;
	// vspltw128 v50,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// li r29,576
	ctx.r29.s64 = 576;
	// vspltw128 v49,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// li r28,592
	ctx.r28.s64 = 592;
	// li r27,608
	ctx.r27.s64 = 608;
	// stvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,624
	ctx.r26.s64 = 624;
	// stvx128 v62,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,640
	ctx.r11.s64 = 640;
	// stvx128 v61,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,41
	ctx.r8.s64 = 41;
	// li r7,42
	ctx.r7.s64 = 42;
	// stvx128 v59,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,43
	ctx.r6.s64 = 43;
	// stvx128 v58,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,44
	ctx.r5.s64 = 44;
	// stvx128 v56,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r8,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// stvx128 v54,r9,r30
	ea = (ctx.r9.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r7,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r7.u32);
	// stvx128 v53,r9,r29
	ea = (ctx.r9.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r6.u32);
	// stvx128 v52,r9,r28
	ea = (ctx.r9.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// stvx128 v51,r9,r27
	ea = (ctx.r9.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,45
	ctx.r10.s64 = 45;
	// stvx128 v50,r9,r26
	ea = (ctx.r9.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,46
	ctx.r4.s64 = 46;
	// stvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,47
	ctx.r3.s64 = 47;
	// li r31,48
	ctx.r31.s64 = 48;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// li r30,49
	ctx.r30.s64 = 49;
	// stw r4,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r4.u32);
	// li r29,50
	ctx.r29.s64 = 50;
	// stw r3,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r3.u32);
	// li r28,51
	ctx.r28.s64 = 51;
	// stw r31,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r31.u32);
	// li r27,52
	ctx.r27.s64 = 52;
	// stw r30,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r30.u32);
	// li r26,53
	ctx.r26.s64 = 53;
	// stw r29,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r29.u32);
	// li r8,54
	ctx.r8.s64 = 54;
	// stw r28,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r28.u32);
	// li r7,55
	ctx.r7.s64 = 55;
	// stw r27,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r27.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r26,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r26.u32);
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r8,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r8.u32);
	// li r5,58
	ctx.r5.s64 = 58;
	// stw r7,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r7.u32);
	// stw r6,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// li r11,59
	ctx.r11.s64 = 59;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r11,r1,-100
	ctx.r11.s64 = ctx.r1.s64 + -100;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r10,r1,-104
	ctx.r10.s64 = ctx.r1.s64 + -104;
	// addi r8,r1,-108
	ctx.r8.s64 = ctx.r1.s64 + -108;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// addi r6,r1,-116
	ctx.r6.s64 = ctx.r1.s64 + -116;
	// addi r5,r1,-120
	ctx.r5.s64 = ctx.r1.s64 + -120;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-124
	ctx.r11.s64 = ctx.r1.s64 + -124;
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-132
	ctx.r8.s64 = ctx.r1.s64 + -132;
	// lvlx128 v59,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-136
	ctx.r7.s64 = ctx.r1.s64 + -136;
	// lvlx128 v58,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-140
	ctx.r6.s64 = ctx.r1.s64 + -140;
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-148
	ctx.r11.s64 = ctx.r1.s64 + -148;
	// lvlx128 v55,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,656
	ctx.r10.s64 = 656;
	// lvlx128 v54,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// lvlx128 v53,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-156
	ctx.r7.s64 = ctx.r1.s64 + -156;
	// lvlx128 v52,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// addi r5,r1,-164
	ctx.r5.s64 = ctx.r1.s64 + -164;
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r4,r1,-168
	ctx.r4.s64 = ctx.r1.s64 + -168;
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// addi r3,r1,-172
	ctx.r3.s64 = ctx.r1.s64 + -172;
	// vspltw128 v59,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// vspltw128 v58,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// li r30,672
	ctx.r30.s64 = 672;
	// vspltw128 v57,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vspltw128 v56,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// lvlx128 v51,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v55,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// lvlx128 v50,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v54,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// lvlx128 v49,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v53,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// lvlx128 v48,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v52,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// lvlx128 v47,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v46,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,688
	ctx.r11.s64 = 688;
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,720
	ctx.r8.s64 = 720;
	// lvlx128 v44,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,736
	ctx.r7.s64 = 736;
	// stvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,704
	ctx.r10.s64 = 704;
	// stvx128 v62,r9,r30
	ea = (ctx.r9.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,752
	ctx.r6.s64 = 752;
	// li r5,768
	ctx.r5.s64 = 768;
	// stvx128 v61,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,784
	ctx.r4.s64 = 784;
	// vspltw128 v63,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// li r3,800
	ctx.r3.s64 = 800;
	// stvx128 v59,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,816
	ctx.r31.s64 = 816;
	// stvx128 v60,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,832
	ctx.r30.s64 = 832;
	// stvx128 v58,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r9,r30
	ea = (ctx.r9.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-100
	ctx.r11.s64 = ctx.r1.s64 + -100;
	// vspltw128 v62,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// li r8,63
	ctx.r8.s64 = 63;
	// vspltw128 v61,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// addi r10,r1,-104
	ctx.r10.s64 = ctx.r1.s64 + -104;
	// vspltw128 v60,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// stw r8,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// li r7,61
	ctx.r7.s64 = 61;
	// addi r8,r1,-104
	ctx.r8.s64 = ctx.r1.s64 + -104;
	// vspltw128 v59,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// lvlx128 v53,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r7,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r7.u32);
	// li r7,896
	ctx.r7.s64 = 896;
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// li r10,848
	ctx.r10.s64 = 848;
	// vspltw128 v58,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// lvlx128 v54,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,864
	ctx.r11.s64 = 864;
	// li r8,880
	ctx.r8.s64 = 880;
	// vspltw128 v57,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// li r6,912
	ctx.r6.s64 = 912;
	// vspltw128 v56,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// vspltw128 v53,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// stvx128 v60,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,928
	ctx.r10.s64 = 928;
	// vspltw128 v55,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// stvx128 v62,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,944
	ctx.r11.s64 = 944;
	// vspltw128 v54,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// stvx128 v59,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,960
	ctx.r5.s64 = 960;
	// li r8,976
	ctx.r8.s64 = 976;
	// stvx128 v58,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,992
	ctx.r7.s64 = 992;
	// li r6,1008
	ctx.r6.s64 = 1008;
	// stvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82a7de3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C7C98"))) PPC_WEAK_FUNC(sub_831C7C98);
PPC_FUNC_IMPL(__imp__sub_831C7C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// addi r10,r10,-25568
	ctx.r10.s64 = ctx.r10.s64 + -25568;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7CB8"))) PPC_WEAK_FUNC(sub_831C7CB8);
PPC_FUNC_IMPL(__imp__sub_831C7CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,31988
	ctx.r11.s64 = ctx.r11.s64 + 31988;
	// addi r10,r10,-25632
	ctx.r10.s64 = ctx.r10.s64 + -25632;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7CD8"))) PPC_WEAK_FUNC(sub_831C7CD8);
PPC_FUNC_IMPL(__imp__sub_831C7CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r10,r10,-25664
	ctx.r10.s64 = ctx.r10.s64 + -25664;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7CF8"))) PPC_WEAK_FUNC(sub_831C7CF8);
PPC_FUNC_IMPL(__imp__sub_831C7CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24144
	ctx.r9.s64 = ctx.r11.s64 + -24144;
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

__attribute__((alias("__imp__sub_831C7D28"))) PPC_WEAK_FUNC(sub_831C7D28);
PPC_FUNC_IMPL(__imp__sub_831C7D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24224
	ctx.r9.s64 = ctx.r11.s64 + -24224;
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

__attribute__((alias("__imp__sub_831C7D58"))) PPC_WEAK_FUNC(sub_831C7D58);
PPC_FUNC_IMPL(__imp__sub_831C7D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24304
	ctx.r9.s64 = ctx.r11.s64 + -24304;
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

__attribute__((alias("__imp__sub_831C7D88"))) PPC_WEAK_FUNC(sub_831C7D88);
PPC_FUNC_IMPL(__imp__sub_831C7D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-24240
	ctx.r9.s64 = ctx.r11.s64 + -24240;
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

__attribute__((alias("__imp__sub_831C7DB8"))) PPC_WEAK_FUNC(sub_831C7DB8);
PPC_FUNC_IMPL(__imp__sub_831C7DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-24272
	ctx.r10.s64 = ctx.r10.s64 + -24272;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7DD8"))) PPC_WEAK_FUNC(sub_831C7DD8);
PPC_FUNC_IMPL(__imp__sub_831C7DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-24320
	ctx.r10.s64 = ctx.r10.s64 + -24320;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7DF8"))) PPC_WEAK_FUNC(sub_831C7DF8);
PPC_FUNC_IMPL(__imp__sub_831C7DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C7E08"))) PPC_WEAK_FUNC(sub_831C7E08);
PPC_FUNC_IMPL(__imp__sub_831C7E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r11,-24112
	ctx.r8.s64 = ctx.r11.s64 + -24112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7E40"))) PPC_WEAK_FUNC(sub_831C7E40);
PPC_FUNC_IMPL(__imp__sub_831C7E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,32760
	ctx.r11.s64 = ctx.r11.s64 + 32760;
	// addi r10,r10,-24208
	ctx.r10.s64 = ctx.r10.s64 + -24208;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7E60"))) PPC_WEAK_FUNC(sub_831C7E60);
PPC_FUNC_IMPL(__imp__sub_831C7E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,32760
	ctx.r11.s64 = ctx.r11.s64 + 32760;
	// addi r10,r10,-24288
	ctx.r10.s64 = ctx.r10.s64 + -24288;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7E80"))) PPC_WEAK_FUNC(sub_831C7E80);
PPC_FUNC_IMPL(__imp__sub_831C7E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfd f1,-32768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32768);
	// bl 0x823fec10
	ctx.lr = 0x831C7E98;
	sub_823FEC10(ctx, base);
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-24324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24324, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7EB8"))) PPC_WEAK_FUNC(sub_831C7EB8);
PPC_FUNC_IMPL(__imp__sub_831C7EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-24324
	ctx.r11.s64 = ctx.r11.s64 + -24324;
	// addi r10,r10,-24064
	ctx.r10.s64 = ctx.r10.s64 + -24064;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7ED8"))) PPC_WEAK_FUNC(sub_831C7ED8);
PPC_FUNC_IMPL(__imp__sub_831C7ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,20592
	ctx.r11.s64 = ctx.r11.s64 + 20592;
	// addi r10,r10,-24128
	ctx.r10.s64 = ctx.r10.s64 + -24128;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7EF8"))) PPC_WEAK_FUNC(sub_831C7EF8);
PPC_FUNC_IMPL(__imp__sub_831C7EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-4256
	ctx.r11.s64 = ctx.r11.s64 + -4256;
	// addi r10,r10,-24080
	ctx.r10.s64 = ctx.r10.s64 + -24080;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7F18"))) PPC_WEAK_FUNC(sub_831C7F18);
PPC_FUNC_IMPL(__imp__sub_831C7F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r11,-24176
	ctx.r11.s64 = ctx.r11.s64 + -24176;
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7F30"))) PPC_WEAK_FUNC(sub_831C7F30);
PPC_FUNC_IMPL(__imp__sub_831C7F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-24096
	ctx.r10.s64 = ctx.r10.s64 + -24096;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7F50"))) PPC_WEAK_FUNC(sub_831C7F50);
PPC_FUNC_IMPL(__imp__sub_831C7F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3384
	ctx.r11.s64 = ctx.r11.s64 + 3384;
	// addi r10,r10,-24160
	ctx.r10.s64 = ctx.r10.s64 + -24160;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7F70"))) PPC_WEAK_FUNC(sub_831C7F70);
PPC_FUNC_IMPL(__imp__sub_831C7F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-10748
	ctx.r11.s64 = ctx.r11.s64 + -10748;
	// addi r10,r10,-24256
	ctx.r10.s64 = ctx.r10.s64 + -24256;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7F90"))) PPC_WEAK_FUNC(sub_831C7F90);
PPC_FUNC_IMPL(__imp__sub_831C7F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,20592
	ctx.r11.s64 = ctx.r11.s64 + 20592;
	// addi r10,r10,-24192
	ctx.r10.s64 = ctx.r10.s64 + -24192;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C7FB0"))) PPC_WEAK_FUNC(sub_831C7FB0);
PPC_FUNC_IMPL(__imp__sub_831C7FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21760
	ctx.r9.s64 = ctx.r11.s64 + -21760;
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

__attribute__((alias("__imp__sub_831C7FE0"))) PPC_WEAK_FUNC(sub_831C7FE0);
PPC_FUNC_IMPL(__imp__sub_831C7FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21776
	ctx.r9.s64 = ctx.r11.s64 + -21776;
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

__attribute__((alias("__imp__sub_831C8010"))) PPC_WEAK_FUNC(sub_831C8010);
PPC_FUNC_IMPL(__imp__sub_831C8010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21840
	ctx.r9.s64 = ctx.r11.s64 + -21840;
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

__attribute__((alias("__imp__sub_831C8040"))) PPC_WEAK_FUNC(sub_831C8040);
PPC_FUNC_IMPL(__imp__sub_831C8040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21792
	ctx.r9.s64 = ctx.r11.s64 + -21792;
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

__attribute__((alias("__imp__sub_831C8070"))) PPC_WEAK_FUNC(sub_831C8070);
PPC_FUNC_IMPL(__imp__sub_831C8070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-21808
	ctx.r10.s64 = ctx.r10.s64 + -21808;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8090"))) PPC_WEAK_FUNC(sub_831C8090);
PPC_FUNC_IMPL(__imp__sub_831C8090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-21856
	ctx.r10.s64 = ctx.r10.s64 + -21856;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C80B0"))) PPC_WEAK_FUNC(sub_831C80B0);
PPC_FUNC_IMPL(__imp__sub_831C80B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C80C0"))) PPC_WEAK_FUNC(sub_831C80C0);
PPC_FUNC_IMPL(__imp__sub_831C80C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3256
	ctx.r11.s64 = ctx.r11.s64 + 3256;
	// addi r10,r10,-21728
	ctx.r10.s64 = ctx.r10.s64 + -21728;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C80E0"))) PPC_WEAK_FUNC(sub_831C80E0);
PPC_FUNC_IMPL(__imp__sub_831C80E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// b 0x82d45f08
	sub_82D45F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C80F0"))) PPC_WEAK_FUNC(sub_831C80F0);
PPC_FUNC_IMPL(__imp__sub_831C80F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8100"))) PPC_WEAK_FUNC(sub_831C8100);
PPC_FUNC_IMPL(__imp__sub_831C8100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3432
	ctx.r11.s64 = ctx.r11.s64 + 3432;
	// addi r10,r10,-21744
	ctx.r10.s64 = ctx.r10.s64 + -21744;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8120"))) PPC_WEAK_FUNC(sub_831C8120);
PPC_FUNC_IMPL(__imp__sub_831C8120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3208
	ctx.r11.s64 = ctx.r11.s64 + 3208;
	// addi r10,r10,-21824
	ctx.r10.s64 = ctx.r10.s64 + -21824;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8140"))) PPC_WEAK_FUNC(sub_831C8140);
PPC_FUNC_IMPL(__imp__sub_831C8140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,3432
	ctx.r11.s64 = ctx.r11.s64 + 3432;
	// addi r10,r10,-21712
	ctx.r10.s64 = ctx.r10.s64 + -21712;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8160"))) PPC_WEAK_FUNC(sub_831C8160);
PPC_FUNC_IMPL(__imp__sub_831C8160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21472
	ctx.r9.s64 = ctx.r11.s64 + -21472;
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

__attribute__((alias("__imp__sub_831C8190"))) PPC_WEAK_FUNC(sub_831C8190);
PPC_FUNC_IMPL(__imp__sub_831C8190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21552
	ctx.r9.s64 = ctx.r11.s64 + -21552;
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

__attribute__((alias("__imp__sub_831C81C0"))) PPC_WEAK_FUNC(sub_831C81C0);
PPC_FUNC_IMPL(__imp__sub_831C81C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21632
	ctx.r9.s64 = ctx.r11.s64 + -21632;
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

__attribute__((alias("__imp__sub_831C81F0"))) PPC_WEAK_FUNC(sub_831C81F0);
PPC_FUNC_IMPL(__imp__sub_831C81F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21568
	ctx.r9.s64 = ctx.r11.s64 + -21568;
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

__attribute__((alias("__imp__sub_831C8220"))) PPC_WEAK_FUNC(sub_831C8220);
PPC_FUNC_IMPL(__imp__sub_831C8220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-21584
	ctx.r10.s64 = ctx.r10.s64 + -21584;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8240"))) PPC_WEAK_FUNC(sub_831C8240);
PPC_FUNC_IMPL(__imp__sub_831C8240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-21648
	ctx.r10.s64 = ctx.r10.s64 + -21648;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8260"))) PPC_WEAK_FUNC(sub_831C8260);
PPC_FUNC_IMPL(__imp__sub_831C8260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8270"))) PPC_WEAK_FUNC(sub_831C8270);
PPC_FUNC_IMPL(__imp__sub_831C8270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-21488
	ctx.r10.s64 = ctx.r10.s64 + -21488;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8290"))) PPC_WEAK_FUNC(sub_831C8290);
PPC_FUNC_IMPL(__imp__sub_831C8290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17320
	ctx.r3.s64 = ctx.r11.s64 + -17320;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C82A0"))) PPC_WEAK_FUNC(sub_831C82A0);
PPC_FUNC_IMPL(__imp__sub_831C82A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C82B0"))) PPC_WEAK_FUNC(sub_831C82B0);
PPC_FUNC_IMPL(__imp__sub_831C82B0) {
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
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// bl 0x824683b0
	ctx.lr = 0x831C82CC;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17352
	ctx.r3.s64 = ctx.r11.s64 + -17352;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C82D8;
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

__attribute__((alias("__imp__sub_831C82E8"))) PPC_WEAK_FUNC(sub_831C82E8);
PPC_FUNC_IMPL(__imp__sub_831C82E8) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-21328
	ctx.r31.s64 = ctx.r11.s64 + -21328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C830C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-17264
	ctx.r3.s64 = ctx.r10.s64 + -17264;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8334;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8348"))) PPC_WEAK_FUNC(sub_831C8348);
PPC_FUNC_IMPL(__imp__sub_831C8348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8358"))) PPC_WEAK_FUNC(sub_831C8358);
PPC_FUNC_IMPL(__imp__sub_831C8358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17144
	ctx.r3.s64 = ctx.r11.s64 + -17144;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8368"))) PPC_WEAK_FUNC(sub_831C8368);
PPC_FUNC_IMPL(__imp__sub_831C8368) {
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
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// bl 0x824683b0
	ctx.lr = 0x831C8384;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8390;
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

__attribute__((alias("__imp__sub_831C83A0"))) PPC_WEAK_FUNC(sub_831C83A0);
PPC_FUNC_IMPL(__imp__sub_831C83A0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C83C4;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-17248
	ctx.r3.s64 = ctx.r10.s64 + -17248;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C83EC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8400"))) PPC_WEAK_FUNC(sub_831C8400);
PPC_FUNC_IMPL(__imp__sub_831C8400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8410"))) PPC_WEAK_FUNC(sub_831C8410);
PPC_FUNC_IMPL(__imp__sub_831C8410) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r4,r11,-25260
	ctx.r4.s64 = ctx.r11.s64 + -25260;
	// addi r3,r10,-21432
	ctx.r3.s64 = ctx.r10.s64 + -21432;
	// bl 0x82450f48
	ctx.lr = 0x831C8430;
	sub_82450F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17288
	ctx.r3.s64 = ctx.r11.s64 + -17288;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C843C;
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

__attribute__((alias("__imp__sub_831C8450"))) PPC_WEAK_FUNC(sub_831C8450);
PPC_FUNC_IMPL(__imp__sub_831C8450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16984
	ctx.r3.s64 = ctx.r11.s64 + -16984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8460"))) PPC_WEAK_FUNC(sub_831C8460);
PPC_FUNC_IMPL(__imp__sub_831C8460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21056
	ctx.r9.s64 = ctx.r11.s64 + -21056;
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

__attribute__((alias("__imp__sub_831C8490"))) PPC_WEAK_FUNC(sub_831C8490);
PPC_FUNC_IMPL(__imp__sub_831C8490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21136
	ctx.r9.s64 = ctx.r11.s64 + -21136;
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

__attribute__((alias("__imp__sub_831C84C0"))) PPC_WEAK_FUNC(sub_831C84C0);
PPC_FUNC_IMPL(__imp__sub_831C84C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21184
	ctx.r9.s64 = ctx.r11.s64 + -21184;
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

__attribute__((alias("__imp__sub_831C84F0"))) PPC_WEAK_FUNC(sub_831C84F0);
PPC_FUNC_IMPL(__imp__sub_831C84F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-21152
	ctx.r9.s64 = ctx.r11.s64 + -21152;
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

__attribute__((alias("__imp__sub_831C8520"))) PPC_WEAK_FUNC(sub_831C8520);
PPC_FUNC_IMPL(__imp__sub_831C8520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-21168
	ctx.r10.s64 = ctx.r10.s64 + -21168;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8540"))) PPC_WEAK_FUNC(sub_831C8540);
PPC_FUNC_IMPL(__imp__sub_831C8540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-21200
	ctx.r10.s64 = ctx.r10.s64 + -21200;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8560"))) PPC_WEAK_FUNC(sub_831C8560);
PPC_FUNC_IMPL(__imp__sub_831C8560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-21072
	ctx.r10.s64 = ctx.r10.s64 + -21072;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8580"))) PPC_WEAK_FUNC(sub_831C8580);
PPC_FUNC_IMPL(__imp__sub_831C8580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8590"))) PPC_WEAK_FUNC(sub_831C8590);
PPC_FUNC_IMPL(__imp__sub_831C8590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C85A0"))) PPC_WEAK_FUNC(sub_831C85A0);
PPC_FUNC_IMPL(__imp__sub_831C85A0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-20324
	ctx.r31.s64 = ctx.r11.s64 + -20324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C85C4;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16968
	ctx.r3.s64 = ctx.r10.s64 + -16968;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C85EC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8600"))) PPC_WEAK_FUNC(sub_831C8600);
PPC_FUNC_IMPL(__imp__sub_831C8600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8610"))) PPC_WEAK_FUNC(sub_831C8610);
PPC_FUNC_IMPL(__imp__sub_831C8610) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-20484
	ctx.r31.s64 = ctx.r11.s64 + -20484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C8634;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16952
	ctx.r3.s64 = ctx.r10.s64 + -16952;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C865C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8670"))) PPC_WEAK_FUNC(sub_831C8670);
PPC_FUNC_IMPL(__imp__sub_831C8670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8680"))) PPC_WEAK_FUNC(sub_831C8680);
PPC_FUNC_IMPL(__imp__sub_831C8680) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-20272
	ctx.r31.s64 = ctx.r11.s64 + -20272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C86A4;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16936
	ctx.r3.s64 = ctx.r10.s64 + -16936;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C86CC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C86E0"))) PPC_WEAK_FUNC(sub_831C86E0);
PPC_FUNC_IMPL(__imp__sub_831C86E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C86F0"))) PPC_WEAK_FUNC(sub_831C86F0);
PPC_FUNC_IMPL(__imp__sub_831C86F0) {
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
	// addi r3,r11,-21100
	ctx.r3.s64 = ctx.r11.s64 + -21100;
	// bl 0x824683b0
	ctx.lr = 0x831C870C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17056
	ctx.r3.s64 = ctx.r11.s64 + -17056;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8718;
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

__attribute__((alias("__imp__sub_831C8728"))) PPC_WEAK_FUNC(sub_831C8728);
PPC_FUNC_IMPL(__imp__sub_831C8728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8738"))) PPC_WEAK_FUNC(sub_831C8738);
PPC_FUNC_IMPL(__imp__sub_831C8738) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-20424
	ctx.r31.s64 = ctx.r11.s64 + -20424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C875C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16920
	ctx.r3.s64 = ctx.r10.s64 + -16920;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8784;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8798"))) PPC_WEAK_FUNC(sub_831C8798);
PPC_FUNC_IMPL(__imp__sub_831C8798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C87A8"))) PPC_WEAK_FUNC(sub_831C87A8);
PPC_FUNC_IMPL(__imp__sub_831C87A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16800
	ctx.r3.s64 = ctx.r11.s64 + -16800;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C87B8"))) PPC_WEAK_FUNC(sub_831C87B8);
PPC_FUNC_IMPL(__imp__sub_831C87B8) {
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
	// addi r3,r11,-21020
	ctx.r3.s64 = ctx.r11.s64 + -21020;
	// bl 0x824683b0
	ctx.lr = 0x831C87D4;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C87E0;
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

__attribute__((alias("__imp__sub_831C87F0"))) PPC_WEAK_FUNC(sub_831C87F0);
PPC_FUNC_IMPL(__imp__sub_831C87F0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-20372
	ctx.r31.s64 = ctx.r11.s64 + -20372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C8814;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16904
	ctx.r3.s64 = ctx.r10.s64 + -16904;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C883C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8850"))) PPC_WEAK_FUNC(sub_831C8850);
PPC_FUNC_IMPL(__imp__sub_831C8850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16680
	ctx.r3.s64 = ctx.r11.s64 + -16680;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8860"))) PPC_WEAK_FUNC(sub_831C8860);
PPC_FUNC_IMPL(__imp__sub_831C8860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-20128
	ctx.r9.s64 = ctx.r11.s64 + -20128;
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

__attribute__((alias("__imp__sub_831C8890"))) PPC_WEAK_FUNC(sub_831C8890);
PPC_FUNC_IMPL(__imp__sub_831C8890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-20160
	ctx.r9.s64 = ctx.r11.s64 + -20160;
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

__attribute__((alias("__imp__sub_831C88C0"))) PPC_WEAK_FUNC(sub_831C88C0);
PPC_FUNC_IMPL(__imp__sub_831C88C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-20208
	ctx.r9.s64 = ctx.r11.s64 + -20208;
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

__attribute__((alias("__imp__sub_831C88F0"))) PPC_WEAK_FUNC(sub_831C88F0);
PPC_FUNC_IMPL(__imp__sub_831C88F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-20176
	ctx.r9.s64 = ctx.r11.s64 + -20176;
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

__attribute__((alias("__imp__sub_831C8920"))) PPC_WEAK_FUNC(sub_831C8920);
PPC_FUNC_IMPL(__imp__sub_831C8920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-20192
	ctx.r10.s64 = ctx.r10.s64 + -20192;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8940"))) PPC_WEAK_FUNC(sub_831C8940);
PPC_FUNC_IMPL(__imp__sub_831C8940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-20224
	ctx.r10.s64 = ctx.r10.s64 + -20224;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8960"))) PPC_WEAK_FUNC(sub_831C8960);
PPC_FUNC_IMPL(__imp__sub_831C8960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-20144
	ctx.r10.s64 = ctx.r10.s64 + -20144;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8980"))) PPC_WEAK_FUNC(sub_831C8980);
PPC_FUNC_IMPL(__imp__sub_831C8980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8990"))) PPC_WEAK_FUNC(sub_831C8990);
PPC_FUNC_IMPL(__imp__sub_831C8990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16696
	ctx.r3.s64 = ctx.r11.s64 + -16696;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C89A0"))) PPC_WEAK_FUNC(sub_831C89A0);
PPC_FUNC_IMPL(__imp__sub_831C89A0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-19932
	ctx.r31.s64 = ctx.r11.s64 + -19932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C89C4;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16664
	ctx.r3.s64 = ctx.r10.s64 + -16664;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C89EC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8A00"))) PPC_WEAK_FUNC(sub_831C8A00);
PPC_FUNC_IMPL(__imp__sub_831C8A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8A10"))) PPC_WEAK_FUNC(sub_831C8A10);
PPC_FUNC_IMPL(__imp__sub_831C8A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16632
	ctx.r3.s64 = ctx.r11.s64 + -16632;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8A20"))) PPC_WEAK_FUNC(sub_831C8A20);
PPC_FUNC_IMPL(__imp__sub_831C8A20) {
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
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// bl 0x824683b0
	ctx.lr = 0x831C8A3C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16712
	ctx.r3.s64 = ctx.r11.s64 + -16712;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8A48;
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

__attribute__((alias("__imp__sub_831C8A58"))) PPC_WEAK_FUNC(sub_831C8A58);
PPC_FUNC_IMPL(__imp__sub_831C8A58) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-19980
	ctx.r31.s64 = ctx.r11.s64 + -19980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C8A7C;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16648
	ctx.r3.s64 = ctx.r10.s64 + -16648;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8AA4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8AB8"))) PPC_WEAK_FUNC(sub_831C8AB8);
PPC_FUNC_IMPL(__imp__sub_831C8AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16472
	ctx.r3.s64 = ctx.r11.s64 + -16472;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8AC8"))) PPC_WEAK_FUNC(sub_831C8AC8);
PPC_FUNC_IMPL(__imp__sub_831C8AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19680
	ctx.r9.s64 = ctx.r11.s64 + -19680;
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

__attribute__((alias("__imp__sub_831C8AF8"))) PPC_WEAK_FUNC(sub_831C8AF8);
PPC_FUNC_IMPL(__imp__sub_831C8AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19776
	ctx.r9.s64 = ctx.r11.s64 + -19776;
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

__attribute__((alias("__imp__sub_831C8B28"))) PPC_WEAK_FUNC(sub_831C8B28);
PPC_FUNC_IMPL(__imp__sub_831C8B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19824
	ctx.r9.s64 = ctx.r11.s64 + -19824;
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

__attribute__((alias("__imp__sub_831C8B58"))) PPC_WEAK_FUNC(sub_831C8B58);
PPC_FUNC_IMPL(__imp__sub_831C8B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19792
	ctx.r9.s64 = ctx.r11.s64 + -19792;
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

__attribute__((alias("__imp__sub_831C8B88"))) PPC_WEAK_FUNC(sub_831C8B88);
PPC_FUNC_IMPL(__imp__sub_831C8B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-19808
	ctx.r10.s64 = ctx.r10.s64 + -19808;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8BA8"))) PPC_WEAK_FUNC(sub_831C8BA8);
PPC_FUNC_IMPL(__imp__sub_831C8BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-19840
	ctx.r10.s64 = ctx.r10.s64 + -19840;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8BC8"))) PPC_WEAK_FUNC(sub_831C8BC8);
PPC_FUNC_IMPL(__imp__sub_831C8BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-19712
	ctx.r10.s64 = ctx.r10.s64 + -19712;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8BE8"))) PPC_WEAK_FUNC(sub_831C8BE8);
PPC_FUNC_IMPL(__imp__sub_831C8BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8BF8"))) PPC_WEAK_FUNC(sub_831C8BF8);
PPC_FUNC_IMPL(__imp__sub_831C8BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16496
	ctx.r3.s64 = ctx.r11.s64 + -16496;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8C08"))) PPC_WEAK_FUNC(sub_831C8C08);
PPC_FUNC_IMPL(__imp__sub_831C8C08) {
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
	// addi r3,r11,-19628
	ctx.r3.s64 = ctx.r11.s64 + -19628;
	// bl 0x824683b0
	ctx.lr = 0x831C8C24;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8C30;
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

__attribute__((alias("__imp__sub_831C8C40"))) PPC_WEAK_FUNC(sub_831C8C40);
PPC_FUNC_IMPL(__imp__sub_831C8C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16488
	ctx.r3.s64 = ctx.r11.s64 + -16488;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8C50"))) PPC_WEAK_FUNC(sub_831C8C50);
PPC_FUNC_IMPL(__imp__sub_831C8C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16256
	ctx.r3.s64 = ctx.r11.s64 + -16256;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8C60"))) PPC_WEAK_FUNC(sub_831C8C60);
PPC_FUNC_IMPL(__imp__sub_831C8C60) {
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
	// addi r3,r11,-19660
	ctx.r3.s64 = ctx.r11.s64 + -19660;
	// bl 0x824683b0
	ctx.lr = 0x831C8C7C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16528
	ctx.r3.s64 = ctx.r11.s64 + -16528;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8C88;
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

__attribute__((alias("__imp__sub_831C8C98"))) PPC_WEAK_FUNC(sub_831C8C98);
PPC_FUNC_IMPL(__imp__sub_831C8C98) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-19524
	ctx.r31.s64 = ctx.r11.s64 + -19524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C8CBC;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-16272
	ctx.r3.s64 = ctx.r10.s64 + -16272;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8CE4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C8CF8"))) PPC_WEAK_FUNC(sub_831C8CF8);
PPC_FUNC_IMPL(__imp__sub_831C8CF8) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82c00e88
	ctx.lr = 0x831C8D20;
	sub_82C00E88(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16360
	ctx.r3.s64 = ctx.r11.s64 + -16360;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8D2C;
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

__attribute__((alias("__imp__sub_831C8D40"))) PPC_WEAK_FUNC(sub_831C8D40);
PPC_FUNC_IMPL(__imp__sub_831C8D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8D50"))) PPC_WEAK_FUNC(sub_831C8D50);
PPC_FUNC_IMPL(__imp__sub_831C8D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8D60"))) PPC_WEAK_FUNC(sub_831C8D60);
PPC_FUNC_IMPL(__imp__sub_831C8D60) {
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
	// addi r3,r11,-19740
	ctx.r3.s64 = ctx.r11.s64 + -19740;
	// bl 0x824683b0
	ctx.lr = 0x831C8D7C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8D88;
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

__attribute__((alias("__imp__sub_831C8D98"))) PPC_WEAK_FUNC(sub_831C8D98);
PPC_FUNC_IMPL(__imp__sub_831C8D98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-19696
	ctx.r9.s64 = ctx.r10.s64 + -19696;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r11,-19696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19696, ctx.r11.u32);
	// addi r3,r8,-16440
	ctx.r3.s64 = ctx.r8.s64 + -16440;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8DC0"))) PPC_WEAK_FUNC(sub_831C8DC0);
PPC_FUNC_IMPL(__imp__sub_831C8DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8DD0"))) PPC_WEAK_FUNC(sub_831C8DD0);
PPC_FUNC_IMPL(__imp__sub_831C8DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8DE0"))) PPC_WEAK_FUNC(sub_831C8DE0);
PPC_FUNC_IMPL(__imp__sub_831C8DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19344
	ctx.r9.s64 = ctx.r11.s64 + -19344;
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

__attribute__((alias("__imp__sub_831C8E10"))) PPC_WEAK_FUNC(sub_831C8E10);
PPC_FUNC_IMPL(__imp__sub_831C8E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19376
	ctx.r9.s64 = ctx.r11.s64 + -19376;
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

__attribute__((alias("__imp__sub_831C8E40"))) PPC_WEAK_FUNC(sub_831C8E40);
PPC_FUNC_IMPL(__imp__sub_831C8E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19424
	ctx.r9.s64 = ctx.r11.s64 + -19424;
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

__attribute__((alias("__imp__sub_831C8E70"))) PPC_WEAK_FUNC(sub_831C8E70);
PPC_FUNC_IMPL(__imp__sub_831C8E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-19392
	ctx.r9.s64 = ctx.r11.s64 + -19392;
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

__attribute__((alias("__imp__sub_831C8EA0"))) PPC_WEAK_FUNC(sub_831C8EA0);
PPC_FUNC_IMPL(__imp__sub_831C8EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-19408
	ctx.r10.s64 = ctx.r10.s64 + -19408;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8EC0"))) PPC_WEAK_FUNC(sub_831C8EC0);
PPC_FUNC_IMPL(__imp__sub_831C8EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-19440
	ctx.r10.s64 = ctx.r10.s64 + -19440;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8EE0"))) PPC_WEAK_FUNC(sub_831C8EE0);
PPC_FUNC_IMPL(__imp__sub_831C8EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-19360
	ctx.r10.s64 = ctx.r10.s64 + -19360;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C8F00"))) PPC_WEAK_FUNC(sub_831C8F00);
PPC_FUNC_IMPL(__imp__sub_831C8F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-19296
	ctx.r3.s64 = ctx.r11.s64 + -19296;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8F10"))) PPC_WEAK_FUNC(sub_831C8F10);
PPC_FUNC_IMPL(__imp__sub_831C8F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8F20"))) PPC_WEAK_FUNC(sub_831C8F20);
PPC_FUNC_IMPL(__imp__sub_831C8F20) {
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
	// addi r3,r11,-19468
	ctx.r3.s64 = ctx.r11.s64 + -19468;
	// bl 0x824683b0
	ctx.lr = 0x831C8F3C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16168
	ctx.r3.s64 = ctx.r11.s64 + -16168;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8F48;
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

__attribute__((alias("__imp__sub_831C8F58"))) PPC_WEAK_FUNC(sub_831C8F58);
PPC_FUNC_IMPL(__imp__sub_831C8F58) {
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
	// addi r3,r11,-19324
	ctx.r3.s64 = ctx.r11.s64 + -19324;
	// bl 0x824683b0
	ctx.lr = 0x831C8F74;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C8F80;
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

__attribute__((alias("__imp__sub_831C8F90"))) PPC_WEAK_FUNC(sub_831C8F90);
PPC_FUNC_IMPL(__imp__sub_831C8F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16104
	ctx.r3.s64 = ctx.r11.s64 + -16104;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C8FA0"))) PPC_WEAK_FUNC(sub_831C8FA0);
PPC_FUNC_IMPL(__imp__sub_831C8FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18848
	ctx.r9.s64 = ctx.r11.s64 + -18848;
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

__attribute__((alias("__imp__sub_831C8FD0"))) PPC_WEAK_FUNC(sub_831C8FD0);
PPC_FUNC_IMPL(__imp__sub_831C8FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18912
	ctx.r9.s64 = ctx.r11.s64 + -18912;
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

__attribute__((alias("__imp__sub_831C9000"))) PPC_WEAK_FUNC(sub_831C9000);
PPC_FUNC_IMPL(__imp__sub_831C9000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18960
	ctx.r9.s64 = ctx.r11.s64 + -18960;
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

__attribute__((alias("__imp__sub_831C9030"))) PPC_WEAK_FUNC(sub_831C9030);
PPC_FUNC_IMPL(__imp__sub_831C9030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18928
	ctx.r9.s64 = ctx.r11.s64 + -18928;
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

__attribute__((alias("__imp__sub_831C9060"))) PPC_WEAK_FUNC(sub_831C9060);
PPC_FUNC_IMPL(__imp__sub_831C9060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-18944
	ctx.r10.s64 = ctx.r10.s64 + -18944;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9080"))) PPC_WEAK_FUNC(sub_831C9080);
PPC_FUNC_IMPL(__imp__sub_831C9080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-18976
	ctx.r10.s64 = ctx.r10.s64 + -18976;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C90A0"))) PPC_WEAK_FUNC(sub_831C90A0);
PPC_FUNC_IMPL(__imp__sub_831C90A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15752
	ctx.r3.s64 = ctx.r11.s64 + -15752;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C90B0"))) PPC_WEAK_FUNC(sub_831C90B0);
PPC_FUNC_IMPL(__imp__sub_831C90B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15736
	ctx.r3.s64 = ctx.r11.s64 + -15736;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C90C0"))) PPC_WEAK_FUNC(sub_831C90C0);
PPC_FUNC_IMPL(__imp__sub_831C90C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-18864
	ctx.r10.s64 = ctx.r10.s64 + -18864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C90E0"))) PPC_WEAK_FUNC(sub_831C90E0);
PPC_FUNC_IMPL(__imp__sub_831C90E0) {
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
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// bl 0x825e79f0
	ctx.lr = 0x831C90FC;
	sub_825E79F0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15480
	ctx.r3.s64 = ctx.r11.s64 + -15480;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9108;
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

__attribute__((alias("__imp__sub_831C9118"))) PPC_WEAK_FUNC(sub_831C9118);
PPC_FUNC_IMPL(__imp__sub_831C9118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18816
	ctx.r3.s64 = ctx.r11.s64 + -18816;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9128"))) PPC_WEAK_FUNC(sub_831C9128);
PPC_FUNC_IMPL(__imp__sub_831C9128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9138"))) PPC_WEAK_FUNC(sub_831C9138);
PPC_FUNC_IMPL(__imp__sub_831C9138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,-8768
	ctx.r11.s64 = ctx.r11.s64 + -8768;
	// addi r10,r10,-18736
	ctx.r10.s64 = ctx.r10.s64 + -18736;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9158"))) PPC_WEAK_FUNC(sub_831C9158);
PPC_FUNC_IMPL(__imp__sub_831C9158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15720
	ctx.r3.s64 = ctx.r11.s64 + -15720;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9168"))) PPC_WEAK_FUNC(sub_831C9168);
PPC_FUNC_IMPL(__imp__sub_831C9168) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,11656
	ctx.r31.s64 = ctx.r11.s64 + 11656;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a0e238
	ctx.lr = 0x831C9188;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8280
	ctx.r10.s64 = ctx.r10.s64 + -8280;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C91A4;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8324
	ctx.r10.s64 = ctx.r10.s64 + -8324;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C91C0;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8368
	ctx.r10.s64 = ctx.r10.s64 + -8368;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C91DC;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8412
	ctx.r10.s64 = ctx.r10.s64 + -8412;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C91F8;
	sub_82A0E238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15640
	ctx.r3.s64 = ctx.r11.s64 + -15640;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9204;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C9218"))) PPC_WEAK_FUNC(sub_831C9218);
PPC_FUNC_IMPL(__imp__sub_831C9218) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,11716
	ctx.r31.s64 = ctx.r11.s64 + 11716;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a0e238
	ctx.lr = 0x831C9238;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8200
	ctx.r10.s64 = ctx.r10.s64 + -8200;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C9254;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8244
	ctx.r10.s64 = ctx.r10.s64 + -8244;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C9270;
	sub_82A0E238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C927C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C9290"))) PPC_WEAK_FUNC(sub_831C9290);
PPC_FUNC_IMPL(__imp__sub_831C9290) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,11752
	ctx.r31.s64 = ctx.r11.s64 + 11752;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a0e238
	ctx.lr = 0x831C92B0;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8280
	ctx.r10.s64 = ctx.r10.s64 + -8280;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C92CC;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8024
	ctx.r10.s64 = ctx.r10.s64 + -8024;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C92E8;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-8068
	ctx.r10.s64 = ctx.r10.s64 + -8068;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C9304;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8112
	ctx.r10.s64 = ctx.r10.s64 + -8112;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C9320;
	sub_82A0E238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-16008
	ctx.r3.s64 = ctx.r11.s64 + -16008;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C932C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C9340"))) PPC_WEAK_FUNC(sub_831C9340);
PPC_FUNC_IMPL(__imp__sub_831C9340) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,11812
	ctx.r31.s64 = ctx.r11.s64 + 11812;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a0e238
	ctx.lr = 0x831C9360;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-7936
	ctx.r10.s64 = ctx.r10.s64 + -7936;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C937C;
	sub_82A0E238(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-7980
	ctx.r10.s64 = ctx.r10.s64 + -7980;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82a0e238
	ctx.lr = 0x831C9398;
	sub_82A0E238(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15928
	ctx.r3.s64 = ctx.r11.s64 + -15928;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C93A4;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C93B8"))) PPC_WEAK_FUNC(sub_831C93B8);
PPC_FUNC_IMPL(__imp__sub_831C93B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15560
	ctx.r3.s64 = ctx.r11.s64 + -15560;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C93C8"))) PPC_WEAK_FUNC(sub_831C93C8);
PPC_FUNC_IMPL(__imp__sub_831C93C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C93D8"))) PPC_WEAK_FUNC(sub_831C93D8);
PPC_FUNC_IMPL(__imp__sub_831C93D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15768
	ctx.r3.s64 = ctx.r11.s64 + -15768;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C93E8"))) PPC_WEAK_FUNC(sub_831C93E8);
PPC_FUNC_IMPL(__imp__sub_831C93E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C93F8"))) PPC_WEAK_FUNC(sub_831C93F8);
PPC_FUNC_IMPL(__imp__sub_831C93F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18320
	ctx.r9.s64 = ctx.r11.s64 + -18320;
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

__attribute__((alias("__imp__sub_831C9428"))) PPC_WEAK_FUNC(sub_831C9428);
PPC_FUNC_IMPL(__imp__sub_831C9428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18592
	ctx.r9.s64 = ctx.r11.s64 + -18592;
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

__attribute__((alias("__imp__sub_831C9458"))) PPC_WEAK_FUNC(sub_831C9458);
PPC_FUNC_IMPL(__imp__sub_831C9458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18640
	ctx.r9.s64 = ctx.r11.s64 + -18640;
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

__attribute__((alias("__imp__sub_831C9488"))) PPC_WEAK_FUNC(sub_831C9488);
PPC_FUNC_IMPL(__imp__sub_831C9488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-18608
	ctx.r9.s64 = ctx.r11.s64 + -18608;
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

__attribute__((alias("__imp__sub_831C94B8"))) PPC_WEAK_FUNC(sub_831C94B8);
PPC_FUNC_IMPL(__imp__sub_831C94B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-18624
	ctx.r10.s64 = ctx.r10.s64 + -18624;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C94D8"))) PPC_WEAK_FUNC(sub_831C94D8);
PPC_FUNC_IMPL(__imp__sub_831C94D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-18656
	ctx.r10.s64 = ctx.r10.s64 + -18656;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C94F8"))) PPC_WEAK_FUNC(sub_831C94F8);
PPC_FUNC_IMPL(__imp__sub_831C94F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-18336
	ctx.r10.s64 = ctx.r10.s64 + -18336;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9518"))) PPC_WEAK_FUNC(sub_831C9518);
PPC_FUNC_IMPL(__imp__sub_831C9518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9528"))) PPC_WEAK_FUNC(sub_831C9528);
PPC_FUNC_IMPL(__imp__sub_831C9528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-31925
	ctx.r9.s64 = -2092236800;
	// addi r11,r11,7808
	ctx.r11.s64 = ctx.r11.s64 + 7808;
	// addi r10,r10,3024
	ctx.r10.s64 = ctx.r10.s64 + 3024;
	// addi r9,r9,-18160
	ctx.r9.s64 = ctx.r9.s64 + -18160;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9558"))) PPC_WEAK_FUNC(sub_831C9558);
PPC_FUNC_IMPL(__imp__sub_831C9558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9568"))) PPC_WEAK_FUNC(sub_831C9568);
PPC_FUNC_IMPL(__imp__sub_831C9568) {
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
	// addi r3,r11,-18684
	ctx.r3.s64 = ctx.r11.s64 + -18684;
	// bl 0x824683b0
	ctx.lr = 0x831C9584;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15416
	ctx.r3.s64 = ctx.r11.s64 + -15416;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9590;
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

__attribute__((alias("__imp__sub_831C95A0"))) PPC_WEAK_FUNC(sub_831C95A0);
PPC_FUNC_IMPL(__imp__sub_831C95A0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-18048
	ctx.r31.s64 = ctx.r11.s64 + -18048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C95C4;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-15344
	ctx.r3.s64 = ctx.r10.s64 + -15344;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C95EC;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C9600"))) PPC_WEAK_FUNC(sub_831C9600);
PPC_FUNC_IMPL(__imp__sub_831C9600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r11,4944
	ctx.r11.s64 = ctx.r11.s64 + 4944;
	// addi r10,r10,14512
	ctx.r10.s64 = ctx.r10.s64 + 14512;
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9620"))) PPC_WEAK_FUNC(sub_831C9620);
PPC_FUNC_IMPL(__imp__sub_831C9620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15048
	ctx.r3.s64 = ctx.r11.s64 + -15048;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9630"))) PPC_WEAK_FUNC(sub_831C9630);
PPC_FUNC_IMPL(__imp__sub_831C9630) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-18576
	ctx.r30.s64 = ctx.r11.s64 + -18576;
loc_831C9650:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824aff50
	ctx.lr = 0x831C9660;
	sub_824AFF50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x831c9650
	if (!ctx.cr0.lt) goto loc_831C9650;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15216
	ctx.r3.s64 = ctx.r11.s64 + -15216;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9678;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C9690"))) PPC_WEAK_FUNC(sub_831C9690);
PPC_FUNC_IMPL(__imp__sub_831C9690) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824aff50
	ctx.lr = 0x831C96B0;
	sub_824AFF50(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15120
	ctx.r3.s64 = ctx.r11.s64 + -15120;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C96BC;
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

__attribute__((alias("__imp__sub_831C96D0"))) PPC_WEAK_FUNC(sub_831C96D0);
PPC_FUNC_IMPL(__imp__sub_831C96D0) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r31,9
	ctx.r31.s64 = 9;
	// addi r30,r11,-18496
	ctx.r30.s64 = ctx.r11.s64 + -18496;
loc_831C96F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824aff50
	ctx.lr = 0x831C9700;
	sub_824AFF50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x831c96f0
	if (!ctx.cr0.lt) goto loc_831C96F0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15312
	ctx.r3.s64 = ctx.r11.s64 + -15312;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9718;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C9730"))) PPC_WEAK_FUNC(sub_831C9730);
PPC_FUNC_IMPL(__imp__sub_831C9730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15376
	ctx.r3.s64 = ctx.r11.s64 + -15376;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9740"))) PPC_WEAK_FUNC(sub_831C9740);
PPC_FUNC_IMPL(__imp__sub_831C9740) {
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
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r31,r11,-18100
	ctx.r31.s64 = ctx.r11.s64 + -18100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824683b0
	ctx.lr = 0x831C9764;
	sub_824683B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r3,r10,-15328
	ctx.r3.s64 = ctx.r10.s64 + -15328;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C978C;
	sub_82A7E6B0(ctx, base);
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

__attribute__((alias("__imp__sub_831C97A0"))) PPC_WEAK_FUNC(sub_831C97A0);
PPC_FUNC_IMPL(__imp__sub_831C97A0) {
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
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// bl 0x82c28ca8
	ctx.lr = 0x831C97B8;
	sub_82C28CA8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15400
	ctx.r3.s64 = ctx.r11.s64 + -15400;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C97C4;
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

__attribute__((alias("__imp__sub_831C97D8"))) PPC_WEAK_FUNC(sub_831C97D8);
PPC_FUNC_IMPL(__imp__sub_831C97D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-15368
	ctx.r3.s64 = ctx.r11.s64 + -15368;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C97E8"))) PPC_WEAK_FUNC(sub_831C97E8);
PPC_FUNC_IMPL(__imp__sub_831C97E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14976
	ctx.r3.s64 = ctx.r11.s64 + -14976;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C97F8"))) PPC_WEAK_FUNC(sub_831C97F8);
PPC_FUNC_IMPL(__imp__sub_831C97F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17872
	ctx.r9.s64 = ctx.r11.s64 + -17872;
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

__attribute__((alias("__imp__sub_831C9828"))) PPC_WEAK_FUNC(sub_831C9828);
PPC_FUNC_IMPL(__imp__sub_831C9828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17904
	ctx.r9.s64 = ctx.r11.s64 + -17904;
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

__attribute__((alias("__imp__sub_831C9858"))) PPC_WEAK_FUNC(sub_831C9858);
PPC_FUNC_IMPL(__imp__sub_831C9858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17952
	ctx.r9.s64 = ctx.r11.s64 + -17952;
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

__attribute__((alias("__imp__sub_831C9888"))) PPC_WEAK_FUNC(sub_831C9888);
PPC_FUNC_IMPL(__imp__sub_831C9888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17920
	ctx.r9.s64 = ctx.r11.s64 + -17920;
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

__attribute__((alias("__imp__sub_831C98B8"))) PPC_WEAK_FUNC(sub_831C98B8);
PPC_FUNC_IMPL(__imp__sub_831C98B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-17936
	ctx.r10.s64 = ctx.r10.s64 + -17936;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C98D8"))) PPC_WEAK_FUNC(sub_831C98D8);
PPC_FUNC_IMPL(__imp__sub_831C98D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-17968
	ctx.r10.s64 = ctx.r10.s64 + -17968;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C98F8"))) PPC_WEAK_FUNC(sub_831C98F8);
PPC_FUNC_IMPL(__imp__sub_831C98F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-17888
	ctx.r10.s64 = ctx.r10.s64 + -17888;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9918"))) PPC_WEAK_FUNC(sub_831C9918);
PPC_FUNC_IMPL(__imp__sub_831C9918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-17848
	ctx.r3.s64 = ctx.r11.s64 + -17848;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9928"))) PPC_WEAK_FUNC(sub_831C9928);
PPC_FUNC_IMPL(__imp__sub_831C9928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9938"))) PPC_WEAK_FUNC(sub_831C9938);
PPC_FUNC_IMPL(__imp__sub_831C9938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14872
	ctx.r3.s64 = ctx.r11.s64 + -14872;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9948"))) PPC_WEAK_FUNC(sub_831C9948);
PPC_FUNC_IMPL(__imp__sub_831C9948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15264
	ctx.r9.s64 = ctx.r11.s64 + -15264;
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

__attribute__((alias("__imp__sub_831C9978"))) PPC_WEAK_FUNC(sub_831C9978);
PPC_FUNC_IMPL(__imp__sub_831C9978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17344
	ctx.r9.s64 = ctx.r11.s64 + -17344;
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

__attribute__((alias("__imp__sub_831C99A8"))) PPC_WEAK_FUNC(sub_831C99A8);
PPC_FUNC_IMPL(__imp__sub_831C99A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17616
	ctx.r9.s64 = ctx.r11.s64 + -17616;
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

__attribute__((alias("__imp__sub_831C99D8"))) PPC_WEAK_FUNC(sub_831C99D8);
PPC_FUNC_IMPL(__imp__sub_831C99D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17360
	ctx.r9.s64 = ctx.r11.s64 + -17360;
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

__attribute__((alias("__imp__sub_831C9A08"))) PPC_WEAK_FUNC(sub_831C9A08);
PPC_FUNC_IMPL(__imp__sub_831C9A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-17584
	ctx.r10.s64 = ctx.r10.s64 + -17584;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9A28"))) PPC_WEAK_FUNC(sub_831C9A28);
PPC_FUNC_IMPL(__imp__sub_831C9A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-17632
	ctx.r10.s64 = ctx.r10.s64 + -17632;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9A48"))) PPC_WEAK_FUNC(sub_831C9A48);
PPC_FUNC_IMPL(__imp__sub_831C9A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-17296
	ctx.r10.s64 = ctx.r10.s64 + -17296;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9A68"))) PPC_WEAK_FUNC(sub_831C9A68);
PPC_FUNC_IMPL(__imp__sub_831C9A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-15168
	ctx.r3.s64 = ctx.r11.s64 + -15168;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9A78"))) PPC_WEAK_FUNC(sub_831C9A78);
PPC_FUNC_IMPL(__imp__sub_831C9A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,126
	ctx.r10.s64 = 126;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r11,r11,-17280
	ctx.r11.s64 = ctx.r11.s64 + -17280;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831C9A90:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831c9a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831C9A90;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14792
	ctx.r3.s64 = ctx.r11.s64 + -14792;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9AB0"))) PPC_WEAK_FUNC(sub_831C9AB0);
PPC_FUNC_IMPL(__imp__sub_831C9AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r11,r11,-17328
	ctx.r11.s64 = ctx.r11.s64 + -17328;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831C9AC8:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831c9ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831C9AC8;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14624
	ctx.r3.s64 = ctx.r11.s64 + -14624;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9AE8"))) PPC_WEAK_FUNC(sub_831C9AE8);
PPC_FUNC_IMPL(__imp__sub_831C9AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-15232
	ctx.r3.s64 = ctx.r11.s64 + -15232;
	// b 0x82d7a0d8
	sub_82D7A0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9AF8"))) PPC_WEAK_FUNC(sub_831C9AF8);
PPC_FUNC_IMPL(__imp__sub_831C9AF8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824aff50
	ctx.lr = 0x831C9B18;
	sub_824AFF50(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14712
	ctx.r3.s64 = ctx.r11.s64 + -14712;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9B24;
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

__attribute__((alias("__imp__sub_831C9B38"))) PPC_WEAK_FUNC(sub_831C9B38);
PPC_FUNC_IMPL(__imp__sub_831C9B38) {
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
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// bl 0x824683b0
	ctx.lr = 0x831C9B54;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14936
	ctx.r3.s64 = ctx.r11.s64 + -14936;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9B60;
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

__attribute__((alias("__imp__sub_831C9B70"))) PPC_WEAK_FUNC(sub_831C9B70);
PPC_FUNC_IMPL(__imp__sub_831C9B70) {
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
	// addi r3,r11,-17540
	ctx.r3.s64 = ctx.r11.s64 + -17540;
	// bl 0x824683b0
	ctx.lr = 0x831C9B8C;
	sub_824683B0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14920
	ctx.r3.s64 = ctx.r11.s64 + -14920;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9B98;
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

__attribute__((alias("__imp__sub_831C9BA8"))) PPC_WEAK_FUNC(sub_831C9BA8);
PPC_FUNC_IMPL(__imp__sub_831C9BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14640
	ctx.r3.s64 = ctx.r11.s64 + -14640;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9BB8"))) PPC_WEAK_FUNC(sub_831C9BB8);
PPC_FUNC_IMPL(__imp__sub_831C9BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14856
	ctx.r3.s64 = ctx.r11.s64 + -14856;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9BC8"))) PPC_WEAK_FUNC(sub_831C9BC8);
PPC_FUNC_IMPL(__imp__sub_831C9BC8) {
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
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-17644
	ctx.r3.s64 = ctx.r11.s64 + -17644;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c00e10
	ctx.lr = 0x831C9BF0;
	sub_82C00E10(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14904
	ctx.r3.s64 = ctx.r11.s64 + -14904;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9BFC;
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

__attribute__((alias("__imp__sub_831C9C10"))) PPC_WEAK_FUNC(sub_831C9C10);
PPC_FUNC_IMPL(__imp__sub_831C9C10) {
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
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// bl 0x82c00f20
	ctx.lr = 0x831C9C28;
	sub_82C00F20(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14888
	ctx.r3.s64 = ctx.r11.s64 + -14888;
	// bl 0x82a7e6b0
	ctx.lr = 0x831C9C34;
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

__attribute__((alias("__imp__sub_831C9C48"))) PPC_WEAK_FUNC(sub_831C9C48);
PPC_FUNC_IMPL(__imp__sub_831C9C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14544
	ctx.r3.s64 = ctx.r11.s64 + -14544;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9C58"))) PPC_WEAK_FUNC(sub_831C9C58);
PPC_FUNC_IMPL(__imp__sub_831C9C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14992
	ctx.r9.s64 = ctx.r11.s64 + -14992;
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

__attribute__((alias("__imp__sub_831C9C88"))) PPC_WEAK_FUNC(sub_831C9C88);
PPC_FUNC_IMPL(__imp__sub_831C9C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15024
	ctx.r9.s64 = ctx.r11.s64 + -15024;
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

__attribute__((alias("__imp__sub_831C9CB8"))) PPC_WEAK_FUNC(sub_831C9CB8);
PPC_FUNC_IMPL(__imp__sub_831C9CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15072
	ctx.r9.s64 = ctx.r11.s64 + -15072;
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

__attribute__((alias("__imp__sub_831C9CE8"))) PPC_WEAK_FUNC(sub_831C9CE8);
PPC_FUNC_IMPL(__imp__sub_831C9CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15040
	ctx.r9.s64 = ctx.r11.s64 + -15040;
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

__attribute__((alias("__imp__sub_831C9D18"))) PPC_WEAK_FUNC(sub_831C9D18);
PPC_FUNC_IMPL(__imp__sub_831C9D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-15056
	ctx.r10.s64 = ctx.r10.s64 + -15056;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9D38"))) PPC_WEAK_FUNC(sub_831C9D38);
PPC_FUNC_IMPL(__imp__sub_831C9D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-15088
	ctx.r10.s64 = ctx.r10.s64 + -15088;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9D58"))) PPC_WEAK_FUNC(sub_831C9D58);
PPC_FUNC_IMPL(__imp__sub_831C9D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-15008
	ctx.r10.s64 = ctx.r10.s64 + -15008;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9D78"))) PPC_WEAK_FUNC(sub_831C9D78);
PPC_FUNC_IMPL(__imp__sub_831C9D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-14968
	ctx.r3.s64 = ctx.r11.s64 + -14968;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9D88"))) PPC_WEAK_FUNC(sub_831C9D88);
PPC_FUNC_IMPL(__imp__sub_831C9D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14520
	ctx.r3.s64 = ctx.r11.s64 + -14520;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9D98"))) PPC_WEAK_FUNC(sub_831C9D98);
PPC_FUNC_IMPL(__imp__sub_831C9D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14800
	ctx.r9.s64 = ctx.r11.s64 + -14800;
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

__attribute__((alias("__imp__sub_831C9DC8"))) PPC_WEAK_FUNC(sub_831C9DC8);
PPC_FUNC_IMPL(__imp__sub_831C9DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14832
	ctx.r9.s64 = ctx.r11.s64 + -14832;
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

__attribute__((alias("__imp__sub_831C9DF8"))) PPC_WEAK_FUNC(sub_831C9DF8);
PPC_FUNC_IMPL(__imp__sub_831C9DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14880
	ctx.r9.s64 = ctx.r11.s64 + -14880;
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

__attribute__((alias("__imp__sub_831C9E28"))) PPC_WEAK_FUNC(sub_831C9E28);
PPC_FUNC_IMPL(__imp__sub_831C9E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14848
	ctx.r9.s64 = ctx.r11.s64 + -14848;
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

__attribute__((alias("__imp__sub_831C9E58"))) PPC_WEAK_FUNC(sub_831C9E58);
PPC_FUNC_IMPL(__imp__sub_831C9E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-14864
	ctx.r10.s64 = ctx.r10.s64 + -14864;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9E78"))) PPC_WEAK_FUNC(sub_831C9E78);
PPC_FUNC_IMPL(__imp__sub_831C9E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-14896
	ctx.r10.s64 = ctx.r10.s64 + -14896;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9E98"))) PPC_WEAK_FUNC(sub_831C9E98);
PPC_FUNC_IMPL(__imp__sub_831C9E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-14816
	ctx.r10.s64 = ctx.r10.s64 + -14816;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9EB8"))) PPC_WEAK_FUNC(sub_831C9EB8);
PPC_FUNC_IMPL(__imp__sub_831C9EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-14776
	ctx.r3.s64 = ctx.r11.s64 + -14776;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9EC8"))) PPC_WEAK_FUNC(sub_831C9EC8);
PPC_FUNC_IMPL(__imp__sub_831C9EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9ED8"))) PPC_WEAK_FUNC(sub_831C9ED8);
PPC_FUNC_IMPL(__imp__sub_831C9ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14576
	ctx.r9.s64 = ctx.r11.s64 + -14576;
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

__attribute__((alias("__imp__sub_831C9F08"))) PPC_WEAK_FUNC(sub_831C9F08);
PPC_FUNC_IMPL(__imp__sub_831C9F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14608
	ctx.r9.s64 = ctx.r11.s64 + -14608;
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

__attribute__((alias("__imp__sub_831C9F38"))) PPC_WEAK_FUNC(sub_831C9F38);
PPC_FUNC_IMPL(__imp__sub_831C9F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14656
	ctx.r9.s64 = ctx.r11.s64 + -14656;
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

__attribute__((alias("__imp__sub_831C9F68"))) PPC_WEAK_FUNC(sub_831C9F68);
PPC_FUNC_IMPL(__imp__sub_831C9F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14624
	ctx.r9.s64 = ctx.r11.s64 + -14624;
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

__attribute__((alias("__imp__sub_831C9F98"))) PPC_WEAK_FUNC(sub_831C9F98);
PPC_FUNC_IMPL(__imp__sub_831C9F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-14640
	ctx.r10.s64 = ctx.r10.s64 + -14640;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9FB8"))) PPC_WEAK_FUNC(sub_831C9FB8);
PPC_FUNC_IMPL(__imp__sub_831C9FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-14672
	ctx.r10.s64 = ctx.r10.s64 + -14672;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831C9FD8"))) PPC_WEAK_FUNC(sub_831C9FD8);
PPC_FUNC_IMPL(__imp__sub_831C9FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831C9FE8"))) PPC_WEAK_FUNC(sub_831C9FE8);
PPC_FUNC_IMPL(__imp__sub_831C9FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// addi r10,r10,-14592
	ctx.r10.s64 = ctx.r10.s64 + -14592;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA008"))) PPC_WEAK_FUNC(sub_831CA008);
PPC_FUNC_IMPL(__imp__sub_831CA008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r3,r11,-14560
	ctx.r3.s64 = ctx.r11.s64 + -14560;
	// b 0x8247bfa0
	sub_8247BFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA018"))) PPC_WEAK_FUNC(sub_831CA018);
PPC_FUNC_IMPL(__imp__sub_831CA018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14296
	ctx.r3.s64 = ctx.r11.s64 + -14296;
	// b 0x82a7e6b0
	sub_82A7E6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CA028"))) PPC_WEAK_FUNC(sub_831CA028);
PPC_FUNC_IMPL(__imp__sub_831CA028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-11104
	ctx.r9.s64 = ctx.r11.s64 + -11104;
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

__attribute__((alias("__imp__sub_831CA058"))) PPC_WEAK_FUNC(sub_831CA058);
PPC_FUNC_IMPL(__imp__sub_831CA058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-13744
	ctx.r9.s64 = ctx.r11.s64 + -13744;
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

__attribute__((alias("__imp__sub_831CA088"))) PPC_WEAK_FUNC(sub_831CA088);
PPC_FUNC_IMPL(__imp__sub_831CA088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-13792
	ctx.r9.s64 = ctx.r11.s64 + -13792;
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

__attribute__((alias("__imp__sub_831CA0B8"))) PPC_WEAK_FUNC(sub_831CA0B8);
PPC_FUNC_IMPL(__imp__sub_831CA0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31925
	ctx.r11.s64 = -2092236800;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-13760
	ctx.r9.s64 = ctx.r11.s64 + -13760;
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

__attribute__((alias("__imp__sub_831CA0E8"))) PPC_WEAK_FUNC(sub_831CA0E8);
PPC_FUNC_IMPL(__imp__sub_831CA0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r10,r10,-13776
	ctx.r10.s64 = ctx.r10.s64 + -13776;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CA108"))) PPC_WEAK_FUNC(sub_831CA108);
PPC_FUNC_IMPL(__imp__sub_831CA108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31925
	ctx.r10.s64 = -2092236800;
	// addi r11,r11,21328
	ctx.r11.s64 = ctx.r11.s64 + 21328;
	// addi r10,r10,-13808
	ctx.r10.s64 = ctx.r10.s64 + -13808;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

