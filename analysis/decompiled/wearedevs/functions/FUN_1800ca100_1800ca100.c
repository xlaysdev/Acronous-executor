/* FUN_1800ca100 @ 1800ca100 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1800ca100(undefined8 *param_1,longlong *param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char acVar17 [16];
  char acVar18 [16];
  char cVar19;
  int iVar20;
  longlong *plVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ushort uVar31;
  uint uVar32;
  longlong lVar33;
  undefined8 *puVar34;
  byte ******ppppppbVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  byte ******ppppppbVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong *plVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulonglong uStack_308;
  longlong local_2c8;
  longlong lStack_2c0;
  undefined1 local_2b8 [16];
  byte *****local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  byte *******local_290;
  longlong local_288;
  undefined8 *local_280;
  size_t local_278;
  longlong local_270;
  byte ******local_268;
  ulonglong uStack_260;
  longlong lStack_258;
  longlong local_250;
  ulonglong local_248;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong *local_228;
  uint local_21c;
  longlong local_218;
  undefined1 local_210 [16];
  byte ******local_200;
  longlong local_1f8;
  byte ******local_1f0;
  ulonglong uStack_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  ushort local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [12];
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  byte *******local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ushort local_158;
  undefined6 uStack_156;
  longlong *local_148;
  longlong *local_140;
  ulonglong local_138;
  byte ******local_130;
  longlong local_128;
  longlong local_120;
  byte *******pppppppbStack_118;
  undefined1 local_110 [16];
  longlong local_100;
  longlong local_f8;
  byte ******local_f0;
  longlong local_e8;
  byte *******local_e0;
  ulonglong uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  byte ******local_c0;
  byte ******local_b8;
  char local_a9;
  longlong local_a8;
  longlong local_a0;
  byte ******local_98;
  longlong local_90;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  if (*param_2 < -0x7ffffffffffffffe) {
    *param_1 = 5;
    FUN_18000b470(param_3);
                    /* WARNING: Read-only address (ram,0x000180204b70) is written */
                    /* WARNING: Read-only address (ram,0x000180204b80) is written */
    return param_1;
  }
  lVar27 = param_2[1];
  lVar29 = param_2[2];
  local_83 = 1;
  local_280 = param_1;
  local_270 = param_3;
  local_a9 = param_4;
  plVar21 = (longlong *)FUN_1801dd4b0();
  if ((char)plVar21[2] == '\x01') {
    local_198._0_8_ = *plVar21;
    param_2 = (longlong *)plVar21[1];
  }
  else {
    local_83 = 1;
    local_198._0_8_ = FUN_1801dca90();
    *plVar21 = local_198._0_8_;
    plVar21[1] = (longlong)param_2;
    *(undefined1 *)(plVar21 + 2) = 1;
  }
  ppppppbVar38 = (byte ******)(local_198._0_8_ + 1);
  *plVar21 = (longlong)ppppppbVar38;
  local_1a8 = ZEXT816(0);
  local_1b8._8_8_ = 0;
  local_1b8._0_8_ = &DAT_180213550;
  stack0xfffffffffffffe70 = param_2;
  if (lVar29 != 0) {
    ppppppbVar38 = (byte ******)local_198;
    FUN_1801f7400(local_1b8,lVar29,ppppppbVar38,1);
    lVar30 = 0;
    do {
      FUN_1800a1fd0(local_1b8,lVar30 * 0x20 + lVar27);
      lVar30 = lVar30 + 1;
    } while (lVar30 != lVar29);
  }
  local_2a8 = (byte *****)local_198._0_8_;
  local_2a0 = stack0xfffffffffffffe70;
  local_2b8 = local_1a8;
  local_2c8 = local_1b8._0_8_;
  lStack_2c0 = local_1b8._8_8_;
  local_128 = 0;
  local_1c0 = 0;
  local_1d0 = 2;
  local_1c8 = 0;
  local_200 = (byte ******)0x0;
  local_1f8 = 8;
  local_1f0 = (byte ******)0x0;
  uStack_1e8 = 0;
  local_1e0 = 8;
  local_1d8 = 0;
  local_218 = 0;
  uVar36 = *(undefined8 *)(local_270 + 0x18);
  plVar21 = *(longlong **)(local_270 + 0x20);
  uVar24 = *(ulonglong *)(local_270 + 0x40);
  lVar27 = *(longlong *)(local_270 + 0x30);
  lVar29 = *(longlong *)(local_270 + 0x38);
  plVar41 = plVar21 + *(longlong *)(local_270 + 0x28) * 0xd;
  if (*(longlong *)(local_270 + 0x50) != 0) {
    ppppppbVar38 = (byte ******)0x0;
    thunk_FUN_1801d3330(*(undefined8 *)(local_270 + 0x48),*(longlong *)(local_270 + 0x50) << 2);
  }
  acVar18 = s_modnarodsetybdet_180204b80;
  acVar17 = s_uespemosarenegyl_180204b70;
  local_268 = (byte ******)0x0;
  uStack_260 = uStack_308;
  local_130 = (byte ******)0x0;
  lStack_258 = lVar27;
  local_250 = lVar29;
  local_248 = uVar24;
  local_240 = plVar21;
  local_238 = plVar21;
  local_230 = uVar36;
  local_228 = plVar41;
  local_140 = plVar41;
LAB_1800ca34c:
  do {
    if (((ulonglong)local_130 & 1) == 0) {
      if (plVar21 == plVar41) {
LAB_1800caed2:
        FUN_18005a290(&local_268);
        FUN_180032b40(&local_240);
        local_130 = (byte ******)local_248;
        local_b8 = (byte ******)local_250;
        puVar34 = (undefined8 *)(local_250 + 0x38);
        local_c0 = (byte ******)0x0;
        while (local_130 != local_c0) {
          local_c0 = (byte ******)((longlong)local_c0 + 1);
          uVar36 = *puVar34;
          plVar21 = puVar34 + -3;
          puVar8 = puVar34 + -2;
          puVar9 = puVar34 + -1;
          puVar34 = puVar34 + 9;
          (**(code **)(*plVar21 + 0x20))(uVar36,*puVar8,*puVar9);
        }
        if (lStack_258 != 0) {
          thunk_FUN_1801d3330(local_b8,lStack_258 * 0x48,8);
        }
        puVar34 = local_280;
        local_e0 = (byte *******)0x0;
        uStack_d8 = 1;
        local_d0 = 0;
        if (local_a9 == '\0') {
          local_84 = 1;
          FUN_18011ba20(&local_218,&local_e0);
        }
        else {
          local_84 = 1;
          FUN_18011c400(&local_218,&local_e0);
        }
        if (local_d0 == 0) {
          *puVar34 = 5;
          if (local_e0 != (byte *******)0x0) {
            thunk_FUN_1801d3330(uStack_d8,local_e0,1);
          }
          FUN_18000b470(&local_218);
          if ((local_128 != 0) && (local_120 != 0)) {
            (**(code **)(local_120 + 0x20))(local_110._8_8_,pppppppbStack_118,local_110._0_8_);
          }
        }
        else {
          lStack_258 = local_d0;
          local_268 = (byte ******)local_e0;
          uStack_260 = uStack_d8;
          local_84 = 0;
          FUN_1801b3d40(local_1b8,&local_268);
          puVar34[5] = local_1a8._0_8_;
          puVar34[6] = local_1a8._8_8_;
          puVar34[3] = local_1b8._0_8_;
          puVar34[4] = local_1b8._8_8_;
          *puVar34 = 4;
          puVar34[1] = "0\r\n";
          puVar34[2] = 3;
          puVar34[7] = 
          "\r\nC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-util-0.1.20\\src\\client\\legacy\\connect\\proxy\\tunnel.rs"
          ;
          puVar34[8] = 2;
          FUN_18000b470(&local_218);
          if ((local_128 != 0) && (local_120 != 0)) {
            (**(code **)(local_120 + 0x20))(local_110._8_8_,pppppppbStack_118,local_110._0_8_);
          }
        }
        if (lStack_2c0 == 0) {
          return puVar34;
        }
        uVar24 = lStack_2c0 * 8 + 0x17U & 0xfffffffffffffff0;
        lVar27 = lStack_2c0 + uVar24 + 0x11;
        if (lVar27 == 0) {
          return puVar34;
        }
        thunk_FUN_1801d3330(local_2c8 - uVar24,lVar27,0x10);
        return puVar34;
      }
      plVar10 = plVar21 + 0xd;
      local_238 = plVar10;
      if (*plVar21 == 2) goto LAB_1800caed2;
      uStack_260 = plVar21[1];
      auVar43 = *(undefined1 (*) [16])(plVar21 + 10);
      lVar27 = plVar21[8];
      pppppppbVar22 = (byte *******)plVar21[9];
      local_a8 = plVar21[3];
      local_a0 = plVar21[4];
      local_98 = (byte ******)plVar21[5];
      local_90 = plVar21[6];
      local_138 = plVar21[7];
      local_268 = (byte ******)(ulonglong)((uint)*plVar21 & 1);
      ppppppbVar35 = ppppppbVar38;
      local_130 = local_268;
      if ((local_128 != 0) && (local_120 != 0)) {
        (**(code **)(local_120 + 0x20))(local_110._8_8_,pppppppbStack_118,local_110._0_8_);
        ppppppbVar35 = (byte ******)local_110._0_8_;
      }
      local_128 = 1;
      ppppppbVar38 = local_98;
      lVar29 = local_a8;
      lVar30 = local_a0;
      plVar21 = plVar10;
      lVar33 = local_90;
      local_120 = lVar27;
      pppppppbStack_118 = pppppppbVar22;
      local_110 = auVar43;
    }
    else {
      if (local_248 <= uStack_260) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uStack_260,local_248,&PTR_s_C__Users_burne__cargo_registry_s_180209a48);
      }
      bVar42 = *(char *)(local_250 + 0x10 + uStack_260 * 0x48) == '\0';
      if (bVar42) {
        uVar24 = local_248;
      }
      else {
        uVar24 = *(ulonglong *)(local_250 + uStack_260 * 0x48 + 0x18);
      }
      ppppppbVar35 = (byte ******)(ulonglong)!bVar42;
      local_100 = *(longlong *)(local_250 + 0x20 + uStack_260 * 0x48);
      local_f8 = *(longlong *)(local_250 + 0x28 + uStack_260 * 0x48);
      local_f0 = *(byte *******)(local_250 + 0x30 + uStack_260 * 0x48);
      local_e8 = *(longlong *)(local_250 + 0x38 + uStack_260 * 0x48);
      local_268 = ppppppbVar35;
      local_130 = ppppppbVar35;
      if ((char)local_128 == '\0') {
        local_82 = 1;
        uStack_260 = uVar24;
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("current header name",0x13,&PTR_s_C__Users_burne__cargo_registry_s_180213e60);
      }
      local_138 = *(ulonglong *)(local_250 + 0x40 + uStack_260 * 0x48);
      ppppppbVar38 = local_f0;
      lVar29 = local_100;
      lVar30 = local_f8;
      lVar33 = local_e8;
      uStack_260 = uVar24;
    }
    local_82 = 1;
    local_100 = lVar29;
    local_f8 = lVar30;
    local_f0 = ppppppbVar38;
    local_e8 = lVar33;
    cVar19 = FUN_1800a1b00(&local_2c8,&local_120);
    if (cVar19 == '\0') {
LAB_1800ca340:
      (**(code **)(lVar29 + 0x20))(lVar33,lVar30);
      goto LAB_1800ca34c;
    }
    if (local_120 == 0) {
      if (((byte)pppppppbStack_118 - 0x10 < 0x36) &&
         ((0x3a000080402543U >> ((ulonglong)((byte)pppppppbStack_118 - 0x10) & 0x3f) & 1) != 0))
      goto LAB_1800ca340;
    }
    local_81 = 1;
    local_148 = plVar21;
    local_a8 = lVar29;
    local_a0 = lVar30;
    local_98 = ppppppbVar38;
    local_90 = lVar33;
    cVar19 = FUN_180053cd0(&local_218);
    lVar40 = local_90;
    ppppppbVar38 = local_98;
    lVar30 = local_a0;
    lVar29 = local_a8;
    lVar27 = local_120;
    if (cVar19 != '\0') {
      local_e8 = local_90;
      local_f0 = local_98;
      local_f8 = local_a0;
      local_100 = local_a8;
      local_82 = 0;
      (**(code **)(local_a8 + 0x20))(local_90,local_a0,local_98);
LAB_1800cb32d:
      local_82 = 0;
      local_100 = lVar29;
      local_f8 = lVar30;
      local_f0 = ppppppbVar38;
      local_e8 = lVar40;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("size overflows MAX_SIZE",0x17,local_1b8,&DAT_1802136a8,
                    &PTR_s_C__Users_burne__cargo_registry_s_180213e78);
    }
    pppppppbVar22 = (byte *******)&local_e0;
    local_288 = local_218;
    if (local_218 == 2) {
      auVar43._0_8_ = local_210._0_8_;
      auVar43._8_4_ = local_210._0_4_;
      auVar43._12_4_ = local_210._4_4_;
      local_1b8 = auVar43 ^ (undefined1  [16])acVar17;
      auVar44._0_8_ = local_210._8_8_;
      auVar44._8_4_ = local_210._8_4_;
      auVar44._12_4_ = local_210._12_4_;
      local_1a8 = auVar44 ^ (undefined1  [16])acVar18;
      _local_198 = local_210;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = (byte *******)0x0;
      local_e0 = (byte *******)(ulonglong)(local_120 != 0);
      FUN_1800271e0(local_1b8,pppppppbVar22,8);
      if (lVar27 == 0) {
        pppppppbVar23 = (byte *******)((ulonglong)pppppppbStack_118 & 0xff);
        uVar36 = 8;
        local_e0 = pppppppbVar23;
      }
      else {
        pppppppbVar22 = pppppppbStack_118;
        pppppppbVar23 = pppppppbStack_118;
        uVar36 = local_110._0_8_;
      }
      FUN_1800271e0(local_1b8,pppppppbVar22,uVar36);
      uVar39 = local_188 << 0x38 | uStack_180;
      uVar25 = local_1a8._8_8_ ^ uVar39;
      uVar37 = local_1b8._0_8_ + local_1a8._0_8_;
      uVar24 = (local_1a8._0_8_ << 0xd | (ulonglong)local_1a8._0_8_ >> 0x33) ^ uVar37;
      uVar26 = (uVar25 << 0x10 | uVar25 >> 0x30) ^ local_1b8._8_8_ + uVar25;
      uVar28 = local_1b8._8_8_ + uVar25 + uVar24;
      uVar37 = (uVar37 << 0x20 | uVar37 >> 0x20) + uVar26;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar28;
      uVar25 = (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar37;
      uVar37 = (uVar37 ^ uVar39) + uVar24;
      uVar26 = ((uVar28 << 0x20 | uVar28 >> 0x20) ^ 0xff) + uVar25;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar37;
      uVar25 = (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar26;
      uVar26 = uVar26 + uVar24;
      uVar28 = (uVar37 << 0x20 | uVar37 >> 0x20) + uVar25;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar26;
      uVar25 = (uVar25 << 0x15 | uVar25 >> 0x2b) ^ uVar28;
      uVar28 = uVar28 + uVar24;
      uVar26 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar25;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar28;
      uVar25 = (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar26;
      uVar26 = uVar26 + uVar24;
      uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar25;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar26;
      uVar25 = (uVar25 << 0x15 | uVar25 >> 0x2b) ^ uVar28;
      lVar29 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar25;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar28 + uVar24;
      lVar30 = lVar29 + uVar24;
      uVar32 = (uint)((ulonglong)lVar30 >> 0x20) ^ (uint)lVar30 ^
               ((uint)(uVar25 >> 0x10) ^ (uint)((ulonglong)lVar29 >> 0x20)) >> 0xb ^
               (uint)(uVar24 >> 0x2f);
      ppppppbVar38 = (byte ******)
                     (CONCAT71((int7)((ulonglong)lVar33 >> 8),lVar27 == 0) & 0xffffffff);
    }
    else {
      uVar32 = (local_120 != 0 ^ 0x84222325) * 0xaef4a21;
      if (local_120 == 0) {
        pppppppbVar23 = (byte *******)((ulonglong)pppppppbStack_118 & 0xff);
        uVar32 = ((byte)pppppppbStack_118 ^ 0x281a39c5) * 0xaef4a21;
        ppppppbVar38 = (byte ******)CONCAT71((int7)((ulonglong)ppppppbVar35 >> 8),1);
      }
      else {
        pppppppbVar23 = pppppppbStack_118;
        if (local_110._0_8_ == 0) {
          ppppppbVar38 = (byte ******)0x0;
        }
        else {
          uVar24 = (ulonglong)(byte)local_110[0] & 7;
          pppppppbVar22 = pppppppbStack_118;
          if (uVar24 != 0) {
            do {
              bVar12 = *(byte *)pppppppbVar22;
              pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 1);
              uVar32 = (bVar12 ^ uVar32) * 0x1b3;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          if (7 < (ulonglong)local_110._0_8_) {
            do {
              bVar12 = *(byte *)pppppppbVar22;
              pbVar1 = (byte *)((longlong)pppppppbVar22 + 1);
              pbVar2 = (byte *)((longlong)pppppppbVar22 + 2);
              pbVar3 = (byte *)((longlong)pppppppbVar22 + 3);
              pbVar4 = (byte *)((longlong)pppppppbVar22 + 4);
              pbVar5 = (byte *)((longlong)pppppppbVar22 + 5);
              pbVar6 = (byte *)((longlong)pppppppbVar22 + 6);
              pbVar7 = (byte *)((longlong)pppppppbVar22 + 7);
              pppppppbVar22 = pppppppbVar22 + 1;
              uVar32 = ((uint)*pbVar7 ^
                       ((uint)*pbVar6 ^
                       ((uint)*pbVar5 ^
                       ((uint)*pbVar4 ^
                       ((uint)*pbVar3 ^
                       ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar12 ^ uVar32) * 0x1b3) * 0x1b3) * 0x1b3
                       ) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
            } while (pppppppbVar22 != (byte *******)((longlong)pppppppbStack_118 + local_110._0_8_))
            ;
          }
          ppppppbVar38 = (byte ******)0x0;
        }
      }
    }
    uVar14 = local_1c0;
    uVar24 = local_1c8;
    lVar27 = local_1d0;
    local_c0 = (byte ******)(ulonglong)(uVar32 & 0x7fff);
    uVar25 = (ulonglong)(uVar32 & 0x7fff & (uint)local_1c0);
    local_b8 = local_1f0;
    local_278 = local_110._0_8_;
    uVar26 = 0;
    pppppppbVar22 = pppppppbStack_118;
    lVar29 = local_1f8;
LAB_1800ca90d:
    if (uVar24 <= uVar25) {
      uVar25 = 0;
    }
    if (uVar24 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    ppppppbVar35 = (byte ******)(ulonglong)*(ushort *)(lVar27 + uVar25 * 4);
    uVar31 = (ushort)local_c0;
    if (ppppppbVar35 == (byte ******)0xffff) {
      local_81 = 1;
      FUN_1801ae640(&local_e0,&local_120);
      local_c0 = local_1f0;
      if ((byte ******)0x7fff < local_1f0) {
        (**(code **)(local_a8 + 0x20))(local_90,local_a0,local_98);
        if (local_e0 != (byte *******)0x0) {
          local_81 = 0;
          (*(code *)local_e0[4])(uStack_c8,uStack_d8,local_d0);
        }
LAB_1800cb311:
        ppppppbVar38 = local_98;
        lVar29 = local_a8;
        lVar30 = local_a0;
        lVar40 = local_90;
        goto LAB_1800cb32d;
      }
      local_168 = local_d0;
      uStack_160 = uStack_c8;
      local_178 = local_e0;
      uStack_170 = uStack_d8;
      local_1a8._8_8_ = local_a8;
      stack0xfffffffffffffe70 = local_98;
      local_198._0_8_ = local_a0;
      local_188 = local_90;
      uStack_180 = local_138;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_1b8._8_8_;
      local_1b8 = auVar15 << 0x40;
      local_158 = uVar31;
      if (local_1f0 == local_200) {
        FUN_1801fa370(&local_200);
      }
      lVar27 = (longlong)local_c0 * 0x68;
      *(ulonglong *)(local_1f8 + 0x60 + lVar27) = CONCAT62(uStack_156,local_158);
      puVar34 = (undefined8 *)(local_1f8 + 0x50 + lVar27);
      *puVar34 = local_168;
      puVar34[1] = uStack_160;
      puVar34 = (undefined8 *)(local_1f8 + 0x40 + lVar27);
      *puVar34 = local_178;
      puVar34[1] = uStack_170;
      puVar11 = (undefined4 *)(local_1f8 + 0x30 + lVar27);
      *puVar11 = (undefined4)local_188;
      puVar11[1] = local_188._4_4_;
      puVar11[2] = (undefined4)uStack_180;
      puVar11[3] = uStack_180._4_4_;
      puVar11 = (undefined4 *)(local_1f8 + 0x20 + lVar27);
      *puVar11 = local_198._0_4_;
      puVar11[1] = local_198._4_4_;
      puVar11[2] = local_198._8_4_;
      puVar11[3] = uStack_18c;
      *(undefined1 (*) [16])(local_1f8 + 0x10 + lVar27) = local_1a8;
      *(undefined8 *)(local_1f8 + lVar27) = local_1b8._0_8_;
      ((undefined8 *)(local_1f8 + lVar27))[1] = local_1b8._8_8_;
      ppppppbVar38 = (byte ******)((longlong)local_c0 + 1);
      local_1f0 = ppppppbVar38;
      if (local_1c8 <= uVar25) {
        local_81 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar25,local_1c8,&PTR_s_C__Users_burne__cargo_registry_s_1802136f8);
      }
      *(short *)(local_1d0 + uVar25 * 4) = (short)local_b8;
      *(ushort *)(local_1d0 + 2 + uVar25 * 4) = uVar31;
      goto LAB_1800cac0c;
    }
    uVar13 = *(ushort *)(lVar27 + 2 + uVar25 * 4);
    if (uVar26 <= ((int)uVar25 - (uint)(uVar13 & uVar14) & (uint)uVar14)) {
      if (uVar13 == uVar31) {
        if (local_b8 <= ppppppbVar35) {
          local_81 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(ppppppbVar35,local_b8,&PTR_s_C__Users_burne__cargo_registry_s_1802136e0);
        }
        lVar33 = (longlong)ppppppbVar35 * 0x68;
        lVar30 = *(longlong *)(lVar29 + 0x40 + lVar33);
        if ((bool)(char)ppppppbVar38 != (lVar30 != 0)) {
          lVar40 = lVar29 + lVar33;
          if (lVar30 == 0) {
            if (*(char *)(lVar40 + 0x48) == (char)pppppppbVar23) break;
          }
          else if (*(size_t *)(lVar40 + 0x50) == local_278) {
            local_21c = (uint)ppppppbVar38;
            local_298 = lVar29;
            local_290 = pppppppbVar22;
            iVar20 = memcmp(*(void **)(lVar40 + 0x48),pppppppbVar22,local_278);
            ppppppbVar38 = (byte ******)(ulonglong)local_21c;
            pppppppbVar23 = (byte *******)((ulonglong)local_290 & 0xffffffff);
            pppppppbVar22 = local_290;
            lVar29 = local_298;
            if (iVar20 == 0) break;
          }
        }
      }
      uVar26 = uVar26 + 1;
      uVar25 = uVar25 + 1;
      goto LAB_1800ca90d;
    }
    local_81 = 1;
    FUN_1801ae640(&local_e0,&local_120);
    bVar42 = (int)local_288 != 2;
    local_b8 = local_1f0;
    if ((byte ******)0x7fff < local_1f0) {
      (**(code **)(local_a8 + 0x20))(local_90,local_a0,local_98);
      if (local_e0 != (byte *******)0x0) {
        local_81 = 0;
        (*(code *)local_e0[4])(uStack_c8,uStack_d8,local_d0);
      }
      goto LAB_1800cb311;
    }
    local_158 = (ushort)local_c0;
    local_168 = local_d0;
    uStack_160 = uStack_c8;
    local_178 = local_e0;
    uStack_170 = uStack_d8;
    local_1a8._8_8_ = local_a8;
    stack0xfffffffffffffe70 = local_98;
    local_198._0_8_ = local_a0;
    local_188 = local_90;
    uStack_180 = local_138;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_1b8._8_8_;
    local_1b8 = auVar16 << 0x40;
    if (local_1f0 == local_200) {
      FUN_1801fa370(&local_200);
    }
    lVar27 = (longlong)local_b8 * 0x68;
    *(ulonglong *)(local_1f8 + 0x60 + lVar27) = CONCAT62(uStack_156,local_158);
    puVar34 = (undefined8 *)(local_1f8 + 0x50 + lVar27);
    *puVar34 = local_168;
    puVar34[1] = uStack_160;
    puVar34 = (undefined8 *)(local_1f8 + 0x40 + lVar27);
    *puVar34 = local_178;
    puVar34[1] = uStack_170;
    plVar21 = (longlong *)(local_1f8 + 0x30 + lVar27);
    *plVar21 = local_188;
    plVar21[1] = uStack_180;
    puVar34 = (undefined8 *)(local_1f8 + 0x20 + lVar27);
    *puVar34 = local_198._0_8_;
    puVar34[1] = stack0xfffffffffffffe70;
    *(undefined1 (*) [16])(local_1f8 + 0x10 + lVar27) = local_1a8;
    *(undefined8 *)(local_1f8 + lVar27) = local_1b8._0_8_;
    ((undefined8 *)(local_1f8 + lVar27))[1] = local_1b8._8_8_;
    local_1f0 = (byte ******)((longlong)local_b8 + 1);
    uVar24 = 0;
    ppppppbVar38 = local_c0;
    ppppppbVar35 = local_b8;
    while( true ) {
      if (local_1c8 <= uVar25) {
        uVar25 = 0;
      }
      if (local_1c8 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar14 = *(ushort *)(local_1d0 + uVar25 * 4);
      if (uVar14 == 0xffff) break;
      uVar24 = uVar24 + 1;
      uVar31 = *(ushort *)(local_1d0 + 2 + uVar25 * 4);
      *(short *)(local_1d0 + uVar25 * 4) = (short)ppppppbVar35;
      *(short *)(local_1d0 + 2 + uVar25 * 4) = (short)ppppppbVar38;
      uVar25 = uVar25 + 1;
      ppppppbVar38 = (byte ******)(ulonglong)uVar31;
      ppppppbVar35 = (byte ******)(ulonglong)uVar14;
    }
    *(short *)(local_1d0 + uVar25 * 4) = (short)ppppppbVar35;
    *(short *)(local_1d0 + 2 + uVar25 * 4) = (short)ppppppbVar38;
    ppppppbVar38 = (byte ******)0xffff;
    if ((bVar42 && 0x1ff < uVar26 || 0x7f < uVar24) && (local_218 == 0)) {
      local_218 = 1;
    }
LAB_1800cac0c:
    plVar21 = local_148;
    plVar41 = local_140;
  } while( true );
  plVar41 = local_140;
  plVar21 = local_148;
  uVar24 = local_1d8;
  puVar34 = (undefined8 *)(lVar29 + lVar33);
  if (*(int *)(lVar29 + lVar33) == 1) {
    uVar25 = puVar34[2];
    if (local_1d8 == uStack_1e8) {
      FUN_1801f8b00(&uStack_1e8);
    }
    *(undefined8 *)(local_1e0 + uVar24 * 0x48) = 1;
    *(ulonglong *)(local_1e0 + 8 + uVar24 * 0x48) = uVar25;
    *(undefined8 *)(local_1e0 + 0x10 + uVar24 * 0x48) = 0;
    *(byte *******)(local_1e0 + 0x18 + uVar24 * 0x48) = ppppppbVar35;
    *(longlong *)(local_1e0 + 0x20 + uVar24 * 0x48) = local_a8;
    *(longlong *)(local_1e0 + 0x28 + uVar24 * 0x48) = local_a0;
    *(byte *******)(local_1e0 + 0x30 + uVar24 * 0x48) = local_98;
    *(longlong *)(local_1e0 + 0x38 + uVar24 * 0x48) = local_90;
    *(ulonglong *)(local_1e0 + 0x40 + uVar24 * 0x48) = local_138;
    local_1d8 = uVar24 + 1;
    if (uVar24 < uVar25) {
      local_81 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar25,local_1d8,&PTR_s_C__Users_burne__cargo_registry_s_1802136c8);
    }
    *(undefined8 *)(local_1e0 + 0x10 + uVar25 * 0x48) = 1;
    *(ulonglong *)(local_1e0 + 0x18 + uVar25 * 0x48) = uVar24;
    *puVar34 = 1;
    puVar34[2] = uVar24;
  }
  else {
    if (local_1d8 == uStack_1e8) {
      FUN_1801f8b00(&uStack_1e8);
    }
    *(undefined8 *)(local_1e0 + uVar24 * 0x48) = 0;
    *(byte *******)(local_1e0 + 8 + uVar24 * 0x48) = ppppppbVar35;
    *(undefined8 *)(local_1e0 + 0x10 + uVar24 * 0x48) = 0;
    *(byte *******)(local_1e0 + 0x18 + uVar24 * 0x48) = ppppppbVar35;
    *(longlong *)(local_1e0 + 0x20 + uVar24 * 0x48) = local_a8;
    *(longlong *)(local_1e0 + 0x28 + uVar24 * 0x48) = local_a0;
    *(byte *******)(local_1e0 + 0x30 + uVar24 * 0x48) = local_98;
    *(longlong *)(local_1e0 + 0x38 + uVar24 * 0x48) = local_90;
    *(ulonglong *)(local_1e0 + 0x40 + uVar24 * 0x48) = local_138;
    local_1d8 = uVar24 + 1;
    *puVar34 = 1;
    puVar34[1] = uVar24;
    puVar34[2] = uVar24;
  }
  goto LAB_1800ca34c;
}


