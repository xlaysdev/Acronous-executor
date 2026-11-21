/* FUN_1801b5340 @ 1801b5340 */

/* WARNING: Removing unreachable block (ram,0x0001801b5c70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b5340(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code cVar4;
  code cVar5;
  code cVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  byte bVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined7 uVar20;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined **ppuVar18;
  ulonglong uVar19;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*unaff_RBX) [16];
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 (*in_R10) [16];
  ulonglong in_R11;
  undefined1 (*unaff_R12) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*unaff_R14) [16];
  undefined1 (*unaff_R15) [16];
  bool bVar28;
  undefined1 in_XMM0 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 local_2fb;
  undefined1 local_2fa;
  undefined1 local_2f9;
  uint local_2f8;
  uint local_2f4;
  undefined1 (*local_2f0) [16];
  code *local_2e8;
  undefined8 local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  undefined1 (*local_2a8) [16];
  undefined1 (*local_2a0) [16];
  undefined1 local_298;
  undefined1 (*local_290) [16];
  undefined1 (*local_288) [16];
  undefined1 (*local_280) [16];
  undefined1 (*local_278) [16];
  undefined1 (*local_270) [16];
  undefined1 local_268;
  byte local_260;
  byte local_258;
  byte local_250;
  byte local_248;
  byte local_240;
  byte local_238;
  undefined1 (*local_230) [16];
  undefined1 (*local_228) [16];
  undefined1 (*local_220) [16];
  int local_214;
  undefined1 (*local_210) [16];
  code *local_208;
  undefined1 (*local_200) [16];
  undefined1 (*local_1f8) [16];
  undefined1 uStack_1e7;
  undefined1 (*local_1d8) [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 (*local_1a0) [16];
  undefined1 (*local_198) [16];
  undefined1 (*local_190) [16];
  undefined1 (*local_188) [16];
  undefined1 (*local_180) [16];
  undefined6 uStack_178;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  longlong lStack_168;
  undefined1 (*local_160) [16];
  ulonglong uStack_158;
  undefined1 local_150 [16];
  undefined1 (*local_140) [16];
  byte local_138;
  undefined1 local_137;
  uint6 local_136;
  undefined1 local_130 [16];
  undefined1 (*local_120) [16];
  undefined1 local_118;
  undefined1 local_117;
  uint6 local_116;
  undefined1 local_110 [16];
  undefined1 (*local_100) [16];
  undefined1 local_f8;
  byte local_f7;
  uint6 local_f6;
  undefined1 local_f0 [16];
  undefined1 (*local_d8) [16];
  undefined1 (*local_d0) [16];
  undefined1 (*local_c8) [16];
  
  uVar11 = (uint)in_R11;
  local_210 = param_1;
  local_2f0 = param_3;
  if (param_4 == (undefined1 (*) [16])0x0) {
    in_XMM0 = (undefined1  [16])0x0;
    local_180 = (undefined1 (*) [16])0x0;
    uStack_178 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    local_214 = 1;
    local_2e8 = (code *)&LAB_1801b6820;
    local_238 = 0;
    local_260 = 0;
    local_250 = 0;
    local_258 = 0;
    local_240 = 0;
    local_248 = 0;
    local_268 = (code)0x0;
    local_1d8 = (undefined1 (*) [16])0x0;
    local_1f8 = (undefined1 (*) [16])0x0;
    unaff_XMM8 = (undefined1  [16])0x0;
    local_2b0._0_1_ = 0;
    local_2b8._0_1_ = 0;
    unaff_XMM9 = (undefined1  [16])0x0;
    unaff_XMM7 = (undefined1  [16])0x0;
    auVar33 = (undefined1  [16])0x0;
    unaff_XMM10 = (undefined1  [16])0x0;
    auVar29 = (undefined1  [16])0x0;
    unaff_XMM12 = (undefined1  [16])0x0;
    local_2c0._0_1_ = 0;
    local_2c8._0_1_ = (code)0x0;
    local_2d0._0_1_ = (code)0x0;
    local_2d8._0_1_ = (code)0x0;
    local_298 = (code)0x0;
    local_270 = (undefined1 (*) [16])0x0;
    local_290 = (undefined1 (*) [16])0x0;
    local_280 = (undefined1 (*) [16])0x0;
    local_288 = (undefined1 (*) [16])0x0;
    local_278 = (undefined1 (*) [16])0x0;
    local_220 = (undefined1 (*) [16])0x0;
    local_228 = (undefined1 (*) [16])0x0;
    local_188 = (undefined1 (*) [16])0x0;
    local_2a8 = (undefined1 (*) [16])0x0;
    unaff_R15 = (undefined1 (*) [16])0x0;
    param_2 = (undefined1 (*) [16])0x0;
    local_137 = (code)0x0;
    local_118 = (code)0x0;
    local_208 = (code *)0x0;
    local_2f8 = 0;
    uVar23 = 0;
    local_230 = (undefined1 (*) [16])0x0;
    local_d8 = (undefined1 (*) [16])0x0;
    local_c8 = (undefined1 (*) [16])0x0;
    uVar11 = 0;
    local_190 = (undefined1 (*) [16])0x0;
    uVar12 = 0;
    local_1a0 = (undefined1 (*) [16])0x0;
  }
  else {
    cVar4 = (code)(*param_3)[0];
    pauVar27 = (undefined1 (*) [16])(ulonglong)(byte)cVar4;
    uVar23 = (uint)(byte)cVar4;
    if (param_4 == (undefined1 (*) [16])0x1) {
      auVar33 = ZEXT116((byte)cVar4);
      local_214 = 1;
      local_280 = (undefined1 (*) [16])FUN_1801d09b0;
      local_2e8 = FUN_1801d09b0;
      local_238 = 0xb0;
      local_260 = 0xb0;
      local_250 = 0xb0;
      local_258 = 0xb0;
      local_240 = 0xb0;
      local_248 = 0xb0;
      local_268 = (code)0xb0;
      local_2b0._0_1_ = 0xb0;
      local_2b8._0_1_ = 0xb0;
      local_2c0._0_1_ = 0xb0;
    }
    else {
      cVar5 = (code)(*param_3)[1];
      uVar23 = (uint)(byte)cVar5 + (uint)(byte)cVar4 * 2;
      local_214 = 2;
      if (param_4 != (undefined1 (*) [16])0x2) {
        pcVar13 = (code *)(*param_3 + 2);
        uVar19 = (ulonglong)((uint)(param_4[-1] + 0xe) & 3);
        if ((code *)0x2 < param_4[-1] + 0xd) {
          uVar24 = (ulonglong)(param_4[-1] + 0xe) & 0xfffffffffffffffc;
          do {
            cVar6 = *pcVar13;
            local_214 = local_214 << 4;
            pcVar1 = pcVar13 + 1;
            pcVar2 = pcVar13 + 2;
            pcVar3 = pcVar13 + 3;
            in_R11 = (ulonglong)(byte)*pcVar3;
            pcVar13 = pcVar13 + 4;
            uVar23 = (uint)(byte)*pcVar2 * 2 +
                     ((uint)(byte)cVar6 * 2 + uVar23 * 4 + (uint)(byte)*pcVar1) * 4 +
                     (uint)(byte)*pcVar3;
            uVar24 = uVar24 - 4;
          } while (uVar24 != 0);
        }
        if (uVar19 != 0) {
          uVar24 = 0;
          do {
            uVar23 = (uint)(byte)pcVar13[uVar24] + uVar23 * 2;
            local_214 = local_214 * 2;
            uVar24 = uVar24 + 1;
          } while (uVar19 != uVar24);
        }
      }
      local_2e8 = (code *)CONCAT71(local_2e8._1_7_,(*param_2)[0]);
      local_2fa = 0;
      local_2fb = 1;
      uVar12 = (uint)(byte)cVar5;
      local_2a0 = param_4;
      uVar11 = FUN_1801d1040(&local_2f9,cVar5);
      unaff_RBX = (undefined1 (*) [16])(ulonglong)uVar11;
      uVar14 = FUN_1801d1040(&local_2f9,pauVar27);
      uVar20 = (undefined7)((ulonglong)uVar14 >> 8);
      if ((byte)uVar11 < (byte)uVar14) {
        local_2fa = 1;
        local_2fb = 0;
        local_2e0 = (undefined1 (*) [16])CONCAT44(local_2e0._4_4_,(int)CONCAT71(uVar20,1));
        local_2f4 = 0;
        pauVar27 = (undefined1 (*) [16])(ulonglong)uVar12;
        uVar12 = (uint)(byte)cVar4;
      }
      else {
        local_2f4 = (uint)CONCAT71(uVar20,1);
        local_2e0 = (undefined1 (*) [16])((ulonglong)local_2e0._4_4_ << 0x20);
      }
      local_180 = local_2f0;
      uStack_178 = SUB86(*param_4 + (longlong)*param_3,0);
      uStack_172 = (undefined2)((ulonglong)(*param_4 + (longlong)*param_3) >> 0x30);
      uStack_170 = 0;
      uStack_16a = 0;
      lStack_168 = 0xff;
      local_160 = (undefined1 (*) [16])0x2;
      unaff_R12 = (undefined1 (*) [16])&local_2f9;
      while( true ) {
        pauVar15 = local_160;
        uVar11 = (uint)in_R11;
        if (local_160 == (undefined1 (*) [16])0x0) break;
        local_160 = (undefined1 (*) [16])0x0;
        unaff_RBX = (undefined1 (*) [16])FUN_1801b4910(&local_180);
        uVar11 = (uint)in_R11;
        if (pauVar15 == (undefined1 (*) [16])0x0) goto LAB_1801b5b8e;
LAB_1801b5acb:
        cVar4 = (code)(*pauVar15)[0];
        bVar8 = FUN_1801d1040(unaff_R12,(undefined1 (*) [16])(ulonglong)(byte)cVar4);
        uVar11 = (uint)pauVar27;
        bVar9 = FUN_1801d1040(unaff_R12,pauVar27);
        if (bVar8 < bVar9) {
          local_2fb = SUB81(local_2e0,0);
          if ((undefined1 (*) [16])0xff < unaff_RBX) {
            ppuVar18 = &PTR_s_C__Users_burne__cargo_registry_s_180286480;
LAB_1801b5f8e:
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_2f9,
                          &DAT_180286390,ppuVar18);
          }
          local_2f4 = (uint)local_2e0;
          local_2e0 = (undefined1 (*) [16])CONCAT44(local_2e0._4_4_,(uint)unaff_RBX);
          pauVar27 = (undefined1 (*) [16])(ulonglong)(byte)cVar4;
          uVar12 = uVar11;
          local_2fa = (char)unaff_RBX;
        }
        else if (cVar4 != SUB81(pauVar27,0)) {
          bVar8 = FUN_1801d1040(unaff_R12,cVar4);
          bVar9 = FUN_1801d1040(unaff_R12,uVar12);
          if (bVar8 < bVar9) {
            if ((undefined1 (*) [16])0xff < unaff_RBX) {
              ppuVar18 = &PTR_s_C__Users_burne__cargo_registry_s_180286468;
              goto LAB_1801b5f8e;
            }
            uVar12 = (uint)(byte)cVar4;
            local_2fb = (char)unaff_RBX;
            local_2f4 = (uint)unaff_RBX;
          }
        }
        unaff_R15 = pauVar27;
      }
      if (lStack_168 != 0) {
        lStack_168 = lStack_168 + -1;
        if (local_180 != (undefined1 (*) [16])CONCAT26(uStack_172,uStack_178)) {
          pcVar13 = (code *)*local_180;
          unaff_RBX = (undefined1 (*) [16])CONCAT26(uStack_16a,uStack_170);
          uStack_170 = SUB86(*unaff_RBX + 1,0);
          uStack_16a = (undefined2)((ulonglong)(*unaff_RBX + 1) >> 0x30);
          bVar28 = local_180 != (undefined1 (*) [16])0x0;
          pauVar15 = local_180;
          local_180 = (undefined1 (*) [16])(pcVar13 + 1);
          if (bVar28) goto LAB_1801b5acb;
        }
      }
LAB_1801b5b8e:
      unaff_R14 = (undefined1 (*) [16])(ulonglong)local_2f4;
      bVar8 = (byte)local_2f4;
      if ((byte)local_2e0 == bVar8) {
        FUN_1801fcf74(1,&local_2fa,&local_2fb,0);
LAB_1801b5fd9:
        sVar10 = FUN_180201000();
        if (-1 < sVar10) goto LAB_1801b5bc9;
LAB_1801b5ff8:
        pauVar15 = local_2a0;
        FUN_1801b5270(&local_180,local_2f0,local_2a0,(uint)local_2e0,bVar8);
        unaff_R15 = local_160;
        param_4 = local_2a0;
        pauVar27 = local_2f0;
        auVar33._8_6_ = uStack_178;
        auVar33._0_8_ = local_180;
        auVar33._14_2_ = uStack_172;
        auVar7._6_2_ = uStack_16a;
        auVar7._0_6_ = uStack_170;
        auVar7._8_8_ = lStack_168;
        unaff_XMM11._8_8_ = uStack_158;
        unaff_XMM11._0_8_ = local_160;
        local_200 = local_140;
        param_2 = (undefined1 (*) [16])(ulonglong)local_138;
        local_2f4 = (uint)(byte)local_137;
        auVar29 = ZEXT616(local_136);
        local_1b0[5] = SUB61(local_136 >> 0x28,0);
        local_2d8 = (ulonglong)(byte)local_1b0[5];
        local_1b0[4] = SUB61(local_136 >> 0x20,0);
        local_2d0 = (ulonglong)(byte)local_1b0[4];
        local_1b0[3] = SUB61(local_136 >> 0x18,0);
        local_2c8 = (ulonglong)(byte)local_1b0[3];
        local_1b0[2] = (byte)(local_136 >> 0x10);
        local_2c0 = (ulonglong)local_1b0[2];
        local_1b0[0] = (byte)local_136;
        local_2b0 = (ulonglong)local_1b0[0];
        local_1b0[1] = (byte)(local_136 >> 8);
        local_2b8 = (ulonglong)local_1b0[1];
        local_1f8 = local_120;
        local_208 = (code *)CONCAT71(local_208._1_7_,local_118);
        auVar31 = ZEXT616(local_116);
        local_2a8 = (undefined1 (*) [16])(ulonglong)(byte)local_117;
        local_298 = local_117;
        local_1c0[5] = (byte)(local_116 >> 0x28);
        local_220 = (undefined1 (*) [16])(ulonglong)local_1c0[5];
        auVar30 = ZEXT616(local_f6);
        local_1c0[4] = (byte)(local_116 >> 0x20);
        local_190 = (undefined1 (*) [16])(ulonglong)local_1c0[4];
        local_1c0[3] = (byte)(local_116 >> 0x18);
        local_288 = (undefined1 (*) [16])(ulonglong)local_1c0[3];
        local_1c0[2] = (byte)(local_116 >> 0x10);
        local_280 = (undefined1 (*) [16])(ulonglong)local_1c0[2];
        local_1c0[0] = (byte)local_116;
        local_270 = (undefined1 (*) [16])(ulonglong)local_1c0[0];
        local_1c0[1] = (byte)(local_116 >> 8);
        pauVar22 = (undefined1 (*) [16])(ulonglong)local_1c0[1];
        local_d8 = (undefined1 (*) [16])(ulonglong)(byte)local_f8;
        local_268 = local_f8;
        pauVar26 = (undefined1 (*) [16])(ulonglong)local_f7;
        local_1d0[5] = (byte)(local_f6 >> 0x28);
        local_198 = (undefined1 (*) [16])(ulonglong)local_1d0[5];
        local_1d0[4] = (byte)(local_f6 >> 0x20);
        pauVar17 = (undefined1 (*) [16])(ulonglong)local_1d0[4];
        local_1d0[3] = (byte)(local_f6 >> 0x18);
        local_d0 = (undefined1 (*) [16])(ulonglong)local_1d0[3];
        uVar11 = (uint)local_1d0[3];
        local_1d0[2] = (byte)(local_f6 >> 0x10);
        local_1a0 = (undefined1 (*) [16])(ulonglong)local_1d0[2];
        local_1d0[0] = (byte)local_f6;
        local_c8 = (undefined1 (*) [16])(ulonglong)local_1d0[0];
        local_1d0[1] = (byte)(local_f6 >> 8);
        pauVar16 = (undefined1 (*) [16])(ulonglong)local_1d0[1];
        unaff_XMM7 = local_150;
        unaff_XMM8 = local_130;
        unaff_XMM12 = local_f0;
        if (pauVar15 < (undefined1 (*) [16])&DAT_00000021) {
          local_238 = local_1c0[0];
          local_260 = local_1c0[1];
          local_250 = local_1c0[2];
          local_258 = local_1c0[3];
          local_240 = local_1c0[4];
          local_248 = local_1c0[5];
          local_1d8 = local_100;
          uVar12 = (uint)local_1d0[4];
          local_2e8 = FUN_1801cfb80;
          local_228 = (undefined1 (*) [16])FUN_1801cfb80;
          local_2f8 = 0x801cfb80;
          local_230 = (undefined1 (*) [16])FUN_1801cfb80;
          unaff_R15 = local_140;
          in_XMM0 = local_110;
          auVar29 = auVar33;
          unaff_XMM9 = local_f0;
          unaff_XMM10 = auVar7;
          auVar33 = unaff_XMM11;
          local_2a8 = pauVar26;
          local_290 = pauVar16;
          local_288 = local_d0;
          local_280 = local_1a0;
          local_278 = pauVar17;
          local_270 = local_c8;
          local_220 = local_198;
          local_2b0._0_1_ = local_1b0[0];
          local_2b8._0_1_ = local_1b0[1];
          local_2c0._0_1_ = local_1b0[2];
          local_2c8._0_1_ = local_1b0[3];
          local_2d0._0_1_ = local_1b0[4];
          local_2d8._0_1_ = local_1b0[5];
          goto LAB_1801b564a;
        }
        local_188 = local_100;
        unaff_XMM9 = local_110;
        local_2e0 = param_2;
        local_230 = local_c8;
        local_228 = local_d8;
        local_1d0 = auVar30;
        local_1c0 = auVar31;
        local_1b0 = auVar29;
        if ((char)local_2e8 != '\0') {
          local_290 = pauVar22;
          if (local_2a0 <= param_2) {
            local_c8 = local_1a0;
            local_1a0 = pauVar26;
            local_190 = pauVar17;
            local_d8 = pauVar16;
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(param_2,local_2a0,&PTR_s_C__Users_burne__cargo_registry_s_1802865a0);
          }
          uVar19 = (ulonglong)((uint)local_2a0 & 3);
          pauVar15 = local_2f0;
          if (local_2a0[-1] + 0xf < (code *)0x3) {
            uVar24 = 0;
          }
          else {
            uVar25 = (ulonglong)local_2a0 & 0x7ffffffffffffffc;
            uVar24 = 0;
            do {
              pcVar13 = (code *)*pauVar15;
              pcVar1 = (code *)*pauVar15;
              pcVar2 = (code *)*pauVar15;
              pcVar3 = (code *)*pauVar15;
              pauVar15 = (undefined1 (*) [16])(*pauVar15 + 4);
              uVar24 = uVar24 | 1L << ((ulonglong)(byte)*pcVar13 & 0x3f) |
                       1L << ((ulonglong)(byte)pcVar1[1] & 0x3f) |
                       1L << ((ulonglong)(byte)pcVar2[2] & 0x3f) |
                       1L << ((ulonglong)(byte)pcVar3[3] & 0x3f);
              uVar25 = uVar25 - 4;
            } while (uVar25 != 0);
          }
          if (uVar19 != 0) {
            uVar25 = 0;
            do {
              uVar24 = uVar24 | 1L << ((ulonglong)(byte)(*pauVar15)[uVar25] & 0x3f);
              uVar25 = uVar25 + 1;
            } while (uVar19 != uVar25);
          }
          local_2f8 = (uint)(byte)(*param_2)[(longlong)*local_2f0];
          pauVar15 = local_2a0;
          local_278 = local_190;
          local_c8 = local_1a0;
          local_1a0 = pauVar26;
          local_190 = pauVar17;
          local_d8 = pauVar16;
          uVar19 = FUN_1801d1130(local_2f0,local_2a0,0);
          pauVar26 = param_4;
          uVar25 = FUN_1801d1130(pauVar27,param_4,1);
          if (uVar19 <= uVar25) {
            uVar19 = uVar25;
            pauVar15 = pauVar26;
          }
          pauVar26 = param_4;
          uVar14 = FUN_1801d1050(pauVar27,param_4,pauVar15,uVar19);
          local_1d8 = local_1f8;
          local_1f8 = local_140;
          local_298 = SUB41(local_2f4,0);
          uStack_1e7 = SUB81(uStack_158 >> 8,0);
          local_248 = (byte)local_2d8;
          local_2d8._0_1_ = SUB81(uStack_158 >> 0x38,0);
          local_240 = (byte)local_2d0;
          local_2d0._0_1_ = SUB81(uStack_158 >> 0x30,0);
          auVar29._8_8_ = pauVar26;
          auVar29._0_8_ = uVar14;
          local_258 = (byte)local_2c8;
          local_2c8._0_1_ = SUB81(uStack_158 >> 0x28,0);
          local_250 = (byte)local_2c0;
          local_2c0._0_1_ = (byte)(uStack_158 >> 0x20);
          unaff_XMM10._8_8_ = uVar19;
          unaff_XMM10._0_8_ = uVar24;
          local_238 = (byte)local_2b0;
          local_260 = (byte)local_2b8;
          local_2b8._0_1_ = (byte)(uStack_158 >> 0x18);
          local_2b0._0_1_ = (byte)(uStack_158 >> 0x10);
          local_268 = SUB81(local_208,0);
          param_2 = (undefined1 (*) [16])(uStack_158 & 0xff);
          local_2e8 = FUN_1801d09f0;
          local_208 = FUN_1801d0120;
          local_118 = SUB81(local_2e0,0);
          uVar11 = (uint)local_d0;
          uVar12 = (uint)local_198;
          in_XMM0 = local_130;
          unaff_XMM7 = auVar7;
          unaff_XMM8 = local_150;
          local_137 = uStack_1e7;
          goto LAB_1801b564a;
        }
        uVar19 = (ulonglong)((uint)local_2a0 & 3);
        pauVar15 = local_2f0;
        if (local_2a0[-1] + 0xf < (code *)0x3) {
          unaff_R15 = (undefined1 (*) [16])0x0;
        }
        else {
          uVar24 = (ulonglong)local_2a0 & 0x7ffffffffffffffc;
          unaff_R15 = (undefined1 (*) [16])0x0;
          do {
            pcVar13 = (code *)*pauVar15;
            pcVar1 = (code *)*pauVar15;
            pcVar2 = (code *)*pauVar15;
            pcVar3 = (code *)*pauVar15;
            pauVar15 = (undefined1 (*) [16])(*pauVar15 + 4);
            unaff_R15 = (undefined1 (*) [16])
                        ((ulonglong)unaff_R15 | 1L << ((ulonglong)(byte)*pcVar13 & 0x3f) |
                         1L << ((ulonglong)(byte)pcVar1[1] & 0x3f) |
                         1L << ((ulonglong)(byte)pcVar2[2] & 0x3f) |
                        1L << ((ulonglong)(byte)pcVar3[3] & 0x3f));
            uVar24 = uVar24 - 4;
          } while (uVar24 != 0);
        }
        if (uVar19 != 0) {
          uVar24 = 0;
          do {
            unaff_R15 = (undefined1 (*) [16])
                        ((ulonglong)unaff_R15 | 1L << ((ulonglong)(byte)(*pauVar15)[uVar24] & 0x3f))
            ;
            uVar24 = uVar24 + 1;
          } while (uVar19 != uVar24);
        }
        pauVar15 = local_2a0;
        uVar11 = (uint)local_1d0[3];
        local_c8 = local_1a0;
        local_1a0 = pauVar26;
        local_190 = pauVar17;
        local_d8 = pauVar16;
        pauVar26 = (undefined1 (*) [16])FUN_1801d1130(local_2f0,local_2a0,0);
        uVar12 = (uint)pauVar22;
LAB_1801b645f:
        pauVar17 = param_4;
        pauVar16 = (undefined1 (*) [16])FUN_1801d1130(pauVar27,param_4,1);
        if (pauVar26 <= pauVar16) {
          pauVar26 = pauVar16;
          pauVar15 = pauVar17;
        }
        pauVar17 = pauVar27;
        param_2 = param_4;
        pauVar16 = pauVar15;
        uVar14 = FUN_1801d1050(pauVar27,param_4,pauVar15,pauVar26);
        local_118 = SUB81(pauVar16,0);
        local_137 = SUB81(pauVar17,0);
        auVar29._8_8_ = param_2;
        auVar29._0_8_ = uVar14;
        in_XMM0._8_8_ = 0;
        in_XMM0._0_8_ = pauVar26;
        unaff_XMM10._8_8_ = pauVar26;
        unaff_XMM10._0_8_ = unaff_R15;
        local_2e8 = FUN_1801d05a0;
        local_238 = 0xa0;
        local_260 = 0xa0;
        local_250 = 0xa0;
        local_258 = 0xa0;
        local_240 = 0xa0;
        local_248 = 0xa0;
        local_268 = (code)0xa0;
        local_2b0._0_1_ = 0xa0;
        local_2b8._0_1_ = 0xa0;
        local_2c0._0_1_ = 0xa0;
        local_2c8._0_1_ = (code)0xa0;
        local_2d0._0_1_ = (code)0xa0;
        local_2d8._0_1_ = (code)0xa0;
        local_298 = (code)0xa0;
        local_270 = (undefined1 (*) [16])FUN_1801d05a0;
        local_290 = (undefined1 (*) [16])FUN_1801d05a0;
        local_280 = (undefined1 (*) [16])FUN_1801d05a0;
        local_288 = (undefined1 (*) [16])FUN_1801d05a0;
        local_278 = (undefined1 (*) [16])FUN_1801d05a0;
        local_220 = (undefined1 (*) [16])FUN_1801d05a0;
        local_228 = (undefined1 (*) [16])FUN_1801d05a0;
        local_2a8 = (undefined1 (*) [16])FUN_1801d05a0;
        local_2f8 = 0x801d05a0;
        local_230 = (undefined1 (*) [16])FUN_1801d05a0;
        local_1a0 = pauVar15;
        local_c8 = param_4;
        local_190 = pauVar27;
        local_d8 = pauVar26;
        auVar33 = unaff_XMM11;
        goto LAB_1801b564a;
      }
      if (*(longlong *)PTR_DAT_1802fd650 == 0) goto LAB_1801b5fd9;
      if ((short)*(longlong *)PTR_DAT_1802fd650 < 0) goto LAB_1801b5ff8;
LAB_1801b5bc9:
      param_4 = local_2a0;
      pauVar27 = local_2f0;
      uVar12 = (uint)local_2e0 & 0xff;
      pauVar15 = (undefined1 (*) [16])(ulonglong)uVar12;
      if (local_2a0 <= pauVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(pauVar15,local_2a0,&PTR_s_C__Users_burne__cargo_registry_s_180286508);
      }
      param_1 = (undefined1 (*) [16])((ulonglong)unaff_R14 & 0xff);
      if (local_2a0 <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(param_1,local_2a0,&PTR_s_C__Users_burne__cargo_registry_s_180286520);
      }
      cVar4 = (code)(*pauVar15)[(longlong)*local_2f0];
      param_3 = (undefined1 (*) [16])(ulonglong)(byte)cVar4;
      uVar21 = uVar12;
      if ((byte)(uint)local_2e0 < bVar8) {
        uVar21 = (uint)param_1;
      }
      local_2f8 = (uint)(byte)cVar4;
      in_R10 = (undefined1 (*) [16])((ulonglong)uVar21 + 0x10);
      if ((undefined1 (*) [16])((ulonglong)uVar21 + 0x10) <= local_2a0) {
        in_R10 = local_2a0;
      }
      auVar29 = pshuflw(ZEXT216(CONCAT11(cVar4,cVar4)),ZEXT216(CONCAT11(cVar4,cVar4)),0);
      auVar33._0_8_ = auVar29._0_8_;
      auVar33._8_4_ = auVar29._0_4_;
      auVar33._12_4_ = auVar29._4_4_;
      cVar4 = (code)(*param_1)[(longlong)*local_2f0];
      param_2 = (undefined1 (*) [16])(ulonglong)(byte)cVar4;
      auVar29 = pshuflw(ZEXT216(CONCAT11(cVar4,cVar4)),ZEXT216(CONCAT11(cVar4,cVar4)),0);
      unaff_XMM7._0_8_ = auVar29._0_8_;
      unaff_XMM7._8_4_ = auVar29._0_4_;
      unaff_XMM7._12_4_ = auVar29._4_4_;
      if ((undefined1 (*) [16])&DAT_00000020 < local_2a0) {
        local_200 = in_R10;
        if ((char)local_2e8 != '\0') {
          uVar19 = (ulonglong)((uint)local_2a0 & 3);
          pauVar15 = local_2f0;
          if (local_2a0[-1] + 0xf < (code *)0x3) {
            pauVar26 = (undefined1 (*) [16])0x0;
          }
          else {
            uVar24 = (ulonglong)local_2a0 & 0x7ffffffffffffffc;
            pauVar26 = (undefined1 (*) [16])0x0;
            do {
              pcVar13 = (code *)*pauVar15;
              pcVar1 = (code *)*pauVar15;
              pcVar2 = (code *)*pauVar15;
              pcVar3 = (code *)*pauVar15;
              pauVar15 = (undefined1 (*) [16])(*pauVar15 + 4);
              pauVar26 = (undefined1 (*) [16])
                         ((ulonglong)pauVar26 | 1L << ((ulonglong)(byte)*pcVar13 & 0x3f) |
                          1L << ((ulonglong)(byte)pcVar1[1] & 0x3f) |
                          1L << ((ulonglong)(byte)pcVar2[2] & 0x3f) |
                         1L << ((ulonglong)(byte)pcVar3[3] & 0x3f));
              uVar24 = uVar24 - 4;
            } while (uVar24 != 0);
          }
          if (uVar19 != 0) {
            uVar24 = 0;
            do {
              pauVar26 = (undefined1 (*) [16])
                         ((ulonglong)pauVar26 | 1L << ((ulonglong)(byte)(*pauVar15)[uVar24] & 0x3f))
              ;
              uVar24 = uVar24 + 1;
            } while (uVar19 != uVar24);
          }
          pauVar15 = local_2a0;
          pauVar16 = (undefined1 (*) [16])FUN_1801d1130(local_2f0,local_2a0,0);
          uVar12 = (uint)in_R10;
          pauVar17 = (undefined1 (*) [16])FUN_1801d1130(pauVar27,param_4,1);
          if (pauVar17 < pauVar16) {
            pauVar17 = pauVar16;
          }
          else {
            pauVar15 = param_4;
          }
          pauVar22 = local_2a0;
          uVar14 = FUN_1801d1050(pauVar27,local_2a0,pauVar15,pauVar17);
          auVar29._8_8_ = pauVar22;
          auVar29._0_8_ = uVar14;
          in_XMM0._8_8_ = 0;
          in_XMM0._0_8_ = pauVar17;
          unaff_XMM10._8_8_ = pauVar17;
          unaff_XMM10._0_8_ = pauVar26;
          local_2e8 = FUN_1801d09f0;
          local_208 = FUN_1801d0320;
          local_238 = 0x20;
          local_260 = 0x20;
          local_250 = 0x20;
          local_258 = 0x20;
          local_240 = 0x20;
          local_248 = 0x20;
          local_268 = (code)0x20;
          local_2b0._0_1_ = 0x20;
          local_2b8._0_1_ = 0x20;
          local_2c0._0_1_ = 0x20;
          local_2c8._0_1_ = (code)0x20;
          local_2d0._0_1_ = (code)0x20;
          local_2d8._0_1_ = (code)0x20;
          local_298 = (code)0x20;
          local_270 = (undefined1 (*) [16])FUN_1801d0320;
          local_290 = (undefined1 (*) [16])FUN_1801d0320;
          local_280 = (undefined1 (*) [16])FUN_1801d0320;
          local_288 = (undefined1 (*) [16])FUN_1801d0320;
          local_278 = (undefined1 (*) [16])FUN_1801d0320;
          local_220 = (undefined1 (*) [16])FUN_1801d0320;
          local_228 = (undefined1 (*) [16])FUN_1801d0320;
          local_2a8 = (undefined1 (*) [16])FUN_1801d0320;
          param_2 = (undefined1 (*) [16])((ulonglong)local_2e0 & 0xffffffff);
          local_118 = SUB81(local_2e0,0);
          local_230 = (undefined1 (*) [16])FUN_1801d0320;
          local_137 = SUB41(local_2f4,0);
          local_1a0 = pauVar16;
          param_4 = local_2a0;
          local_c8 = pauVar26;
          local_190 = pauVar27;
          local_d8 = pauVar15;
          unaff_R15 = local_200;
          goto LAB_1801b564a;
        }
        uVar19 = (ulonglong)((uint)local_2a0 & 3);
        pauVar15 = local_2f0;
        if (local_2a0[-1] + 0xf < (code *)0x3) {
          unaff_R15 = (undefined1 (*) [16])0x0;
        }
        else {
          uVar24 = (ulonglong)local_2a0 & 0x7ffffffffffffffc;
          unaff_R15 = (undefined1 (*) [16])0x0;
          do {
            pcVar13 = (code *)*pauVar15;
            pcVar1 = (code *)*pauVar15;
            pcVar2 = (code *)*pauVar15;
            pcVar3 = (code *)*pauVar15;
            pauVar15 = (undefined1 (*) [16])(*pauVar15 + 4);
            unaff_R15 = (undefined1 (*) [16])
                        ((ulonglong)unaff_R15 | 1L << ((ulonglong)(byte)*pcVar13 & 0x3f) |
                         1L << ((ulonglong)(byte)pcVar1[1] & 0x3f) |
                         1L << ((ulonglong)(byte)pcVar2[2] & 0x3f) |
                        1L << ((ulonglong)(byte)pcVar3[3] & 0x3f));
            uVar24 = uVar24 - 4;
          } while (uVar24 != 0);
        }
        if (uVar19 != 0) {
          uVar24 = 0;
          do {
            unaff_R15 = (undefined1 (*) [16])
                        ((ulonglong)unaff_R15 | 1L << ((ulonglong)(byte)(*pauVar15)[uVar24] & 0x3f))
            ;
            uVar24 = uVar24 + 1;
          } while (uVar19 != uVar24);
        }
        pauVar15 = local_2a0;
        pauVar26 = (undefined1 (*) [16])FUN_1801d1130(local_2f0,local_2a0,0);
        uVar12 = (uint)in_R10;
        goto LAB_1801b645f;
      }
      auVar30._8_8_ = 0;
      auVar30._0_8_ = in_R10;
      auVar32._4_4_ = 0;
      auVar32._0_4_ = uVar12;
      auVar32._8_4_ = uVar12;
      auVar32._12_4_ = 0;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = (longlong)param_1 << 8;
      in_XMM0 = auVar31 << 0x40;
      unaff_XMM11 = ~_DAT_1802862c0 & in_XMM0 |
                    (~_DAT_1802862b0 & auVar32 | auVar30 & _DAT_1802862b0) & _DAT_1802862c0;
      local_280 = (undefined1 (*) [16])FUN_1801cfc80;
      local_2e8 = FUN_1801cfc80;
      local_238 = 0x80;
      local_260 = 0x80;
      local_250 = 0x80;
      local_258 = 0x80;
      local_240 = 0x80;
      local_248 = 0x80;
      local_268 = (code)0x80;
      local_2b0._0_1_ = 0x80;
      local_2b8._0_1_ = 0x80;
      local_2c0._0_1_ = 0x80;
      unaff_XMM10 = unaff_XMM7;
    }
    local_298 = SUB81(local_280,0);
    uVar12 = (uint)in_R10;
    local_118 = SUB81(param_3,0);
    local_137 = SUB81(param_1,0);
    local_2f8 = (uint)local_280;
    local_1a0 = unaff_RBX;
    local_c8 = unaff_R12;
    local_190 = pauVar27;
    local_d8 = unaff_R14;
    auVar29 = auVar33;
    auVar33 = unaff_XMM11;
    local_2a8 = local_280;
    local_290 = local_280;
    local_288 = local_280;
    local_278 = local_280;
    local_270 = local_280;
    local_230 = local_280;
    local_228 = local_280;
    local_220 = local_280;
    local_2c8._0_1_ = local_298;
    local_2d0._0_1_ = local_298;
    local_2d8._0_1_ = local_298;
  }
LAB_1801b564a:
  *(undefined8 *)local_210[0x10] = 0;
  *(undefined1 (**) [16])(local_210[0x10] + 8) = local_2f0;
  *(undefined1 (**) [16])local_210[0x11] = param_4;
  *local_210 = auVar29;
  local_210[1] = unaff_XMM10;
  local_210[2] = auVar33;
  local_210[3] = unaff_XMM7;
  *(undefined1 (**) [16])local_210[4] = unaff_R15;
  local_210[4][8] = SUB81(param_2,0);
  local_210[4][9] = local_137;
  *(uint *)(local_210[4] + 10) =
       CONCAT13(local_2c8._0_1_,CONCAT12((byte)local_2c0,CONCAT11((byte)local_2b8,(byte)local_2b0)))
  ;
  *(ushort *)(local_210[4] + 0xe) = CONCAT11(local_2d8._0_1_,local_2d0._0_1_);
  local_210[5] = unaff_XMM8;
  *(undefined1 (**) [16])local_210[6] = local_1f8;
  local_210[6][8] = local_118;
  local_210[6][9] = local_298;
  *(uint *)(local_210[6] + 10) =
       CONCAT13(local_258,CONCAT12(local_250,CONCAT11(local_260,local_238)));
  *(ushort *)(local_210[6] + 0xe) = CONCAT11(local_248,local_240);
  local_210[7] = in_XMM0;
  *(undefined1 (**) [16])local_210[8] = local_1d8;
  local_210[8][8] = local_268;
  local_210[8][9] = SUB81(local_2a8,0);
  *(uint *)(local_210[8] + 10) =
       CONCAT13(local_288._0_1_,CONCAT12(local_280._0_1_,CONCAT11(local_290._0_1_,local_270._0_1_)))
  ;
  *(ushort *)(local_210[8] + 0xe) = CONCAT11(local_220._0_1_,local_278._0_1_);
  local_210[9] = unaff_XMM9;
  *(undefined1 (**) [16])local_210[10] = local_188;
  local_210[10][8] = SUB81(local_228,0);
  local_210[10][9] = SUB81(local_1a0,0);
  *(uint *)(local_210[10] + 10) =
       uVar11 << 0x18 |
       ((uint)local_c8 & 0xff) << 0x10 | ((uint)local_d8 & 0xff) << 8 | (uint)(byte)local_230;
  *(ushort *)(local_210[10] + 0xe) = (ushort)((uVar12 & 0xff) << 8) | (ushort)local_190 & 0xff;
  local_210[0xb] = unaff_XMM12;
  *(code **)local_210[0xc] = local_208;
  local_210[0xc][8] = SUB41(local_2f8,0);
  local_210[0xc][9] = local_118;
  *(ulonglong *)(local_210[0xd] + 8) = CONCAT62(uStack_170,uStack_172);
  *(undefined1 (**) [16])(local_210[0xc] + 10) = local_180;
  *(ulonglong *)(local_210[0xd] + 2) = CONCAT26(uStack_172,uStack_178);
  *(uint *)local_210[0xe] = uVar23;
  *(int *)(local_210[0xe] + 4) = local_214;
  *(code **)(local_210[0xe] + 8) = local_2e8;
  return;
}


