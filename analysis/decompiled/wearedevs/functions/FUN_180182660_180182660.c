/* FUN_180182660 @ 180182660 */

undefined8 *
FUN_180182660(undefined8 *param_1,longlong *param_2,longlong *param_3,void *param_4,
             undefined8 param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong **pplVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  longlong local_478;
  longlong lStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  longlong lStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  int iStack_44c;
  uint local_448;
  undefined1 uStack_444;
  undefined1 uStack_443;
  undefined2 uStack_442;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  longlong local_438;
  undefined8 local_430;
  undefined4 local_428;
  longlong *local_420;
  longlong *local_418;
  longlong *local_410;
  ulonglong local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined1 local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  undefined8 local_3c8;
  longlong local_3c0;
  longlong *local_3b8;
  undefined2 local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  undefined8 uStack_387;
  ulonglong local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358 [160];
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 *local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  int iStack_240;
  int iStack_23c;
  int local_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong local_200;
  longlong lStack_1f8;
  longlong local_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  longlong lStack_1c8;
  undefined8 local_1c0;
  longlong lStack_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong *local_140;
  longlong *local_138;
  void *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *plStack_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  int *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong **local_80;
  undefined1 local_75;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar14 = (longlong)param_2 * 8;
  local_130 = param_4;
  local_c0 = param_3;
  if (0x7ffffffffffffff8 < uVar14 || (ulonglong)param_2 >> 0x3d != 0) {
    uVar20 = 0;
LAB_1801826d4:
    local_6b = 1;
    local_6c = 1;
    local_6d = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar20,uVar14);
  }
  local_278 = param_5;
  local_88 = param_2;
  if (uVar14 == 0) {
    local_a8 = (longlong *)&DAT_00000008;
    local_b0 = (longlong *)0x0;
  }
  else {
    FUN_180027490();
    uVar20 = 8;
    local_a8 = (longlong *)thunk_FUN_1801d32d0(uVar14,8);
    if (local_a8 == (longlong *)0x0) goto LAB_1801826d4;
    local_b0 = local_88;
  }
  local_a0 = (longlong *)0x0;
  uVar21 = (longlong)local_88 * 0x10;
  if (0x7ffffffffffffff8 < uVar21 || (ulonglong)local_88 >> 0x3c != 0) {
    uVar20 = 0;
LAB_180182778:
    local_6e = 1;
    local_6f = 1;
    local_70 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar20,uVar21);
  }
  local_270 = param_1;
  if (uVar21 == 0) {
    plStack_d8 = (longlong *)&DAT_00000008;
    local_e0 = (longlong *)0x0;
    plVar19 = local_88;
  }
  else {
    FUN_180027490();
    uVar20 = 8;
    plVar19 = (longlong *)&DAT_00000008;
    plStack_d8 = (longlong *)thunk_FUN_1801d32d0(uVar21);
    if (plStack_d8 == (longlong *)0x0) goto LAB_180182778;
    local_e0 = local_88;
  }
  local_d0 = (longlong *)0x0;
  uVar21 = (longlong)local_88 * 0x80;
  if (0x7fffffffffffff80 < uVar21 || (ulonglong)local_88 >> 0x39 != 0) {
    uVar20 = 0;
LAB_18018281f:
    local_71 = 1;
    local_72 = 1;
    local_73 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar20,uVar21);
  }
  if (uVar21 == 0) {
    local_f0 = 0x80;
    local_f8 = (longlong *)0x0;
  }
  else {
    FUN_180027490();
    uVar20 = 0x80;
    plVar19 = (longlong *)0x80;
    local_f0 = thunk_FUN_1801d32d0(uVar21);
    if (local_f0 == 0) goto LAB_18018281f;
    local_f8 = local_88;
  }
  local_e8 = (longlong *)0x0;
  local_b8 = (int *)((longlong)param_7 + 0x4c);
  plVar13 = (longlong *)0x0;
  plVar15 = local_88;
  local_100 = uVar14;
  while (uVar14 = local_100, plVar13 < plVar15) {
    local_63 = 1;
    local_64 = 1;
    local_65 = 1;
    plVar10 = (longlong *)FUN_18017f120();
    plVar15 = (longlong *)local_c0[2];
    LOCK();
    lVar16 = *plVar15;
    *plVar15 = *plVar15 + 1;
    UNLOCK();
    lVar12 = uStack_490;
    local_280 = plVar19;
    local_138 = plVar10;
    if (*plVar15 == 0 || SCARRY8(lVar16,1) != *plVar15 < 0) goto LAB_1801833fc;
    pplVar4 = (longlong **)local_c0[2];
    local_4b8 = (longlong *)0x1;
    uStack_4b0 = (longlong *)0x1;
    uStack_4a0 = (longlong *)0x0;
    local_498 = (longlong *)((ulonglong)local_498 & 0xffff000000000000);
    local_4a8 = pplVar4;
    FUN_180027490();
    uVar18 = 8;
    plVar11 = (longlong *)thunk_FUN_1801d32d0(0x28);
    if (plVar11 == (longlong *)0x0) {
      local_80 = pplVar4;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    plVar11[4] = (longlong)local_498;
    *(undefined4 *)(plVar11 + 2) = (undefined4)local_4a8;
    *(undefined4 *)((longlong)plVar11 + 0x14) = local_4a8._4_4_;
    *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_4a0;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_4a0._4_4_;
    *(undefined4 *)plVar11 = (undefined4)local_4b8;
    *(undefined4 *)((longlong)plVar11 + 4) = local_4b8._4_4_;
    *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_4b0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_4b0._4_4_;
    LOCK();
    lVar16 = *plVar11;
    *plVar11 = *plVar11 + 1;
    UNLOCK();
    lVar12 = uStack_490;
    local_248 = plVar11;
    if (*plVar11 == 0 || SCARRY8(lVar16,1) != *plVar11 < 0) goto LAB_1801833fc;
    local_61 = 1;
    local_62 = 1;
    local_120 = plVar11;
    local_98 = plVar10;
    local_80 = (longlong **)FUN_1801df8c0();
    local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar18);
    local_61 = 1;
    local_62 = 1;
    lVar12 = FUN_1801df8c0();
    bVar2 = *(byte *)(param_7 + 0xb);
    uVar3 = *(undefined1 *)((longlong)param_7 + 0x5b);
    lVar16 = *param_7;
    iVar28 = *(int *)((longlong)param_7 + 4);
    uVar17 = uVar18;
    local_228 = plVar11;
    local_1a8 = plVar19;
    local_c8 = plVar13;
    uVar9 = FUN_18016f900(local_b8);
    if ((int)lVar16 == 0) {
      iVar28 = 0x3d;
    }
    uStack_450 = 0;
    local_4b8 = (longlong *)0x0;
    uStack_4a0 = local_1a8;
    local_448 = (uint)(bVar2 ^ 1);
    uStack_444 = 1;
    uStack_4b0 = local_228;
    local_498 = (longlong *)0x0;
    uStack_490 = 0x40a99d60864b8a7e;
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    lStack_470 = (longlong)local_80;
    local_468 = local_90._0_4_;
    local_4a8 = (longlong **)CONCAT44(uVar17,uVar9);
    lStack_460 = lVar12;
    local_458 = uVar18;
    iStack_44c = iVar28;
    uStack_443 = uVar3;
    FUN_180027490();
    plVar19 = (longlong *)&DAT_00000008;
    plVar13 = (longlong *)thunk_FUN_1801d32d0(0x78);
    plVar10 = local_a0;
    if (plVar13 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x78);
    }
    plVar13[0xe] = CONCAT26(uStack_442,CONCAT15(uStack_443,CONCAT14(uStack_444,local_448)));
    plVar13[0xc] = CONCAT44(uStack_454,local_458);
    plVar13[0xd] = CONCAT44(iStack_44c,uStack_450);
    plVar13[10] = CONCAT44(uStack_464,local_468);
    plVar13[0xb] = lStack_460;
    plVar13[8] = local_478;
    plVar13[9] = lStack_470;
    *(undefined4 *)(plVar13 + 6) = (undefined4)local_488;
    *(undefined4 *)((longlong)plVar13 + 0x34) = local_488._4_4_;
    *(undefined4 *)(plVar13 + 7) = (undefined4)uStack_480;
    *(undefined4 *)((longlong)plVar13 + 0x3c) = uStack_480._4_4_;
    *(undefined4 *)(plVar13 + 4) = (undefined4)local_498;
    *(undefined4 *)((longlong)plVar13 + 0x24) = local_498._4_4_;
    *(undefined4 *)(plVar13 + 5) = (undefined4)uStack_490;
    *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_490._4_4_;
    *(undefined4 *)(plVar13 + 2) = (undefined4)local_4a8;
    *(undefined4 *)((longlong)plVar13 + 0x14) = local_4a8._4_4_;
    *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_4a0;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4a0._4_4_;
    *(undefined4 *)plVar13 = (undefined4)local_4b8;
    *(undefined4 *)((longlong)plVar13 + 4) = local_4b8._4_4_;
    *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_4b0;
    *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_4b0._4_4_;
    local_80 = (longlong **)plVar13;
    if (local_a0 == local_b0) {
      FUN_1801fb290(&local_b0);
    }
    plVar15 = local_88;
    plVar8 = local_98;
    plVar13 = local_c8;
    plVar7 = local_d0;
    local_a8[(longlong)plVar10] = (longlong)local_80;
    local_a0 = (longlong *)((longlong)plVar10 + 1);
    local_4b8 = local_98;
    uStack_4b0 = plVar11;
    if (local_d0 == local_e0) {
      FUN_1801fb300(&local_e0);
    }
    plVar10 = local_e8;
    plStack_d8[(longlong)plVar7 * 2] = (longlong)plVar8;
    plStack_d8[(longlong)plVar7 * 2 + 1] = (longlong)plVar11;
    local_d0 = (longlong *)((longlong)plVar7 + 1);
    if (local_e8 == local_f8) {
      local_61 = 0;
      local_62 = 0;
      FUN_1801fb370(&local_f8);
    }
    plVar13 = (longlong *)((longlong)plVar13 + 1);
    lVar16 = (longlong)plVar10 * 0x80;
    puVar1 = (undefined8 *)(local_f0 + 0x20 + lVar16);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(local_f0 + 0x10 + lVar16);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(local_f0 + lVar16) = 0;
    ((undefined8 *)(local_f0 + lVar16))[1] = 0;
    local_e8 = (longlong *)((longlong)plVar10 + 1);
  }
  if (plVar15 == (longlong *)0x0) {
    local_90 = (longlong *)0x8;
    if (*(char *)((longlong)param_7 + 0x5a) == '\x01') goto LAB_180182c0b;
LAB_180182c51:
    uVar18 = 1000000000;
  }
  else {
    FUN_180027490();
    plVar19 = (longlong *)&DAT_00000008;
    local_90 = (longlong *)thunk_FUN_1801d32d0(uVar14);
    if (local_90 == (longlong *)0x0) {
      local_63 = 1;
      local_64 = 1;
      local_65 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(8,uVar14);
    }
    if (*(char *)((longlong)param_7 + 0x5a) != '\x01') goto LAB_180182c51;
LAB_180182c0b:
    uVar18 = SUB84(plVar19,0);
    local_66 = 1;
    local_67 = 1;
    local_68 = 1;
    local_268 = FUN_1801df8c0();
    plVar15 = local_88;
  }
  plVar13 = local_d0;
  local_128 = *param_8;
  uVar20 = param_8[1];
  plVar19 = (longlong *)param_7[5];
  iVar24 = 0;
  iVar25 = 0;
  iVar26 = 0;
  iVar27 = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar30 = 0;
  iVar31 = 0;
  lVar12 = uStack_490;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + 1;
    UNLOCK();
    if (*plVar19 == 0 || SCARRY8(lVar16,1) != *plVar19 < 0) goto LAB_1801833fc;
    iVar28 = (int)param_7[5];
    iVar29 = *(int *)((longlong)param_7 + 0x2c);
    iVar30 = (int)param_7[6];
    iVar31 = *(int *)((longlong)param_7 + 0x34);
  }
  plVar19 = (longlong *)param_7[7];
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    lVar16 = *plVar19;
    *plVar19 = *plVar19 + 1;
    UNLOCK();
    if (*plVar19 == 0 || SCARRY8(lVar16,1) != *plVar19 < 0) {
LAB_1801833fc:
      uStack_490 = lVar12;
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    iVar24 = (int)param_7[7];
    iVar25 = *(int *)((longlong)param_7 + 0x3c);
    iVar26 = (int)param_7[8];
    iVar27 = *(int *)((longlong)param_7 + 0x44);
  }
  local_248 = (longlong *)CONCAT44(iVar29,iVar28);
  local_4b8 = local_e0;
  uStack_4b0 = plStack_d8;
  local_4a8 = (longlong **)local_d0;
  plVar19 = plStack_d8;
  local_260 = uVar20;
  iStack_240 = iVar30;
  iStack_23c = iVar31;
  local_238 = iVar24;
  iStack_234 = iVar25;
  iStack_230 = iVar26;
  iStack_22c = iVar27;
  if (local_d0 < local_e0) {
    if (local_d0 == (longlong *)0x0) {
      thunk_FUN_1801d3330(plStack_d8,(longlong)local_e0 << 4,8);
      local_98 = (longlong *)&DAT_00000008;
      plVar19 = local_98;
    }
    else {
      lVar16 = (longlong)local_d0 << 4;
      plVar19 = (longlong *)thunk_FUN_1801d3370(plStack_d8,(longlong)local_e0 << 4,8,lVar16);
      if (plVar19 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,lVar16);
      }
    }
  }
  local_98 = plVar19;
  uVar14 = 4;
  if ((longlong *)0x1 < plVar15) {
    lVar16 = 0x3f;
    if ((undefined1 *)((longlong)plVar15 + -1) != (undefined1 *)0x0) {
      for (; (ulonglong)((longlong)plVar15 + -1) >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar14 = (0xffffffffffffffffU >> (~(byte)lVar16 & 0x3f)) * 4 + 4;
  }
  uVar21 = 0x10000;
  if (uVar14 < 0x10000) {
    uVar21 = uVar14;
  }
  local_80 = (longlong **)plVar13;
  if (((uint)uVar21 & (uint)uVar21 - 1) != 0) {
    local_75 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: sharded_size.is_power_of_two()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\util\\sharded_list.rs"
                  ,0x30,&DAT_180264eb0);
  }
  lVar16 = uVar21 * 0x18;
  FUN_180027490();
  plVar13 = (longlong *)thunk_FUN_1801d3550(lVar16,8);
  plVar19 = local_e8;
  if (plVar13 == (longlong *)0x0) {
    local_75 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,lVar16);
  }
  local_b8 = (int *)CONCAT44(local_b8._4_4_,uVar18);
  do {
    lVar5 = DAT_1802fd4d0;
    LOCK();
    lVar12 = DAT_1802fd4d0 + 1;
    UNLOCK();
    bVar23 = DAT_1802fd4d0 == 0;
    DAT_1802fd4d0 = lVar12;
  } while (bVar23);
  local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffff0000);
  uStack_118 = 0;
  local_110 = 8;
  uStack_108 = 0;
  local_158 = param_7[10];
  lStack_150 = param_7[0xb];
  local_168 = param_7[8];
  lStack_160 = param_7[9];
  local_1a8 = (longlong *)*param_7;
  uStack_1a0 = param_7[1];
  local_198 = (longlong *)param_7[2];
  iStack_190 = (int)param_7[3];
  iStack_18c = *(int *)((longlong)param_7 + 0x1c);
  local_188 = (int)param_7[4];
  iStack_184 = *(int *)((longlong)param_7 + 0x24);
  iStack_180 = (int)param_7[5];
  iStack_17c = *(int *)((longlong)param_7 + 0x2c);
  local_178 = (int)param_7[6];
  iStack_174 = *(int *)((longlong)param_7 + 0x34);
  iStack_170 = (int)param_7[7];
  iStack_16c = *(int *)((longlong)param_7 + 0x3c);
  local_c8 = plVar13;
  if (local_e8 < local_f8) {
    lVar12 = (longlong)local_f8 << 7;
    if (local_e8 == (longlong *)0x0) {
      thunk_FUN_1801d3330(local_f0,lVar12,0x80);
      lVar16 = 0x80;
    }
    else {
      lVar22 = (longlong)local_e8 << 7;
      local_250 = local_f0;
      local_258 = lVar16;
      lVar16 = thunk_FUN_1801d3370(local_f0,lVar12,0x80,lVar22);
      if (lVar16 == 0) {
        local_b8 = (int *)lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(0x80,lVar22);
      }
    }
  }
  else {
    lVar16 = local_f0;
  }
  local_3b8 = local_88;
  local_410 = local_c8;
  local_3f0 = uVar21 - 1;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3e8 = lVar5;
  local_3e0 = 0;
  local_3b0 = 0;
  local_3a8 = local_88;
  local_3a0 = (longlong)local_90;
  local_398 = 0;
  uStack_390 = 0;
  uStack_38f = 0;
  uStack_388 = 0;
  uStack_387 = 0;
  local_378 = (ulonglong)local_120;
  uStack_370 = uStack_118;
  local_368 = local_110;
  uStack_360 = uStack_108;
  local_1c0 = local_158;
  lStack_1b8 = lStack_150;
  local_1d0 = local_168;
  lStack_1c8 = lStack_160;
  lStack_1f8 = CONCAT44(iStack_18c,iStack_190);
  local_1f0 = CONCAT44(iStack_184,local_188);
  uStack_1e8 = CONCAT44(iStack_17c,iStack_180);
  local_1e0 = CONCAT44(iStack_174,local_178);
  uStack_1d8 = CONCAT44(iStack_16c,iStack_170);
  local_200 = (longlong)local_198;
  uStack_210 = (longlong)local_1a8;
  lStack_208 = uStack_1a0;
  local_408 = uVar21;
  local_3c0 = (longlong)plVar15 << 0x10;
  memcpy(local_358,local_130,0xa0);
  local_498 = (longlong *)param_8[2];
  local_4a8 = (longlong **)*param_8;
  uStack_4a0 = (longlong *)param_8[1];
  local_290 = *param_6;
  local_288 = *(undefined4 *)(param_6 + 1);
  uStack_2a8 = CONCAT44(iStack_23c,iStack_240);
  local_2a0 = CONCAT44(iStack_234,local_238);
  uStack_298 = CONCAT44(iStack_22c,iStack_230);
  local_2b0 = local_248;
  local_4b8 = (longlong *)0x1;
  uStack_4b0 = (longlong *)0x1;
  uStack_490 = uStack_210;
  local_488 = lStack_208;
  uStack_480 = local_200;
  local_478 = lStack_1f8;
  lStack_470 = local_1f0;
  local_468 = (undefined4)uStack_1e8;
  uStack_464 = uStack_1e8._4_4_;
  lStack_460 = local_1e0;
  local_458 = (undefined4)uStack_1d8;
  uStack_454 = uStack_1d8._4_4_;
  uStack_450 = (undefined4)local_1d0;
  iStack_44c = local_1d0._4_4_;
  local_448 = (uint)lStack_1c8;
  uStack_444 = (undefined1)((ulonglong)lStack_1c8 >> 0x20);
  uStack_443 = (undefined1)((ulonglong)lStack_1c8 >> 0x28);
  uStack_442 = (undefined2)((ulonglong)lStack_1c8 >> 0x30);
  uStack_440 = (undefined4)local_1c0;
  uStack_43c = local_1c0._4_4_;
  local_438 = lStack_1b8;
  local_430 = local_268;
  local_428 = local_b8._0_4_;
  local_420 = local_98;
  local_418 = (longlong *)local_80;
  local_3d0 = plVar19;
  local_3c8 = 0;
  local_2b8 = local_278;
  local_3d8 = lVar16;
  local_228 = (longlong *)local_4a8;
  uStack_220 = uStack_4a0;
  local_218 = local_498;
  FUN_180027490();
  plVar19 = (longlong *)thunk_FUN_1801d32d0(0x238,8);
  if (plVar19 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x238);
  }
  memcpy(plVar19,&local_4b8,0x238);
  uStack_4a0 = local_a0;
  puVar1 = local_270;
  local_1a8 = (longlong *)0x0;
  uStack_1a0 = 8;
  local_198 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  uStack_4b0 = local_a8 + (longlong)uStack_4a0;
  local_4b8 = local_a8;
  local_4a8 = &local_b0;
  local_498 = (longlong *)0x0;
  uStack_490 = 0;
  local_120 = plVar19;
  if (uStack_4a0 != (longlong *)0x0) {
    plVar13 = local_a8;
    do {
      local_4b8 = plVar13 + 1;
      lVar5 = *plVar13;
      LOCK();
      lVar16 = *plVar19;
      *plVar19 = *plVar19 + 1;
      UNLOCK();
      lVar12 = uStack_490 + 1;
      if (*plVar19 == 0 || SCARRY8(lVar16,1) != *plVar19 < 0) goto LAB_1801833fc;
      local_228 = (longlong *)0x1;
      uStack_220 = 1;
      uStack_210 = uStack_490;
      uStack_490 = uStack_490 + 1;
      local_218 = plVar19;
      lStack_208 = lVar5;
      FUN_180027490();
      plVar15 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
      plVar13 = local_198;
      if (plVar15 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x28);
      }
      plVar15[4] = lStack_208;
      *(undefined4 *)(plVar15 + 2) = (undefined4)local_218;
      *(undefined4 *)((longlong)plVar15 + 0x14) = local_218._4_4_;
      *(undefined4 *)(plVar15 + 3) = (undefined4)uStack_210;
      *(undefined4 *)((longlong)plVar15 + 0x1c) = uStack_210._4_4_;
      *(undefined4 *)plVar15 = (undefined4)local_228;
      *(undefined4 *)((longlong)plVar15 + 4) = local_228._4_4_;
      *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_220;
      *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_220._4_4_;
      local_228 = plVar15;
      local_80 = (longlong **)plVar15;
      if (local_198 == local_1a8) {
        FUN_1801fb290(&local_1a8);
      }
      *(longlong ***)(uStack_1a0 + (longlong)plVar13 * 8) = local_80;
      local_198 = (longlong *)((longlong)plVar13 + 1);
      plVar13 = local_4b8;
    } while (local_4b8 != uStack_4b0);
  }
  local_140 = plVar19;
  FUN_18016caa0(&local_4b8);
  puVar1[3] = local_198;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_1a8._4_4_;
  *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_1a0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_1a0._4_4_;
  *puVar1 = plVar19;
  local_98 = local_a8;
  local_90 = local_a0;
  local_80 = (longlong **)0x0;
  while ((longlong **)local_90 != local_80) {
    plVar19 = local_98 + (longlong)local_80;
    local_80 = (longlong **)((longlong)local_80 + 1);
    FUN_18016bc40(*plVar19);
  }
  if (local_b0 != (longlong *)0x0) {
    thunk_FUN_1801d3330(local_a8,(longlong)local_b0 << 3,8);
  }
  LOCK();
  *local_c0 = *local_c0 + -1;
  UNLOCK();
  if (*local_c0 == 0) {
    FUN_1801638e0(&local_c0);
  }
  return puVar1;
}


