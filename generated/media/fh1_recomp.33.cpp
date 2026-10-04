#include "fh1_funcs.33.h"

DEFINE_REX_FUNC(sub_88050310) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_28) {
	REX_FUNC_PROLOGUE();
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_31) {
	REX_FUNC_PROLOGUE();
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880509A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880509B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x881e9030
	ctx.lr = 0x880509B8;
	sub_881E9030(ctx, base);
	// lis r30,-30683
	ctx.r30.s64 = -2010841088;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x88243610
	ctx.lr = 0x880509C8;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88050a58
	if (!ctx.cr0.eq) goto loc_88050A58;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,104(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x88243620
	ctx.lr = 0x880509DC;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88050a68
	if (ctx.cr0.eq) goto loc_88050A68;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x880522d8
	ctx.lr = 0x880509F0;
	sub_880522D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,104(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// beq 0x88050a4c
	if (ctx.cr0.eq) goto loc_88050A4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x88243620
	ctx.lr = 0x88050A04;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88050a3c
	if (ctx.cr0.eq) goto loc_88050A3C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1328
	ctx.r11.s64 = ctx.r11.s64 + 1328;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x881e9020
	ctx.lr = 0x88050A2C;
	sub_881E9020(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x88050a68
	goto loc_88050A68;
loc_88050A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052278
	ctx.lr = 0x88050A44;
	sub_88052278(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x88050a68
	goto loc_88050A68;
loc_88050A4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88243620
	ctx.lr = 0x88050A54;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x88050a68
	goto loc_88050A68;
loc_88050A58:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_88050A68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881e9018
	ctx.lr = 0x88050A70;
	sub_881E9018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88056A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88056A68;
	__savegprlr_15(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88056aa0
	if (!ctx.cr6.eq) goto loc_88056AA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056AA0:
	// lwz r20,532(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88056adc
	if (ctx.cr6.eq) goto loc_88056ADC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r9,524(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r8,464(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805dcd8
	ctx.lr = 0x88056AD0;
	sub_8805DCD8(ctx, base);
loc_88056AD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056ADC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88060360
	ctx.lr = 0x88056AE4;
	sub_88060360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88056af8
	if (!ctx.cr6.eq) goto loc_88056AF8;
loc_88056AEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056AF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88056b24
	if (ctx.cr6.eq) goto loc_88056B24;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88056b24
	if (ctx.cr6.eq) goto loc_88056B24;
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88056aec
	if (!ctx.cr6.eq) goto loc_88056AEC;
loc_88056B24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805e058
	ctx.lr = 0x88056B2C;
	sub_8805E058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88056b98
	if (!ctx.cr6.gt) goto loc_88056B98;
	// lhz r10,14(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divw r11,r3,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x88056aec
	if (!ctx.cr6.eq) goto loc_88056AEC;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// ori r8,r10,22105
	ctx.r8.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88056b80
	if (!ctx.cr6.eq) goto loc_88056B80;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88056aec
	if (!ctx.cr6.eq) goto loc_88056AEC;
loc_88056B80:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88056b98
	if (!ctx.cr6.eq) goto loc_88056B98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805e048
	ctx.lr = 0x88056B98;
	sub_8805E048(ctx, base);
loc_88056B98:
	// lwz r27,508(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88056c84
	if (ctx.cr6.eq) goto loc_88056C84;
	// lwz r28,516(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88056c84
	if (ctx.cr6.eq) goto loc_88056C84;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// lbz r18,479(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 479);
	// addi r19,r1,224
	ctx.r19.s64 = ctx.r1.s64 + 224;
	// lwz r3,524(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// clrlwi r21,r21,24
	ctx.r21.u64 = ctx.r21.u32 & 0xFF;
	// lwz r17,492(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// cntlzw r8,r18
	ctx.r8.u64 = ctx.r18.u32 == 0 ? 32 : __builtin_clz(ctx.r18.u32);
	// stw r10,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lbz r16,503(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 503);
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbz r15,487(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 487);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ld r23,464(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r26,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// std r23,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r23.u64);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x8805e9e0
	ctx.lr = 0x88056C60;
	sub_8805E9E0(ctx, base);
	// lwz r5,232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// b 0x88056d18
	goto loc_88056D18;
loc_88056C84:
	// lbz r3,503(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 503);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r28,479(r1)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 479);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// clrlwi r27,r21,24
	ctx.r27.u64 = ctx.r21.u32 & 0xFF;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r9,524(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// ld r30,464(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// lbz r29,487(r1)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 487);
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x8805e9e0
	ctx.lr = 0x88056D18;
	sub_8805E9E0(ctx, base);
loc_88056D18:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// srawi r10,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r31.u64 - ctx.r11.u64;
	// adde r7,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r7,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r7.u8);
	// beq cr6,0x88056ad0
	if (ctx.cr6.eq) goto loc_88056AD0;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x88056d4c
	if (!ctx.cr6.eq) goto loc_88056D4C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056D4C:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x88056d5c
	if (ctx.cr6.eq) goto loc_88056D5C;
	// li r3,6
	ctx.r3.s64 = 6;
loc_88056D5C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805D750) {
	REX_FUNC_PROLOGUE();
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805D760) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x8805D778;
	sub_88061FB8(ctx, base);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,9392
	ctx.r8.s64 = ctx.r10.s64 + 9392;
	// std r11,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// std r11,64(r31)
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// std r11,88(r31)
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8805FAB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8805FAB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r26,568(r3)
	REX_STORE_U32(ctx.r3.u32 + 568, ctx.r26.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// stw r26,572(r30)
	REX_STORE_U32(ctx.r30.u32 + 572, ctx.r26.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r26,576(r30)
	REX_STORE_U32(ctx.r30.u32 + 576, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x88050340
	ctx.lr = 0x8805FAEC;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fb04
	if (ctx.cr6.eq) goto loc_8805FB04;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8807c410
	ctx.lr = 0x8805FB00;
	sub_8807C410(ctx, base);
	// b 0x8805fb08
	goto loc_8805FB08;
loc_8805FB04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8805FB08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,560(r30)
	REX_STORE_U32(ctx.r30.u32 + 560, ctx.r3.u32);
	// bne cr6,0x8805fb24
	if (!ctx.cr6.eq) goto loc_8805FB24;
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805FB24:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805fbd0
	if (!ctx.cr6.eq) goto loc_8805FBD0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8805fc30
	if (!ctx.cr6.gt) goto loc_8805FC30;
loc_8805FB3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x88050340
	ctx.lr = 0x8805FB48;
	sub_88050340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fbc8
	if (ctx.cr6.eq) goto loc_8805FBC8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,272(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x88050340
	ctx.lr = 0x8805FB60;
	sub_88050340(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x8805fbe4
	if (ctx.cr6.eq) goto loc_8805FBE4;
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// bl 0x88050340
	ctx.lr = 0x8805FB7C;
	sub_88050340(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fbe0
	if (ctx.cr6.eq) goto loc_8805FBE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,560(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 560);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8807c0d8
	ctx.lr = 0x8805FB98;
	sub_8807C0D8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8805fb3c
	if (ctx.cr6.lt) goto loc_8805FB3C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8805fc30
	if (!ctx.cr6.gt) goto loc_8805FC30;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x88050340
	ctx.lr = 0x8805FBB8;
	sub_88050340(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fbfc
	if (ctx.cr6.eq) goto loc_8805FBFC;
	// bl 0x8807cce0
	ctx.lr = 0x8805FBC4;
	sub_8807CCE0(ctx, base);
	// b 0x8805fc00
	goto loc_8805FC00;
loc_8805FBC8:
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8805FBD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805f8f0
	ctx.lr = 0x8805FBD8;
	sub_8805F8F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805FBE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8805FBE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8805FBEC;
	sub_88050358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805f8f0
	ctx.lr = 0x8805FBF4;
	sub_8805F8F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8805FBFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8805FC00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,564(r30)
	REX_STORE_U32(ctx.r30.u32 + 564, ctx.r3.u32);
	// beq cr6,0x8805fbd0
	if (ctx.cr6.eq) goto loc_8805FBD0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,28(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8807d7f0
	ctx.lr = 0x8805FC1C;
	sub_8807D7F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805fbd0
	if (!ctx.cr6.eq) goto loc_8805FBD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,564(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x8807d258
	ctx.lr = 0x8805FC30;
	sub_8807D258(ctx, base);
loc_8805FC30:
	// stw r26,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880641F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880641F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8806424c
	if (!ctx.cr6.eq) goto loc_8806424C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88064230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880628b8
	ctx.lr = 0x88064244;
	sub_880628B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8806424C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x880cb730
	ctx.lr = 0x88064258;
	sub_880CB730(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88064270
	if (ctx.cr6.eq) goto loc_88064270;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880642d0
	if (ctx.cr6.eq) goto loc_880642D0;
loc_88064270:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88063f30
	ctx.lr = 0x88064280;
	sub_88063F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880642A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x880642BC;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_880642D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880656F0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880656F8;
	__savegprlr_28(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r29,r5,31,17,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFF;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x880657d8
	if (ctx.cr6.eq) goto loc_880657D8;
loc_88065714:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88065744
	if (!ctx.cr6.eq) goto loc_88065744;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x88065734
	if (ctx.cr6.lt) goto loc_88065734;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x88065744
	if (!ctx.cr6.gt) goto loc_88065744;
loc_88065734:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_88065744:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x88065764
	if (!ctx.cr6.eq) goto loc_88065764;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88065764
	if (ctx.cr6.eq) goto loc_88065764;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// stwx r28,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
loc_88065764:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8806579c
	if (!ctx.cr6.eq) goto loc_8806579C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8806579c
	if (ctx.cr6.eq) goto loc_8806579C;
	// rlwinm r11,r7,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r10,-48
	ctx.r8.s64 = ctx.r10.s64 + -48;
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
loc_8806579C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x880657bc
	if (!ctx.cr6.eq) goto loc_880657BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x880657bc
	if (ctx.cr6.eq) goto loc_880657BC;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x880657e0
	if (!ctx.cr6.eq) goto loc_880657E0;
loc_880657BC:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x88065714
	if (ctx.cr6.lt) goto loc_88065714;
loc_880657D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880657E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067E20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88067E28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067e8c
	if (ctx.cr6.eq) goto loc_88067E8C;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x88067e6c
	if (ctx.cr0.lt) goto loc_88067E6C;
loc_88067E58:
	// addi r30,r30,-60
	ctx.r30.s64 = ctx.r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805c390
	ctx.lr = 0x88067E64;
	sub_8805C390(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x88067e58
	if (!ctx.cr0.lt) goto loc_88067E58;
loc_88067E6C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067e80
	if (ctx.cr6.eq) goto loc_88067E80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8805c0d0
	ctx.lr = 0x88067E80;
	sub_8805C0D0(ctx, base);
loc_88067E80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88067E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805c390
	ctx.lr = 0x88067E94;
	sub_8805C390(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88067ea8
	if (ctx.cr6.eq) goto loc_88067EA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805c0d0
	ctx.lr = 0x88067EA8;
	sub_8805C0D0(ctx, base);
loc_88067EA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880692A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_880693B8) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069448) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880694D0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x882436e0
	__imp__KeResetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069540) {
	REX_FUNC_PROLOGUE();
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r4,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8806B210) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8806B218;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806b754
	if (!ctx.cr6.eq) goto loc_8806B754;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r27,r11,10
	ctx.r27.u64 = ctx.r11.u64 | 10;
loc_8806B248:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8806b6cc
	if (ctx.cr6.eq) goto loc_8806B6CC;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-30713
	ctx.r7.s64 = -2012807168;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r7,-28056
	ctx.r5.s64 = ctx.r7.s64 + -28056;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_8806B2D8:
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8806B2DC:
	// bctrl 
	ctx.lr = 0x8806B2E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B2F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b3b4
	if (ctx.cr6.eq) goto loc_8806B3B4;
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806b55c
	if (!ctx.cr6.eq) goto loc_8806B55C;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806b3b4
	if (ctx.cr6.eq) goto loc_8806B3B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8806b3a0
	if (ctx.cr6.eq) goto loc_8806B3A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B35C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8806B388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B3A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B3A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8806b2dc
	goto loc_8806B2DC;
loc_8806B3B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a18
	ctx.lr = 0x8806B3E8;
	sub_88067A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b538
	if (ctx.cr6.eq) goto loc_8806B538;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a30
	ctx.lr = 0x8806B3F8;
	sub_88067A30(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B40C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b5b4
	if (ctx.cr6.eq) goto loc_8806B5B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8806B434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r30,244
	ctx.r28.s64 = ctx.r30.s64 + 244;
loc_8806B438:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r28
	ea = ctx.r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r28
	ea = ctx.r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806b438
	if (!ctx.cr0.eq) goto loc_8806B438;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,56(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8806B46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B49C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8806b4d4
	if (ctx.cr6.lt) goto loc_8806B4D4;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067b18
	ctx.lr = 0x8806B4AC;
	sub_88067B18(ctx, base);
loc_8806B4AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8806B4BC:
	// bctrl 
	ctx.lr = 0x8806B4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8806b2dc
	goto loc_8806B2DC;
loc_8806B4D4:
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8806b4ac
	if (!ctx.cr6.eq) goto loc_8806B4AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B4F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B4F4:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r28
	ea = ctx.r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r28
	ea = ctx.r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806b4f4
	if (!ctx.cr0.eq) goto loc_8806B4F4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,172(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 172);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x8806b4bc
	goto loc_8806B4BC;
loc_8806B538:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,172(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// b 0x8806b2d8
	goto loc_8806B2D8;
loc_8806B55C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x8806b5d8
	goto loc_8806B5D8;
loc_8806B5B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8806B5D8:
	// bctrl 
	ctx.lr = 0x8806B5DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8806b650
	if (ctx.cr6.eq) goto loc_8806B650;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8806B650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B650:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b6ac
	if (ctx.cr6.eq) goto loc_8806B6AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B6A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_8806B6AC:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b6cc
	if (ctx.cr6.eq) goto loc_8806B6CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_8806B6CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,256(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B6F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8806b754
	if (!ctx.cr6.eq) goto loc_8806B754;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,220(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,272(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x881ec608
	ctx.lr = 0x8806B734;
	sub_881EC608(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,256(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 256);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r5,r3,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8806b248
	if (ctx.cr6.eq) goto loc_8806B248;
loc_8806B754:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,220(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807C3A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8807C3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// beq cr6,0x8807c3e4
	if (ctx.cr6.eq) goto loc_8807C3E4;
loc_8807C3CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x88050358
	ctx.lr = 0x8807C3D8;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8807c3cc
	if (!ctx.cr6.eq) goto loc_8807C3CC;
loc_8807C3E4:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807c408
	if (ctx.cr6.eq) goto loc_8807C408;
loc_8807C3F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x88050358
	ctx.lr = 0x8807C3FC;
	sub_88050358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8807c3f0
	if (!ctx.cr6.eq) goto loc_8807C3F0;
loc_8807C408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807C820) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8807C828;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8807cc04
	if (ctx.cr6.eq) goto loc_8807CC04;
	// mullw r28,r5,r6
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// rlwinm r26,r28,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x88052d90
	ctx.lr = 0x8807C868;
	sub_88052D90(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x88052d90
	ctx.lr = 0x8807C878;
	sub_88052D90(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8807c8dc
	if (ctx.cr6.eq) goto loc_8807C8DC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
loc_8807C894:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8807c8d0
	if (ctx.cr6.eq) goto loc_8807C8D0;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8807C8B0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bdnz 0x8807c8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807C8B0;
loc_8807C8D0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bne 0x8807c894
	if (!ctx.cr0.eq) goto loc_8807C894;
loc_8807C8DC:
	// add r8,r28,r27
	ctx.r8.u64 = ctx.r28.u64 + ctx.r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8807c910
	if (ctx.cr6.eq) goto loc_8807C910;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8807C8F0:
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,262
	ctx.r10.s64 = ctx.r10.s64 + 262;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bdnz 0x8807c8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807C8F0;
loc_8807C910:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lfs f0,6732(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_8807C944:
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lfd f7,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r8,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f31,120(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lfd f30,128(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfd f29,136(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f4,88(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// cmplwi cr6,r6,100
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 100, ctx.xer);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fadds f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// frsp f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64));
	// frsp f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// blt cr6,0x8807c944
	if (ctx.cr6.lt) goto loc_8807C944;
	// fadds f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// li r11,102
	ctx.r11.s64 = 102;
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// addi r10,r31,420
	ctx.r10.s64 = ctx.r31.s64 + 420;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
loc_8807CA90:
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r3,r11,r6
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// std r8,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lfd f6,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lfd f5,128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r30,r6
	ctx.r30.s64 = ctx.r6.s32;
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f31,88(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// std r30,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// cmplwi cr6,r8,256
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 256, ctx.xer);
	// lfd f4,120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// lfd f2,96(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// lfd f30,80(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// frsp f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64));
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// blt cr6,0x8807ca90
	if (ctx.cr6.lt) goto loc_8807CA90;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f8,136(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f6,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,6708(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// fadds f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stw r9,2072(r31)
	REX_STORE_U32(ctx.r31.u32 + 2072, ctx.r9.u32);
	// fadds f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fdivs f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fadds f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fsubs f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmsubs f10,f1,f0,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f11.f64)));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8807CC04:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085938) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x88085940;
	__savegprlr_17(ctx, base);
	// stwu r1,-2592(r1)
	ea = -2592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,20036(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r11,4997
	ctx.r8.s64 = ctx.r11.s64 + 4997;
	// addi r7,r11,5000
	ctx.r7.s64 = ctx.r11.s64 + 5000;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// lwz r9,28544(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28544);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// addi r10,r1,959
	ctx.r10.s64 = ctx.r1.s64 + 959;
	// lwzx r25,r11,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r27,r1,1567
	ctx.r27.s64 = ctx.r1.s64 + 1567;
	// lwzx r17,r7,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r23,r10,0,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r1,415
	ctx.r10.s64 = ctx.r1.s64 + 415;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// rlwinm r26,r10,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// rlwinm r22,r27,0,0,25
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFC0;
	// bctrl 
	ctx.lr = 0x880859C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8076(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880859E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// lwz r19,2700(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 2700);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r18,2708(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 2708);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r10,8304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,8264(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r27,8208(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085ac4
	if (ctx.cr6.eq) goto loc_88085AC4;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88085a8c
	if (!ctx.cr0.gt) goto loc_88085A8C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_88085A4C:
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085A70;
	sub_8810F120(ctx, base);
	// lhz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085a4c
	if (ctx.cr6.lt) goto loc_88085A4C;
loc_88085A8C:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085ABC;
	sub_8810F240(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085AC4:
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// ble cr6,0x88085dc4
	if (!ctx.cr6.gt) goto loc_88085DC4;
	// lwz r11,8076(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r23,16
	ctx.r3.s64 = ctx.r23.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88085AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r10,8304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,8264(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// lwz r27,8208(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085bc8
	if (ctx.cr6.eq) goto loc_88085BC8;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// ble 0x88085b90
	if (!ctx.cr0.gt) goto loc_88085B90;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_88085B50:
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085B74;
	sub_8810F120(ctx, base);
	// lhz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085b50
	if (ctx.cr6.lt) goto loc_88085B50;
loc_88085B90:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085BC0;
	sub_8810F240(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085BC8:
	// cmpwi cr6,r20,8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 8, ctx.xer);
	// ble cr6,0x88085dc4
	if (!ctx.cr6.gt) goto loc_88085DC4;
	// lwz r11,8076(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r23,256
	ctx.r3.s64 = ctx.r23.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88085BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r10,8304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,8264(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r27,8208(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085ccc
	if (ctx.cr6.eq) goto loc_88085CCC;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// ble 0x88085c94
	if (!ctx.cr0.gt) goto loc_88085C94;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_88085C54:
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085C78;
	sub_8810F120(ctx, base);
	// lhz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085c54
	if (ctx.cr6.lt) goto loc_88085C54;
loc_88085C94:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085CC4;
	sub_8810F240(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085CCC:
	// lwz r11,8076(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r23,272
	ctx.r3.s64 = ctx.r23.s64 + 272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88085CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,8264(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,8208(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// lwz r10,8304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085dc4
	if (ctx.cr6.eq) goto loc_88085DC4;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88085d8c
	if (!ctx.cr0.gt) goto loc_88085D8C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_88085D4C:
	// lhz r10,6(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085D70;
	sub_8810F120(ctx, base);
	// lhz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085d4c
	if (ctx.cr6.lt) goto loc_88085D4C;
loc_88085D8C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085DBC;
	sub_8810F240(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085DC4:
	// lwz r11,2676(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2676);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,2684(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2684);
	// lwz r8,2692(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2692);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r28,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// addi r1,r1,2592
	ctx.r1.s64 = ctx.r1.s64 + 2592;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880A6AD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880A6AD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,2284(r1)
	REX_STORE_U32(ctx.r1.u32 + 2284, ctx.r10.u32);
	// lwz r11,28088(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// addi r10,r1,1791
	ctx.r10.s64 = ctx.r1.s64 + 1791;
	// stw r8,2268(r1)
	REX_STORE_U32(ctx.r1.u32 + 2268, ctx.r8.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r9,2276(r1)
	REX_STORE_U32(ctx.r1.u32 + 2276, ctx.r9.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r4,2236(r1)
	REX_STORE_U32(ctx.r1.u32 + 2236, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,2244(r1)
	REX_STORE_U32(ctx.r1.u32 + 2244, ctx.r5.u32);
	// stw r6,2252(r1)
	REX_STORE_U32(ctx.r1.u32 + 2252, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,2260(r1)
	REX_STORE_U32(ctx.r1.u32 + 2260, ctx.r7.u32);
	// stw r16,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r16.u32);
	// stw r9,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// beq cr6,0x880a6b2c
	if (ctx.cr6.eq) goto loc_880A6B2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880a6b40
	goto loc_880A6B40;
loc_880A6B2C:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,2452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a6b40
	if (!ctx.cr6.eq) goto loc_880A6B40;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880A6B40:
	// lwz r30,2444(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e2660
	ctx.lr = 0x880A6B50;
	sub_880E2660(ctx, base);
	// lwz r10,2300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// lwz r8,2292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,7764(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// stw r3,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// lwz r5,2404(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// stw r7,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// lwz r20,2332(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 2332);
	// lwz r17,2324(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 2324);
	// lwz r7,2428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2428);
	// stw r6,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r6.u32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mulli r11,r4,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(276));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// beq cr6,0x880a6c18
	if (ctx.cr6.eq) goto loc_880A6C18;
	// srawi r11,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x880a6bf0
	if (!ctx.cr6.gt) goto loc_880A6BF0;
	// addi r11,r29,256
	ctx.r11.s64 = ctx.r29.s64 + 256;
loc_880A6BC8:
	// lwz r6,-128(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -128);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a6be0
	if (!ctx.cr6.eq) goto loc_880A6BE0;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x880a6bf0
	if (ctx.cr6.eq) goto loc_880A6BF0;
loc_880A6BE0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880a6bc8
	if (ctx.cr6.lt) goto loc_880A6BC8;
loc_880A6BF0:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880a6c18
	if (!ctx.cr6.eq) goto loc_880A6C18;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,2428(r1)
	REX_STORE_U32(ctx.r1.u32 + 2428, ctx.r7.u32);
	// stwx r10,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r8,r5,r29
	REX_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r8.u32);
loc_880A6C18:
	// lwz r26,2308(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 2308);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lwz r23,2316(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2316);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 2;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x880a6c70
	if (!ctx.cr6.gt) goto loc_880A6C70;
	// addi r10,r29,256
	ctx.r10.s64 = ctx.r29.s64 + 256;
loc_880A6C48:
	// lwz r6,-128(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a6c60
	if (!ctx.cr6.eq) goto loc_880A6C60;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x880a6c70
	if (ctx.cr6.eq) goto loc_880A6C70;
loc_880A6C60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880a6c48
	if (ctx.cr6.lt) goto loc_880A6C48;
loc_880A6C70:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880a6c98
	if (!ctx.cr6.eq) goto loc_880A6C98;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,2428(r1)
	REX_STORE_U32(ctx.r1.u32 + 2428, ctx.r7.u32);
	// stwx r9,r5,r29
	REX_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r8,r4,r29
	REX_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r8.u32);
loc_880A6C98:
	// lwz r11,2412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lwz r22,2364(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 2364);
	// lwz r21,2356(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 2356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a6d24
	if (ctx.cr6.eq) goto loc_880A6D24;
	// srawi r11,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x880a6cfc
	if (!ctx.cr6.gt) goto loc_880A6CFC;
	// addi r11,r29,256
	ctx.r11.s64 = ctx.r29.s64 + 256;
loc_880A6CD4:
	// lwz r6,-128(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -128);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a6cec
	if (!ctx.cr6.eq) goto loc_880A6CEC;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x880a6cfc
	if (ctx.cr6.eq) goto loc_880A6CFC;
loc_880A6CEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880a6cd4
	if (ctx.cr6.lt) goto loc_880A6CD4;
loc_880A6CFC:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880a6d24
	if (!ctx.cr6.eq) goto loc_880A6D24;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,2428(r1)
	REX_STORE_U32(ctx.r1.u32 + 2428, ctx.r7.u32);
	// stwx r9,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r8,r5,r29
	REX_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r8.u32);
loc_880A6D24:
	// lwz r27,2340(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 2340);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lwz r18,2348(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 2348);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r10,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r18.s32 >> 2;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x880a6d7c
	if (!ctx.cr6.gt) goto loc_880A6D7C;
	// addi r10,r29,256
	ctx.r10.s64 = ctx.r29.s64 + 256;
loc_880A6D54:
	// lwz r6,-128(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880a6d6c
	if (!ctx.cr6.eq) goto loc_880A6D6C;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x880a6d7c
	if (ctx.cr6.eq) goto loc_880A6D7C;
loc_880A6D6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880a6d54
	if (ctx.cr6.lt) goto loc_880A6D54;
loc_880A6D7C:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880a6da4
	if (!ctx.cr6.eq) goto loc_880A6DA4;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,2428(r1)
	REX_STORE_U32(ctx.r1.u32 + 2428, ctx.r7.u32);
	// stwx r9,r5,r29
	REX_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r8,r4,r29
	REX_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r8.u32);
loc_880A6DA4:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r14,2436(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// stw r16,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r16.u32);
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// addi r9,r1,1584
	ctx.r9.s64 = ctx.r1.s64 + 1584;
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r28,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r28.u32);
	// addi r6,r1,1168
	ctx.r6.s64 = ctx.r1.s64 + 1168;
	// stw r28,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// stw r9,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// stw r6,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r6.u32);
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
	// stw r5,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stw r4,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// stw r3,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// stw r24,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r24.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880a7a34
	if (!ctx.cr6.gt) goto loc_880A7A34;
	// lwz r23,336(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r18,336(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
loc_880A6E10:
	// lwz r30,272(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,2420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2420);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lwz r29,2284(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 2284);
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,2276(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lwz r17,1380(r31)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r16,2260(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lwzx r11,r7,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r15,r9,r29
	ctx.r15.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r27,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// rlwinm r3,r15,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
	// stw r6,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// stw r11,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r15,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// add r5,r11,r20
	ctx.r5.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r11,r17,r3
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r3.s32);
	// stw r5,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r5.u32);
	// stw r10,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// lwz r20,436(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r4,r20,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r4,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
	// rlwinm r5,r15,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r20.u32);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r5,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// stw r11,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// ble cr6,0x880a6f80
	if (!ctx.cr6.gt) goto loc_880A6F80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880a6f80
	if (ctx.cr6.eq) goto loc_880A6F80;
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_880A6EE8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880a6f70
	if (ctx.cr6.eq) goto loc_880A6F70;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r10,r7,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880a6f30
	if (!ctx.cr6.eq) goto loc_880A6F30;
	// lwzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwz r10,128(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 128);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880a6f1c
	if (!ctx.cr6.eq) goto loc_880A6F1C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_880A6F1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a6f68
	if (!ctx.cr6.eq) goto loc_880A6F68;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x880a6f64
	goto loc_880A6F64;
loc_880A6F30:
	// lwz r30,128(r6)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 128);
	// lwzx r17,r9,r29
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x880a6f68
	if (!ctx.cr6.eq) goto loc_880A6F68;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880a6f54
	if (!ctx.cr6.eq) goto loc_880A6F54;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_880A6F54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880a6f68
	if (!ctx.cr6.eq) goto loc_880A6F68;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
loc_880A6F64:
	// li r8,0
	ctx.r8.s64 = 0;
loc_880A6F68:
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bdnz 0x880a6ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880A6EE8;
loc_880A6F70:
	// stw r27,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
	// stw r21,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r21.u32);
	// stw r22,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// stw r26,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r26.u32);
loc_880A6F80:
	// lwz r11,2372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2372);
	// add r10,r22,r4
	ctx.r10.u64 = ctx.r22.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a6f98
	if (!ctx.cr6.lt) goto loc_880A6F98;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
loc_880A6F98:
	// lwz r11,2380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2380);
	// add r10,r26,r4
	ctx.r10.u64 = ctx.r26.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a6fb0
	if (!ctx.cr6.gt) goto loc_880A6FB0;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r11,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
loc_880A6FB0:
	// lwz r11,2388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2388);
	// add r10,r27,r3
	ctx.r10.u64 = ctx.r27.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a6fc8
	if (!ctx.cr6.lt) goto loc_880A6FC8;
	// subf r27,r3,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r27,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
loc_880A6FC8:
	// lwz r11,2396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2396);
	// add r10,r21,r3
	ctx.r10.u64 = ctx.r21.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a6fe0
	if (!ctx.cr6.gt) goto loc_880A6FE0;
	// subf r21,r3,r11
	ctx.r21.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r21,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r21.u32);
loc_880A6FE0:
	// lwz r11,28052(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a73f0
	if (ctx.cr6.eq) goto loc_880A73F0;
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x880a78f8
	if (ctx.cr6.gt) goto loc_880A78F8;
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r20,364(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r15,432(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
loc_880A7008:
	// lwz r29,288(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880a73d8
	if (ctx.cr6.gt) goto loc_880A73D8;
loc_880A701C:
	// lwz r6,1380(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r10,440(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r27
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// lwz r9,424(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880A704C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,28100(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880a7098
	if (ctx.cr6.eq) goto loc_880A7098;
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880a7098
	if (!ctx.cr6.gt) goto loc_880A7098;
	// lwz r6,1384(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r26,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r26.u64;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880A7094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880A7098:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a70ec
	if (ctx.cr6.eq) goto loc_880A70EC;
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a70ec
	if (!ctx.cr6.gt) goto loc_880A70EC;
	// lwz r6,1384(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r26,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r26.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880A70E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880A70EC:
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lwz r10,2308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2308);
	// add r8,r27,r3
	ctx.r8.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lwz r7,2316(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2316);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a7164
	if (ctx.cr6.gt) goto loc_880A7164;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a7164
	if (ctx.cr6.gt) goto loc_880A7164;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r24
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r6,r10,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r14.u32);
	// lwzx r10,r10,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a716c
	goto loc_880A716C;
loc_880A7164:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A716C:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a71a4
	if (!ctx.cr6.lt) goto loc_880A71A4;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a718c
	if (ctx.cr6.lt) goto loc_880A718C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A718C:
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r30,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// stw r27,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r17,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r17.u32);
loc_880A71A4:
	// add r10,r22,r21
	ctx.r10.u64 = ctx.r22.u64 + ctx.r21.u64;
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r5,2404(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwx r11,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// beq cr6,0x880a7268
	if (ctx.cr6.eq) goto loc_880A7268;
	// lwz r11,2324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2324);
	// lwz r10,2332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2332);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a7220
	if (ctx.cr6.gt) goto loc_880A7220;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a7220
	if (ctx.cr6.gt) goto loc_880A7220;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r5,r10,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r10,r10,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a7228
	goto loc_880A7228;
loc_880A7220:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A7228:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a7260
	if (!ctx.cr6.lt) goto loc_880A7260;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a7248
	if (ctx.cr6.lt) goto loc_880A7248;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A7248:
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r30,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// stw r27,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r16,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r16.u32);
loc_880A7260:
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
loc_880A7268:
	// lwz r11,2340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2340);
	// lwz r10,2348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2348);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a72c8
	if (ctx.cr6.gt) goto loc_880A72C8;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a72c8
	if (ctx.cr6.gt) goto loc_880A72C8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r5,r10,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r10,r10,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a72d0
	goto loc_880A72D0;
loc_880A72C8:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A72D0:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880a7308
	if (!ctx.cr6.lt) goto loc_880A7308;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a72f0
	if (ctx.cr6.lt) goto loc_880A72F0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A72F0:
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r27,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r17,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r17.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
loc_880A7308:
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r6,2412(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// beq cr6,0x880a73c4
	if (ctx.cr6.eq) goto loc_880A73C4;
	// lwz r11,2356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2356);
	// lwz r10,2364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2364);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xor r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a737c
	if (ctx.cr6.gt) goto loc_880A737C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a737c
	if (ctx.cr6.gt) goto loc_880A737C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r14.u32);
	// lwzx r10,r5,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a7384
	goto loc_880A7384;
loc_880A737C:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A7384:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880a73bc
	if (!ctx.cr6.lt) goto loc_880A73BC;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a73a4
	if (ctx.cr6.lt) goto loc_880A73A4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A73A4:
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r27,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r16,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r16.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
loc_880A73BC:
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
loc_880A73C4:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a701c
	if (!ctx.cr6.gt) goto loc_880A701C;
loc_880A73D8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r21,r21,7
	ctx.r21.s64 = ctx.r21.s64 + 7;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a7008
	if (!ctx.cr6.gt) goto loc_880A7008;
	// b 0x880a78f8
	goto loc_880A78F8;
loc_880A73F0:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x880a78f8
	if (ctx.cr6.gt) goto loc_880A78F8;
	// lwz r11,344(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// li r15,0
	ctx.r15.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r5
	ctx.r21.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_880A740C:
	// lwz r29,288(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r17,r26,31
	ctx.r17.u64 = ctx.r26.u32 & 0x1;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r16,0
	ctx.r16.s64 = 0;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880a78e0
	if (ctx.cr6.gt) goto loc_880A78E0;
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r11,r20
	ctx.r22.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_880A7430:
	// lwz r6,1380(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r10,440(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r26
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// lwz r9,424(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880A7460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x880a7514
	if (!ctx.cr6.eq) goto loc_880A7514;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a7514
	if (!ctx.cr6.eq) goto loc_880A7514;
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a74c8
	if (ctx.cr6.eq) goto loc_880A74C8;
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x880a74c8
	if (!ctx.cr6.gt) goto loc_880A74C8;
	// lwz r6,1384(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 1;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,364(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,432(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r27,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r27.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x880A74C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880A74C8:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a75e0
	if (ctx.cr6.eq) goto loc_880A75E0;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a75e0
	if (!ctx.cr6.gt) goto loc_880A75E0;
	// lwz r6,1384(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r10,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 1;
	// lwz r9,364(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r27,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r27.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r30.u64;
	// b 0x880a75d0
	goto loc_880A75D0;
loc_880A7514:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a7578
	if (ctx.cr6.eq) goto loc_880A7578;
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880a7578
	if (!ctx.cr6.gt) goto loc_880A7578;
	// lwz r30,312(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A7554;
	sub_8810B7F8(ctx, base);
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// subf r7,r27,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r27.u64;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A7574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880A7578:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a75e0
	if (ctx.cr6.eq) goto loc_880A75E0;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a75e0
	if (!ctx.cr6.gt) goto loc_880A75E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r6,312(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A75B8;
	sub_8810B7F8(ctx, base);
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// subf r10,r27,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r27.u64;
	// lwz r5,312(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r6,8
	ctx.r6.s64 = 8;
	// subf r7,r30,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880A75D0:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// bctrl 
	ctx.lr = 0x880A75DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880A75E0:
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lwz r10,2308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2308);
	// add r8,r26,r3
	ctx.r8.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lwz r7,2316(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2316);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a7658
	if (ctx.cr6.gt) goto loc_880A7658;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a7658
	if (ctx.cr6.gt) goto loc_880A7658;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r24
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r6,r10,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r14.u32);
	// lwzx r10,r10,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a7660
	goto loc_880A7660;
loc_880A7658:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A7660:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a769c
	if (!ctx.cr6.lt) goto loc_880A769C;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a7680
	if (ctx.cr6.lt) goto loc_880A7680;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A7680:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r26,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r7,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r7.u32);
loc_880A769C:
	// add r10,r15,r16
	ctx.r10.u64 = ctx.r15.u64 + ctx.r16.u64;
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r5,2404(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwx r11,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// beq cr6,0x880a7764
	if (ctx.cr6.eq) goto loc_880A7764;
	// lwz r11,2324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2324);
	// lwz r10,2332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2332);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a7718
	if (ctx.cr6.gt) goto loc_880A7718;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a7718
	if (ctx.cr6.gt) goto loc_880A7718;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r5,r10,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r10,r10,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a7720
	goto loc_880A7720;
loc_880A7718:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A7720:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880a775c
	if (!ctx.cr6.lt) goto loc_880A775C;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a7740
	if (ctx.cr6.lt) goto loc_880A7740;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A7740:
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r26,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r6,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
loc_880A775C:
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
loc_880A7764:
	// lwz r11,2340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2340);
	// lwz r10,2348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2348);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a77c4
	if (ctx.cr6.gt) goto loc_880A77C4;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a77c4
	if (ctx.cr6.gt) goto loc_880A77C4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r5,r10,r24
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r10,r10,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880a77cc
	goto loc_880A77CC;
loc_880A77C4:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A77CC:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880a7808
	if (!ctx.cr6.lt) goto loc_880A7808;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a77ec
	if (ctx.cr6.lt) goto loc_880A77EC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A77EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r6,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r6.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
loc_880A7808:
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r6,2412(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// beq cr6,0x880a78c8
	if (ctx.cr6.eq) goto loc_880A78C8;
	// lwz r11,2356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2356);
	// lwz r10,2364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2364);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xor r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a787c
	if (ctx.cr6.gt) goto loc_880A787C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880a787c
	if (ctx.cr6.gt) goto loc_880A787C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r14.u32);
	// lwzx r11,r5,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r14.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a7884
	goto loc_880A7884;
loc_880A787C:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A7884:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880a78c0
	if (!ctx.cr6.lt) goto loc_880A78C0;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// blt cr6,0x880a78a4
	if (ctx.cr6.lt) goto loc_880A78A4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_880A78A4:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r9,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
loc_880A78C0:
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
loc_880A78C8:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a7430
	if (!ctx.cr6.gt) goto loc_880A7430;
loc_880A78E0:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// addi r15,r15,7
	ctx.r15.s64 = ctx.r15.s64 + 7;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880a740c
	if (!ctx.cr6.gt) goto loc_880A740C;
loc_880A78F8:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a797c
	if (!ctx.cr6.lt) goto loc_880A797C;
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r9,304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,344(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r30,2404(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// stw r10,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// lwz r10,392(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r28.u32);
	// stw r4,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r4.u32);
	// stw r3,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r3.u32);
	// stw r11,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r9,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// stw r8,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// stw r7,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r7.u32);
	// stw r6,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// beq cr6,0x880a7970
	if (ctx.cr6.eq) goto loc_880A7970;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a7970
	if (ctx.cr6.eq) goto loc_880A7970;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r10,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// b 0x880a7978
	goto loc_880A7978;
loc_880A7970:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
loc_880A7978:
	// stw r11,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
loc_880A797C:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880a79f8
	if (!ctx.cr6.lt) goto loc_880A79F8;
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,344(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r8,284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r7,316(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r6,2412(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// lwz r10,384(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r19,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r19.u32);
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// stw r3,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// stw r18,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r18.u32);
	// stw r11,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// stw r23,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r23.u32);
	// stw r9,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r9.u32);
	// stw r8,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r8.u32);
	// stw r7,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// beq cr6,0x880a79ec
	if (ctx.cr6.eq) goto loc_880A79EC;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a79ec
	if (ctx.cr6.eq) goto loc_880A79EC;
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// b 0x880a79f4
	goto loc_880A79F4;
loc_880A79EC:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r10,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
loc_880A79F4:
	// stw r11,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
loc_880A79F8:
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,2428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880a6e10
	if (ctx.cr6.lt) goto loc_880A6E10;
	// lwz r27,2340(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 2340);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r21,2356(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 2356);
	// lwz r18,2348(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 2348);
	// lwz r22,2364(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 2364);
	// lwz r26,2308(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 2308);
	// lwz r23,2316(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2316);
	// lwz r17,2324(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 2324);
	// lwz r20,2332(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 2332);
loc_880A7A34:
	// lwz r11,2404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a7af0
	if (ctx.cr6.eq) goto loc_880A7AF0;
	// lwz r11,416(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,328(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,412(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,2608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,2604(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,2616(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,2612(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// stw r30,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// subf r11,r20,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r20.u64;
	// stw r29,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// subf r10,r17,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r17.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & ctx.r28.u64;
	// and r10,r5,r25
	ctx.r10.u64 = ctx.r5.u64 & ctx.r25.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// subf r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A7AB0;
	sub_88085E60(ctx, base);
	// subf r10,r23,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r23.u64;
	// subf r11,r26,r19
	ctx.r11.u64 = ctx.r19.u64 - ctx.r26.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// and r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 & ctx.r28.u64;
	// and r4,r8,r25
	ctx.r4.u64 = ctx.r8.u64 & ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r24,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r4,r19,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A7AE4;
	sub_88085E60(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880a7bd8
	if (!ctx.cr6.lt) goto loc_880A7BD8;
	// stw r16,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r16.u32);
loc_880A7AF0:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_880A7AF4:
	// lwz r11,2412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a7bb4
	if (ctx.cr6.eq) goto loc_880A7BB4;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,408(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,400(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,2608(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,2604(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,2616(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,2612(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// stw r30,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// subf r11,r22,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r22.u64;
	// stw r29,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// subf r10,r21,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r21.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// and r11,r8,r26
	ctx.r11.u64 = ctx.r8.u64 & ctx.r26.u64;
	// and r10,r5,r25
	ctx.r10.u64 = ctx.r5.u64 & ctx.r25.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// subf r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A7B70;
	sub_88085E60(ctx, base);
	// subf r10,r18,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r18.u64;
	// subf r11,r27,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r27.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// and r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 & ctx.r26.u64;
	// and r4,r8,r25
	ctx.r4.u64 = ctx.r8.u64 & ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r24,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A7BA4;
	sub_88085E60(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880a7bec
	if (!ctx.cr6.lt) goto loc_880A7BEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
loc_880A7BB4:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_880A7BB8:
	// lwz r11,28088(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28088);
	// stw r24,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r24.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r18,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r18.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a7c00
	if (ctx.cr6.eq) goto loc_880A7C00;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880a7c14
	goto loc_880A7C14;
loc_880A7BD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r11,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x880a7af4
	goto loc_880A7AF4;
loc_880A7BEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// stw r11,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// b 0x880a7bb8
	goto loc_880A7BB8;
loc_880A7C00:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,2452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a7c14
	if (!ctx.cr6.eq) goto loc_880A7C14;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880A7C14:
	// lwz r30,2444(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e2660
	ctx.lr = 0x880A7C24;
	sub_880E2660(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r26,348(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r10,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r27,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// stw r30,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880a7d30
	if (!ctx.cr6.eq) goto loc_880A7D30;
	// li r22,16
	ctx.r22.s64 = 16;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// srawi r25,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r28.s32 >> 2;
	// lwz r9,2488(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r21,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r23.s32 >> 2;
	// lwz r29,312(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// mullw r11,r4,r21
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r21.s32);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// clrlwi r8,r23,30
	ctx.r8.u64 = ctx.r23.u32 & 0x3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// bctrl 
	ctx.lr = 0x880A7CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bctrl 
	ctx.lr = 0x880A7CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a7d14
	if (ctx.cr6.gt) goto loc_880A7D14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,364(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r17,340(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r14
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r14.u32);
	// lwzx r10,r5,r14
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r14.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// b 0x880a8e18
	goto loc_880A8E18;
loc_880A7D14:
	// lwz r11,20(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// lwz r16,364(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,340(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// b 0x880a8e18
	goto loc_880A8E18;
loc_880A7D30:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,412(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r10,328(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,416(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r6,2396(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2396);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,2372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2372);
	// mullw r11,r30,r4
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// lwz r25,28036(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// lwz r7,2388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2388);
	// lwz r16,1384(r31)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r19,2608(r31)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r15,2380(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 2380);
	// stw r25,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// lwz r20,2604(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r14,2612(r31)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// lwz r22,2268(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// lwz r24,416(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r21,2276(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// subf r11,r29,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r18,r30,r6
	ctx.r18.u64 = ctx.r6.u64 - ctx.r30.u64;
	// lwz r6,2616(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// stw r11,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r30.u64;
	// srawi r3,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 1;
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// addic r7,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// stw r6,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r6.u32);
	// mullw r11,r3,r16
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r16.s32);
	// subfe r17,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r17.u64 = ~ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r5,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r5.s64 = ctx.r18.s64 + -1;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r16,r5,r18
	temp.u8 = (~ctx.r5.u32 + ctx.r18.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r18.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r16.u64 = ~ctx.r5.u64 + ctx.r18.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r8,r23,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r23.u64;
	// stw r6,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// subf r18,r29,r15
	ctx.r18.u64 = ctx.r15.u64 - ctx.r29.u64;
	// lwz r3,424(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// rlwinm r25,r29,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r28,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r28.u64;
	// stw r18,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r18.u32);
	// addic r5,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// stw r25,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r25.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subfe r15,r5,r3
	temp.u8 = (~ctx.r5.u32 + ctx.r3.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r15.u64 = ~ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,440(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// and r5,r7,r14
	ctx.r5.u64 = ctx.r7.u64 & ctx.r14.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r19,r19,r3
	ctx.r19.u64 = ctx.r3.u64 - ctx.r19.u64;
	// lwz r3,272(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addic r14,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r14.s64 = ctx.r18.s64 + -1;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r6,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r6.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subf r20,r20,r5
	ctx.r20.u64 = ctx.r5.u64 - ctx.r20.u64;
	// lwz r5,424(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
	// add r18,r10,r9
	ctx.r18.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfe r14,r14,r5
	temp.u8 = (~ctx.r14.u32 + ctx.r5.u32 < ~ctx.r14.u32) | (~ctx.r14.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r14.u64 = ~ctx.r14.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880a87ac
	if (ctx.cr6.eq) goto loc_880A87AC;
	// lwz r11,2496(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r24,312(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// li r27,0
	ctx.r27.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bctrl 
	ctx.lr = 0x880A7E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,2292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// lwz r11,2300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// addi r7,r1,292
	ctx.r7.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r10,404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r22,r1,304
	ctx.r22.s64 = ctx.r1.s64 + 304;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,2236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A7EC4;
	sub_88085938(ctx, base);
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a7f90
	if (ctx.cr6.eq) goto loc_880A7F90;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// rotlwi r26,r24,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A7F04;
	sub_8810B7F8(ctx, base);
	// lwz r7,2292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// lwz r5,2300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// lwz r27,404(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,2244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A7F54;
	sub_88085938(ctx, base);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r6,108(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 108);
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r7,304(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r27,288(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r22,r11,r7
	ctx.r22.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r24,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r21,r27,r8
	ctx.r21.u64 = ctx.r27.u64 | ctx.r8.u64;
	// stw r21,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// b 0x880a7f9c
	goto loc_880A7F9C;
loc_880A7F90:
	// lwz r21,292(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r24,300(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r22,304(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
loc_880A7F9C:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a805c
	if (ctx.cr6.eq) goto loc_880A805C;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r7,8
	ctx.r7.s64 = 8;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r6,312(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// bl 0x8810b7f8
	ctx.lr = 0x880A7FD8;
	sub_8810B7F8(ctx, base);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// lwz r7,2292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,2300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,312(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,2252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x88085938
	ctx.lr = 0x880A8024;
	sub_88085938(ctx, base);
	// lwz r4,404(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lwz r3,108(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// or r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 | ctx.r21.u64;
	// stw r24,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// or r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 | ctx.r27.u64;
	// mullw r8,r3,r11
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stw r21,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_880A805C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A8074;
	sub_88085E60(ctx, base);
	// lwz r10,2404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + ctx.r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// beq cr6,0x880a8090
	if (ctx.cr6.eq) goto loc_880A8090;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
loc_880A8090:
	// lwz r10,2404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// addi r9,r1,388
	ctx.r9.s64 = ctx.r1.s64 + 388;
	// addi r8,r1,364
	ctx.r8.s64 = ctx.r1.s64 + 364;
	// stw r19,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r7,r1,340
	ctx.r7.s64 = ctx.r1.s64 + 340;
	// stw r9,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// stw r8,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// rlwinm r6,r30,1,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x2;
	// stw r7,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// rlwinm r30,r29,1,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x2;
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r27,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// stw r26,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// lwz r21,404(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r7,380(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,444(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r29,108(r21)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// subf r9,r7,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lwz r5,2300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r4,2292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// lwz r22,312(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r29,392(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r16,324(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r17,328(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r14,2252(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// lwz r15,2244(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// lwz r19,2236(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// stw r6,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r4,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// stw r21,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// subf r24,r7,r16
	ctx.r24.u64 = ctx.r16.u64 - ctx.r7.u64;
	// stw r20,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// subf r10,r8,r17
	ctx.r10.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r8,432(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r22,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r11,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r26,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8808f850
	ctx.lr = 0x880A8184;
	sub_8808F850(ctx, base);
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880a81a8
	if (!ctx.cr6.eq) goto loc_880A81A8;
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x880a847c
	if (ctx.cr6.eq) goto loc_880A847C;
loc_880A81A8:
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// stw r23,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r23.u32);
	// srawi r10,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 2;
	// stw r28,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r25,2300(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,2292(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// clrlwi r20,r28,30
	ctx.r20.u64 = ctx.r28.u32 & 0x3;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// clrlwi r23,r23,30
	ctx.r23.u64 = ctx.r23.u32 & 0x3;
	// bl 0x8810aa38
	ctx.lr = 0x880A81E8;
	sub_8810AA38(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r30,1380(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r29,2488(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A823C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r1,300
	ctx.r8.s64 = ctx.r1.s64 + 300;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A8280;
	sub_88085938(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,436
	ctx.r7.s64 = ctx.r1.s64 + 436;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stw r10,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A82AC;
	sub_88095050(ctx, base);
	// lwz r9,28100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r27,496(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// lwz r26,436(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// beq cr6,0x880a835c
	if (ctx.cr6.eq) goto loc_880A835C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A82E8;
	sub_8810B7F8(ctx, base);
	// addi r10,r1,284
	ctx.r10.s64 = ctx.r1.s64 + 284;
	// addi r7,r1,308
	ctx.r7.s64 = ctx.r1.s64 + 308;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A832C;
	sub_88085938(ctx, base);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r28,r11,r6
	ctx.r28.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// or r29,r3,r5
	ctx.r29.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r28,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r28.u32);
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// b 0x880a8368
	goto loc_880A8368;
loc_880A835C:
	// lwz r29,292(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r28,300(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r30,304(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
loc_880A8368:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a8400
	if (ctx.cr6.eq) goto loc_880A8400;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A839C;
	sub_8810B7F8(ctx, base);
	// addi r8,r1,284
	ctx.r8.s64 = ctx.r1.s64 + 284;
	// addi r7,r1,308
	ctx.r7.s64 = ctx.r1.s64 + 308;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A83E0;
	sub_88085938(ctx, base);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// or r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 | ctx.r29.u64;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r28,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r28.u32);
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
loc_880A8400:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A8418;
	sub_88085E60(ctx, base);
	// lwz r10,2404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// beq cr6,0x880a8434
	if (ctx.cr6.eq) goto loc_880A8434;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
loc_880A8434:
	// lwz r10,108(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r18,388(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880a8488
	if (!ctx.cr6.lt) goto loc_880A8488;
	// lwz r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// stw r20,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// stw r23,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r23.u32);
	// stw r16,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r16.u32);
	// stw r10,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// stw r9,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// stw r17,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r17.u32);
	// b 0x880a8488
	goto loc_880A8488;
loc_880A847C:
	// lwz r18,388(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r25,2300(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r24,2292(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
loc_880A8488:
	// lwz r11,2404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a8788
	if (ctx.cr6.eq) goto loc_880A8788;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a84ac
	if (!ctx.cr6.eq) goto loc_880A84AC;
	// lwz r11,2324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2324);
	// lwz r10,2332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2332);
	// b 0x880a84b4
	goto loc_880A84B4;
loc_880A84AC:
	// lwz r11,2308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2308);
	// lwz r10,2316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2316);
loc_880A84B4:
	// lwz r9,416(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r7,r17,r9
	ctx.r7.u64 = ctx.r17.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a84ec
	if (!ctx.cr6.eq) goto loc_880A84EC;
	// lwz r9,412(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r8,364(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r7,r16,r9
	ctx.r7.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880a8788
	if (ctx.cr6.eq) goto loc_880A8788;
loc_880A84EC:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r23,r11,30
	ctx.r23.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r20,r10,30
	ctx.r20.u64 = ctx.r10.u32 & 0x3;
	// bl 0x8810aa38
	ctx.lr = 0x880A8524;
	sub_8810AA38(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// lwz r30,1380(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r29,2488(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A8578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,300
	ctx.r9.s64 = ctx.r1.s64 + 300;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r10,r1,292
	ctx.r10.s64 = ctx.r1.s64 + 292;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A85BC;
	sub_88085938(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,372
	ctx.r7.s64 = ctx.r1.s64 + 372;
	// addi r6,r1,380
	ctx.r6.s64 = ctx.r1.s64 + 380;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r10,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A85E8;
	sub_88095050(ctx, base);
	// lwz r9,28100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r27,372(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r26,380(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// beq cr6,0x880a8690
	if (ctx.cr6.eq) goto loc_880A8690;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A8624;
	sub_8810B7F8(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,308
	ctx.r9.s64 = ctx.r1.s64 + 308;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r10,r1,284
	ctx.r10.s64 = ctx.r1.s64 + 284;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A8668;
	sub_88085938(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r8,304(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r7,300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,288(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// or r28,r5,r6
	ctx.r28.u64 = ctx.r5.u64 | ctx.r6.u64;
	// b 0x880a869c
	goto loc_880A869C;
loc_880A8690:
	// lwz r28,292(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,300(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r30,304(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
loc_880A869C:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a872c
	if (ctx.cr6.eq) goto loc_880A872C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A86D0;
	sub_8810B7F8(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r8,r1,308
	ctx.r8.s64 = ctx.r1.s64 + 308;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A8714;
	sub_88085938(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
loc_880A872C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A8744;
	sub_88085E60(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,108(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880a8788
	if (!ctx.cr6.lt) goto loc_880A8788;
	// lwz r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r23,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// stw r20,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r20.u32);
	// stw r11,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// stw r10,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// stw r9,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// stw r11,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
loc_880A8788:
	// lwz r25,416(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// li r22,16
	ctx.r22.s64 = 16;
	// lwz r21,412(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r19,328(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r20,324(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r16,364(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r17,340(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r18,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r18.u32);
	// b 0x880a8e10
	goto loc_880A8E10;
loc_880A87AC:
	// lwz r11,376(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a88cc
	if (ctx.cr6.eq) goto loc_880A88CC;
	// lwz r11,2404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a88cc
	if (!ctx.cr6.eq) goto loc_880A88CC;
	// lwz r26,1380(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lwz r6,2436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// stw r27,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,2444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r29.u32);
	// bl 0x88085820
	ctx.lr = 0x880A8800;
	sub_88085820(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// bctrl 
	ctx.lr = 0x880A8820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r6,280(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// lwz r30,312(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A8858;
	sub_8810B7F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A8870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r9,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A88A0;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880A88B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r26.u32);
	// b 0x880a88d0
	goto loc_880A88D0;
loc_880A88CC:
	// lwz r11,448(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
loc_880A88D0:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r9,404(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r8,2444(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// addi r7,r1,348
	ctx.r7.s64 = ctx.r1.s64 + 348;
	// lwz r6,412(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// lwz r4,2436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// addi r30,r1,280
	ctx.r30.s64 = ctx.r1.s64 + 280;
	// lwz r29,328(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,312(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r22,380(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// stw r9,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// stw r8,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// stw r7,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// stw r5,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// stw r30,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r4,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r24,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// stw r23,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// stw r28,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r15,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// lwz r9,28468(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28468);
	// lwz r30,392(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r29,452(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r27,444(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r25,324(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r21,372(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r18,2236(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// lwz r9,2276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r8,2268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// lwz r7,2260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// lwz r6,2252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// lwz r5,2244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r26,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// stw r29,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// stw r17,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// bctrl 
	ctx.lr = 0x880A8998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// clrlwi r30,r28,30
	ctx.r30.u64 = ctx.r28.u32 & 0x3;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r22,16
	ctx.r22.s64 = 16;
	// srawi r25,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 2;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// clrlwi r27,r23,30
	ctx.r27.u64 = ctx.r23.u32 & 0x3;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// srawi r21,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r10.s32 >> 2;
	// clrlwi r17,r11,30
	ctx.r17.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r16,r10,30
	ctx.r16.u64 = ctx.r10.u32 & 0x3;
	// bne cr6,0x880a89d4
	if (!ctx.cr6.eq) goto loc_880A89D4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x880a8bf0
	if (ctx.cr6.eq) goto loc_880A8BF0;
loc_880A89D4:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880a89f4
	if (!ctx.cr6.eq) goto loc_880A89F4;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x880a8bf0
	if (ctx.cr6.eq) goto loc_880A8BF0;
loc_880A89F4:
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// stw r28,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// srawi r10,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 2;
	// stw r23,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r23.u32);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,2300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r6,2292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// bl 0x8810aa38
	ctx.lr = 0x880A8A24;
	sub_8810AA38(ctx, base);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r29,1380(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r28,2488(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A8A74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A8A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,372
	ctx.r7.s64 = ctx.r1.s64 + 372;
	// addi r6,r1,380
	ctx.r6.s64 = ctx.r1.s64 + 380;
	// stw r9,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A8AC4;
	sub_88095050(ctx, base);
	// lwz r3,28100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,372(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r26,380(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// beq cr6,0x880a8b24
	if (ctx.cr6.eq) goto loc_880A8B24;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A8B00;
	sub_8810B7F8(ctx, base);
	// lwz r23,352(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880A8B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// b 0x880a8b28
	goto loc_880A8B28;
loc_880A8B24:
	// lwz r23,352(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
loc_880A8B28:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a8b78
	if (ctx.cr6.eq) goto loc_880A8B78;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A8B5C;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880A8B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880A8B78:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a8bb4
	if (ctx.cr6.gt) goto loc_880A8BB4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a8bc0
	goto loc_880A8BC0;
loc_880A8BB4:
	// lwz r11,2436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A8BC0:
	// lwz r10,348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a8bf4
	if (!ctx.cr6.lt) goto loc_880A8BF4;
	// lwz r25,280(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// lwz r21,276(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// stw r11,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x880a8bf4
	goto loc_880A8BF4;
loc_880A8BF0:
	// lwz r23,352(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
loc_880A8BF4:
	// lwz r11,2404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a8e10
	if (ctx.cr6.eq) goto loc_880A8E10;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a8c18
	if (!ctx.cr6.eq) goto loc_880A8C18;
	// lwz r11,2324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2324);
	// lwz r10,2332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2332);
	// b 0x880a8c20
	goto loc_880A8C20;
loc_880A8C18:
	// lwz r11,2308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2308);
	// lwz r10,2316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2316);
loc_880A8C20:
	// clrlwi r27,r11,30
	ctx.r27.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r26,r10,30
	ctx.r26.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880a8c38
	if (!ctx.cr6.eq) goto loc_880A8C38;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880a8e10
	if (ctx.cr6.eq) goto loc_880A8E10;
loc_880A8C38:
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a8c58
	if (!ctx.cr6.eq) goto loc_880A8C58;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880a8e10
	if (ctx.cr6.eq) goto loc_880A8E10;
loc_880A8C58:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,2300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r6,2292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// bl 0x8810aa38
	ctx.lr = 0x880A8C88;
	sub_8810AA38(ctx, base);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r30,1380(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r29,2488(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A8CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A8CF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,372
	ctx.r7.s64 = ctx.r1.s64 + 372;
	// addi r6,r1,380
	ctx.r6.s64 = ctx.r1.s64 + 380;
	// stw r9,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A8D28;
	sub_88095050(ctx, base);
	// lwz r3,28100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,372(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,380(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// beq cr6,0x880a8d80
	if (ctx.cr6.eq) goto loc_880A8D80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A8D64;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880A8D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880A8D80:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a8dd0
	if (ctx.cr6.eq) goto loc_880A8DD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A8DB4;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880A8DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880A8DD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,2436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880A8DE4;
	sub_88085820(ctx, base);
	// lwz r10,348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880a8e10
	if (!ctx.cr6.lt) goto loc_880A8E10;
	// lwz r25,280(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// lwz r21,276(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r11,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// li r19,0
	ctx.r19.s64 = 0;
loc_880A8E10:
	// lwz r24,344(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r18,316(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880A8E18:
	// add r11,r19,r25
	ctx.r11.u64 = ctx.r19.u64 + ctx.r25.u64;
	// lwz r9,2460(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2460);
	// add r8,r20,r21
	ctx.r8.u64 = ctx.r20.u64 + ctx.r21.u64;
	// lwz r7,2468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2468);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,2476(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2476);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,348(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lis r4,4095
	ctx.r4.s64 = 268369920;
	// lwz r30,356(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// ori r10,r4,65535
	ctx.r10.u64 = ctx.r4.u64 | 65535;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// lwz r4,1380(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// bne cr6,0x880a8f3c
	if (!ctx.cr6.eq) goto loc_880A8F3C;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// srawi r23,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r24.s32 >> 2;
	// srawi r21,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r18.s32 >> 2;
	// lwz r8,2488(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// clrlwi r7,r24,30
	ctx.r7.u64 = ctx.r24.u32 & 0x3;
	// mullw r11,r21,r4
	ctx.r11.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// lwz r31,312(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r7,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r7.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// clrlwi r8,r18,30
	ctx.r8.u64 = ctx.r18.u32 & 0x3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r8.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// bctrl 
	ctx.lr = 0x880A8EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A8ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a8f20
	if (ctx.cr6.gt) goto loc_880A8F20;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r19,324(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r20,328(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880aa050
	goto loc_880AA050;
loc_880A8F20:
	// lwz r11,2436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// lwz r19,324(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r20,328(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880aa050
	goto loc_880AA050;
loc_880A8F3C:
	// lwz r11,400(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,408(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,2388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2388);
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,2396(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2396);
	// subf r5,r29,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r29.u64;
	// lwz r3,2372(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2372);
	// srawi r27,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 1;
	// lwz r25,28036(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// srawi r7,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 1;
	// lwz r26,1384(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,2608(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// subf r6,r29,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r29.u64;
	// lwz r20,396(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subfe r15,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r15.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,2612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// stw r25,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r25.u32);
	// subf r19,r28,r3
	ctx.r19.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r3,2616(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subfe r14,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r14.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,2604(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// rlwinm r25,r28,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,2380(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 2380);
	// stw r11,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// mullw r11,r29,r4
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// lwz r17,2268(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// stw r3,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r3.u32);
	// lwz r16,2276(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// lwz r23,2260(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// stw r25,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r25.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addic r11,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// mullw r11,r27,r26
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// stw r3,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// subf r6,r18,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r18.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r5,r24,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r24.u64;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r6,r8,r20
	ctx.r6.u64 = ctx.r8.u64 + ctx.r20.u64;
	// lwz r20,380(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r21,r28,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r28.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// and r5,r5,r20
	ctx.r5.u64 = ctx.r5.u64 & ctx.r20.u64;
	// lwz r20,444(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r27,372(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// and r20,r7,r20
	ctx.r20.u64 = ctx.r7.u64 & ctx.r20.u64;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// subfe r27,r27,r19
	temp.u8 = (~ctx.r27.u32 + ctx.r19.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r19.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r27.u64 + ctx.r19.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
	// addic r26,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r26.s64 = ctx.r21.s64 + -1;
	// lwz r11,452(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// stw r27,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r27.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// subfe r26,r26,r21
	temp.u8 = (~ctx.r26.u32 + ctx.r21.u32 < ~ctx.r26.u32) | (~ctx.r26.u32 + ctx.r21.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r26.u64 + ctx.r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r3,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r3.u32);
	// add r19,r6,r23
	ctx.r19.u64 = ctx.r6.u64 + ctx.r23.u64;
	// subf r21,r9,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r9.u64;
	// stw r26,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// subf r20,r10,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a99c8
	if (ctx.cr6.eq) goto loc_880A99C8;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r24,2300(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r5,2496(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// lwz r23,2292(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// lwz r22,312(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r30,7764(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mulli r11,r3,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(276));
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880A90A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r9,r1,300
	ctx.r9.s64 = ctx.r1.s64 + 300;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,2236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A90EC;
	sub_88085938(ctx, base);
	// lwz r8,28100(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880a91b4
	if (ctx.cr6.eq) goto loc_880A91B4;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// rotlwi r27,r22,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r7,8
	ctx.r7.s64 = 8;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rotlwi r4,r17,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A912C;
	sub_8810B7F8(ctx, base);
	// addi r7,r1,308
	ctx.r7.s64 = ctx.r1.s64 + 308;
	// addi r6,r1,284
	ctx.r6.s64 = ctx.r1.s64 + 284;
	// lwz r4,2244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rotlwi r11,r23,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r23.u32, 0);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// rotlwi r5,r24,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A9178;
	sub_88085938(ctx, base);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r8,304(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,108(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r24,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// lwz r27,308(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r23,r11,r7
	ctx.r23.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r22,r27,r8
	ctx.r22.u64 = ctx.r27.u64 | ctx.r8.u64;
	// stw r22,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// b 0x880a91c0
	goto loc_880A91C0;
loc_880A91B4:
	// lwz r22,304(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r24,300(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r23,292(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_880A91C0:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// lwz r18,312(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a9284
	if (ctx.cr6.eq) goto loc_880A9284;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r7,8
	ctx.r7.s64 = 8;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9200;
	sub_8810B7F8(ctx, base);
	// lwz r17,2300(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// lwz r16,2292(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,2252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A924C;
	sub_88085938(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mullw r8,r4,r11
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// or r22,r9,r22
	ctx.r22.u64 = ctx.r9.u64 | ctx.r22.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r24,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r24.u32);
	// or r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stw r22,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// b 0x880a928c
	goto loc_880A928C;
loc_880A9284:
	// lwz r16,2292(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// lwz r17,2300(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
loc_880A928C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A92A4;
	sub_88085E60(ctx, base);
	// lwz r22,2412(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// add r9,r3,r23
	ctx.r9.u64 = ctx.r3.u64 + ctx.r23.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// beq cr6,0x880a92c0
	if (ctx.cr6.eq) goto loc_880A92C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
loc_880A92C0:
	// lwz r8,336(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,296
	ctx.r10.s64 = ctx.r1.s64 + 296;
	// lwz r7,504(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// rlwinm r4,r28,1,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x2;
	// stw r10,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// rlwinm r29,r29,1,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x2;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r7,500(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r10,368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// addi r6,r1,324
	ctx.r6.s64 = ctx.r1.s64 + 324;
	// lwz r5,108(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r15,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// lwz r15,400(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// stw r29,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r26,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// lwz r26,384(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// stw r20,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r20.u32);
	// stw r21,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r27,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// stw r6,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// stw r4,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r22,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r24,372(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// subf r9,r7,r15
	ctx.r9.u64 = ctx.r15.u64 - ctx.r7.u64;
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r27,r1,328
	ctx.r27.s64 = ctx.r1.s64 + 328;
	// stw r9,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r17,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// stw r16,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r24,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// lwz r23,448(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r20,408(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r14,2244(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// lwz r21,2236(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// subf r10,r8,r20
	ctx.r10.u64 = ctx.r20.u64 - ctx.r8.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r8,432(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r6,2252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r11,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lwz r29,336(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// stw r29,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// lwz r29,368(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8808f850
	ctx.lr = 0x880A93B4;
	sub_8808F850(ctx, base);
	// lwz r9,328(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r11,344(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// add r8,r25,r9
	ctx.r8.u64 = ctx.r25.u64 + ctx.r9.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a93e0
	if (!ctx.cr6.eq) goto loc_880A93E0;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880a96a8
	if (ctx.cr6.eq) goto loc_880A96A8;
loc_880A93E0:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// stw r10,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r23,r10,30
	ctx.r23.u64 = ctx.r10.u32 & 0x3;
	// bl 0x8810aa38
	ctx.lr = 0x880A9418;
	sub_8810AA38(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// lwz r29,1380(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r28,2488(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A946C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r1,300
	ctx.r8.s64 = ctx.r1.s64 + 300;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A94B0;
	sub_88085938(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r10,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A94DC;
	sub_88095050(ctx, base);
	// lwz r9,28100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r26,336(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r25,368(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// beq cr6,0x880a958c
	if (ctx.cr6.eq) goto loc_880A958C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9518;
	sub_8810B7F8(ctx, base);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A955C;
	sub_88085938(ctx, base);
	// lwz r7,300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,304(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// or r28,r4,r6
	ctx.r28.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r27,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// b 0x880a9598
	goto loc_880A9598;
loc_880A958C:
	// lwz r28,304(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r27,300(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r29,292(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_880A9598:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a9630
	if (ctx.cr6.eq) goto loc_880A9630;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A95CC;
	sub_8810B7F8(ctx, base);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r4,2252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A9610;
	sub_88085938(ctx, base);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r27,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// stw r28,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
loc_880A9630:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A9648;
	sub_88085E60(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// beq cr6,0x880a9660
	if (ctx.cr6.eq) goto loc_880A9660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
loc_880A9660:
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r19,296(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880a96ac
	if (!ctx.cr6.lt) goto loc_880A96AC;
	// lwz r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r24,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r24.u32);
	// stw r23,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// stw r15,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r15.u32);
	// stw r10,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// stw r9,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r9.u32);
	// stw r20,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r20.u32);
	// b 0x880a96ac
	goto loc_880A96AC;
loc_880A96A8:
	// lwz r19,296(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
loc_880A96AC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x880a99a8
	if (ctx.cr6.eq) goto loc_880A99A8;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a96cc
	if (!ctx.cr6.eq) goto loc_880A96CC;
	// lwz r11,2356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2356);
	// lwz r10,2364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2364);
	// b 0x880a96d4
	goto loc_880A96D4;
loc_880A96CC:
	// lwz r11,2340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2340);
	// lwz r10,2348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2348);
loc_880A96D4:
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r8,328(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r7,r20,r9
	ctx.r7.u64 = ctx.r20.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a970c
	if (!ctx.cr6.eq) goto loc_880A970C;
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// add r7,r15,r9
	ctx.r7.u64 = ctx.r15.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880a99a8
	if (ctx.cr6.eq) goto loc_880A99A8;
loc_880A970C:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// stw r10,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r23,r10,30
	ctx.r23.u64 = ctx.r10.u32 & 0x3;
	// bl 0x8810aa38
	ctx.lr = 0x880A9744;
	sub_8810AA38(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// lwz r29,1380(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r28,2488(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A9798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A97DC;
	sub_88085938(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r10,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A9808;
	sub_88095050(ctx, base);
	// lwz r9,28100(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r26,336(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r25,368(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// beq cr6,0x880a98b0
	if (ctx.cr6.eq) goto loc_880A98B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9844;
	sub_8810B7F8(ctx, base);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A9888;
	sub_88085938(ctx, base);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r4,304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// add r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 | ctx.r4.u64;
	// b 0x880a98bc
	goto loc_880A98BC;
loc_880A98B0:
	// lwz r27,304(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r28,300(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r29,292(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_880A98BC:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a994c
	if (ctx.cr6.eq) goto loc_880A994C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A98F0;
	sub_8810B7F8(ctx, base);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r4,2252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880A9934;
	sub_88085938(ctx, base);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// or r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 | ctx.r27.u64;
loc_880A994C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880A9964;
	sub_88085E60(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x880a99a8
	if (!ctx.cr6.lt) goto loc_880A99A8;
	// lwz r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r24.u32);
	// stw r23,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r23.u32);
	// stw r11,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// stw r10,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// stw r9,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r9.u32);
	// stw r11,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
loc_880A99A8:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lwz r23,396(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r21,420(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r16,408(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r17,400(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r19,324(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r20,328(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x880aa050
	goto loc_880AA050;
loc_880A99C8:
	// lwz r11,376(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880a9aec
	if (ctx.cr6.eq) goto loc_880A9AEC;
	// lwz r11,2412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a9aec
	if (!ctx.cr6.eq) goto loc_880A9AEC;
	// lwz r9,2444(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r25,1380(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,2436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// lwz r28,12(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r28,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r28.u32);
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x88085820
	ctx.lr = 0x880A9A20;
	sub_88085820(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// bctrl 
	ctx.lr = 0x880A9A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r6,280(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// lwz r30,312(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9A78;
	sub_8810B7F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880A9A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r9,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9AC0;
	sub_8810B7F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880A9AD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// stw r30,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
loc_880A9AEC:
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// lwz r9,2444(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2444);
	// addi r8,r1,276
	ctx.r8.s64 = ctx.r1.s64 + 276;
	// lwz r7,2436(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// addi r6,r1,280
	ctx.r6.s64 = ctx.r1.s64 + 280;
	// lwz r5,508(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,504(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r29,500(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r28,384(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r23,368(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r25,312(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r21,408(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r20,336(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r10,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r8,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r29,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r28,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r25,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r15,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// lwz r11,28468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28468);
	// lwz r28,400(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r23,420(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r29,2236(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// lwz r10,396(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,2276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// lwz r8,2268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r7,2260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// lwz r6,2252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// lwz r5,2244(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// stw r18,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r18.u32);
	// stw r24,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// bctrl 
	ctx.lr = 0x880A9BB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// clrlwi r30,r24,30
	ctx.r30.u64 = ctx.r24.u32 & 0x3;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// clrlwi r28,r18,30
	ctx.r28.u64 = ctx.r18.u32 & 0x3;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// srawi r21,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r10.s32 >> 2;
	// clrlwi r20,r11,30
	ctx.r20.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r19,r10,30
	ctx.r19.u64 = ctx.r10.u32 & 0x3;
	// bne cr6,0x880a9bf0
	if (!ctx.cr6.eq) goto loc_880A9BF0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880a9e0c
	if (ctx.cr6.eq) goto loc_880A9E0C;
loc_880A9BF0:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x880a9c10
	if (!ctx.cr6.eq) goto loc_880A9C10;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x880a9e0c
	if (ctx.cr6.eq) goto loc_880A9E0C;
loc_880A9C10:
	// srawi r11,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 2;
	// stw r24,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// srawi r10,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r18.s32 >> 2;
	// stw r18,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r18.u32);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,2300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r6,2292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// bl 0x8810aa38
	ctx.lr = 0x880A9C40;
	sub_8810AA38(ctx, base);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r27,1380(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r26,2488(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A9C90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A9CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r9,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A9CE0;
	sub_88095050(ctx, base);
	// lwz r3,28100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r27,336(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r26,368(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// beq cr6,0x880a9d3c
	if (ctx.cr6.eq) goto loc_880A9D3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9D1C;
	sub_8810B7F8(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A9D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880A9D3C:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880a9d90
	if (ctx.cr6.eq) goto loc_880A9D90;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9D70;
	sub_8810B7F8(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A9D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_880A9D90:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880a9dcc
	if (ctx.cr6.gt) goto loc_880A9DCC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880a9dd8
	goto loc_880A9DD8;
loc_880A9DCC:
	// lwz r11,2436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880A9DD8:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r29,356(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x880a9e10
	if (!ctx.cr6.lt) goto loc_880A9E10;
	// lwz r23,280(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r21,276(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// stw r11,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x880a9e10
	goto loc_880A9E10;
loc_880A9E0C:
	// lwz r29,356(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_880A9E10:
	// lwz r11,2412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880aa050
	if (ctx.cr6.eq) goto loc_880AA050;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880a9e34
	if (!ctx.cr6.eq) goto loc_880A9E34;
	// lwz r11,2356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2356);
	// lwz r10,2364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2364);
	// b 0x880a9e3c
	goto loc_880A9E3C;
loc_880A9E34:
	// lwz r11,2340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2340);
	// lwz r10,2348(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2348);
loc_880A9E3C:
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r25,r10,30
	ctx.r25.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880a9e54
	if (!ctx.cr6.eq) goto loc_880A9E54;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880aa050
	if (ctx.cr6.eq) goto loc_880AA050;
loc_880A9E54:
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + ctx.r20.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880a9e74
	if (!ctx.cr6.eq) goto loc_880A9E74;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880aa050
	if (ctx.cr6.eq) goto loc_880AA050;
loc_880A9E74:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// stw r10,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,2300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2300);
	// lwz r6,2292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2292);
	// bl 0x8810aa38
	ctx.lr = 0x880A9EA4;
	sub_8810AA38(ctx, base);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r24,312(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lwz r3,2260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2260);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,1560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// lwz r30,1380(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r29,2488(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880A9EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,2236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2236);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880A9F18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r9,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880A9F48;
	sub_88095050(ctx, base);
	// lwz r3,28100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,336(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r27,368(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// beq cr6,0x880a9fa4
	if (ctx.cr6.eq) goto loc_880A9FA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,2268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2268);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9F84;
	sub_8810B7F8(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2244);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880A9FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880A9FA4:
	// lwz r11,28100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880aa010
	if (ctx.cr6.eq) goto loc_880AA010;
	// lwz r11,28044(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880aa010
	if (ctx.cr6.eq) goto loc_880AA010;
	// lwz r29,356(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// subf. r11,r30,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x880aa014
	if (!ctx.cr0.gt) goto loc_880AA014;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,2276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 2276);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880A9FF0;
	sub_8810B7F8(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,2252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2252);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880AA00C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_880AA010:
	// lwz r29,356(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_880AA014:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,2436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2436);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880AA028;
	sub_88085820(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x880aa050
	if (!ctx.cr6.lt) goto loc_880AA050;
	// lwz r23,280(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r21,276(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
loc_880AA050:
	// add r11,r16,r23
	ctx.r11.u64 = ctx.r16.u64 + ctx.r23.u64;
	// lwz r9,2484(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2484);
	// add r8,r17,r21
	ctx.r8.u64 = ctx.r17.u64 + ctx.r21.u64;
	// lwz r7,2492(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2492);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,2500(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2500);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r20
	ctx.r5.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r4,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F7B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8810F7B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwz r30,412(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r29,404(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r22,396(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lwz r20,388(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lwz r17,380(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lwz r16,372(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lis r8,-30681
	ctx.r8.s64 = -2010710016;
	// lwz r15,364(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r19,r6,4
	ctx.r19.s64 = ctx.r6.s64 + 4;
	// lwz r26,356(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r10,r10,6296
	ctx.r10.s64 = ctx.r10.s64 + 6296;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r9,r9,9176
	ctx.r9.s64 = ctx.r9.s64 + 9176;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r8,7256
	ctx.r8.s64 = ctx.r8.s64 + 7256;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
loc_8810F838:
	// addi r11,r23,74
	ctx.r11.s64 = ctx.r23.s64 + 74;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8810f9e0
	if (!ctx.cr6.eq) goto loc_8810F9E0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810fda4
	if (ctx.cr6.eq) goto loc_8810FDA4;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8810f938
	if (!ctx.cr0.gt) goto loc_8810F938;
	// addi r20,r31,19732
	ctx.r20.s64 = ctx.r31.s64 + 19732;
	// addi r19,r31,19796
	ctx.r19.s64 = ctx.r31.s64 + 19796;
	// addi r27,r18,-4
	ctx.r27.s64 = ctx.r18.s64 + -4;
loc_8810F874:
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// extsh r14,r10
	ctx.r14.s64 = ctx.r10.s16;
	// lwz r6,19988(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19988);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810F8A4;
	sub_8810F120(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810F8CC;
	sub_8810F120(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810F8EC;
	sub_8810F120(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r8,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r21)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8810f874
	if (ctx.cr6.lt) goto loc_8810F874;
	// lwz r22,396(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r20,388(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r23,316(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r19,84(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8810F938:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,20000(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20000);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r14,r10
	ctx.r14.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8810f240
	ctx.lr = 0x8810F970;
	sub_8810F240(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r31,19860
	ctx.r6.s64 = ctx.r31.s64 + 19860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f240
	ctx.lr = 0x8810F998;
	sub_8810F240(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,19924
	ctx.r6.s64 = ctx.r31.s64 + 19924;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f240
	ctx.lr = 0x8810F9B8;
	sub_8810F240(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r8,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// b 0x8810fda0
	goto loc_8810FDA0;
loc_8810F9E0:
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// blt cr6,0x8810fbcc
	if (ctx.cr6.lt) goto loc_8810FBCC;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8810f4a0
	ctx.lr = 0x8810FA04;
	sub_8810F4A0(ctx, base);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r9.u32);
	// lhz r8,0(r18)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// bl 0x8810f4a0
	ctx.lr = 0x8810FA24;
	sub_8810F4A0(ctx, base);
	// lwz r7,0(r22)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r6,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r19)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8810fda4
	if (ctx.cr6.eq) goto loc_8810FDA4;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// li r28,2
	ctx.r28.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8810fb24
	if (!ctx.cr6.gt) goto loc_8810FB24;
	// addi r20,r31,19732
	ctx.r20.s64 = ctx.r31.s64 + 19732;
	// addi r19,r31,19796
	ctx.r19.s64 = ctx.r31.s64 + 19796;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_8810FA60:
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// extsh r14,r10
	ctx.r14.s64 = ctx.r10.s16;
	// lwz r6,19988(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19988);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810FA90;
	sub_8810F120(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810FAB8;
	sub_8810F120(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810FAD8;
	sub_8810F120(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r8,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r21)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8810fa60
	if (ctx.cr6.lt) goto loc_8810FA60;
	// lwz r22,396(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r20,388(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r23,316(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r19,84(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8810FB24:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,20000(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20000);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r14,r10
	ctx.r14.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8810f240
	ctx.lr = 0x8810FB5C;
	sub_8810F240(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r31,19860
	ctx.r6.s64 = ctx.r31.s64 + 19860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f240
	ctx.lr = 0x8810FB84;
	sub_8810F240(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,19924
	ctx.r6.s64 = ctx.r31.s64 + 19924;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f240
	ctx.lr = 0x8810FBA4;
	sub_8810F240(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r8,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// b 0x8810fda0
	goto loc_8810FDA0;
loc_8810FBCC:
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8810f4a0
	ctx.lr = 0x8810FBD4;
	sub_8810F4A0(ctx, base);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r9.u32);
	// lhz r8,0(r18)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// bl 0x8810f4a0
	ctx.lr = 0x8810FBFC;
	sub_8810F4A0(ctx, base);
	// lwz r7,0(r22)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r6,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r19)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8810fda4
	if (ctx.cr6.eq) goto loc_8810FDA4;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// li r28,2
	ctx.r28.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8810fcfc
	if (!ctx.cr6.gt) goto loc_8810FCFC;
	// addi r20,r31,19476
	ctx.r20.s64 = ctx.r31.s64 + 19476;
	// addi r19,r31,19540
	ctx.r19.s64 = ctx.r31.s64 + 19540;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_8810FC38:
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// extsh r14,r10
	ctx.r14.s64 = ctx.r10.s16;
	// lwz r6,20012(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20012);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810FC68;
	sub_8810F120(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810FC90;
	sub_8810F120(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x8810FCB0;
	sub_8810F120(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// add r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stw r9,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r8,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r21)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8810fc38
	if (ctx.cr6.lt) goto loc_8810FC38;
	// lwz r22,396(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r20,388(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r23,316(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r19,84(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8810FCFC:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,20024(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20024);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r14,r10
	ctx.r14.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8810f240
	ctx.lr = 0x8810FD34;
	sub_8810F240(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r31,19604
	ctx.r6.s64 = ctx.r31.s64 + 19604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f240
	ctx.lr = 0x8810FD5C;
	sub_8810F240(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,19668
	ctx.r6.s64 = ctx.r31.s64 + 19668;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f240
	ctx.lr = 0x8810FD7C;
	sub_8810F240(ctx, base);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r8,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r6.u32);
loc_8810FDA0:
	// lwz r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8810FDA4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r18,r18,256
	ctx.r18.s64 = ctx.r18.s64 + 256;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x8810f838
	if (ctx.cr6.lt) goto loc_8810F838;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811DFF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8811E000;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r28,28(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,124(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x8811E044;
	sub_880CB730(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r31,r8,22
	ctx.r31.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8811e060
	if (!ctx.cr6.eq) goto loc_8811E060;
loc_8811E054:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811E060:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,128(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// bl 0x880cb730
	ctx.lr = 0x8811E080;
	sub_880CB730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8811e054
	if (ctx.cr6.eq) goto loc_8811E054;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 84);
	// sth r10,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
	// lhz r9,86(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 86);
	// sth r9,0(r26)
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x8811E4F0;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r22,28(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r16,r4,-24
	ctx.r16.s64 = ctx.r4.s64 + -24;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// sth r19,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r19.u16);
	// bctrl 
	ctx.lr = 0x8811E538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// bge cr6,0x8811e560
	if (!ctx.cr6.lt) goto loc_8811E560;
loc_8811E54C:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_8811E560:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811E578;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r26,2
	ctx.r26.s64 = 2;
	// bl 0x880cb2c0
	ctx.lr = 0x8811E59C;
	sub_880CB2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// stw r19,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r7,72(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 72);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,33
	ctx.r6.s64 = ctx.r11.s64 + 33;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r3.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// beq cr6,0x8811e8a8
	if (ctx.cr6.eq) goto loc_8811E8A8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811E614;
	sub_880CB2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x88052d90
	ctx.lr = 0x8811E634;
	sub_88052D90(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lwz r17,4(r10)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8811e8a8
	if (ctx.cr6.eq) goto loc_8811E8A8;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r21,r10,22
	ctx.r21.u64 = ctx.r10.u64 | 22;
loc_8811E654:
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x8811e54c
	if (ctx.cr6.gt) goto loc_8811E54C;
	// rlwinm r10,r11,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r30,r10,r17
	ctx.r30.u64 = ctx.r10.u64 + ctx.r17.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x88119210
	ctx.lr = 0x8811E684;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88119210
	ctx.lr = 0x8811E6AC;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e898
	if (ctx.cr6.eq) goto loc_8811E898;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 224);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811E6E8;
	sub_880CB2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x8811E710;
	sub_88052D90(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 148);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r25,0(r29)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x880cb730
	ctx.lr = 0x8811E728;
	sub_880CB730(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8811e760
	if (!ctx.cr6.eq) goto loc_8811E760;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 148);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x880cb648
	ctx.lr = 0x8811E748;
	sub_880CB648(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_8811E760:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8811e898
	if (ctx.cr6.eq) goto loc_8811E898;
	// addi r28,r26,18
	ctx.r28.s64 = ctx.r26.s64 + 18;
loc_8811E774:
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x8811e54c
	if (ctx.cr6.gt) goto loc_8811E54C;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88119210
	ctx.lr = 0x8811E7A8;
	sub_88119210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8811e81c
	if (!ctx.cr6.eq) goto loc_8811E81C;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x8811E7DC;
	sub_880CB730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e81c
	if (ctx.cr6.lt) goto loc_8811E81C;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r6,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r6.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ld r3,16(r5)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r3,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r24,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r24.u32);
loc_8811E81C:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811E834;
	sub_881196F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,18
	ctx.r26.s64 = ctx.r26.s64 + 18;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r28,r28,18
	ctx.r28.s64 = ctx.r28.s64 + 18;
	// stw r24,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r24.u32);
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// addi r6,r10,21
	ctx.r6.s64 = ctx.r10.s64 + 21;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r4,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r7,r24,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r3.u8 & 0x3F));
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lhz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8811e774
	if (ctx.cr6.lt) goto loc_8811E774;
loc_8811E898:
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8811e654
	if (ctx.cr6.lt) goto loc_8811E654;
loc_8811E8A8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r10,r11,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r11.u64;
	// subf. r30,r26,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8811e8ec
	if (ctx.cr0.eq) goto loc_8811E8EC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811E8D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811e8ec
	if (ctx.cr6.lt) goto loc_8811E8EC;
	// ld r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r22.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r22)
	REX_STORE_U64(ctx.r22.u32 + 8, ctx.r11.u64);
loc_8811E8EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881256F0) {
	REX_FUNC_PROLOGUE();
	// b 0x88125460
	sub_88125460(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881256F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88125700;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88125738
	if (!ctx.cr6.gt) goto loc_88125738;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r4.u64);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88125738:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88125750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125794
	if (ctx.cr6.lt) goto loc_88125794;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// std r30,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r30,40(r31)
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r29.u64);
	// stw r29,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// std r29,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r29.u64);
	// bne cr6,0x88125794
	if (!ctx.cr6.eq) goto loc_88125794;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88125794
	if (!ctx.cr6.gt) goto loc_88125794;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88125218
	ctx.lr = 0x88125794;
	sub_88125218(ctx, base);
loc_88125794:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88126E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88126E90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,468(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,388(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88126f60
	if (ctx.cr6.lt) goto loc_88126F60;
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88126ec4
	if (ctx.cr6.eq) goto loc_88126EC4;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r11,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x88126edc
	goto loc_88126EDC;
loc_88126EC4:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// beq cr6,0x88126edc
	if (ctx.cr6.eq) goto loc_88126EDC;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
loc_88126EDC:
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88126f44
	if (ctx.cr6.eq) goto loc_88126F44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r27,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
loc_88126F08:
	// mullw r11,r27,r30
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r30.s32);
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r8,468(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x880547a0
	ctx.lr = 0x88126F34;
	sub_880547A0(ctx, base);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88126f08
	if (ctx.cr6.lt) goto loc_88126F08;
loc_88126F44:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// stw r7,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r7.u32);
loc_88126F60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812A0D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8812A0E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r25,34(r3)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812a19c
	if (ctx.cr6.eq) goto loc_8812A19C;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// blt cr6,0x8812a188
	if (ctx.cr6.lt) goto loc_8812A188;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8812A10C:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// ble cr6,0x8812a158
	if (!ctx.cr6.gt) goto loc_8812A158;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8812a158
	if (!ctx.cr6.gt) goto loc_8812A158;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8812A124:
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 548);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812a14c
	if (ctx.cr6.eq) goto loc_8812A14C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x8812A140;
	sub_88125E70(ctx, base);
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 548);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
loc_8812A14C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8812a124
	if (!ctx.cr0.eq) goto loc_8812A124;
loc_8812A158:
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 548);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812a178
	if (ctx.cr6.eq) goto loc_8812A178;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x88125e70
	ctx.lr = 0x8812A170;
	sub_88125E70(ctx, base);
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 548);
	// stwx r27,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
loc_8812A178:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8812a10c
	if (!ctx.cr6.gt) goto loc_8812A10C;
loc_8812A188:
	// lwz r3,548(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a19c
	if (ctx.cr6.eq) goto loc_8812A19C;
	// bl 0x88125e70
	ctx.lr = 0x8812A198;
	sub_88125E70(ctx, base);
	// stw r27,548(r29)
	REX_STORE_U32(ctx.r29.u32 + 548, ctx.r27.u32);
loc_8812A19C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8812bc7c
	if (ctx.cr6.gt) goto loc_8812BC7C;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812bc74
	if (ctx.cr6.eq) goto loc_8812BC74;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x8812bc98
	goto loc_8812BC98;
loc_8812BC74:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8812bc9c
	goto loc_8812BC9C;
loc_8812BC7C:
	// lwz r10,604(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8812bc94
	if (ctx.cr6.eq) goto loc_8812BC94;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x8812bc98
	goto loc_8812BC98;
loc_8812BC94:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8812BC98:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8812BC9C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r6,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// bgt cr6,0x8812bcdc
	if (ctx.cr6.gt) goto loc_8812BCDC;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812bcd4
	if (ctx.cr6.eq) goto loc_8812BCD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x8812bcf8
	goto loc_8812BCF8;
loc_8812BCD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8812bcfc
	goto loc_8812BCFC;
loc_8812BCDC:
	// lwz r10,604(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8812bcf4
	if (ctx.cr6.eq) goto loc_8812BCF4;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x8812bcf8
	goto loc_8812BCF8;
loc_8812BCF4:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8812BCF8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8812BCFC:
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r7,r10,29,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r5,620(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// ble cr6,0x8812bd34
	if (!ctx.cr6.gt) goto loc_8812BD34;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x8812bd44
	goto loc_8812BD44;
loc_8812BD34:
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r8,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
loc_8812BD44:
	// b 0x8812bb00
	sub_8812BB00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812E108) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x8812E110;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef278
	ctx.lr = 0x8812E118;
	__savefpr_24(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r31,60(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r24,552(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lwz r5,320(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// ble cr6,0x8812e168
	if (!ctx.cr6.gt) goto loc_8812E168;
	// lwz r11,576(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812e154
	if (ctx.cr6.eq) goto loc_8812E154;
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812e168
	if (!ctx.cr6.eq) goto loc_8812E168;
loc_8812E154:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef2c4
	ctx.lr = 0x8812E164;
	__restfpr_24(ctx, base);
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8812E168:
	// lhz r11,580(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812e1b8
	if (!ctx.cr6.gt) goto loc_8812E1B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812E184:
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,40(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r29,r29,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// and r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 & ctx.r9.u64;
	// blt cr6,0x8812e184
	if (ctx.cr6.lt) goto loc_8812E184;
loc_8812E1B8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bgt cr6,0x8812e2f0
	if (ctx.cr6.gt) goto loc_8812E2F0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8812e2f0
	if (!ctx.cr6.eq) goto loc_8812E2F0;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812ecb8
	if (ctx.cr6.eq) goto loc_8812ECB8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812ecb8
	if (!ctx.cr6.eq) goto loc_8812ECB8;
	// lwz r10,320(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lhz r9,34(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,1832(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// beq cr6,0x8812e220
	if (ctx.cr6.eq) goto loc_8812E220;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812E1F8:
	// lwz r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r6,r10,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r30,40(r7)
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lhz r4,34(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8812e1f8
	if (ctx.cr6.lt) goto loc_8812E1F8;
loc_8812E220:
	// lhz r10,120(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 120);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8812e2b4
	if (ctx.cr6.lt) goto loc_8812E2B4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8812E248:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,8(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8812e248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812E248;
loc_8812E2B4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812ecb8
	if (!ctx.cr6.gt) goto loc_8812ECB8;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8812E2C4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f11,r9,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8812e2c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812E2C4;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef2c4
	ctx.lr = 0x8812E2EC;
	__restfpr_24(ctx, base);
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8812E2F0:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8812ecb8
	if (ctx.cr6.lt) goto loc_8812ECB8;
	// lhz r23,730(r8)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r8.u32 + 730);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812ecb8
	if (!ctx.cr6.eq) goto loc_8812ECB8;
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812ecb8
	if (!ctx.cr6.gt) goto loc_8812ECB8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24100);
	ctx.f13.f64 = double(temp.f32);
loc_8812E324:
	// lwz r11,576(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// mulli r10,r22,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(152));
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r30,4(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8812eca8
	if (!ctx.cr6.eq) goto loc_8812ECA8;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8812eca8
	if (ctx.cr6.eq) goto loc_8812ECA8;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812e364
	if (!ctx.cr6.eq) goto loc_8812E364;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8812eca8
	if (ctx.cr6.eq) goto loc_8812ECA8;
loc_8812E364:
	// lhz r10,34(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8812e468
	if (!ctx.cr6.eq) goto loc_8812E468;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812e468
	if (!ctx.cr6.eq) goto loc_8812E468;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812e468
	if (!ctx.cr6.eq) goto loc_8812E468;
	// lwz r10,320(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,1832(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// clrlwi r7,r23,16
	ctx.r7.u64 = ctx.r23.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_8812E3B4:
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x8812e410
	if (!ctx.cr6.eq) goto loc_8812E410;
loc_8812E3C8:
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e3e0
	if (!ctx.cr6.lt) goto loc_8812E3E0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8812E3E0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e450
	if (!ctx.cr6.lt) goto loc_8812E450;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x8812e3c8
	goto loc_8812E3C8;
loc_8812E410:
	// lwz r11,308(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e428
	if (!ctx.cr6.lt) goto loc_8812E428;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8812E428:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e450
	if (!ctx.cr6.lt) goto loc_8812E450;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f11,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfsu f9,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// b 0x8812e410
	goto loc_8812E410;
loc_8812E450:
	// lwz r11,304(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812e3b4
	if (ctx.cr6.lt) goto loc_8812E3B4;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E468:
	// lhz r10,580(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// lwz r11,556(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 556);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,148(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812e4d8
	if (!ctx.cr6.gt) goto loc_8812E4D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812E48C:
	// lwz r7,584(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// lhzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8812e4bc
	if (!ctx.cr6.eq) goto loc_8812E4BC;
	// lwz r7,320(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r9,r9,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,144(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// stwu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r31.u32 = ea;
loc_8812E4BC:
	// lhz r7,580(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812e48c
	if (ctx.cr6.lt) goto loc_8812E48C;
loc_8812E4D8:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8812e5dc
	if (!ctx.cr6.eq) goto loc_8812E5DC;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
loc_8812E4F8:
	// lwzx r9,r6,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812e580
	if (!ctx.cr6.eq) goto loc_8812E580;
	// lwzx r5,r9,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r31,r23,16
	ctx.r31.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E510:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e528
	if (!ctx.cr6.lt) goto loc_8812E528;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8812E528:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e5c4
	if (!ctx.cr6.lt) goto loc_8812E5C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r9,4
	ctx.r28.s64 = ctx.r9.s64 + 4;
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f4,f10,f7,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f3,f9,f8,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8812e510
	goto loc_8812E510;
loc_8812E580:
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_8812E5C4:
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812e4f8
	if (ctx.cr6.lt) goto loc_8812E4F8;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E5DC:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8812e740
	if (!ctx.cr6.eq) goto loc_8812E740;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r26,24
	ctx.r28.s64 = ctx.r26.s64 + 24;
loc_8812E5FC:
	// lwzx r9,r5,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812e6c0
	if (!ctx.cr6.eq) goto loc_8812E6C0;
	// lwzx r31,r9,r5
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// clrlwi r30,r23,16
	ctx.r30.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E614:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e62c
	if (!ctx.cr6.lt) goto loc_8812E62C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8812E62C:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e728
	if (!ctx.cr6.lt) goto loc_8812E728;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r9,4
	ctx.r26.s64 = ctx.r9.s64 + 4;
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	ctx.r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lfs f10,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// fmadds f9,f9,f6,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f5.f64)));
	// fmadds f8,f8,f3,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f4.f64)));
	// fmadds f6,f1,f3,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f5,f3,f12,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f4,f11,f7,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f3,f10,f7,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8812e614
	goto loc_8812E614;
loc_8812E6C0:
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_8812E728:
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812e5fc
	if (ctx.cr6.lt) goto loc_8812E5FC;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E740:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x8812e914
	if (!ctx.cr6.eq) goto loc_8812E914;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r26,24
	ctx.r27.s64 = ctx.r26.s64 + 24;
loc_8812E760:
	// lwzx r7,r9,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812e870
	if (!ctx.cr6.eq) goto loc_8812E870;
	// lwzx r30,r9,r7
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r29,r23,16
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E778:
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812e790
	if (!ctx.cr6.lt) goto loc_8812E790;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8812E790:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812e8fc
	if (!ctx.cr6.lt) goto loc_8812E8FC;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r7,4
	ctx.r26.s64 = ctx.r7.s64 + 4;
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	ctx.r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r21,r5,4
	ctx.r21.s64 = ctx.r5.s64 + 4;
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lfs f31,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lfs f30,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f29,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lfs f28,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// fmadds f8,f8,f6,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f1,f3,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f4.f64)));
	// lfs f4,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f11,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f2.f64)));
	// lfs f1,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f10,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f12.f64)));
	// lfs f11,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmadds f10,f31,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f31.f64, ctx.f9.f64, ctx.f8.f64)));
	// fmadds f8,f30,f7,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f30.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f5,f29,f7,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f2,f28,f7,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f12,f6,f3,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f10.f64)));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f10,f4,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f8,f1,f9,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f7,f11,f9,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f2.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x8812e778
	goto loc_8812E778;
loc_8812E870:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,4(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r7,r6,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_8812E8FC:
	// lwz r7,304(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812e760
	if (ctx.cr6.lt) goto loc_8812E760;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E914:
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x8812eb68
	if (!ctx.cr6.eq) goto loc_8812EB68;
	// lwz r9,304(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
loc_8812E934:
	// lwzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812eaa0
	if (!ctx.cr6.eq) goto loc_8812EAA0;
	// lwzx r29,r9,r7
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r28,r23,16
	ctx.r28.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E94C:
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812e964
	if (!ctx.cr6.lt) goto loc_8812E964;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8812E964:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812eb50
	if (!ctx.cr6.lt) goto loc_8812EB50;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,84(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f7,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r7,4
	ctx.r25.s64 = ctx.r7.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f9,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// addi r21,r6,4
	ctx.r21.s64 = ctx.r6.s64 + 4;
	// lfs f31,80(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// addi r20,r5,4
	ctx.r20.s64 = ctx.r5.s64 + 4;
	// lfs f30,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r19,r31,4
	ctx.r19.s64 = ctx.r31.s64 + 4;
	// lfs f29,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// addi r18,r30,4
	ctx.r18.s64 = ctx.r30.s64 + 4;
	// lfs f28,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// fmadds f6,f3,f6,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f5,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f1,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f4.f64)));
	// lfs f3,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f9,f1,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f2.f64)));
	// lfs f11,88(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f8,f1,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f12.f64)));
	// lfs f8,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f31,f1,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f1.f64, ctx.f10.f64)));
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f27,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// lfs f26,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f26.f64 = double(temp.f32);
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
	// lfs f25,92(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f25.f64 = double(temp.f32);
	// stw r18,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r18.u32);
	// lfs f24,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmadds f6,f29,f30,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f29.f64, ctx.f30.f64, ctx.f6.f64)));
	// lfs f29,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f28,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f4.f64)));
	// lfs f28,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f2,f5,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f2.f64)));
	// lfs f5,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f3,f7,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f9.f64)));
	// lfs f9,96(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f11,f7,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f6,f10,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f4,f31,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f4.f64)));
	// fmadds f2,f27,f30,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f30.f64, ctx.f2.f64)));
	// fmadds f12,f26,f30,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f26.f64, ctx.f30.f64, ctx.f3.f64)));
	// fmadds f11,f25,f30,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f25.f64, ctx.f30.f64, ctx.f7.f64)));
	// fmadds f10,f24,f1,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f24.f64, ctx.f1.f64, ctx.f6.f64)));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f7,f29,f8,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f29.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f6,f28,f8,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f5,f5,f8,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f12.f64)));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f9,f8,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f11.f64)));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8812e94c
	goto loc_8812E94C;
loc_8812EAA0:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,4(r7)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
loc_8812EB50:
	// lwz r7,304(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812e934
	if (ctx.cr6.lt) goto loc_8812E934;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812EB68:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r26,24
	ctx.r25.s64 = ctx.r26.s64 + 24;
loc_8812EB7C:
	// lwzx r10,r30,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8812ec50
	if (!ctx.cr6.eq) goto loc_8812EC50;
	// lwz r10,308(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// clrlwi r29,r23,16
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFF;
	// lwzx r28,r30,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
loc_8812EB94:
	// lwz r10,308(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812ebac
	if (!ctx.cr6.lt) goto loc_8812EBAC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8812EBAC:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812ec94
	if (!ctx.cr6.lt) goto loc_8812EC94;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812ec48
	if (!ctx.cr6.gt) goto loc_8812EC48;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8812EBC0:
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r5,148(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stfsx f0,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
loc_8812EBDC:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r21,r5,r11
	ctx.r21.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lfsx f11,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lfs f10,0(r21)
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// stfsx f9,r9,r24
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
	// blt cr6,0x8812ebdc
	if (ctx.cr6.lt) goto loc_8812EBDC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8812ebc0
	if (ctx.cr6.lt) goto loc_8812EBC0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812EC20:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// stwx r5,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x8812ec20
	if (ctx.cr6.lt) goto loc_8812EC20;
loc_8812EC48:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8812eb94
	goto loc_8812EB94;
loc_8812EC50:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812ec94
	if (!ctx.cr6.gt) goto loc_8812EC94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812EC5C:
	// lwz r9,308(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r5,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
	// blt cr6,0x8812ec5c
	if (ctx.cr6.lt) goto loc_8812EC5C;
loc_8812EC94:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812eb7c
	if (ctx.cr6.lt) goto loc_8812EB7C;
loc_8812ECA8:
	// lwz r11,572(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812e324
	if (ctx.cr6.lt) goto loc_8812E324;
loc_8812ECB8:
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef2c4
	ctx.lr = 0x8812ECC0;
	__restfpr_24(ctx, base);
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A328) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A330;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x88149ae8
	ctx.lr = 0x8814A364;
	sub_88149AE8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88149d20
	ctx.lr = 0x8814A380;
	sub_88149D20(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A460;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x88149ae8
	ctx.lr = 0x8814A494;
	sub_88149AE8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x88149e68
	ctx.lr = 0x8814A4B0;
	sub_88149E68(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8814A5F0;
	__savegprlr_27(ctx, base);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r8,-50(r1)
	REX_STORE_U16(ctx.r1.u32 + -50, ctx.r8.u16);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v6,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v60,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vperm128 v11,v62,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vperm128 v10,v63,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v59,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,-64
	ctx.r27.s64 = ctx.r1.s64 + -64;
	// add r29,r31,r4
	ctx.r29.u64 = ctx.r31.u64 + ctx.r4.u64;
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v54,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v4,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm128 v9,v58,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v53,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v56,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v52,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v50,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v53,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v29,v52,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v11,v31,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_set1_epi16(short(0x100))));
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vmrghb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vaddshs v27,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vperm128 v26,v49,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vsubshs v28,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v46,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v25,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r31,r30,r6
	ctx.r31.u64 = ctx.r30.u64 + ctx.r6.u64;
	// vsubshs v24,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vperm128 v21,v47,v46,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsrah v22,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghb v5,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v23,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v3,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v19,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r10,4
	ctx.r10.s64 = 4;
	// vaddshs v17,v22,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vaddshs v18,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v16,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v15,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v14,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v7,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v45,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsubshs v2,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v1,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v31,v16,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v30,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v0,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v28,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvewx128 v45,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v45,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v27,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v25,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v23,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v22,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v20,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v19,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v27,v9
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v44,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v16,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v14,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v0,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v43,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsrah v13,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v42,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v11,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvewx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvewx128 v44,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v10,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v40,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvewx128 v43,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v39,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v43,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v38,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvewx128 v42,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881515A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881515B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881515cc
	if (!ctx.cr6.eq) goto loc_881515CC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881515CC:
	// lwz r7,24688(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r10,712(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881515e8
	if (ctx.cr6.eq) goto loc_881515E8;
loc_881515DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881515E8:
	// lwz r10,22036(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881515dc
	if (ctx.cr6.eq) goto loc_881515DC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,22032(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// lwz r8,20680(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20680);
	// li r6,3
	ctx.r6.s64 = 3;
	// ori r3,r10,45384
	ctx.r3.u64 = ctx.r10.u64 | 45384;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x88151664
	if (ctx.cr6.eq) goto loc_88151664;
	// lwz r10,20684(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88151664
	if (ctx.cr6.eq) goto loc_88151664;
	// lwz r10,21780(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21780);
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lwz r9,21776(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21776);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r6,17880
	ctx.r3.s64 = ctx.r6.s64 + 17880;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// b 0x8815166c
	goto loc_8815166C;
loc_88151664:
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8815166C:
	// lwz r10,21864(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,21540(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21540);
	// lwz r8,21544(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 21544);
	// lwz r6,21868(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21868);
	// lwz r31,21680(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21680);
	// lwz r30,3484(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3484);
	// lwz r29,3488(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r28,21572(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 21572);
	// lwz r27,21576(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 21576);
	// lwz r11,22140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22140);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,192(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881516D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88156500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88156660
	if (ctx.cr6.eq) goto loc_88156660;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// sld r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf. r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// bge 0x88156660
	if (!ctx.cr0.lt) goto loc_88156660;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881565c8
	if (ctx.cr6.lt) goto loc_881565C8;
loc_88156550:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881565a0
	if (ctx.cr6.gt) goto loc_881565A0;
loc_8815655C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r6,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r6.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8815655c
	if (!ctx.cr6.gt) goto loc_8815655C;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x88156660
	if (!ctx.cr6.lt) goto loc_88156660;
loc_881565A0:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88156634
	if (!ctx.cr6.eq) goto loc_88156634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x881565B4;
	sub_88156188(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x88156550
	if (!ctx.cr6.lt) goto loc_88156550;
loc_881565C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rldicr r6,r9,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rldicr r10,r7,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sld r10,r6,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// b 0x8815665c
	goto loc_8815665C;
loc_88156634:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x8815665c
	if (!ctx.cr6.lt) goto loc_8815665C;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88156654
	if (!ctx.cr6.eq) goto loc_88156654;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_88156654:
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8815665C:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_88156660:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8815BD48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8815BD50;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r5,3712(r3)
	REX_STORE_U32(ctx.r3.u32 + 3712, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// ori r8,r10,45384
	ctx.r8.u64 = ctx.r10.u64 | 45384;
	// ori r7,r9,45800
	ctx.r7.u64 = ctx.r9.u64 | 45800;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,21568(r3)
	REX_STORE_U32(ctx.r3.u32 + 21568, ctx.r30.u32);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r30,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r30.u32);
	// stw r30,21940(r3)
	REX_STORE_U32(ctx.r3.u32 + 21940, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,21944(r3)
	REX_STORE_U32(ctx.r3.u32 + 21944, ctx.r30.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r30,21956(r31)
	REX_STORE_U32(ctx.r31.u32 + 21956, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,21960(r31)
	REX_STORE_U32(ctx.r31.u32 + 21960, ctx.r30.u32);
	// addi r3,r3,3768
	ctx.r3.s64 = ctx.r3.s64 + 3768;
	// stw r30,21964(r31)
	REX_STORE_U32(ctx.r31.u32 + 21964, ctx.r30.u32);
	// stw r30,21948(r31)
	REX_STORE_U32(ctx.r31.u32 + 21948, ctx.r30.u32);
	// stw r30,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r29,15532(r31)
	REX_STORE_U32(ctx.r31.u32 + 15532, ctx.r29.u32);
	// stw r29,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r29.u32);
	// stw r29,1948(r31)
	REX_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// stw r6,15596(r31)
	REX_STORE_U32(ctx.r31.u32 + 15596, ctx.r6.u32);
	// stw r30,15612(r31)
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r30.u32);
	// stw r29,15600(r31)
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r29.u32);
	// stw r30,3972(r31)
	REX_STORE_U32(ctx.r31.u32 + 3972, ctx.r30.u32);
	// stw r30,3976(r31)
	REX_STORE_U32(ctx.r31.u32 + 3976, ctx.r30.u32);
	// stw r30,3988(r31)
	REX_STORE_U32(ctx.r31.u32 + 3988, ctx.r30.u32);
	// stw r30,3012(r31)
	REX_STORE_U32(ctx.r31.u32 + 3012, ctx.r30.u32);
	// stw r30,3008(r31)
	REX_STORE_U32(ctx.r31.u32 + 3008, ctx.r30.u32);
	// stw r30,3004(r31)
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r30.u32);
	// stw r30,1796(r31)
	REX_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// stw r30,14860(r31)
	REX_STORE_U32(ctx.r31.u32 + 14860, ctx.r30.u32);
	// stw r30,14864(r31)
	REX_STORE_U32(ctx.r31.u32 + 14864, ctx.r30.u32);
	// stw r30,14856(r31)
	REX_STORE_U32(ctx.r31.u32 + 14856, ctx.r30.u32);
	// stw r30,14836(r31)
	REX_STORE_U32(ctx.r31.u32 + 14836, ctx.r30.u32);
	// stw r29,3404(r31)
	REX_STORE_U32(ctx.r31.u32 + 3404, ctx.r29.u32);
	// stw r30,3408(r31)
	REX_STORE_U32(ctx.r31.u32 + 3408, ctx.r30.u32);
	// stw r30,3400(r31)
	REX_STORE_U32(ctx.r31.u32 + 3400, ctx.r30.u32);
	// stwx r30,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stw r30,21936(r31)
	REX_STORE_U32(ctx.r31.u32 + 21936, ctx.r30.u32);
	// stdx r30,r31,r7
	REX_STORE_U64(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u64);
	// stw r30,21996(r31)
	REX_STORE_U32(ctx.r31.u32 + 21996, ctx.r30.u32);
	// stw r30,22000(r31)
	REX_STORE_U32(ctx.r31.u32 + 22000, ctx.r30.u32);
	// stw r30,22004(r31)
	REX_STORE_U32(ctx.r31.u32 + 22004, ctx.r30.u32);
	// stw r30,22012(r31)
	REX_STORE_U32(ctx.r31.u32 + 22012, ctx.r30.u32);
	// stw r30,22008(r31)
	REX_STORE_U32(ctx.r31.u32 + 22008, ctx.r30.u32);
	// stw r30,14872(r31)
	REX_STORE_U32(ctx.r31.u32 + 14872, ctx.r30.u32);
	// stw r30,14876(r31)
	REX_STORE_U32(ctx.r31.u32 + 14876, ctx.r30.u32);
	// stw r30,14880(r31)
	REX_STORE_U32(ctx.r31.u32 + 14880, ctx.r30.u32);
	// stw r30,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x881715c8
	ctx.lr = 0x8815BE58;
	sub_881715C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3756
	ctx.r3.s64 = ctx.r31.s64 + 3756;
	// bl 0x881715c8
	ctx.lr = 0x8815BE64;
	sub_881715C8(ctx, base);
	// addi r27,r31,3772
	ctx.r27.s64 = ctx.r31.s64 + 3772;
	// stw r30,3448(r31)
	REX_STORE_U32(ctx.r31.u32 + 3448, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,3088(r31)
	REX_STORE_U32(ctx.r31.u32 + 3088, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,3084(r31)
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r30.u32);
	// stw r30,15304(r31)
	REX_STORE_U32(ctx.r31.u32 + 15304, ctx.r30.u32);
	// stw r30,15308(r31)
	REX_STORE_U32(ctx.r31.u32 + 15308, ctx.r30.u32);
	// stw r30,15312(r31)
	REX_STORE_U32(ctx.r31.u32 + 15312, ctx.r30.u32);
	// stw r30,15316(r31)
	REX_STORE_U32(ctx.r31.u32 + 15316, ctx.r30.u32);
	// stw r30,15320(r31)
	REX_STORE_U32(ctx.r31.u32 + 15320, ctx.r30.u32);
	// stw r30,15324(r31)
	REX_STORE_U32(ctx.r31.u32 + 15324, ctx.r30.u32);
	// stw r30,15328(r31)
	REX_STORE_U32(ctx.r31.u32 + 15328, ctx.r30.u32);
	// stw r30,15616(r31)
	REX_STORE_U32(ctx.r31.u32 + 15616, ctx.r30.u32);
	// stw r30,3460(r31)
	REX_STORE_U32(ctx.r31.u32 + 3460, ctx.r30.u32);
	// bl 0x881715c8
	ctx.lr = 0x8815BEA4;
	sub_881715C8(ctx, base);
	// stw r30,15332(r31)
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r30.u32);
	// stw r30,15356(r31)
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r30.u32);
	// addi r26,r31,1992
	ctx.r26.s64 = ctx.r31.s64 + 1992;
	// stw r30,15340(r31)
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r30.u32);
	// stw r30,15348(r31)
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,3476(r31)
	REX_STORE_U32(ctx.r31.u32 + 3476, ctx.r30.u32);
	// stw r30,3480(r31)
	REX_STORE_U32(ctx.r31.u32 + 3480, ctx.r30.u32);
	// stw r30,3468(r31)
	REX_STORE_U32(ctx.r31.u32 + 3468, ctx.r30.u32);
	// stw r30,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,3484(r31)
	REX_STORE_U32(ctx.r31.u32 + 3484, ctx.r30.u32);
	// stw r30,3488(r31)
	REX_STORE_U32(ctx.r31.u32 + 3488, ctx.r30.u32);
	// bl 0x881b3778
	ctx.lr = 0x8815BED8;
	sub_881B3778(ctx, base);
	// addi r25,r31,2004
	ctx.r25.s64 = ctx.r31.s64 + 2004;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BEE4;
	sub_881B3778(ctx, base);
	// addi r17,r31,2044
	ctx.r17.s64 = ctx.r31.s64 + 2044;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BEF0;
	sub_881B3778(ctx, base);
	// addi r16,r31,2056
	ctx.r16.s64 = ctx.r31.s64 + 2056;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BEFC;
	sub_881B3778(ctx, base);
	// addi r15,r31,2068
	ctx.r15.s64 = ctx.r31.s64 + 2068;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF08;
	sub_881B3778(ctx, base);
	// addi r14,r31,2080
	ctx.r14.s64 = ctx.r31.s64 + 2080;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF14;
	sub_881B3778(ctx, base);
	// addi r24,r31,2120
	ctx.r24.s64 = ctx.r31.s64 + 2120;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF20;
	sub_881B3778(ctx, base);
	// addi r23,r31,2132
	ctx.r23.s64 = ctx.r31.s64 + 2132;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF2C;
	sub_881B3778(ctx, base);
	// addi r20,r31,2148
	ctx.r20.s64 = ctx.r31.s64 + 2148;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF38;
	sub_881B3778(ctx, base);
	// addi r19,r31,2160
	ctx.r19.s64 = ctx.r31.s64 + 2160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF44;
	sub_881B3778(ctx, base);
	// addi r18,r31,2172
	ctx.r18.s64 = ctx.r31.s64 + 2172;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x881b3778
	ctx.lr = 0x8815BF50;
	sub_881B3778(ctx, base);
	// addi r3,r31,2184
	ctx.r3.s64 = ctx.r31.s64 + 2184;
	// bl 0x881b3778
	ctx.lr = 0x8815BF58;
	sub_881B3778(ctx, base);
	// addi r3,r31,2196
	ctx.r3.s64 = ctx.r31.s64 + 2196;
	// bl 0x881b3778
	ctx.lr = 0x8815BF60;
	sub_881B3778(ctx, base);
	// addi r3,r31,2208
	ctx.r3.s64 = ctx.r31.s64 + 2208;
	// bl 0x881b3778
	ctx.lr = 0x8815BF68;
	sub_881B3778(ctx, base);
	// addi r3,r31,2220
	ctx.r3.s64 = ctx.r31.s64 + 2220;
	// bl 0x881b3778
	ctx.lr = 0x8815BF70;
	sub_881B3778(ctx, base);
	// addi r3,r31,2232
	ctx.r3.s64 = ctx.r31.s64 + 2232;
	// bl 0x881b3778
	ctx.lr = 0x8815BF78;
	sub_881B3778(ctx, base);
	// addi r3,r31,2244
	ctx.r3.s64 = ctx.r31.s64 + 2244;
	// bl 0x881b3778
	ctx.lr = 0x8815BF80;
	sub_881B3778(ctx, base);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// bl 0x881b3778
	ctx.lr = 0x8815BF88;
	sub_881B3778(ctx, base);
	// addi r3,r31,2256
	ctx.r3.s64 = ctx.r31.s64 + 2256;
	// bl 0x881b3778
	ctx.lr = 0x8815BF90;
	sub_881B3778(ctx, base);
	// addi r3,r31,2284
	ctx.r3.s64 = ctx.r31.s64 + 2284;
	// bl 0x881b3778
	ctx.lr = 0x8815BF98;
	sub_881B3778(ctx, base);
	// addi r3,r31,2296
	ctx.r3.s64 = ctx.r31.s64 + 2296;
	// bl 0x881b3778
	ctx.lr = 0x8815BFA0;
	sub_881B3778(ctx, base);
	// addi r3,r31,2308
	ctx.r3.s64 = ctx.r31.s64 + 2308;
	// bl 0x881b3778
	ctx.lr = 0x8815BFA8;
	sub_881B3778(ctx, base);
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x881b3778
	ctx.lr = 0x8815BFB0;
	sub_881B3778(ctx, base);
	// addi r3,r31,2332
	ctx.r3.s64 = ctx.r31.s64 + 2332;
	// bl 0x881b3778
	ctx.lr = 0x8815BFB8;
	sub_881B3778(ctx, base);
	// addi r3,r31,2344
	ctx.r3.s64 = ctx.r31.s64 + 2344;
	// bl 0x881b3778
	ctx.lr = 0x8815BFC0;
	sub_881B3778(ctx, base);
	// addi r3,r31,2356
	ctx.r3.s64 = ctx.r31.s64 + 2356;
	// bl 0x881b3778
	ctx.lr = 0x8815BFC8;
	sub_881B3778(ctx, base);
	// addi r3,r31,2368
	ctx.r3.s64 = ctx.r31.s64 + 2368;
	// bl 0x881b3778
	ctx.lr = 0x8815BFD0;
	sub_881B3778(ctx, base);
	// stw r30,2144(r31)
	REX_STORE_U32(ctx.r31.u32 + 2144, ctx.r30.u32);
	// addi r3,r31,22360
	ctx.r3.s64 = ctx.r31.s64 + 22360;
	// bl 0x881b3778
	ctx.lr = 0x8815BFDC;
	sub_881B3778(ctx, base);
	// addi r3,r31,22372
	ctx.r3.s64 = ctx.r31.s64 + 22372;
	// bl 0x881b3778
	ctx.lr = 0x8815BFE4;
	sub_881B3778(ctx, base);
	// addi r3,r31,22384
	ctx.r3.s64 = ctx.r31.s64 + 22384;
	// bl 0x881b3778
	ctx.lr = 0x8815BFEC;
	sub_881B3778(ctx, base);
	// addi r3,r31,22396
	ctx.r3.s64 = ctx.r31.s64 + 22396;
	// bl 0x881b3778
	ctx.lr = 0x8815BFF4;
	sub_881B3778(ctx, base);
	// addi r3,r31,22348
	ctx.r3.s64 = ctx.r31.s64 + 22348;
	// bl 0x881b3778
	ctx.lr = 0x8815BFFC;
	sub_881B3778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881586f8
	ctx.lr = 0x8815C004;
	sub_881586F8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r30,4012(r31)
	REX_STORE_U32(ctx.r31.u32 + 4012, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
	// ori r10,r4,45388
	ctx.r10.u64 = ctx.r4.u64 | 45388;
	// stw r30,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// ori r9,r3,45368
	ctx.r9.u64 = ctx.r3.u64 | 45368;
	// stw r30,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// ori r8,r11,45372
	ctx.r8.u64 = ctx.r11.u64 | 45372;
	// stw r30,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r30,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r30,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// stwx r30,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,15964(r31)
	REX_STORE_U32(ctx.r31.u32 + 15964, ctx.r30.u32);
	// ori r3,r6,45396
	ctx.r3.u64 = ctx.r6.u64 | 45396;
	// stw r30,23972(r31)
	REX_STORE_U32(ctx.r31.u32 + 23972, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,23968(r31)
	REX_STORE_U32(ctx.r31.u32 + 23968, ctx.r30.u32);
	// ori r10,r5,45400
	ctx.r10.u64 = ctx.r5.u64 | 45400;
	// stw r30,1792(r31)
	REX_STORE_U32(ctx.r31.u32 + 1792, ctx.r30.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r30,14884(r31)
	REX_STORE_U32(ctx.r31.u32 + 14884, ctx.r30.u32);
	// stw r30,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,4040(r31)
	REX_STORE_U32(ctx.r31.u32 + 4040, ctx.r30.u32);
	// stw r30,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,14820(r31)
	REX_STORE_U32(ctx.r31.u32 + 14820, ctx.r30.u32);
	// stw r30,15268(r31)
	REX_STORE_U32(ctx.r31.u32 + 15268, ctx.r30.u32);
	// stw r30,15280(r31)
	REX_STORE_U32(ctx.r31.u32 + 15280, ctx.r30.u32);
	// stw r30,15284(r31)
	REX_STORE_U32(ctx.r31.u32 + 15284, ctx.r30.u32);
	// stw r30,4036(r31)
	REX_STORE_U32(ctx.r31.u32 + 4036, ctx.r30.u32);
	// stw r30,3444(r31)
	REX_STORE_U32(ctx.r31.u32 + 3444, ctx.r30.u32);
	// stwx r30,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stw r30,20680(r31)
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r30.u32);
	// stw r30,3492(r31)
	REX_STORE_U32(ctx.r31.u32 + 3492, ctx.r30.u32);
	// stw r30,21552(r31)
	REX_STORE_U32(ctx.r31.u32 + 21552, ctx.r30.u32);
	// stw r30,20696(r31)
	REX_STORE_U32(ctx.r31.u32 + 20696, ctx.r30.u32);
	// stw r30,20700(r31)
	REX_STORE_U32(ctx.r31.u32 + 20700, ctx.r30.u32);
	// stw r30,20704(r31)
	REX_STORE_U32(ctx.r31.u32 + 20704, ctx.r30.u32);
	// stw r30,20760(r31)
	REX_STORE_U32(ctx.r31.u32 + 20760, ctx.r30.u32);
	// stw r30,20684(r31)
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r30.u32);
	// stw r30,20688(r31)
	REX_STORE_U32(ctx.r31.u32 + 20688, ctx.r30.u32);
	// stw r30,21704(r31)
	REX_STORE_U32(ctx.r31.u32 + 21704, ctx.r30.u32);
	// stw r30,21708(r31)
	REX_STORE_U32(ctx.r31.u32 + 21708, ctx.r30.u32);
	// stw r29,21692(r31)
	REX_STORE_U32(ctx.r31.u32 + 21692, ctx.r29.u32);
	// stw r29,21700(r31)
	REX_STORE_U32(ctx.r31.u32 + 21700, ctx.r29.u32);
	// stw r29,21696(r31)
	REX_STORE_U32(ctx.r31.u32 + 21696, ctx.r29.u32);
	// stw r30,21536(r31)
	REX_STORE_U32(ctx.r31.u32 + 21536, ctx.r30.u32);
	// stw r29,21540(r31)
	REX_STORE_U32(ctx.r31.u32 + 21540, ctx.r29.u32);
	// stw r30,21544(r31)
	REX_STORE_U32(ctx.r31.u32 + 21544, ctx.r30.u32);
	// stw r30,21864(r31)
	REX_STORE_U32(ctx.r31.u32 + 21864, ctx.r30.u32);
	// stw r30,21868(r31)
	REX_STORE_U32(ctx.r31.u32 + 21868, ctx.r30.u32);
	// stw r30,3428(r31)
	REX_STORE_U32(ctx.r31.u32 + 3428, ctx.r30.u32);
	// stw r30,22136(r31)
	REX_STORE_U32(ctx.r31.u32 + 22136, ctx.r30.u32);
	// stw r30,22172(r31)
	REX_STORE_U32(ctx.r31.u32 + 22172, ctx.r30.u32);
	// stw r30,22176(r31)
	REX_STORE_U32(ctx.r31.u32 + 22176, ctx.r30.u32);
	// stw r30,22180(r31)
	REX_STORE_U32(ctx.r31.u32 + 22180, ctx.r30.u32);
	// stw r29,21676(r31)
	REX_STORE_U32(ctx.r31.u32 + 21676, ctx.r29.u32);
	// stw r29,21684(r31)
	REX_STORE_U32(ctx.r31.u32 + 21684, ctx.r29.u32);
	// stw r29,21680(r31)
	REX_STORE_U32(ctx.r31.u32 + 21680, ctx.r29.u32);
	// stw r30,22144(r31)
	REX_STORE_U32(ctx.r31.u32 + 22144, ctx.r30.u32);
	// stw r30,22148(r31)
	REX_STORE_U32(ctx.r31.u32 + 22148, ctx.r30.u32);
	// stw r30,22152(r31)
	REX_STORE_U32(ctx.r31.u32 + 22152, ctx.r30.u32);
	// stw r30,22156(r31)
	REX_STORE_U32(ctx.r31.u32 + 22156, ctx.r30.u32);
	// stw r30,22160(r31)
	REX_STORE_U32(ctx.r31.u32 + 22160, ctx.r30.u32);
	// stw r30,22164(r31)
	REX_STORE_U32(ctx.r31.u32 + 22164, ctx.r30.u32);
	// stw r30,22168(r31)
	REX_STORE_U32(ctx.r31.u32 + 22168, ctx.r30.u32);
	// ori r8,r4,45402
	ctx.r8.u64 = ctx.r4.u64 | 45402;
	// stw r30,21660(r31)
	REX_STORE_U32(ctx.r31.u32 + 21660, ctx.r30.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,21664(r31)
	REX_STORE_U32(ctx.r31.u32 + 21664, ctx.r30.u32);
	// ori r6,r11,45404
	ctx.r6.u64 = ctx.r11.u64 | 45404;
	// stw r30,21668(r31)
	REX_STORE_U32(ctx.r31.u32 + 21668, ctx.r30.u32);
	// ori r5,r9,45406
	ctx.r5.u64 = ctx.r9.u64 | 45406;
	// stw r30,21672(r31)
	REX_STORE_U32(ctx.r31.u32 + 21672, ctx.r30.u32);
	// ori r11,r4,45408
	ctx.r11.u64 = ctx.r4.u64 | 45408;
	// stw r30,21784(r31)
	REX_STORE_U32(ctx.r31.u32 + 21784, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,21788(r31)
	REX_STORE_U32(ctx.r31.u32 + 21788, ctx.r30.u32);
	// stw r30,21792(r31)
	REX_STORE_U32(ctx.r31.u32 + 21792, ctx.r30.u32);
	// stw r30,21796(r31)
	REX_STORE_U32(ctx.r31.u32 + 21796, ctx.r30.u32);
	// stw r30,21800(r31)
	REX_STORE_U32(ctx.r31.u32 + 21800, ctx.r30.u32);
	// stw r30,21804(r31)
	REX_STORE_U32(ctx.r31.u32 + 21804, ctx.r30.u32);
	// stw r30,21808(r31)
	REX_STORE_U32(ctx.r31.u32 + 21808, ctx.r30.u32);
	// stw r30,21812(r31)
	REX_STORE_U32(ctx.r31.u32 + 21812, ctx.r30.u32);
	// stw r30,21816(r31)
	REX_STORE_U32(ctx.r31.u32 + 21816, ctx.r30.u32);
	// stw r30,21820(r31)
	REX_STORE_U32(ctx.r31.u32 + 21820, ctx.r30.u32);
	// stw r30,21824(r31)
	REX_STORE_U32(ctx.r31.u32 + 21824, ctx.r30.u32);
	// stw r30,21828(r31)
	REX_STORE_U32(ctx.r31.u32 + 21828, ctx.r30.u32);
	// stw r30,21832(r31)
	REX_STORE_U32(ctx.r31.u32 + 21832, ctx.r30.u32);
	// stw r30,21836(r31)
	REX_STORE_U32(ctx.r31.u32 + 21836, ctx.r30.u32);
	// stw r30,21840(r31)
	REX_STORE_U32(ctx.r31.u32 + 21840, ctx.r30.u32);
	// stw r30,21844(r31)
	REX_STORE_U32(ctx.r31.u32 + 21844, ctx.r30.u32);
	// stw r30,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,15628(r31)
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r30.u32);
	// stw r29,21904(r31)
	REX_STORE_U32(ctx.r31.u32 + 21904, ctx.r29.u32);
	// stw r29,21884(r31)
	REX_STORE_U32(ctx.r31.u32 + 21884, ctx.r29.u32);
	// stw r29,21888(r31)
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r29.u32);
	// stw r30,21892(r31)
	REX_STORE_U32(ctx.r31.u32 + 21892, ctx.r30.u32);
	// stw r30,21872(r31)
	REX_STORE_U32(ctx.r31.u32 + 21872, ctx.r30.u32);
	// stw r30,21876(r31)
	REX_STORE_U32(ctx.r31.u32 + 21876, ctx.r30.u32);
	// stw r30,21880(r31)
	REX_STORE_U32(ctx.r31.u32 + 21880, ctx.r30.u32);
	// stw r30,21900(r31)
	REX_STORE_U32(ctx.r31.u32 + 21900, ctx.r30.u32);
	// stw r30,21896(r31)
	REX_STORE_U32(ctx.r31.u32 + 21896, ctx.r30.u32);
	// stw r30,15432(r31)
	REX_STORE_U32(ctx.r31.u32 + 15432, ctx.r30.u32);
	// stw r7,24736(r31)
	REX_STORE_U32(ctx.r31.u32 + 24736, ctx.r7.u32);
	// stw r30,21932(r31)
	REX_STORE_U32(ctx.r31.u32 + 21932, ctx.r30.u32);
	// stw r30,22184(r31)
	REX_STORE_U32(ctx.r31.u32 + 22184, ctx.r30.u32);
	// stw r30,22064(r31)
	REX_STORE_U32(ctx.r31.u32 + 22064, ctx.r30.u32);
	// stw r30,22092(r31)
	REX_STORE_U32(ctx.r31.u32 + 22092, ctx.r30.u32);
	// stw r30,21916(r31)
	REX_STORE_U32(ctx.r31.u32 + 21916, ctx.r30.u32);
	// stw r30,21920(r31)
	REX_STORE_U32(ctx.r31.u32 + 21920, ctx.r30.u32);
	// stw r30,21976(r31)
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r30.u32);
	// stw r30,21972(r31)
	REX_STORE_U32(ctx.r31.u32 + 21972, ctx.r30.u32);
	// stw r30,21908(r31)
	REX_STORE_U32(ctx.r31.u32 + 21908, ctx.r30.u32);
	// stw r30,21912(r31)
	REX_STORE_U32(ctx.r31.u32 + 21912, ctx.r30.u32);
	// stw r30,22068(r31)
	REX_STORE_U32(ctx.r31.u32 + 22068, ctx.r30.u32);
	// stw r30,22072(r31)
	REX_STORE_U32(ctx.r31.u32 + 22072, ctx.r30.u32);
	// stw r30,22076(r31)
	REX_STORE_U32(ctx.r31.u32 + 22076, ctx.r30.u32);
	// stw r30,22080(r31)
	REX_STORE_U32(ctx.r31.u32 + 22080, ctx.r30.u32);
	// stw r30,22232(r31)
	REX_STORE_U32(ctx.r31.u32 + 22232, ctx.r30.u32);
	// stw r30,22236(r31)
	REX_STORE_U32(ctx.r31.u32 + 22236, ctx.r30.u32);
	// stw r30,22240(r31)
	REX_STORE_U32(ctx.r31.u32 + 22240, ctx.r30.u32);
	// stw r29,22248(r31)
	REX_STORE_U32(ctx.r31.u32 + 22248, ctx.r29.u32);
	// stw r30,22252(r31)
	REX_STORE_U32(ctx.r31.u32 + 22252, ctx.r30.u32);
	// stw r30,1876(r31)
	REX_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
	// stw r30,1880(r31)
	REX_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stwx r30,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// sthx r30,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u16);
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// sthx r30,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u16);
	// sthx r30,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u16);
	// ori r8,r10,22066
	ctx.r8.u64 = ctx.r10.u64 | 22066;
	// sthx r30,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u16);
	// stwx r30,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// stw r30,22288(r31)
	REX_STORE_U32(ctx.r31.u32 + 22288, ctx.r30.u32);
	// stw r30,22292(r31)
	REX_STORE_U32(ctx.r31.u32 + 22292, ctx.r30.u32);
	// stw r29,22296(r31)
	REX_STORE_U32(ctx.r31.u32 + 22296, ctx.r29.u32);
	// stw r30,22300(r31)
	REX_STORE_U32(ctx.r31.u32 + 22300, ctx.r30.u32);
	// stw r30,22304(r31)
	REX_STORE_U32(ctx.r31.u32 + 22304, ctx.r30.u32);
	// stw r30,22340(r31)
	REX_STORE_U32(ctx.r31.u32 + 22340, ctx.r30.u32);
	// stw r30,22344(r31)
	REX_STORE_U32(ctx.r31.u32 + 22344, ctx.r30.u32);
	// stw r30,15256(r31)
	REX_STORE_U32(ctx.r31.u32 + 15256, ctx.r30.u32);
	// stw r29,22408(r31)
	REX_STORE_U32(ctx.r31.u32 + 22408, ctx.r29.u32);
	// stw r29,22412(r31)
	REX_STORE_U32(ctx.r31.u32 + 22412, ctx.r29.u32);
	// stw r9,15264(r31)
	REX_STORE_U32(ctx.r31.u32 + 15264, ctx.r9.u32);
	// beq cr6,0x8815c424
	if (ctx.cr6.eq) goto loc_8815C424;
	// lis r11,30573
	ctx.r11.s64 = 2003632128;
	// ori r10,r11,30258
	ctx.r10.u64 = ctx.r11.u64 | 30258;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c424
	if (ctx.cr6.eq) goto loc_8815C424;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// ori r10,r11,22067
	ctx.r10.u64 = ctx.r11.u64 | 22067;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3f4
	if (ctx.cr6.eq) goto loc_8815C3F4;
	// lis r11,30573
	ctx.r11.s64 = 2003632128;
	// ori r10,r11,30259
	ctx.r10.u64 = ctx.r11.u64 | 30259;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3f4
	if (ctx.cr6.eq) goto loc_8815C3F4;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// ori r10,r11,22081
	ctx.r10.u64 = ctx.r11.u64 | 22081;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c41c
	if (ctx.cr6.eq) goto loc_8815C41C;
	// lis r11,30573
	ctx.r11.s64 = 2003632128;
	// ori r10,r11,30305
	ctx.r10.u64 = ctx.r11.u64 | 30305;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c41c
	if (ctx.cr6.eq) goto loc_8815C41C;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// ori r10,r11,22065
	ctx.r10.u64 = ctx.r11.u64 | 22065;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c414
	if (ctx.cr6.eq) goto loc_8815C414;
	// lis r11,30573
	ctx.r11.s64 = 2003632128;
	// ori r10,r11,30257
	ctx.r10.u64 = ctx.r11.u64 | 30257;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c414
	if (ctx.cr6.eq) goto loc_8815C414;
	// lis r11,19792
	ctx.r11.s64 = 1297088512;
	// ori r10,r11,13363
	ctx.r10.u64 = ctx.r11.u64 | 13363;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c40c
	if (ctx.cr6.eq) goto loc_8815C40C;
	// lis r11,28016
	ctx.r11.s64 = 1836056576;
	// ori r10,r11,13363
	ctx.r10.u64 = ctx.r11.u64 | 13363;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c40c
	if (ctx.cr6.eq) goto loc_8815C40C;
	// lis r11,19792
	ctx.r11.s64 = 1297088512;
	// ori r10,r11,13362
	ctx.r10.u64 = ctx.r11.u64 | 13362;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c404
	if (ctx.cr6.eq) goto loc_8815C404;
	// lis r11,28016
	ctx.r11.s64 = 1836056576;
	// ori r10,r11,13362
	ctx.r10.u64 = ctx.r11.u64 | 13362;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c404
	if (ctx.cr6.eq) goto loc_8815C404;
	// lis r11,19792
	ctx.r11.s64 = 1297088512;
	// ori r10,r11,13395
	ctx.r10.u64 = ctx.r11.u64 | 13395;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3fc
	if (ctx.cr6.eq) goto loc_8815C3FC;
	// lis r11,28016
	ctx.r11.s64 = 1836056576;
	// ori r10,r11,13427
	ctx.r10.u64 = ctx.r11.u64 | 13427;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3fc
	if (ctx.cr6.eq) goto loc_8815C3FC;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// ori r10,r11,22096
	ctx.r10.u64 = ctx.r11.u64 | 22096;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3f4
	if (ctx.cr6.eq) goto loc_8815C3F4;
	// lis r11,30573
	ctx.r11.s64 = 2003632128;
	// ori r10,r11,30320
	ctx.r10.u64 = ctx.r11.u64 | 30320;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3f4
	if (ctx.cr6.eq) goto loc_8815C3F4;
	// lis r11,22358
	ctx.r11.s64 = 1465253888;
	// ori r10,r11,20530
	ctx.r10.u64 = ctx.r11.u64 | 20530;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3e4
	if (ctx.cr6.eq) goto loc_8815C3E4;
	// lis r11,30582
	ctx.r11.s64 = 2004221952;
	// ori r10,r11,28722
	ctx.r10.u64 = ctx.r11.u64 | 28722;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3e4
	if (ctx.cr6.eq) goto loc_8815C3E4;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// ori r10,r11,22098
	ctx.r10.u64 = ctx.r11.u64 | 22098;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3a4
	if (ctx.cr6.eq) goto loc_8815C3A4;
	// lis r11,30573
	ctx.r11.s64 = 2003632128;
	// ori r10,r11,30322
	ctx.r10.u64 = ctx.r11.u64 | 30322;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8815c3a4
	if (ctx.cr6.eq) goto loc_8815C3A4;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8815C3A4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,15536(r31)
	REX_STORE_U32(ctx.r31.u32 + 15536, ctx.r11.u32);
	// stw r29,22288(r31)
	REX_STORE_U32(ctx.r31.u32 + 22288, ctx.r29.u32);
	// lwz r10,22412(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8815c3d0
	if (!ctx.cr6.eq) goto loc_8815C3D0;
	// stw r29,22340(r31)
	REX_STORE_U32(ctx.r31.u32 + 22340, ctx.r29.u32);
	// stw r29,22304(r31)
	REX_STORE_U32(ctx.r31.u32 + 22304, ctx.r29.u32);
	// stw r29,22408(r31)
	REX_STORE_U32(ctx.r31.u32 + 22408, ctx.r29.u32);
	// stw r29,15256(r31)
	REX_STORE_U32(ctx.r31.u32 + 15256, ctx.r29.u32);
	// b 0x8815c42c
	goto loc_8815C42C;
loc_8815C3D0:
	// stw r30,22340(r31)
	REX_STORE_U32(ctx.r31.u32 + 22340, ctx.r30.u32);
	// stw r30,22304(r31)
	REX_STORE_U32(ctx.r31.u32 + 22304, ctx.r30.u32);
	// stw r30,22408(r31)
	REX_STORE_U32(ctx.r31.u32 + 22408, ctx.r30.u32);
	// stw r29,15256(r31)
	REX_STORE_U32(ctx.r31.u32 + 15256, ctx.r29.u32);
	// b 0x8815c42c
	goto loc_8815C42C;
loc_8815C3E4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,15536(r31)
	REX_STORE_U32(ctx.r31.u32 + 15536, ctx.r11.u32);
	// stw r29,15432(r31)
	REX_STORE_U32(ctx.r31.u32 + 15432, ctx.r29.u32);
	// b 0x8815c42c
	goto loc_8815C42C;
loc_8815C3F4:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8815c428
	goto loc_8815C428;
loc_8815C3FC:
	// stw r30,15536(r31)
	REX_STORE_U32(ctx.r31.u32 + 15536, ctx.r30.u32);
	// b 0x8815c42c
	goto loc_8815C42C;
loc_8815C404:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8815c428
	goto loc_8815C428;
loc_8815C40C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8815c428
	goto loc_8815C428;
loc_8815C414:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8815c428
	goto loc_8815C428;
loc_8815C41C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8815c428
	goto loc_8815C428;
loc_8815C424:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8815C428:
	// stw r11,15536(r31)
	REX_STORE_U32(ctx.r31.u32 + 15536, ctx.r11.u32);
loc_8815C42C:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8815c448
	if (ctx.cr6.lt) goto loc_8815C448;
	// stw r29,14852(r31)
	REX_STORE_U32(ctx.r31.u32 + 14852, ctx.r29.u32);
	// stw r29,4012(r31)
	REX_STORE_U32(ctx.r31.u32 + 4012, ctx.r29.u32);
	// stw r30,3944(r31)
	REX_STORE_U32(ctx.r31.u32 + 3944, ctx.r30.u32);
	// stw r29,14820(r31)
	REX_STORE_U32(ctx.r31.u32 + 14820, ctx.r29.u32);
loc_8815C448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815C450;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815c460
	if (ctx.cr6.eq) goto loc_8815C460;
	// stw r30,14852(r31)
	REX_STORE_U32(ctx.r31.u32 + 14852, ctx.r30.u32);
	// b 0x8815c464
	goto loc_8815C464;
loc_8815C460:
	// stw r29,14852(r31)
	REX_STORE_U32(ctx.r31.u32 + 14852, ctx.r29.u32);
loc_8815C464:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8815c48c
	if (!ctx.cr6.eq) goto loc_8815C48C;
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8815c48c
	if (!ctx.cr6.eq) goto loc_8815C48C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815C484;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815c490
	if (ctx.cr6.eq) goto loc_8815C490;
loc_8815C48C:
	// stw r30,15964(r31)
	REX_STORE_U32(ctx.r31.u32 + 15964, ctx.r30.u32);
loc_8815C490:
	// stw r29,3392(r31)
	REX_STORE_U32(ctx.r31.u32 + 3392, ctx.r29.u32);
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8815c4a4
	if (!ctx.cr6.gt) goto loc_8815C4A4;
	// stw r29,3392(r31)
	REX_STORE_U32(ctx.r31.u32 + 3392, ctx.r29.u32);
loc_8815C4A4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8815c4b8
	if (!ctx.cr6.eq) goto loc_8815C4B8;
	// stw r29,3392(r31)
	REX_STORE_U32(ctx.r31.u32 + 3392, ctx.r29.u32);
	// stw r29,20760(r31)
	REX_STORE_U32(ctx.r31.u32 + 20760, ctx.r29.u32);
loc_8815C4B8:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r28,r11,18168
	ctx.r28.s64 = ctx.r11.s64 + 18168;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne cr6,0x8815c564
	if (!ctx.cr6.eq) goto loc_8815C564;
	// bl 0x881a5b88
	ctx.lr = 0x8815C4D4;
	sub_881A5B88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815b408
	ctx.lr = 0x8815C4E0;
	sub_8815B408(ctx, base);
	// bl 0x8815b520
	ctx.lr = 0x8815C4E4;
	sub_8815B520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815b6a0
	ctx.lr = 0x8815C4EC;
	sub_8815B6A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815C4F4;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815c510
	if (ctx.cr6.eq) goto loc_8815C510;
	// lwz r11,22288(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815c510
	if (ctx.cr6.eq) goto loc_8815C510;
	// stw r30,14836(r31)
	REX_STORE_U32(ctx.r31.u32 + 14836, ctx.r30.u32);
	// b 0x8815c514
	goto loc_8815C514;
loc_8815C510:
	// stw r29,14836(r31)
	REX_STORE_U32(ctx.r31.u32 + 14836, ctx.r29.u32);
loc_8815C514:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,22028(r31)
	REX_STORE_U32(ctx.r31.u32 + 22028, ctx.r11.u32);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815C530;
	sub_8815E468(ctx, base);
	// stw r3,22020(r31)
	REX_STORE_U32(ctx.r31.u32 + 22020, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,22028(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22028);
	// bl 0x8815e468
	ctx.lr = 0x8815C54C;
	sub_8815E468(ctx, base);
	// stw r3,22024(r31)
	REX_STORE_U32(ctx.r31.u32 + 22024, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8815c598
	if (!ctx.cr6.eq) goto loc_8815C598;
loc_8815C558:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8815C564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815C56C;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815c578
	if (ctx.cr6.eq) goto loc_8815C578;
	// stw r30,14836(r31)
	REX_STORE_U32(ctx.r31.u32 + 14836, ctx.r30.u32);
loc_8815C578:
	// bl 0x881a5b88
	ctx.lr = 0x8815C57C;
	sub_881A5B88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815b408
	ctx.lr = 0x8815C588;
	sub_8815B408(ctx, base);
	// bl 0x8815b6a0
	ctx.lr = 0x8815C58C;
	sub_8815B6A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815b520
	ctx.lr = 0x8815C594;
	sub_8815B520(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8815C598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x8815C5A0;
	sub_8814D328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815c5b8
	if (ctx.cr6.eq) goto loc_8815C5B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817c440
	ctx.lr = 0x8815C5B0;
	sub_8817C440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815cff4
	if (!ctx.cr6.eq) goto loc_8815CFF4;
loc_8815C5B8:
	// stw r30,3396(r31)
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88183bf0
	ctx.lr = 0x8815C5C4;
	sub_88183BF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815cff4
	if (!ctx.cr6.eq) goto loc_8815CFF4;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x88158dc8
	ctx.lr = 0x8815C5DC;
	sub_88158DC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815cff4
	if (!ctx.cr6.eq) goto loc_8815CFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88166648
	ctx.lr = 0x8815C5EC;
	sub_88166648(ctx, base);
	// mullw r11,r22,r21
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r21.s32);
	// stw r11,21880(r31)
	REX_STORE_U32(ctx.r31.u32 + 21880, ctx.r11.u32);
	// stw r22,21896(r31)
	REX_STORE_U32(ctx.r31.u32 + 21896, ctx.r22.u32);
	// stw r22,22056(r31)
	REX_STORE_U32(ctx.r31.u32 + 22056, ctx.r22.u32);
	// stw r21,21900(r31)
	REX_STORE_U32(ctx.r31.u32 + 21900, ctx.r21.u32);
	// stw r21,22060(r31)
	REX_STORE_U32(ctx.r31.u32 + 22060, ctx.r21.u32);
	// stw r29,3732(r31)
	REX_STORE_U32(ctx.r31.u32 + 3732, ctx.r29.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88159030
	ctx.lr = 0x8815C618;
	sub_88159030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815cff4
	if (!ctx.cr6.eq) goto loc_8815CFF4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815bc60
	ctx.lr = 0x8815C630;
	sub_8815BC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815cff4
	if (!ctx.cr6.eq) goto loc_8815CFF4;
	// addi r11,r31,1247
	ctx.r11.s64 = ctx.r31.s64 + 1247;
	// stw r30,3732(r31)
	REX_STORE_U32(ctx.r31.u32 + 3732, ctx.r30.u32);
	// addi r10,r31,607
	ctx.r10.s64 = ctx.r31.s64 + 607;
	// stw r30,3736(r31)
	REX_STORE_U32(ctx.r31.u32 + 3736, ctx.r30.u32);
	// rlwinm r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,1768(r31)
	REX_STORE_U32(ctx.r31.u32 + 1768, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r11,1772(r31)
	REX_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// stw r11,1764(r31)
	REX_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// stw r8,1760(r31)
	REX_STORE_U32(ctx.r31.u32 + 1760, ctx.r8.u32);
	// stw r30,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// lwz r7,3136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3136);
	// stw r7,3140(r31)
	REX_STORE_U32(ctx.r31.u32 + 3140, ctx.r7.u32);
	// stw r7,3120(r31)
	REX_STORE_U32(ctx.r31.u32 + 3120, ctx.r7.u32);
	// lwz r6,3132(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3132);
	// stw r6,3144(r31)
	REX_STORE_U32(ctx.r31.u32 + 3144, ctx.r6.u32);
	// stw r6,3116(r31)
	REX_STORE_U32(ctx.r31.u32 + 3116, ctx.r6.u32);
	// bl 0x881b30f0
	ctx.lr = 0x8815C688;
	sub_881B30F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819d330
	ctx.lr = 0x8815C690;
	sub_8819D330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c44b0
	ctx.lr = 0x8815C698;
	sub_881C44B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// bl 0x881715c8
	ctx.lr = 0x8815C6A4;
	sub_881715C8(ctx, base);
	// lwz r5,15536(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8815cd68
	if (ctx.cr6.eq) goto loc_8815CD68;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-22512
	ctx.r6.s64 = ctx.r11.s64 + -22512;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C6CC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-26920
	ctx.r6.s64 = ctx.r11.s64 + -26920;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C6F0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-16024
	ctx.r6.s64 = ctx.r11.s64 + -16024;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C714;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-16544
	ctx.r6.s64 = ctx.r11.s64 + -16544;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C738;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-18104
	ctx.r6.s64 = ctx.r11.s64 + -18104;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C75C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-17584
	ctx.r6.s64 = ctx.r11.s64 + -17584;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C780;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-17064
	ctx.r6.s64 = ctx.r11.s64 + -17064;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C7A4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-15760
	ctx.r6.s64 = ctx.r11.s64 + -15760;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C7C8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-15272
	ctx.r6.s64 = ctx.r11.s64 + -15272;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C7EC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r6,r11,-14784
	ctx.r6.s64 = ctx.r11.s64 + -14784;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C810;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-14296
	ctx.r6.s64 = ctx.r11.s64 + -14296;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C834;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2184
	ctx.r4.s64 = ctx.r31.s64 + 2184;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-31680
	ctx.r6.s64 = ctx.r11.s64 + -31680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C858;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2196
	ctx.r4.s64 = ctx.r31.s64 + 2196;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-31000
	ctx.r6.s64 = ctx.r11.s64 + -31000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C87C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2208
	ctx.r4.s64 = ctx.r31.s64 + 2208;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-30248
	ctx.r6.s64 = ctx.r11.s64 + -30248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C8A0;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2220
	ctx.r4.s64 = ctx.r31.s64 + 2220;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-29648
	ctx.r6.s64 = ctx.r11.s64 + -29648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C8C4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2232
	ctx.r4.s64 = ctx.r31.s64 + 2232;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-29112
	ctx.r6.s64 = ctx.r11.s64 + -29112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C8E8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-28696
	ctx.r6.s64 = ctx.r11.s64 + -28696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C90C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2432
	ctx.r4.s64 = ctx.r31.s64 + 2432;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-28280
	ctx.r6.s64 = ctx.r11.s64 + -28280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C930;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,2256
	ctx.r4.s64 = ctx.r31.s64 + 2256;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-27576
	ctx.r6.s64 = ctx.r11.s64 + -27576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C954;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,2284
	ctx.r26.s64 = ctx.r31.s64 + 2284;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13808
	ctx.r6.s64 = ctx.r11.s64 + -13808;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C97C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,2296
	ctx.r27.s64 = ctx.r31.s64 + 2296;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13544
	ctx.r6.s64 = ctx.r11.s64 + -13544;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C9A4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,2308
	ctx.r29.s64 = ctx.r31.s64 + 2308;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13280
	ctx.r6.s64 = ctx.r11.s64 + -13280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C9CC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,2320
	ctx.r30.s64 = ctx.r31.s64 + 2320;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13016
	ctx.r6.s64 = ctx.r11.s64 + -13016;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815C9F4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// stw r26,2384(r31)
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r26.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r27.u32);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r29,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r29.u32);
	// addi r6,r11,-12752
	ctx.r6.s64 = ctx.r11.s64 + -12752;
	// stw r30,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r30.u32);
	// addi r30,r31,2332
	ctx.r30.s64 = ctx.r31.s64 + 2332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CA2C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,2344
	ctx.r26.s64 = ctx.r31.s64 + 2344;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12456
	ctx.r6.s64 = ctx.r11.s64 + -12456;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CA54;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,2356
	ctx.r27.s64 = ctx.r31.s64 + 2356;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12160
	ctx.r6.s64 = ctx.r11.s64 + -12160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CA7C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,2368
	ctx.r29.s64 = ctx.r31.s64 + 2368;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-11864
	ctx.r6.s64 = ctx.r11.s64 + -11864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CAA4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// stw r30,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r30.u32);
	// stw r26,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r26.u32);
	// stw r27,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r27.u32);
	// stw r29,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r29.u32);
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815cb78
	if (ctx.cr6.eq) goto loc_8815CB78;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,22360
	ctx.r26.s64 = ctx.r31.s64 + 22360;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-11568
	ctx.r6.s64 = ctx.r11.s64 + -11568;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CAE8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,22372
	ctx.r27.s64 = ctx.r31.s64 + 22372;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-11264
	ctx.r6.s64 = ctx.r11.s64 + -11264;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CB10;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,22384
	ctx.r29.s64 = ctx.r31.s64 + 22384;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10960
	ctx.r6.s64 = ctx.r11.s64 + -10960;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CB38;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,22396
	ctx.r30.s64 = ctx.r31.s64 + 22396;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10656
	ctx.r6.s64 = ctx.r11.s64 + -10656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CB60;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// stw r26,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r26.u32);
	// stw r27,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r27.u32);
	// stw r29,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r29.u32);
	// stw r30,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r30.u32);
loc_8815CB78:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r4,r31,22348
	ctx.r4.s64 = ctx.r31.s64 + 22348;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10352
	ctx.r6.s64 = ctx.r11.s64 + -10352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CB94;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10160
	ctx.r6.s64 = ctx.r11.s64 + -10160;
	// addi r4,r31,2444
	ctx.r4.s64 = ctx.r31.s64 + 2444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CBB8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10224
	ctx.r6.s64 = ctx.r11.s64 + -10224;
	// addi r4,r31,2456
	ctx.r4.s64 = ctx.r31.s64 + 2456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CBDC;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10288
	ctx.r6.s64 = ctx.r11.s64 + -10288;
	// addi r4,r31,2468
	ctx.r4.s64 = ctx.r31.s64 + 2468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CC00;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-10096
	ctx.r6.s64 = ctx.r11.s64 + -10096;
	// addi r4,r31,2484
	ctx.r4.s64 = ctx.r31.s64 + 2484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CC24;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-10024
	ctx.r6.s64 = ctx.r11.s64 + -10024;
	// addi r4,r31,2496
	ctx.r4.s64 = ctx.r31.s64 + 2496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CC48;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-9952
	ctx.r6.s64 = ctx.r11.s64 + -9952;
	// addi r4,r31,2508
	ctx.r4.s64 = ctx.r31.s64 + 2508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CC6C;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9884
	ctx.r6.s64 = ctx.r11.s64 + -9884;
	// addi r4,r31,2524
	ctx.r4.s64 = ctx.r31.s64 + 2524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CC90;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9848
	ctx.r6.s64 = ctx.r11.s64 + -9848;
	// addi r4,r31,2536
	ctx.r4.s64 = ctx.r31.s64 + 2536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CCB4;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9812
	ctx.r6.s64 = ctx.r11.s64 + -9812;
	// addi r4,r31,2548
	ctx.r4.s64 = ctx.r31.s64 + 2548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815CCD8;
	sub_881B5C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8815cd80
	if (ctx.cr6.lt) goto loc_8815CD80;
	// lwz r11,1976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cd08
	if (!ctx.cr6.eq) goto loc_8815CD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3376(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b56e8
	ctx.lr = 0x8815CD04;
	sub_881B56E8(ctx, base);
	// stw r3,1976(r31)
	REX_STORE_U32(ctx.r31.u32 + 1976, ctx.r3.u32);
loc_8815CD08:
	// lwz r11,1976(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// lwz r11,1968(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cd34
	if (!ctx.cr6.eq) goto loc_8815CD34;
	// bl 0x881b4608
	ctx.lr = 0x8815CD24;
	sub_881B4608(ctx, base);
	// stw r3,1968(r31)
	REX_STORE_U32(ctx.r31.u32 + 1968, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
loc_8815CD34:
	// lwz r10,3216(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3216);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,1972(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1972);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8815cd80
	if (!ctx.cr6.eq) goto loc_8815CD80;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x881b42d8
	ctx.lr = 0x8815CD58;
	sub_881B42D8(ctx, base);
	// stw r3,1972(r31)
	REX_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// b 0x8815cd80
	goto loc_8815CD80;
loc_8815CD68:
	// lwz r11,1968(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,3216(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3216);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x88159e48
	ctx.lr = 0x8815CD78;
	sub_88159E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815c558
	if (!ctx.cr6.eq) goto loc_8815C558;
loc_8815CD80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156858
	ctx.lr = 0x8815CD88;
	sub_88156858(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8815cfc4
	if (ctx.cr6.lt) goto loc_8815CFC4;
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cdc4
	if (!ctx.cr6.eq) goto loc_8815CDC4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CDB8;
	sub_8815E468(ctx, base);
	// stw r3,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
loc_8815CDC4:
	// lis r11,-30694
	ctx.r11.s64 = -2011561984;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r10,r11,10776
	ctx.r10.s64 = ctx.r11.s64 + 10776;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r10,15840(r31)
	REX_STORE_U32(ctx.r31.u32 + 15840, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CDE0;
	sub_8815E468(ctx, base);
	// stw r3,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CDFC;
	sub_8815E468(ctx, base);
	// stw r3,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,288
	ctx.r4.s64 = 288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CE18;
	sub_8815E468(ctx, base);
	// stw r3,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,576
	ctx.r4.s64 = 576;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CE34;
	sub_8815E468(ctx, base);
	// stw r3,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1008
	ctx.r4.s64 = 1008;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CE50;
	sub_8815E468(ctx, base);
	// stw r3,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// lwz r11,1776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815ceac
	if (!ctx.cr6.eq) goto loc_8815CEAC;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8815e510
	ctx.lr = 0x8815CE84;
	sub_8815E510(ctx, base);
	// stw r3,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r3.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r5.u32);
	// lwz r4,1776(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
loc_8815CEAC:
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cefc
	if (!ctx.cr6.eq) goto loc_8815CEFC;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r7,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8815e468
	ctx.lr = 0x8815CEE0;
	sub_8815E468(ctx, base);
	// stw r3,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
loc_8815CEFC:
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cf40
	if (!ctx.cr6.eq) goto loc_8815CF40;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815e468
	ctx.lr = 0x8815CF30;
	sub_8815E468(ctx, base);
	// stw r3,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// stw r3,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
loc_8815CF40:
	// lwz r11,15280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cf74
	if (!ctx.cr6.eq) goto loc_8815CF74;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,832
	ctx.r4.s64 = 832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8815e468
	ctx.lr = 0x8815CF5C;
	sub_8815E468(ctx, base);
	// stw r3,15280(r31)
	REX_STORE_U32(ctx.r31.u32 + 15280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15284(r31)
	REX_STORE_U32(ctx.r31.u32 + 15284, ctx.r10.u32);
loc_8815CF74:
	// lwz r11,1784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815cfc4
	if (!ctx.cr6.eq) goto loc_8815CFC4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815e510
	ctx.lr = 0x8815CF9C;
	sub_8815E510(ctx, base);
	// stw r3,1784(r31)
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r3.u32);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,1788(r31)
	REX_STORE_U32(ctx.r31.u32 + 1788, ctx.r5.u32);
	// lwz r4,1784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815c558
	if (ctx.cr6.eq) goto loc_8815C558;
loc_8815CFC4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8815cff0
	if (!ctx.cr6.eq) goto loc_8815CFF0;
	// addi r29,r31,15984
	ctx.r29.s64 = ctx.r31.s64 + 15984;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8815CFD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881809d0
	ctx.lr = 0x8815CFE4;
	sub_881809D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,2208
	ctx.r29.s64 = ctx.r29.s64 + 2208;
	// bne 0x8815cfd8
	if (!ctx.cr0.eq) goto loc_8815CFD8;
loc_8815CFF0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8815CFF4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881853F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8818543c
	if (ctx.cr6.eq) goto loc_8818543C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88185438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8818543C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_88185600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88185608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22300(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881856b8
	if (ctx.cr6.eq) goto loc_881856B8;
	// lwz r11,22296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22296);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,22300(r3)
	REX_STORE_U32(ctx.r3.u32 + 22300, ctx.r10.u32);
	// bne cr6,0x88185638
	if (!ctx.cr6.eq) goto loc_88185638;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,15264(r3)
	REX_STORE_U32(ctx.r3.u32 + 15264, ctx.r11.u32);
loc_88185638:
	// addi r30,r31,3752
	ctx.r30.s64 = ctx.r31.s64 + 3752;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r29,3752(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b36a0
	ctx.lr = 0x88185650;
	sub_881B36A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36f0
	ctx.lr = 0x8818565C;
	sub_881B36F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88185670
	if (ctx.cr6.eq) goto loc_88185670;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88185670:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,3788(r31)
	REX_STORE_U32(ctx.r31.u32 + 3788, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,3792(r31)
	REX_STORE_U32(ctx.r31.u32 + 3792, ctx.r7.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,3796(r31)
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r4.u32);
	// stw r5,3812(r31)
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r5.u32);
	// stw r11,14824(r31)
	REX_STORE_U32(ctx.r31.u32 + 14824, ctx.r11.u32);
	// stw r6,14828(r31)
	REX_STORE_U32(ctx.r31.u32 + 14828, ctx.r6.u32);
	// stw r10,14832(r31)
	REX_STORE_U32(ctx.r31.u32 + 14832, ctx.r10.u32);
	// bl 0x881664c0
	ctx.lr = 0x881856B8;
	sub_881664C0(ctx, base);
loc_881856B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88188368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88188434
	if (!ctx.cr6.eq) goto loc_88188434;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88188424
	if (ctx.cr6.eq) goto loc_88188424;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x88188424
	if (ctx.cr6.eq) goto loc_88188424;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818842c
	if (ctx.cr6.eq) goto loc_8818842C;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818842c
	if (ctx.cr6.eq) goto loc_8818842C;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8818842c
	if (ctx.cr6.eq) goto loc_8818842C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818840c
	if (ctx.cr6.eq) goto loc_8818840C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818840c
	if (ctx.cr6.eq) goto loc_8818840C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818840c
	if (ctx.cr6.eq) goto loc_8818840C;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88188424
	if (!ctx.cr6.eq) goto loc_88188424;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x88188424
	if (ctx.cr0.eq) goto loc_88188424;
loc_88188404:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8818840C:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188404
	if (!ctx.cr6.eq) goto loc_88188404;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188404
	if (!ctx.cr6.eq) goto loc_88188404;
loc_88188424:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8818842C:
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
loc_88188434:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88188510
	if (ctx.cr6.eq) goto loc_88188510;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x88188510
	if (ctx.cr6.eq) goto loc_88188510;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884ec
	if (ctx.cr6.eq) goto loc_881884EC;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884ec
	if (ctx.cr6.eq) goto loc_881884EC;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884c8
	if (ctx.cr6.eq) goto loc_881884C8;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884c8
	if (ctx.cr6.eq) goto loc_881884C8;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884c8
	if (ctx.cr6.eq) goto loc_881884C8;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88188424
	if (!ctx.cr6.eq) goto loc_88188424;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188508
	if (!ctx.cr6.eq) goto loc_88188508;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_881884C8:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881884e4
	if (!ctx.cr6.eq) goto loc_881884E4;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_881884E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_881884EC:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188508
	if (!ctx.cr6.eq) goto loc_88188508;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_88188508:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_88188510:
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8818B198) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8818B1A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r8,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// beq cr6,0x8818b558
	if (ctx.cr6.eq) goto loc_8818B558;
	// addi r22,r4,8
	ctx.r22.s64 = ctx.r4.s64 + 8;
	// lwz r25,256(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r16,0
	ctx.r16.s64 = 0;
	// addi r21,r22,-1
	ctx.r21.s64 = ctx.r22.s64 + -1;
	// addi r18,r22,1
	ctx.r18.s64 = ctx.r22.s64 + 1;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r19,r21,-1
	ctx.r19.s64 = ctx.r21.s64 + -1;
	// addi r17,r18,1
	ctx.r17.s64 = ctx.r18.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
	// addi r14,r17,1
	ctx.r14.s64 = ctx.r17.s64 + 1;
	// addi r15,r20,-1
	ctx.r15.s64 = ctx.r20.s64 + -1;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
loc_8818B1F4:
	// clrlwi r10,r16,30
	ctx.r10.u64 = ctx.r16.u32 & 0x3;
	// lbz r23,0(r15)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r24,0(r14)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r27,0(r20)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,0(r19)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r31,0(r21)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r30,0(r22)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// lbz r28,0(r18)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// lbz r26,0(r17)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// bne cr6,0x8818b35c
	if (!ctx.cr6.eq) goto loc_8818B35C;
	// subf r10,r24,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r24.u64;
	// lwz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r14,96(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r26,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r28,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r28.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r30,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r6,r31,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r11,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r31,r29,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r29.u64;
	// adde r6,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r4,r27,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// adde r8,r3,r5
	temp.u8 = (ctx.r3.u32 + ctx.r5.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subfc r9,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// adde r9,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r31,r3
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// ld r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r11,r7
	temp.u8 = (ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// adde r11,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8818B35C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8818b4d4
	if (ctx.cr6.lt) goto loc_8818B4D4;
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b3b80
	ctx.lr = 0x8818B38C;
	sub_881B3B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818b514
	if (ctx.cr6.eq) goto loc_8818B514;
	// subf r10,r23,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r23.u64;
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818b3b4
	if (ctx.cr6.lt) goto loc_8818B3B4;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8818B3B4:
	// subf r10,r24,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r24.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818b3d0
	if (ctx.cr6.lt) goto loc_8818B3D0;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8818B3D0:
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r9,r29,r23
	ctx.r9.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r5,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// add r8,r24,r28
	ctx.r8.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// stb r4,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r4.u8);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// addi r6,r26,2
	ctx.r6.s64 = ctx.r26.s64 + 2;
	// rlwinm r7,r24,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r24,r7
	ctx.r7.u64 = ctx.r24.u64 + ctx.r7.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r3,r8,r23
	ctx.r3.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r8,r4,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// add r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 + ctx.r27.u64;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// stb r8,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r8.u8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// lbzx r10,r6,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r25.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// stb r10,0(r21)
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r10.u8);
	// lbzx r8,r4,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// stb r8,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r8.u8);
	// lbzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// stb r7,0(r18)
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r7.u8);
	// lbzx r6,r9,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r6,0(r17)
	REX_STORE_U8(ctx.r17.u32 + 0, ctx.r6.u8);
	// b 0x8818b514
	goto loc_8818B514;
loc_8818B4D4:
	// subf. r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8818b514
	if (ctx.cr0.eq) goto loc_8818B514;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818b514
	if (!ctx.cr6.lt) goto loc_8818B514;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lbzx r8,r10,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r8,0(r21)
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r7,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r7.u8);
loc_8818B514:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,16
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 16, ctx.xer);
	// blt cr6,0x8818b1f4
	if (ctx.cr6.lt) goto loc_8818B1F4;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8818B558:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818b8d8
	if (ctx.cr6.eq) goto loc_8818B8D8;
	// addi r21,r4,-1
	ctx.r21.s64 = ctx.r4.s64 + -1;
	// lwz r25,256(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r19,r21,-1
	ctx.r19.s64 = ctx.r21.s64 + -1;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
	// addi r14,r18,1
	ctx.r14.s64 = ctx.r18.s64 + 1;
	// addi r15,r20,-1
	ctx.r15.s64 = ctx.r20.s64 + -1;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r22,r21,1
	ctx.r22.s64 = ctx.r21.s64 + 1;
loc_8818B594:
	// clrlwi r10,r16,30
	ctx.r10.u64 = ctx.r16.u32 & 0x3;
	// lbz r23,0(r15)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r24,0(r14)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r27,0(r20)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r29,0(r19)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r31,0(r21)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r30,0(r22)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// lbz r28,1(r22)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r22.u32 + 1);
	// lbz r26,0(r18)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// bne cr6,0x8818b6e8
	if (!ctx.cr6.eq) goto loc_8818B6E8;
	// subf r10,r24,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r24.u64;
	// lwz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r14,88(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r26,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r28,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r28.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r17,r31,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r30,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r6,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r5,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subf r8,r29,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r29.u64;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// adde r8,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r4,r27,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subfc r10,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// adde r7,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r5,r17,r3
	ctx.r5.u64 = ctx.r17.u64 ^ ctx.r3.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r5,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r11,r7
	temp.u8 = (ctx.r11.u32 + ctx.r7.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// adde r10,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8818B6E8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8818b85c
	if (ctx.cr6.lt) goto loc_8818B85C;
	// lwz r17,348(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r9,r17,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b3b80
	ctx.lr = 0x8818B718;
	sub_881B3B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818b89c
	if (ctx.cr6.eq) goto loc_8818B89C;
	// subf r11,r23,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r23.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8818b73c
	if (ctx.cr6.lt) goto loc_8818B73C;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8818B73C:
	// subf r11,r24,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r24.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8818b758
	if (ctx.cr6.lt) goto loc_8818B758;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8818B758:
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// add r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// lbzx r3,r7,r25
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stb r3,0(r20)
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r3.u8);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r26,2
	ctx.r3.s64 = ctx.r26.s64 + 2;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// add r8,r24,r8
	ctx.r8.u64 = ctx.r24.u64 + ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r7,r23
	ctx.r8.u64 = ctx.r7.u64 + ctx.r23.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r24,r28
	ctx.r10.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbzx r7,r5,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r7,0(r19)
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r7.u8);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbzx r9,r5,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,0(r21)
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r9.u8);
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// lbzx r7,r3,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// stb r7,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r7.u8);
	// lbzx r6,r10,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stb r6,1(r22)
	REX_STORE_U8(ctx.r22.u32 + 1, ctx.r6.u8);
	// lbzx r5,r8,r25
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// stb r5,0(r18)
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r5.u8);
	// b 0x8818b89c
	goto loc_8818B89C;
loc_8818B85C:
	// subf. r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8818b89c
	if (ctx.cr0.eq) goto loc_8818B89C;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818b89c
	if (!ctx.cr6.lt) goto loc_8818B89C;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r8,0(r21)
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r25.u32);
	// stb r7,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r7.u8);
loc_8818B89C:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,16
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 16, ctx.xer);
	// blt cr6,0x8818b594
	if (ctx.cr6.lt) goto loc_8818B594;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8818B8D8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818bbc4
	if (ctx.cr6.eq) goto loc_8818BBC4;
	// addi r19,r4,16
	ctx.r19.s64 = ctx.r4.s64 + 16;
	// lwz r21,256(r3)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r24,r19,-1
	ctx.r24.s64 = ctx.r19.s64 + -1;
	// addi r17,r19,1
	ctx.r17.s64 = ctx.r19.s64 + 1;
	// addi r22,r24,-1
	ctx.r22.s64 = ctx.r24.s64 + -1;
	// addi r16,r17,1
	ctx.r16.s64 = ctx.r17.s64 + 1;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r23,r22,-1
	ctx.r23.s64 = ctx.r22.s64 + -1;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r20,r16,1
	ctx.r20.s64 = ctx.r16.s64 + 1;
	// addi r15,r23,-1
	ctx.r15.s64 = ctx.r23.s64 + -1;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
loc_8818B918:
	// clrlwi r10,r18,30
	ctx.r10.u64 = ctx.r18.u32 & 0x3;
	// lbz r27,0(r15)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r29,0(r19)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r26,0(r17)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r25,0(r16)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// lbz r28,0(r22)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// lbz r30,0(r24)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// bne cr6,0x8818ba7c
	if (!ctx.cr6.eq) goto loc_8818BA7C;
	// lbz r7,0(r20)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r8,r25,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r25.u64;
	// lwz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r7,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r7.u64;
	// lwz r17,88(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// subf r5,r26,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r7,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subf r4,r29,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r29.u64;
	// adde r7,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// subf r14,r30,r28
	ctx.r14.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r30,r28,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r28.u64;
	// adde r6,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r3,r3,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r5,r31,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subfc r9,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// adde r7,r3,r7
	temp.u8 = (ctx.r3.u32 + ctx.r7.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r11,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r14.s32 >> 31;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// xor r3,r14,r6
	ctx.r3.u64 = ctx.r14.u64 ^ ctx.r6.u64;
	// srawi r4,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 31;
	// subf r7,r6,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subfc r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// adde r8,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r4,r30,r7
	ctx.r4.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// ld r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r3,r7,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r10,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subfc r10,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r10,r3,r6
	temp.u8 = (ctx.r3.u32 + ctx.r6.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_8818BA7C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8818bb54
	if (ctx.cr6.lt) goto loc_8818BB54;
	// lwz r14,348(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b3b80
	ctx.lr = 0x8818BAAC;
	sub_881B3B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818bb88
	if (ctx.cr6.eq) goto loc_8818BB88;
	// subf r11,r27,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r27.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x8818bad0
	if (ctx.cr6.lt) goto loc_8818BAD0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8818BAD0:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// add r9,r28,r27
	ctx.r9.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r3,r5,r21
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// stb r3,0(r23)
	REX_STORE_U8(ctx.r23.u32 + 0, ctx.r3.u8);
	// lbzx r8,r10,r21
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// stb r8,0(r22)
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r21
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r21.u32);
	// stb r7,0(r24)
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r7.u8);
	// b 0x8818bb88
	goto loc_8818BB88;
loc_8818BB54:
	// subf. r11,r30,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8818bb88
	if (ctx.cr0.eq) goto loc_8818BB88;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// lwz r9,348(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818bb88
	if (!ctx.cr6.lt) goto loc_8818BB88;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r9,r10,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// stb r9,0(r24)
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r9.u8);
loc_8818BB88:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// add r23,r23,r11
	ctx.r23.u64 = ctx.r23.u64 + ctx.r11.u64;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// cmpwi cr6,r18,16
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 16, ctx.xer);
	// blt cr6,0x8818b918
	if (ctx.cr6.lt) goto loc_8818B918;
loc_8818BBC4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A5F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881A5F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x881a617c
	if (ctx.cr6.gt) goto loc_881A617C;
	// lis r12,-30694
	ctx.r12.s64 = -2011561984;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24452
	ctx.r12.s64 = ctx.r12.s64 + 24452;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_881A5FC0;
	case 1:
		goto loc_881A5FCC;
	case 2:
		goto loc_881A5FD8;
	case 3:
		goto loc_881A5FE4;
	case 4:
		goto loc_881A5FF0;
	case 5:
		goto loc_881A6030;
	case 6:
		goto loc_881A603C;
	case 7:
		goto loc_881A6048;
	case 8:
		goto loc_881A6050;
	case 9:
		goto loc_881A6090;
	case 10:
		goto loc_881A60D0;
	case 11:
		goto loc_881A6110;
	case 12:
		goto loc_881A6118;
	case 13:
		goto loc_881A6158;
	case 14:
		goto loc_881A6160;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_881A5FC0:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// b 0x881a6168
	goto loc_881A6168;
loc_881A5FCC:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// b 0x881a6168
	goto loc_881A6168;
loc_881A5FD8:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// b 0x881a6168
	goto loc_881A6168;
loc_881A5FE4:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// b 0x881a6168
	goto loc_881A6168;
loc_881A5FF0:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A600C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881A6028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881A6030:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// b 0x881a6168
	goto loc_881A6168;
loc_881A603C:
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// b 0x881a6168
	goto loc_881A6168;
loc_881A6048:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x881a6164
	goto loc_881A6164;
loc_881A6050:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A606C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881A6088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881A6090:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A60AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881A60C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881A60D0:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A60EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881A6108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881A6110:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x881a6164
	goto loc_881A6164;
loc_881A6118:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A6134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881A6150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881A6158:
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x881a6164
	goto loc_881A6164;
loc_881A6160:
	// li r6,16
	ctx.r6.s64 = 16;
loc_881A6164:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_881A6168:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A617C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A617C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A93A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881A93A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r10,212(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r8,216(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,21916(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21916);
	// lwz r6,204(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r5,208(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r26,-10072(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -10072);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r25,r8,r5
	ctx.r25.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// beq cr6,0x881a943c
	if (ctx.cr6.eq) goto loc_881A943C;
	// lwz r11,15628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a93f0
	if (!ctx.cr6.eq) goto loc_881A93F0;
	// lwz r7,3776(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// b 0x881a93f4
	goto loc_881A93F4;
loc_881A93F0:
	// lwz r7,3832(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
loc_881A93F4:
	// lwz r10,21924(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21924);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,3832(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x881a9480
	if (!ctx.cr6.gt) goto loc_881A9480;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881A9410:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r5,128(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a9410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9410;
	// b 0x881a9480
	goto loc_881A9480;
loc_881A943C:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3776(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r10,3832(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r27,188(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,204(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881a9480
	if (!ctx.cr6.gt) goto loc_881A9480;
loc_881A9460:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881A9470;
	sub_880547A0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bne 0x881a9460
	if (!ctx.cr0.eq) goto loc_881A9460;
loc_881A9480:
	// lwz r11,21920(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a9534
	if (ctx.cr6.eq) goto loc_881A9534;
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a94a4
	if (!ctx.cr6.eq) goto loc_881A94A4;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// b 0x881a94ac
	goto loc_881A94AC;
loc_881A94A4:
	// lwz r8,3836(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r7,3840(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
loc_881A94AC:
	// lwz r10,21928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21928);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r11,3836(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ble cr6,0x881a94f0
	if (!ctx.cr6.gt) goto loc_881A94F0;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_881A94C8:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r4,128(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 128);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a94c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A94C8;
loc_881A94F0:
	// lwz r11,3840(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881a95bc
	if (!ctx.cr6.gt) goto loc_881A95BC;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// subf r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881A9504:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbz r5,128(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 128);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881a9504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A9504;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881A9534:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3780(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r10,3836(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r27,200(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r28,208(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881a9578
	if (!ctx.cr6.gt) goto loc_881A9578;
loc_881A9558:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881A9568;
	sub_880547A0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bne 0x881a9558
	if (!ctx.cr0.eq) goto loc_881A9558;
loc_881A9578:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r28,200(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,3840(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r29,208(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x881a95bc
	if (!ctx.cr6.gt) goto loc_881A95BC;
loc_881A959C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x881A95AC;
	sub_880547A0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bne 0x881a959c
	if (!ctx.cr0.eq) goto loc_881A959C;
loc_881A95BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AC0A8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881AC0B0;
	__savegprlr_27(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r31,r6,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
loc_881AC0D0:
	// lbzx r30,r31,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r29,-2(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rotlwi r30,r30,16
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 16);
	// lbz r28,1(r5)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r27,0(r5)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// or r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 | ctx.r29.u64;
	// rotlwi r29,r28,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 | ctx.r27.u64;
	// or r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// lbzx r29,r5,r8
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r28,1(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r28,r28,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stwx r30,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r30.u32);
	// lbz r30,-1(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r29,3(r5)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r28,2(r5)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r27,-1(r7)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// rotlwi r27,r27,16
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 16);
	// rotlwi r29,r29,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// or r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 | ctx.r30.u64;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// lbz r29,2(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,3(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r28,r28,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r30.u32);
	// lbz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,5(r5)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// lbz r28,4(r5)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lbz r27,0(r7)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r27,r27,16
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 16);
	// rotlwi r29,r29,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// or r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 | ctx.r30.u64;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// lbz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r28,r28,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// lbz r30,1(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r29,7(r5)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r28,6(r5)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,1(r7)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r27,r27,16
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 16);
	// rotlwi r29,r29,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// or r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 | ctx.r30.u64;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r30,r30,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// or r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r29,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r29.u32);
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lbz r29,6(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// bdnz 0x881ac0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881AC0D0;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AE530) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881AE538;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x881ae400
	ctx.lr = 0x881AE568;
	sub_881AE400(ctx, base);
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881ae580
	if (!ctx.cr6.eq) goto loc_881AE580;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881ae6ac
	goto loc_881AE6AC;
loc_881AE580:
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881ae66c
	if (ctx.cr6.lt) goto loc_881AE66C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881ae664
	if (!ctx.cr6.lt) goto loc_881AE664;
loc_881AE5CC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ae5f8
	if (ctx.cr6.lt) goto loc_881AE5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881AE5E8;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881ae5cc
	if (ctx.cr6.eq) goto loc_881AE5CC;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881ae6ac
	goto loc_881AE6AC;
loc_881AE5F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r8,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r3.u8 & 0x7F));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881AE664:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881ae6ac
	goto loc_881AE6AC;
loc_881AE66C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881AE674;
	sub_88156500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881AE67C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881AE694;
	sub_88156500(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881ae67c
	if (ctx.cr6.lt) goto loc_881AE67C;
loc_881AE6AC:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ae6c8
	if (ctx.cr6.eq) goto loc_881AE6C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881AE6C8:
	// cmpwi cr6,r30,1099
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1099, ctx.xer);
	// beq cr6,0x881ae6e0
	if (ctx.cr6.eq) goto loc_881AE6E0;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lbzx r28,r30,r27
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lbzx r30,r30,r11
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x881ae838
	goto loc_881AE838;
loc_881AE6E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881ae750
	if (!ctx.cr6.lt) goto loc_881AE750;
loc_881AE6F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae750
	if (ctx.cr6.eq) goto loc_881AE750;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae740
	if (!ctx.cr0.lt) goto loc_881AE740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE740;
	sub_88156678(ctx, base);
loc_881AE740:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae6f8
	if (ctx.cr6.gt) goto loc_881AE6F8;
loc_881AE750:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae788
	if (!ctx.cr0.lt) goto loc_881AE788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE788;
	sub_88156678(ctx, base);
loc_881AE788:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881ae800
	if (!ctx.cr6.lt) goto loc_881AE800;
loc_881AE7A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae800
	if (ctx.cr6.eq) goto loc_881AE800;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae7f0
	if (!ctx.cr0.lt) goto loc_881AE7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE7F0;
	sub_88156678(ctx, base);
loc_881AE7F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae7a8
	if (ctx.cr6.gt) goto loc_881AE7A8;
loc_881AE800:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae838
	if (!ctx.cr0.lt) goto loc_881AE838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE838;
	sub_88156678(ctx, base);
loc_881AE838:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,244(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881ae860
	if (!ctx.cr6.gt) goto loc_881AE860;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r25)
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x881ae87c
	goto loc_881AE87C;
loc_881AE860:
	// lwz r10,240(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881ae878
	if (!ctx.cr6.lt) goto loc_881AE878;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r25)
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// b 0x881ae87c
	goto loc_881AE87C;
loc_881AE878:
	// stb r11,0(r25)
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_881AE87C:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r10,244(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 244);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881ae8a4
	if (!ctx.cr6.gt) goto loc_881AE8A4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,1(r25)
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r11.u8);
	// b 0x881ae8c0
	goto loc_881AE8C0;
loc_881AE8A4:
	// lwz r10,240(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881ae8bc
	if (!ctx.cr6.lt) goto loc_881AE8BC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,1(r25)
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r11.u8);
	// b 0x881ae8c0
	goto loc_881AE8C0;
loc_881AE8BC:
	// stb r11,1(r25)
	REX_STORE_U8(ctx.r25.u32 + 1, ctx.r11.u8);
loc_881AE8C0:
	// lwz r11,456(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 456);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,336(r26)
	REX_STORE_U32(ctx.r26.u32 + 336, ctx.r10.u32);
	// bne cr6,0x881ae9a4
	if (!ctx.cr6.eq) goto loc_881AE9A4;
	// lbz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881ae8f4
	if (!ctx.cr6.eq) goto loc_881AE8F4;
	// lbz r11,1(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881ae9a4
	if (ctx.cr6.eq) goto loc_881AE9A4;
loc_881AE8F4:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881ae968
	if (!ctx.cr6.lt) goto loc_881AE968;
loc_881AE910:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ae968
	if (ctx.cr6.eq) goto loc_881AE968;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881ae958
	if (!ctx.cr0.lt) goto loc_881AE958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE958;
	sub_88156678(ctx, base);
loc_881AE958:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ae910
	if (ctx.cr6.gt) goto loc_881AE910;
loc_881AE968:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881ae9a0
	if (!ctx.cr0.lt) goto loc_881AE9A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AE9A0;
	sub_88156678(ctx, base);
loc_881AE9A0:
	// stw r30,336(r26)
	REX_STORE_U32(ctx.r26.u32 + 336, ctx.r30.u32);
loc_881AE9A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B58F8) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x881b5924
	if (ctx.cr6.eq) goto loc_881B5924;
	// stw r31,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// b 0x881b5928
	goto loc_881B5928;
loc_881B5924:
	// stw r7,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
loc_881B5928:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881b5a24
	if (!ctx.cr6.gt) goto loc_881B5A24;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r9,r11,-2536
	ctx.r9.s64 = ctx.r11.s64 + -2536;
loc_881B5944:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b59e0
	if (ctx.cr6.eq) goto loc_881B59E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881b59e0
	if (ctx.cr6.eq) goto loc_881B59E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881b59cc
	if (ctx.cr6.eq) goto loc_881B59CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x881b59cc
	if (ctx.cr6.eq) goto loc_881B59CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881b5988
	if (!ctx.cr6.eq) goto loc_881B5988;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-1480
	ctx.r11.s64 = ctx.r9.s64 + -1480;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// addi r11,r9,-1496
	ctx.r11.s64 = ctx.r9.s64 + -1496;
	// b 0x881b59f0
	goto loc_881B59F0;
loc_881B5988:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x881b59bc
	if (ctx.cr6.eq) goto loc_881B59BC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x881b59b4
	if (ctx.cr6.eq) goto loc_881B59B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x881b59f4
	if (!ctx.cr6.gt) goto loc_881B59F4;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-144
	ctx.r11.s64 = ctx.r9.s64 + -144;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x881b59f0
	goto loc_881B59F0;
loc_881B59B4:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x881b5a10
	if (!ctx.cr6.eq) goto loc_881B5A10;
loc_881B59BC:
	// addi r11,r9,-1744
	ctx.r11.s64 = ctx.r9.s64 + -1744;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x881b5a10
	goto loc_881B5A10;
loc_881B59CC:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-464
	ctx.r11.s64 = ctx.r9.s64 + -464;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// addi r11,r9,-784
	ctx.r11.s64 = ctx.r9.s64 + -784;
	// b 0x881b59f0
	goto loc_881B59F0;
loc_881B59E0:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-1104
	ctx.r11.s64 = ctx.r9.s64 + -1104;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// addi r11,r9,-1424
	ctx.r11.s64 = ctx.r9.s64 + -1424;
loc_881B59F0:
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_881B59F4:
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r5,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// slw r5,r31,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r5,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
loc_881B5A10:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881b5944
	if (ctx.cr6.lt) goto loc_881B5944;
loc_881B5A24:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881B8060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B8068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x881b8108
	if (ctx.cr6.lt) goto loc_881B8108;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b8090
	if (ctx.cr6.eq) goto loc_881B8090;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881b809c
	if (!ctx.cr6.eq) goto loc_881B809C;
loc_881B8090:
	// lwz r11,20760(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b80a8
	if (ctx.cr6.eq) goto loc_881B80A8;
loc_881B809C:
	// lwz r11,284(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b8108
	if (!ctx.cr6.eq) goto loc_881B8108;
loc_881B80A8:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_881B80B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881b80f8
	if (!ctx.cr6.eq) goto loc_881B80F8;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b80e0
	if (!ctx.cr0.lt) goto loc_881B80E0;
	// bl 0x88156678
	ctx.lr = 0x881B80E0;
	sub_88156678(ctx, base);
loc_881B80E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x881b80b0
	if (ctx.cr6.lt) goto loc_881B80B0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x881b8100
	if (ctx.cr6.eq) goto loc_881B8100;
loc_881B80F8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// b 0x881b82ac
	goto loc_881B82AC;
loc_881B8100:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x881b82ac
	goto loc_881B82AC;
loc_881B8108:
	// lwz r31,84(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881b817c
	if (!ctx.cr6.lt) goto loc_881B817C;
loc_881B8124:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b817c
	if (ctx.cr6.eq) goto loc_881B817C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b816c
	if (!ctx.cr0.lt) goto loc_881B816C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B816C;
	sub_88156678(ctx, base);
loc_881B816C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b8124
	if (ctx.cr6.gt) goto loc_881B8124;
loc_881B817C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b81b4
	if (!ctx.cr0.lt) goto loc_881B81B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B81B4;
	sub_88156678(ctx, base);
loc_881B81B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,1952(r28)
	REX_STORE_U32(ctx.r28.u32 + 1952, ctx.r30.u32);
	// bne cr6,0x881b82b0
	if (!ctx.cr6.eq) goto loc_881B82B0;
	// lwz r11,15536(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x881b8280
	if (ctx.cr6.lt) goto loc_881B8280;
	// lwz r31,84(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881b8240
	if (!ctx.cr6.lt) goto loc_881B8240;
loc_881B81E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8240
	if (ctx.cr6.eq) goto loc_881B8240;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b8230
	if (!ctx.cr0.lt) goto loc_881B8230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8230;
	sub_88156678(ctx, base);
loc_881B8230:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b81e8
	if (ctx.cr6.gt) goto loc_881B81E8;
loc_881B8240:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b8278
	if (!ctx.cr0.lt) goto loc_881B8278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8278;
	sub_88156678(ctx, base);
loc_881B8278:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// b 0x881b82ac
	goto loc_881B82AC;
loc_881B8280:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b82a8
	if (!ctx.cr0.lt) goto loc_881B82A8;
	// bl 0x88156678
	ctx.lr = 0x881B82A8;
	sub_88156678(ctx, base);
loc_881B82A8:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_881B82AC:
	// stw r11,1952(r28)
	REX_STORE_U32(ctx.r28.u32 + 1952, ctx.r11.u32);
loc_881B82B0:
	// lwz r31,84(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881b8324
	if (!ctx.cr6.lt) goto loc_881B8324;
loc_881B82CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b8324
	if (ctx.cr6.eq) goto loc_881B8324;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881b8314
	if (!ctx.cr0.lt) goto loc_881B8314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B8314;
	sub_88156678(ctx, base);
loc_881B8314:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881b82cc
	if (ctx.cr6.gt) goto loc_881B82CC;
loc_881B8324:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881b835c
	if (!ctx.cr0.lt) goto loc_881B835C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881B835C;
	sub_88156678(ctx, base);
loc_881B835C:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// stw r11,1956(r28)
	REX_STORE_U32(ctx.r28.u32 + 1956, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C3C48) {
	REX_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// li r3,255
	ctx.r3.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3C5C:
	// lhz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r5,r8,128
	ctx.r5.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x881c3ca0
	if (!ctx.cr6.gt) goto loc_881C3CA0;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_881C3CA0:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x881c3cb4
	if (!ctx.cr6.gt) goto loc_881C3CB4;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 & ctx.r3.u64;
loc_881C3CB4:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x881c3cc8
	if (!ctx.cr6.gt) goto loc_881C3CC8;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_881C3CC8:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881c3cdc
	if (!ctx.cr6.gt) goto loc_881C3CDC;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_881C3CDC:
	// stb r9,-2(r10)
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r9.u8);
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r8,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r5,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r5.u8);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// addi r8,r5,128
	ctx.r8.s64 = ctx.r5.s64 + 128;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x881c3d30
	if (!ctx.cr6.gt) goto loc_881C3D30;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_881C3D30:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// ble cr6,0x881c3d44
	if (!ctx.cr6.gt) goto loc_881C3D44;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
loc_881C3D44:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x881c3d58
	if (!ctx.cr6.gt) goto loc_881C3D58;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_881C3D58:
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881c3d6c
	if (!ctx.cr6.gt) goto loc_881C3D6C;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_881C3D6C:
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stb r5,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r4,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r9,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x881c3c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3C5C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881C5DE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881C5DE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r4)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r25,316(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r24,320(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r31,84(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r15,0(r20)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r19,28(r20)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + 28);
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
	// lwz r17,32(r20)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r20.u32 + 32);
	// lwz r16,4(r20)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// beq cr6,0x881c6100
	if (ctx.cr6.eq) goto loc_881C6100;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r23,r11,32768
	ctx.r23.u64 = ctx.r11.u64 | 32768;
	// li r14,64
	ctx.r14.s64 = 64;
	// b 0x881c5e48
	goto loc_881C5E48;
loc_881C5E44:
	// lwz r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881C5E48:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x881c5e60
	if (!ctx.cr6.eq) goto loc_881C5E60;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c5fa8
	goto loc_881C5FA8;
loc_881C5E60:
	// lbz r4,8(r15)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r15)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c5f58
	if (ctx.cr6.lt) goto loc_881C5F58;
	// clrlwi r10,r30,28
	ctx.r10.u64 = ctx.r30.u32 & 0xF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sradi r6,r8,63
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s64 >> 63;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r5,r8,1,62
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// extsw r29,r6
	ctx.r29.s64 = ctx.r6.s32;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// bge 0x881c5f50
	if (!ctx.cr0.lt) goto loc_881C5F50;
loc_881C5EB8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c5ee4
	if (ctx.cr6.lt) goto loc_881C5EE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C5ED4;
	sub_88156440(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c5eb8
	if (ctx.cr6.eq) goto loc_881C5EB8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c5fa8
	goto loc_881C5FA8;
loc_881C5EE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881C5F50:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c5fa8
	goto loc_881C5FA8;
loc_881C5F58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C5F60;
	sub_88156500(ctx, base);
loc_881C5F60:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881C5F78;
	sub_88156500(ctx, base);
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c5f60
	if (ctx.cr6.lt) goto loc_881C5F60;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sradi r10,r11,63
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 63;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// bl 0x88156500
	ctx.lr = 0x881C5FA8;
	sub_88156500(ctx, base);
loc_881C5FA8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbzx r5,r11,r17
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// add r7,r5,r28
	ctx.r7.u64 = ctx.r5.u64 + ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// xor r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// lbzx r11,r7,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r22.u32);
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x881c5fe8
	if (!ctx.cr6.lt) goto loc_881C5FE8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthx r4,r9,r27
	REX_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r4.u16);
	// b 0x881c6040
	goto loc_881C6040;
loc_881C5FE8:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881c6010
	if (!ctx.cr6.eq) goto loc_881C6010;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthx r4,r9,r27
	REX_STORE_U16(ctx.r9.u32 + ctx.r27.u32, ctx.r4.u16);
	// b 0x881c6040
	goto loc_881C6040;
loc_881C6010:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x881c6030
	if (!ctx.cr6.gt) goto loc_881C6030;
	// lwz r8,1764(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// mullw r9,r10,r25
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r3,r9,r24
	ctx.r3.u64 = ctx.r9.u64 + ctx.r24.u64;
	// stwx r3,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u32);
	// b 0x881c6040
	goto loc_881C6040;
loc_881C6030:
	// lwz r9,1764(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// subf r3,r24,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r24.u64;
	// stwx r3,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
loc_881C6040:
	// subf r8,r6,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r6.u64;
	// addi r28,r7,1
	ctx.r28.s64 = ctx.r7.s64 + 1;
	// subfc r9,r18,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r18.u32;
	ctx.r9.u64 = ctx.r6.u64 - ctx.r18.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfze r4,r21
	temp.u8 = ~ctx.r21.u32 + ctx.xer.ca < ~ctx.r21.u32;
	ctx.r4.u64 = ~ctx.r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// subfc r9,r14,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r14.u32;
	ctx.r9.u64 = ctx.r28.u64 - ctx.r14.u64;
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// subfze r7,r21
	temp.u8 = ~ctx.r21.u32 + ctx.xer.ca < ~ctx.r21.u32;
	ctx.r7.u64 = ~ctx.r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x881c5e48
	if (ctx.cr6.eq) goto loc_881C5E48;
	// cmpw cr6,r6,r16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r16.s32, ctx.xer);
	// bne cr6,0x881c6100
	if (!ctx.cr6.eq) goto loc_881C6100;
	// subf r9,r5,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bge cr6,0x881c60a0
	if (!ctx.cr6.lt) goto loc_881C60A0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u16);
	// b 0x881c60d8
	goto loc_881C60D8;
loc_881C60A0:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881c60c8
	if (!ctx.cr6.eq) goto loc_881C60C8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u16);
	// b 0x881c60d8
	goto loc_881C60D8;
loc_881C60C8:
	// lwz r10,1764(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_881C60D8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// neg r7,r29
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c54f8
	ctx.lr = 0x881C60F4;
	sub_881C54F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x881c5e44
	if (ctx.cr6.lt) goto loc_881C5E44;
loc_881C6100:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_881C6108:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lhzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// lwz r5,1764(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// mullw r7,r3,r25
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// lhzx r9,r4,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// xor r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r24.u64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r8,r4,r25
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// xor r10,r9,r24
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r24.u64;
	// subfic r3,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfe r9,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r5,1764(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 1764);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r6,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// blt cr6,0x881c6108
	if (ctx.cr6.lt) goto loc_881C6108;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CDB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,0(r7)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r31,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r31.u64);
	// add r31,r3,r9
	ctx.r31.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v62,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// std r3,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v61,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ldux r3,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r3,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdux r3,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r5.u32 = ea;
	// lvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r3,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdux r3,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r5.u32 = ea;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v57,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r3,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdux r3,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r5.u32 = ea;
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v55,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r3,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// lvx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v54,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdux r3,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r5.u32 = ea;
	// lvx128 v53,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v53,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r3,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// lvx128 v52,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdux r3,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r5.u32 = ea;
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v51,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r3,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// lvx128 v50,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ldux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stdux r3,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r5.u32 = ea;
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// stdx r7,r4,r10
	REX_STORE_U64(ctx.r4.u32 + ctx.r10.u32, ctx.r7.u64);
	// lvx128 v48,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ldx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// stdx r6,r5,r10
	REX_STORE_U64(ctx.r5.u32 + ctx.r10.u32, ctx.r6.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_881D86B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881D86B8;
	__savegprlr_14(ctx, base);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r11,-26144
	ctx.r5.s64 = ctx.r11.s64 + -26144;
	// stw r5,-572(r1)
	REX_STORE_U32(ctx.r1.u32 + -572, ctx.r5.u32);
	// beq cr6,0x881d8cb8
	if (ctx.cr6.eq) goto loc_881D8CB8;
	// addi r11,r1,-560
	ctx.r11.s64 = ctx.r1.s64 + -560;
	// stw r7,-560(r1)
	REX_STORE_U32(ctx.r1.u32 + -560, ctx.r7.u32);
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lvx128 v1,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	// vspltish v17,1
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x1)));
	// li r10,2
	ctx.r10.s64 = 2;
	// vspltish v21,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x2)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v22,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vaddshs v13,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// subf r30,r8,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r8.u64;
	// vspltish v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x3)));
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// subf r28,r8,r30
	ctx.r28.u64 = ctx.r30.u64 - ctx.r8.u64;
	// vspltish v16,5
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_set1_epi16(short(0x5)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v19,8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_set1_epi16(short(0x8)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// vspltish v18,15
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_set1_epi16(short(0xF)));
	// add r24,r29,r8
	ctx.r24.u64 = ctx.r29.u64 + ctx.r8.u64;
	// vspltisw v15,4
	simde_mm_store_si128((simde__m128i*)ctx.v15.u32, simde_mm_set1_epi32(int(0x4)));
	// subf r23,r8,r28
	ctx.r23.u64 = ctx.r28.u64 - ctx.r8.u64;
	// vupkhsh v14,v13
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
loc_881D8744:
	// lvlx v13,r11,r23
	temp.u32 = ctx.r11.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvlx v12,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v29,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v2,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v31,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v10,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v27,r11,r24
	temp.u32 = ctx.r11.u32 + ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v6,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v3,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx v28,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v2,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v23,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v25,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v27,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmrghb v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v20,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v13,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v31,v6,v25
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v24,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v30,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v26,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v3,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor128 v62,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v20,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vor128 v61,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vsubshs v13,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vor128 v60,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v11,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v10,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vor128 v58,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v9,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v8,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vcmpgtuh v3,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtuh v2,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmaxsh v20,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmaxsh v30,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v13,v13,v24
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vmaxsh v26,v11,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vmaxsh v12,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vmaxsh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v11,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtuh v2,v7,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vcmpgtuh v20,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v30,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vcmpgtuh v13,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v26,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpgtuh v28,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vcmpgtuh v12,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v30,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v28,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v3,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v20,v3,v16
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), 0xFFFF);
	// mfocrf r27,2
	ctx.r27.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r10,r27,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// vor128 v11,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vor128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v9,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v8,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// beq cr6,0x881d8bb8
	if (ctx.cr6.eq) goto loc_881D8BB8;
	// vminsh v30,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vminsh v28,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v26,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v57,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v56,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v55,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaxsh v0,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v2,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v54,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v11,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v28,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vminsh v2,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v26,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v30,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vminsh v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v28,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsh. v30,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), 0xFFFF);
	// vupkhsh v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v28,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v14.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// vand128 v63,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// mfocrf r10,2
	ctx.r10.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v2,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v14.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)), 0xF);
	// mfocrf r25,2
	ctx.r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v28,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v15.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// mfocrf r26,2
	ctx.r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v3,v26,v15
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v15.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), 0xF);
	// mfocrf r22,2
	ctx.r22.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r21,r26,0,26,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// vor128 v12,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// vor128 v13,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v11,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// beq cr6,0x881d8944
	if (ctx.cr6.eq) goto loc_881D8944;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x881d895c
	if (!ctx.cr6.eq) goto loc_881D895C;
loc_881D8944:
	// rlwinm r10,r26,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x881d8bb8
	if (ctx.cr6.eq) goto loc_881D8BB8;
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x881d8bb8
	if (ctx.cr6.eq) goto loc_881D8BB8;
loc_881D895C:
	// vsubshs v30,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// addi r26,r1,-464
	ctx.r26.s64 = ctx.r1.s64 + -464;
	// vsubshs v28,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r25,r1,-416
	ctx.r25.s64 = ctx.r1.s64 + -416;
	// vor128 v53,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r21,r1,-384
	ctx.r21.s64 = ctx.r1.s64 + -384;
	// vaddshs v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r20,r1,-352
	ctx.r20.s64 = ctx.r1.s64 + -352;
	// vsubshs v26,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// addi r22,r1,-288
	ctx.r22.s64 = ctx.r1.s64 + -288;
	// vmaxsh v28,v28,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vaddshs v31,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v2,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v26,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v0,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtsh v30,v22,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// addi r26,r1,-224
	ctx.r26.s64 = ctx.r1.s64 + -224;
	// vaddshs v0,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vcmpgtsh v28,v22,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vand128 v49,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vandc128 v48,v8,v30
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vand128 v51,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vandc128 v50,v6,v28
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvx128 v31,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vxor128 v31,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vor128 v52,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vaddshs v26,v2,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// stvx128 v28,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v28,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v2,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v47,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vaddshs v5,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v2,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor128 v45,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// lvx128 v27,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v30,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// addi r25,r1,-448
	ctx.r25.s64 = ctx.r1.s64 + -448;
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v5,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v29,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v31,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v5,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// lvx128 v7,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-256
	ctx.r26.s64 = ctx.r1.s64 + -256;
	// vaddshs v25,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v31,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v46,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v30,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v27,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vandc128 v44,v8,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vandc128 v43,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v42,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v31,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v0,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v26,v5,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v0,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v5,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v28,v5,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v26,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v3,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v41,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v40,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v26,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v2,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v39,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v28,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v3,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v29,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vand128 v36,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v2,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v3,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v31,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v30,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsrah v29,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v37,v40,v44
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vsrah v28,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v32,v36,v47
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vsrah v25,v30,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v33,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vpkshus128 v34,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v37.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vand128 v59,v29,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v38,v41,v43
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vpkshus128 v60,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v32.s16), simde_mm_load_si128((simde__m128i*)ctx.v32.s16)));
	// vsrah v26,v31,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v61,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vand128 v58,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v5,v39,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vpkshus128 v35,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)ctx.v38.s16)));
	// vandc128 v57,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvewx128 v34,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vand128 v56,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v34,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v4,v59,v33
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// stvewx128 v60,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// vandc128 v55,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vpkshus128 v62,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v54,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v60,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v51,v58,v61
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vxor128 v50,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vpkshus128 v49,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvewx128 v35,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v0,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vxor128 v48,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvewx128 v35,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v47,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v51.s16)));
	// vor128 v7,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vpkshus128 v44,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v50.s16), simde_mm_load_si128((simde__m128i*)ctx.v50.s16)));
	// stvewx128 v62,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v1,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vpkshus128 v43,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v48.s16), simde_mm_load_si128((simde__m128i*)ctx.v48.s16)));
	// vor128 v27,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// stvewx128 v49,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x881d8bc0
	goto loc_881D8BC0;
loc_881D8BB8:
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
loc_881D8BC0:
	// rlwinm r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// beq cr6,0x881d8cb0
	if (ctx.cr6.eq) goto loc_881D8CB0;
	// vsubshs v8,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vsubshs v6,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v23,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v3,v23
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v28,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v30,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v24,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v23,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v11,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v3,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v8,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v6,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v2,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v29,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v30,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v10,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v11,v27,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v28,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmaxsh v27,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v26,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v25,v10,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v27,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v13,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vxor128 v42,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsrah v8,v29,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v12,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsrah v13,v13,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v41,v42,v20
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vsubshs v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vcmpgtsh v6,v22,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtsh v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v2,v10,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v40,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vaddshs v31,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v30,v31,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v39,v30,v40
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vand128 v38,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vand128 v29,v38,v41
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vminsh v28,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vxor v27,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubshs v13,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v25,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v37,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vpkshus128 v36,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvewx128 v37,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
loc_881D8CB0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881d8744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D8744;
loc_881D8CB8:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,-560(r1)
	REX_STORE_U32(ctx.r1.u32 + -560, ctx.r7.u32);
	// addi r26,r1,-560
	ctx.r26.s64 = ctx.r1.s64 + -560;
	// vspltisw128 v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x4)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v1,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,2
	ctx.r10.s64 = 2;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r6,r8,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r8.u64;
	// vspltish v17,1
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x1)));
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vspltish v21,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x2)));
	// lvx128 v13,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v24,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// subf r31,r8,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r8.u64;
	// vaddshs v13,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// add r30,r3,r8
	ctx.r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// subf r29,r8,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r8.u64;
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// add r28,r30,r8
	ctx.r28.u64 = ctx.r30.u64 + ctx.r8.u64;
	// vspltish v15,5
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r27,r8,r29
	ctx.r27.u64 = ctx.r29.u64 - ctx.r8.u64;
	// vspltish v19,8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v18,15
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_set1_epi16(short(0xF)));
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r23,r28,r8
	ctx.r23.u64 = ctx.r28.u64 + ctx.r8.u64;
	// subf r22,r8,r27
	ctx.r22.u64 = ctx.r27.u64 - ctx.r8.u64;
	// vor128 v16,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vupkhsh v14,v13
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
loc_881D8D34:
	// lvlx v13,r11,r22
	temp.u32 = ctx.r11.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvlx v12,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v29,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v2,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v31,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v10,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v27,r11,r23
	temp.u32 = ctx.r11.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx v6,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v3,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvlx v28,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v35,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v22,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v25,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v27,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmrghb v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v20,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v13,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v31,v6,v25
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v23,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v30,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v26,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v3,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor128 v34,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v20,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vor128 v33,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vsubshs v13,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vor128 v32,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v11,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v10,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vor128 v61,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsubshs v8,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v7,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vcmpgtuh v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtuh v2,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmaxsh v20,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmaxsh v30,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v13,v13,v23
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vmaxsh v26,v11,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vmaxsh v12,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vmaxsh v28,v8,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v11,v7,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtuh v2,v9,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vcmpgtuh v20,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v30,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vcmpgtuh v13,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpgtuh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vcmpgtuh v12,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v30,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v28,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v3,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v20,v3,v15
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), 0xFFFF);
	// mfocrf r26,2
	ctx.r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r10,r26,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// vor128 v13,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vor128 v12,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// vor128 v11,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vor128 v10,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vor128 v8,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v7,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// beq cr6,0x881d91a8
	if (ctx.cr6.eq) goto loc_881D91A8;
	// vminsh v30,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vminsh v28,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v26,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v59,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v58,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaxsh v0,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vminsh v2,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v57,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v11,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v28,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vminsh v2,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v26,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v30,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vminsh v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v28,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v2,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsh. v30,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), 0xFFFF);
	// vupkhsh v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v28,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v14.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// vand128 v63,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// mfocrf r10,2
	ctx.r10.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v2,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v14.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)), 0xF);
	// mfocrf r24,2
	ctx.r24.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v28,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// mfocrf r25,2
	ctx.r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v3,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)), 0xF);
	// mfocrf r21,2
	ctx.r21.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r20,r25,0,26,26
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	// vor128 v0,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// vor128 v12,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// cmpwi cr6,r20,32
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 32, ctx.xer);
	// vor128 v13,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vor128 v11,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// beq cr6,0x881d8f34
	if (ctx.cr6.eq) goto loc_881D8F34;
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x881d8f4c
	if (!ctx.cr6.eq) goto loc_881D8F4C;
loc_881D8F34:
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x881d91a8
	if (ctx.cr6.eq) goto loc_881D91A8;
	// rlwinm r10,r24,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x881d91a8
	if (ctx.cr6.eq) goto loc_881D91A8;
loc_881D8F4C:
	// vsubshs v30,v7,v29
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// addi r25,r1,-320
	ctx.r25.s64 = ctx.r1.s64 + -320;
	// vsubshs v28,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r24,r1,-480
	ctx.r24.s64 = ctx.r1.s64 + -480;
	// vor128 v56,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r20,r1,-512
	ctx.r20.s64 = ctx.r1.s64 + -512;
	// vaddshs v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r19,r1,-544
	ctx.r19.s64 = ctx.r1.s64 + -544;
	// vsubshs v26,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// addi r21,r1,-496
	ctx.r21.s64 = ctx.r1.s64 + -496;
	// vmaxsh v28,v28,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vaddshs v31,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v2,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v26,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v0,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtsh v30,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// addi r25,r1,-528
	ctx.r25.s64 = ctx.r1.s64 + -528;
	// vaddshs v0,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vcmpgtsh v28,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vand128 v52,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vandc128 v51,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vand128 v54,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vandc128 v53,v6,v28
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvx128 v31,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vxor128 v31,v52,v51
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v55,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddshs v26,v2,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// stvx128 v28,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v28,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v2,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v50,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vaddshs v5,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v2,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor128 v48,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// lvx128 v27,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v30,v54,v53
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// addi r24,r1,-560
	ctx.r24.s64 = ctx.r1.s64 + -560;
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v9,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v5,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v29,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v31,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v5,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// lvx128 v9,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,-192
	ctx.r25.s64 = ctx.r1.s64 + -192;
	// vaddshs v25,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v31,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v49,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v30,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v27,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v0,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vandc128 v47,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v46,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v45,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v31,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v0,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v26,v5,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v0,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v5,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v28,v5,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v26,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v0,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v3,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v44,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v43,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v26,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v2,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v42,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v28,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v3,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v29,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vand128 v39,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v2,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v3,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v31,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v30,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsrah v29,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v40,v43,v47
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vsrah v28,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v35,v39,v50
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vsrah v25,v30,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v36,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vpkshus128 v37,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v40.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// vand128 v61,v29,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v41,v44,v46
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vpkshus128 v32,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16), simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vsrah v26,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v33,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vand128 v60,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v5,v42,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vpkshus128 v38,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vandc128 v59,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvewx128 v37,r27,r11
	ea = (ctx.r27.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// vand128 v58,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v37,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v4,v61,v36
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// stvewx128 v32,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// vandc128 v57,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vpkshus128 v34,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v54,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvewx128 v32,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// vxor128 v53,v60,v33
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vxor128 v52,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vpkshus128 v51,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvewx128 v38,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v0,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vxor128 v50,v54,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvewx128 v38,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v47,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16)));
	// vor128 v9,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vpkshus128 v46,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16)));
	// stvewx128 v34,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v1,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vpkshus128 v45,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v50.s16), simde_mm_load_si128((simde__m128i*)ctx.v50.s16)));
	// vor128 v27,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// stvewx128 v51,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x881d91b0
	goto loc_881D91B0;
loc_881D91A8:
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
loc_881D91B0:
	// rlwinm r10,r26,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// beq cr6,0x881d92a0
	if (ctx.cr6.eq) goto loc_881D92A0;
	// vsubshs v7,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// vsubshs v6,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v22,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v23,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v29,v3,v22
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v28,v2,v23
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v30,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v23,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v22,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v11,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v3,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v7,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v6,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v2,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v29,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v30,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v10,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v11,v27,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v28,v7,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmaxsh v27,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v26,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v25,v10,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v28,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v13,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vxor128 v44,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsrah v7,v29,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v12,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsrah v13,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v43,v44,v20
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vsubshs v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vcmpgtsh v6,v24,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtsh v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v2,v10,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v42,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vaddshs v31,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v30,v31,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v41,v30,v42
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vand128 v40,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vand128 v29,v40,v43
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vminsh v28,v7,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vxor v27,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vsubshs v13,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v25,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v39,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vpkshus128 v38,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvewx128 v39,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
loc_881D92A0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881d8d34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D8D34;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r1,-528
	ctx.r11.s64 = ctx.r1.s64 + -528;
	// addi r3,r1,-480
	ctx.r3.s64 = ctx.r1.s64 + -480;
	// stw r7,-560(r1)
	REX_STORE_U32(ctx.r1.u32 + -560, ctx.r7.u32);
	// addi r6,r1,-560
	ctx.r6.s64 = ctx.r1.s64 + -560;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r4,3
	ctx.r25.s64 = ctx.r4.s64 + 3;
	// vspltish v14,2
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_set1_epi16(short(0x2)));
	// addi r10,r1,-496
	ctx.r10.s64 = ctx.r1.s64 + -496;
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_set1_epi16(short(0x8)));
	// add r24,r25,r8
	ctx.r24.u64 = ctx.r25.u64 + ctx.r8.u64;
	// vspltish v1,5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x5)));
	// addi r31,r1,-512
	ctx.r31.s64 = ctx.r1.s64 + -512;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// add r23,r24,r8
	ctx.r23.u64 = ctx.r24.u64 + ctx.r8.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r22,r23,r8
	ctx.r22.u64 = ctx.r23.u64 + ctx.r8.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r21,r22,r8
	ctx.r21.u64 = ctx.r22.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r20,r21,r8
	ctx.r20.u64 = ctx.r21.u64 + ctx.r8.u64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v17,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vaddshs v13,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// add r19,r20,r8
	ctx.r19.u64 = ctx.r20.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// add r18,r19,r8
	ctx.r18.u64 = ctx.r19.u64 + ctx.r8.u64;
	// vupkhsh v21,v13
	simde_mm_store_si128((simde__m128i*)ctx.v21.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// stvx128 v21,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x881d9338
	goto loc_881D9338;
loc_881D9330:
	// addi r9,r1,-512
	ctx.r9.s64 = ctx.r1.s64 + -512;
	// lvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881D9338:
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lvlx128 v37,r10,r25
	temp.u32 = ctx.r10.u32 + ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r10,r21
	ctx.r30.u64 = ctx.r10.u64 + ctx.r21.u64;
	// lvlx128 v36,r10,r21
	temp.u32 = ctx.r10.u32 + ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lvlx128 v35,r10,r24
	temp.u32 = ctx.r10.u32 + ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r29,r10,r20
	ctx.r29.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lvlx128 v34,r10,r20
	temp.u32 = ctx.r10.u32 + ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lvlx128 v33,r10,r23
	temp.u32 = ctx.r10.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r10,r19
	ctx.r28.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lvrx128 v32,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v63,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r27,r10,r18
	ctx.r27.u64 = ctx.r10.u64 + ctx.r18.u64;
	// lvrx128 v61,r26,r6
	temp.u32 = ctx.r26.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v13,v37,v32
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v59,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v58,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v34,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v57,r10,r19
	temp.u32 = ctx.r10.u32 + ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v35,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v56,r10,r22
	temp.u32 = ctx.r10.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v33,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v54,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v53,r10,r18
	temp.u32 = ctx.r10.u32 + ctx.r18.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v4,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor128 v10,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrglb v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v6,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v5,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v10,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v4,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v7,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v3,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v31,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v30,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v12,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v10,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v6,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v29,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v52,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrglb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v19,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghb v23,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vsubshs v18,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v22,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vsubshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v30,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v25,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v3,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v28,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v20,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v15,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v27,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v13,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v12,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vmaxsh v20,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r26,r1,-496
	ctx.r26.s64 = ctx.r1.s64 + -496;
	// vmaxsh v30,v15,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v31,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vor128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v49,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor128 v48,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v15,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v11,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v8,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vcmpgtuh v30,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vcmpgtuh v20,v9,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vmaxsh v31,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vmaxsh v25,v12,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vmaxsh v13,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v15,v15,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vmaxsh v28,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v26,v11,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vmaxsh v12,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v20,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtuh v30,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v31,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vcmpgtuh v25,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vcmpgtuh v15,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vcmpgtuh v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpgtuh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vcmpgtuh v13,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vaddshs v20,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v15,v15,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v31,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v30,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor128 v47,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvx128 v7,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v15,v20
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v26,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v25,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v31,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vperm v31,v31,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcmpgtsh. v15,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), 0xFFFF);
	// mfocrf r26,2
	ctx.r26.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r17,r26,0,26,26
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// vor128 v13,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v12,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 32, ctx.xer);
	// vor128 v11,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v10,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v8,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vor128 v7,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// beq cr6,0x881d98bc
	if (ctx.cr6.eq) goto loc_881D98BC;
	// vminsh v26,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v25,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v46,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vminsh v28,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vmaxsh v20,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v0,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vminsh v30,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor128 v45,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v44,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaxsh v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v12,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v26,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vminsh v30,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v25,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vmaxsh v20,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v28,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vminsh v30,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v26,v20,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v30,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtsh. v20,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), 0xFFFF);
	// vupkhsh v25,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16))));
	// vcmpgtsw. v28,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// vand128 v63,v20,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// mfocrf r17,2
	ctx.r17.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtsw. v25,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v25.u32)), 0xF);
	// mfocrf r15,2
	ctx.r15.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v21,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16))));
	// vor128 v30,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vcmpgtsw. v20,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v21.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v20.u32)), 0xF);
	// mfocrf r16,2
	ctx.r16.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vcmpgtsw. v30,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v30.u32)), 0xF);
	// mfocrf r14,2
	ctx.r14.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r16,r16,0,26,26
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x20;
	// vor128 v0,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vor128 v13,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// stw r16,-576(r1)
	REX_STORE_U32(ctx.r1.u32 + -576, ctx.r16.u32);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// lwz r14,-576(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -576);
	// cmpwi cr6,r14,32
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 32, ctx.xer);
	// vor128 v12,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// beq cr6,0x881d95fc
	if (ctx.cr6.eq) goto loc_881D95FC;
	// rlwinm r17,r17,0,26,26
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 32, ctx.xer);
	// bne cr6,0x881d9614
	if (!ctx.cr6.eq) goto loc_881D9614;
loc_881D95FC:
	// rlwinm r17,r16,0,26,26
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 32, ctx.xer);
	// beq cr6,0x881d98bc
	if (ctx.cr6.eq) goto loc_881D98BC;
	// rlwinm r17,r15,0,26,26
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r17,32
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 32, ctx.xer);
	// beq cr6,0x881d98bc
	if (ctx.cr6.eq) goto loc_881D98BC;
loc_881D9614:
	// vsubshs v28,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r5,r1,-400
	ctx.r5.s64 = ctx.r1.s64 + -400;
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r17,r1,-368
	ctx.r17.s64 = ctx.r1.s64 + -368;
	// vor128 v43,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsubshs v30,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v26,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmaxsh v25,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vcmpgtsh v21,v17,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vcmpgtsh v28,v17,v25
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vand128 v41,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// vandc128 v40,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v25,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vand128 v39,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vaddshs v2,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vxor128 v29,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vandc128 v38,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v30,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v2,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v31,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vxor128 v2,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vaddshs v28,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v21,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v31,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v2,r0,r17
	ea = (ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v29,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor128 v37,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddshs v26,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vor128 v36,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddshs v20,v2,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v0,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vandc128 v34,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v33,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v1,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r7,r1,-336
	ctx.r7.s64 = ctx.r1.s64 + -336;
	// vaddshs v29,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v3,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vandc128 v32,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v9,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// lvx128 v21,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// lvx128 v21,r0,r17
	ea = (ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v20,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v29,v9,v21
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v31,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v20,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v31,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vand128 v61,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v60,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v59,v21,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v0,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vxor128 v20,v61,v33
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vxor128 v58,v60,v32
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vxor128 v21,v59,v34
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v2,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v2,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v31,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkshus128 v2,v42,v58
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v58.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vaddshs v0,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lwz r5,-572(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -572);
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v28,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v29,v31,v23
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v31,v31,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vaddshs v25,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsrah v3,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v25,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v23,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v57,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vandc128 v56,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vand128 v54,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v53,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v50,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v48,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v55,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vandc128 v51,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vandc128 v49,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v46,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vaddshs v0,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lwz r7,52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// vxor128 v47,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vxor128 v44,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vxor128 v42,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vsrah v28,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v5,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vpkshus128 v3,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vand128 v52,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v30,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vxor128 v45,v52,v56
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrglb v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v25,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vpkshus128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v45.s16), simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// vmrglb v29,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vmrghb v26,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v3,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v28,v4,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v4,v22
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v2,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vmrglb v30,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vmrghb v28,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v4,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// vmrghb v31,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vmrglb v30,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vmrghb v29,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vmrghb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v28,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vmrglb v2,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// vmrghb v23,v4,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v22,v4,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vmrghb v3,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v29,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvlx v23,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// vmrglb v28,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvrx v23,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v23.u8[i]);
	// vmrghb v26,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// stvlx v22,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// vmrglb v25,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// stvrx v22,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v22.u8[i]);
	// stvlx v3,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvrx v3,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v3.u8[i]);
	// stvlx v2,0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// stvlx v29,0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvrx v29,r30,r11
	ea = ctx.r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v29.u8[i]);
	// stvlx v28,0,r29
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvrx v28,r29,r11
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v28.u8[i]);
	// stvlx v26,0,r28
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// vor128 v0,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// stvrx v26,r28,r11
	ea = ctx.r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v26.u8[i]);
	// vor128 v9,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// stvlx v25,0,r27
	ea = ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// vor128 v1,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvrx v25,r27,r11
	ea = ctx.r27.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v25.u8[i]);
	// b 0x881d98c4
	goto loc_881D98C4;
loc_881D98BC:
	// vor v20,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v21,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
loc_881D98C4:
	// rlwinm r9,r26,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// beq cr6,0x881d9a10
	if (ctx.cr6.eq) goto loc_881D9A10;
	// vsubshs v7,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r6,r1,-480
	ctx.r6.s64 = ctx.r1.s64 + -480;
	// vsubshs v6,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r3,r1,-528
	ctx.r3.s64 = ctx.r1.s64 + -528;
	// vslh v4,v19,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,-544
	ctx.r31.s64 = ctx.r1.s64 + -544;
	// vslh v3,v18,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-560
	ctx.r30.s64 = ctx.r1.s64 + -560;
	// vsubshs v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// vaddshs v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// lvx128 v30,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v31,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v24,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v23,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v19,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v6,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsrah v13,v27,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v11,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v12,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v4,v27,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vmaxsh v3,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v29,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v26,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vxor128 v41,v29,v13
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v11,v28,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsrah v12,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v40,v41,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vsubshs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vcmpgtsh v24,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vcmpgtsh v23,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v22,v10,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v39,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8)));
	// vaddshs v19,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v18,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v38,v18,v39
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v37,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v15,v37,v40
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vminsh v12,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vxor v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v12,v21,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrglh v10,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v7,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vpkshus v13,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghh v6,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v6,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-536(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -536);
	// lwz r31,-532(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -532);
	// stvx128 v5,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-560(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -560);
	// lwz r29,-556(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -556);
	// lwz r27,-548(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -548);
	// lwz r6,-540(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -540);
	// lwz r28,-544(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -544);
	// sthx r28,r9,r25
	REX_STORE_U16(ctx.r9.u32 + ctx.r25.u32, ctx.r28.u16);
	// lwz r28,-552(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -552);
	// sthx r6,r9,r24
	REX_STORE_U16(ctx.r9.u32 + ctx.r24.u32, ctx.r6.u16);
	// sthx r3,r9,r23
	REX_STORE_U16(ctx.r9.u32 + ctx.r23.u32, ctx.r3.u16);
	// sthx r31,r9,r22
	REX_STORE_U16(ctx.r9.u32 + ctx.r22.u32, ctx.r31.u16);
	// sthx r30,r9,r21
	REX_STORE_U16(ctx.r9.u32 + ctx.r21.u32, ctx.r30.u16);
	// sthx r29,r9,r20
	REX_STORE_U16(ctx.r9.u32 + ctx.r20.u32, ctx.r29.u16);
	// sthx r28,r9,r19
	REX_STORE_U16(ctx.r9.u32 + ctx.r19.u32, ctx.r28.u16);
	// sthx r27,r9,r18
	REX_STORE_U16(ctx.r9.u32 + ctx.r18.u32, ctx.r27.u16);
loc_881D9A10:
	// rlwinm r17,r8,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// add r10,r17,r10
	ctx.r10.u64 = ctx.r17.u64 + ctx.r10.u64;
	// bdnz 0x881d9330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D9330;
	// lwz r10,36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881da1b8
	if (ctx.cr6.eq) goto loc_881DA1B8;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// addi r6,r1,-528
	ctx.r6.s64 = ctx.r1.s64 + -528;
	// stw r7,-528(r1)
	REX_STORE_U32(ctx.r1.u32 + -528, ctx.r7.u32);
	// addi r7,r1,-512
	ctx.r7.s64 = ctx.r1.s64 + -512;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r4,-5
	ctx.r29.s64 = ctx.r4.s64 + -5;
	// vor128 v21,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// addi r10,r1,-496
	ctx.r10.s64 = ctx.r1.s64 + -496;
	// vspltish v14,2
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_set1_epi16(short(0x2)));
	// add r28,r29,r8
	ctx.r28.u64 = ctx.r29.u64 + ctx.r8.u64;
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r4,r1,-480
	ctx.r4.s64 = ctx.r1.s64 + -480;
	// vspltish v1,5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x5)));
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// add r27,r28,r8
	ctx.r27.u64 = ctx.r28.u64 + ctx.r8.u64;
	// addi r5,r1,-528
	ctx.r5.s64 = ctx.r1.s64 + -528;
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r27,r8
	ctx.r26.u64 = ctx.r27.u64 + ctx.r8.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r25,r26,r8
	ctx.r25.u64 = ctx.r26.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r24,r25,r8
	ctx.r24.u64 = ctx.r25.u64 + ctx.r8.u64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v17,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vaddshs v13,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// add r23,r24,r8
	ctx.r23.u64 = ctx.r24.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r22,r23,r8
	ctx.r22.u64 = ctx.r23.u64 + ctx.r8.u64;
	// vupkhsh v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x881d9acc
	goto loc_881D9ACC;
loc_881D9ABC:
	// addi r9,r1,-480
	ctx.r9.s64 = ctx.r1.s64 + -480;
	// addi r8,r1,-528
	ctx.r8.s64 = ctx.r1.s64 + -528;
	// lvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881D9ACC:
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lvlx128 v36,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lvlx128 v35,r10,r25
	temp.u32 = ctx.r10.u32 + ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lvlx128 v34,r10,r28
	temp.u32 = ctx.r10.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lvlx128 v33,r10,r24
	temp.u32 = ctx.r10.u32 + ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lvlx128 v32,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lvrx128 v63,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v62,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 + ctx.r22.u64;
	// lvrx128 v61,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v35,v62
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vor128 v13,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v59,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v58,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v33,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v57,r10,r23
	temp.u32 = ctx.r10.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v34,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v56,r10,r26
	temp.u32 = ctx.r10.u32 + ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v32,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v54,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v53,r10,r22
	temp.u32 = ctx.r10.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v4,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor128 v10,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrglb v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v6,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// addi r30,r1,-304
	ctx.r30.s64 = ctx.r1.s64 + -304;
	// vmrglb v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v5,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v10,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v4,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v2,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v7,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v30,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v3,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v31,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v12,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v10,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v6,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v29,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v23,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v22,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vsubshs v30,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v12,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v19,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrghb v6,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v52,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrglb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v15,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v18,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v25,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v3,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v28,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v28,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v26,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v27,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v13,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vor128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v11,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v15,v15,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// addi r30,r1,-496
	ctx.r30.s64 = ctx.r1.s64 + -496;
	// vmaxsh v30,v11,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vor128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v12,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vor128 v49,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsubshs v11,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v10,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vor128 v48,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor128 v47,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsubshs v8,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v31,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v7,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vcmpgtuh v15,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vcmpgtuh v30,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmaxsh v25,v12,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vmaxsh v13,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v26,v11,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vmaxsh v12,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vmaxsh v31,v31,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vmaxsh v28,v8,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v11,v7,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v15,v15,v30
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtuh v30,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcmpgtuh v13,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vcmpgtuh v31,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vcmpgtuh v25,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vcmpgtuh v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpgtuh v28,v9,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vcmpgtuh v12,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vaddshs v15,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v31,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v30,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v28,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vor128 v46,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v6,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v25,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v15,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v31,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vperm v31,v31,v31,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vcmpgtsh. v15,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), 0xFFFF);
	// mfocrf r30,2
	ctx.r30.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r21,r30,0,26,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// vor128 v13,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v12,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// vor128 v11,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v10,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v8,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vor128 v7,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vor128 v6,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// beq cr6,0x881da058
	if (ctx.cr6.eq) goto loc_881DA058;
	// vminsh v28,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vminsh v26,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v25,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v45,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v44,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaxsh v0,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vminsh v30,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vor128 v42,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaxsh v11,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v26,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vminsh v30,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v25,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v28,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vminsh v30,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmaxsh v26,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v30,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtsh. v28,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), 0xFFFF);
	// vupkhsh v25,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16))));
	// vcmpgtsw. v26,v20,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v20.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v26.u32)), 0xF);
	// vand128 v63,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// mfocrf r21,2
	ctx.r21.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v25,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vcmpgtsw. v20,v20,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v20.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v20.u32)), 0xF);
	// mfocrf r19,2
	ctx.r19.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16))));
	// vcmpgtsw. v28,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v21.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v28.u32)), 0xF);
	// mfocrf r20,2
	ctx.r20.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vcmpgtsw. v25,v26,v21
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v21.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v25.u32)), 0xF);
	// mfocrf r18,2
	ctx.r18.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r16,r20,0,26,26
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x20;
	// vor128 v0,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// vor128 v12,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// cmpwi cr6,r16,32
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 32, ctx.xer);
	// vor128 v13,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vor128 v11,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// beq cr6,0x881d9da0
	if (ctx.cr6.eq) goto loc_881D9DA0;
	// rlwinm r21,r21,0,26,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// bne cr6,0x881d9db8
	if (!ctx.cr6.eq) goto loc_881D9DB8;
loc_881D9DA0:
	// rlwinm r21,r20,0,26,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// beq cr6,0x881da058
	if (ctx.cr6.eq) goto loc_881DA058;
	// rlwinm r21,r19,0,26,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r21,32
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 32, ctx.xer);
	// beq cr6,0x881da058
	if (ctx.cr6.eq) goto loc_881DA058;
loc_881D9DB8:
	// vsubshs v28,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r21,r1,-272
	ctx.r21.s64 = ctx.r1.s64 + -272;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r20,r1,-240
	ctx.r20.s64 = ctx.r1.s64 + -240;
	// vor128 v40,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r19,r1,-208
	ctx.r19.s64 = ctx.r1.s64 + -208;
	// vor128 v41,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsubshs v30,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmaxsh v26,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmaxsh v25,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vcmpgtsh v21,v17,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v20,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vcmpgtsh v28,v17,v25
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vand128 v39,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// vandc128 v38,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v25,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vand128 v37,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vaddshs v2,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vxor128 v29,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vandc128 v36,v7,v28
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v30,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v2,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v31,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vxor128 v2,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vaddshs v28,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v21,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvx128 v31,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v31,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v2,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v29,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor128 v35,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vaddshs v26,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vor128 v34,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddshs v20,v2,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v0,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vandc128 v32,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vandc128 v62,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v1,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v1,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r21,r1,-176
	ctx.r21.s64 = ctx.r1.s64 + -176;
	// vaddshs v29,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v20,v3,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vandc128 v61,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v9,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v3,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// lvx128 v21,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// lvx128 v21,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v20,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v29,v9,v21
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v31,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v20,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v31,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vand128 v60,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v59,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v58,v21,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vaddshs v0,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vxor128 v20,v60,v62
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v57,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vxor128 v21,v58,v32
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vaddshs v28,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v2,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v2,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v31,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkshus128 v2,v40,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v40.s16)));
	// vaddshs v0,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v28,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v29,v31,v23
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vmrglb v31,v31,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vaddshs v25,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsrah v3,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v28,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v25,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v23,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v56,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vandc128 v55,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vand128 v53,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v52,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v49,v26,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v47,v25,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v54,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vandc128 v50,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vandc128 v48,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v9,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v45,v52,v56
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vaddshs v0,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vxor128 v46,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vxor128 v43,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vxor128 v42,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vsrah v28,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v5,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16), simde_mm_load_si128((simde__m128i*)ctx.v45.s16)));
	// vpkshus128 v3,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vand128 v51,v28,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v30,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vxor128 v44,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrglb v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v25,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vpkshus128 v4,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v44.s16), simde_mm_load_si128((simde__m128i*)ctx.v43.s16)));
	// vmrglb v29,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vmrghb v26,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v3,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v28,v4,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v4,v22
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v2,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vmrglb v30,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vmrghb v28,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v4,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// vmrghb v31,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vmrglb v30,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vmrghb v29,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vmrghb v24,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v28,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// vmrglb v2,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// vmrghb v23,v4,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v22,v4,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrglb v4,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vmrghb v3,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v29,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvlx v23,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// vmrglb v28,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvrx v23,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v23.u8[i]);
	// vmrghb v26,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// stvlx v22,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// vmrglb v25,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// stvrx v22,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v22.u8[i]);
	// stvlx v3,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvrx v3,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v3.u8[i]);
	// stvlx v2,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// stvlx v29,0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvrx v29,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v29.u8[i]);
	// stvlx v28,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvrx v28,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v28.u8[i]);
	// stvlx v26,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvrx v26,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v26.u8[i]);
	// stvlx v25,0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// vor128 v0,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvrx v25,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v25.u8[i]);
	// vor128 v9,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vor128 v1,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// b 0x881da060
	goto loc_881DA060;
loc_881DA058:
	// vor v20,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v21,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
loc_881DA060:
	// rlwinm r9,r30,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// beq cr6,0x881da1ac
	if (ctx.cr6.eq) goto loc_881DA1AC;
	// vsubshs v7,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r8,r1,-512
	ctx.r8.s64 = ctx.r1.s64 + -512;
	// vsubshs v6,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// vslh v4,v19,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,-560
	ctx.r6.s64 = ctx.r1.s64 + -560;
	// vslh v3,v18,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r5,r1,-544
	ctx.r5.s64 = ctx.r1.s64 + -544;
	// vsubshs v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// vaddshs v2,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// lvx128 v30,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v31,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v26,v27,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v24,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v23,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v19,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v6,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsrah v13,v27,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v11,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v12,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v4,v27,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vmaxsh v3,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v29,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v26,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vxor128 v41,v29,v13
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsrah v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v11,v28,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsrah v12,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vandc128 v40,v41,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vsubshs v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vcmpgtsh v24,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vcmpgtsh v23,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v22,v10,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v39,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8)));
	// vaddshs v19,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v18,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v38,v18,v39
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v37,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v15,v37,v40
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vminsh v12,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vxor v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v12,v21,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrglh v10,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v7,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vpkshus v13,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghh v6,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v6,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-552(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -552);
	// stvx128 v5,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-548(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -548);
	// lwz r8,-544(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -544);
	// lwz r31,-532(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -532);
	// lwz r5,-560(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -560);
	// sthx r5,r29,r9
	REX_STORE_U16(ctx.r29.u32 + ctx.r9.u32, ctx.r5.u16);
	// lwz r4,-556(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -556);
	// lwz r7,-540(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -540);
	// lwz r5,-536(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -536);
	// sthx r4,r28,r9
	REX_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r4.u16);
	// sthx r3,r27,r9
	REX_STORE_U16(ctx.r27.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r6,r26,r9
	REX_STORE_U16(ctx.r26.u32 + ctx.r9.u32, ctx.r6.u16);
	// sthx r8,r25,r9
	REX_STORE_U16(ctx.r25.u32 + ctx.r9.u32, ctx.r8.u16);
	// sthx r7,r24,r9
	REX_STORE_U16(ctx.r24.u32 + ctx.r9.u32, ctx.r7.u16);
	// sthx r5,r23,r9
	REX_STORE_U16(ctx.r23.u32 + ctx.r9.u32, ctx.r5.u16);
	// sthx r31,r22,r9
	REX_STORE_U16(ctx.r22.u32 + ctx.r9.u32, ctx.r31.u16);
loc_881DA1AC:
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bdnz 0x881d9abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D9ABC;
loc_881DA1B8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

