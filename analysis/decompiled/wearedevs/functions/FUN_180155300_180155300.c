/* FUN_180155300 @ 180155300 */

undefined8 *
FUN_180155300(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong param_5)

{
  uint *puVar1;
  longlong *_Src;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_6e8 [120];
  longlong local_670;
  short local_650;
  longlong local_648;
  code *pcStack_640;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [160];
  undefined8 **local_548;
  undefined *local_540;
  longlong local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  longlong lStack_490;
  longlong local_488;
  longlong lStack_480;
  longlong local_478;
  longlong lStack_470;
  longlong local_468;
  longlong lStack_460;
  longlong local_458;
  longlong lStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong local_408;
  longlong lStack_400;
  longlong local_3f8;
  longlong lStack_3f0;
  undefined8 *local_3e8;
  undefined8 *puStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  longlong local_3a8;
  longlong lStack_3a0;
  longlong local_398;
  longlong lStack_390;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_268;
  code *pcStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined4 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char local_158;
  byte bStack_157;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined2 local_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined2 local_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined2 local_c0;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = param_2;
  local_58 = param_3;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    uVar15 = (uint)DAT_1802fd130;
    if (uVar15 - 1 < 2) {
LAB_1801556ba:
      local_49 = 1;
      cVar11 = FUN_1801601d0(PTR_DAT_1802fd120,uVar15,local_58);
      if (cVar11 != '\0') {
        puVar19 = PTR_DAT_1802fd120 + 0x30;
        local_268 = local_68 + 0x8c;
        pcStack_260 = FUN_1801ee6c0;
        local_348 = (undefined4 *)&DAT_180259520;
        uStack_340 = (code *)&local_268;
        local_3e8 = &local_348;
        puStack_3e0 = (undefined8 *)&DAT_180258dd0;
        local_158 = '\x01';
        bStack_157 = 0;
        uStack_156 = 0;
        uStack_154 = 0;
        uStack_150 = SUB82(&local_3e8,0);
        uStack_14e = (undefined2)((ulonglong)&local_3e8 >> 0x10);
        uStack_14c = (undefined4)((ulonglong)&local_3e8 >> 0x20);
        local_148 = 1;
        uStack_146 = 0;
        uStack_144 = 0;
        uStack_140 = SUB82(puVar19,0);
        uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
        uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
        local_49 = 1;
        FUN_180160ae0(PTR_DAT_1802fd120,&local_158,local_58);
      }
    }
    else if (uVar15 != 0) {
      local_49 = 1;
      uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd120);
      if ((char)uVar15 != '\0') goto LAB_1801556ba;
    }
  }
  lVar17 = *param_4;
  puVar1 = (uint *)(param_4 + 1);
  uVar21 = (ulonglong)*puVar1;
  iVar3 = *(int *)((longlong)param_4 + 0xc);
  uVar10 = *(undefined8 *)puVar1;
  uVar9 = *(undefined8 *)puVar1;
  lVar8 = *(longlong *)puVar1;
  uVar7 = *(undefined8 *)puVar1;
  uVar6 = *(undefined8 *)puVar1;
  lVar5 = *(longlong *)puVar1;
  lVar13 = *(longlong *)puVar1;
  uVar4 = *(undefined8 *)puVar1;
  uVar14 = *(undefined8 *)puVar1;
  local_348 = *(undefined4 **)puVar1;
  if (*(ulonglong *)(lVar17 + 0x10) <= uVar21) {
LAB_1801568e5:
    local_268 = (longlong)&local_348 + 4;
    pcStack_260 = FUN_180152d10;
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_268,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
  }
  lVar20 = uVar21 * 0x148;
  if ((*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2) ||
     (lVar16 = *(longlong *)(lVar17 + 8) + lVar20, *(int *)(lVar16 + 300) != iVar3))
  goto LAB_1801568e5;
  local_49 = 1;
  FUN_180138900(&local_158,lVar16 + 0x40,local_58);
  bVar2 = bStack_157;
  if (local_158 != '\x03') {
    param_1[5] = CONCAT44(uStack_134,CONCAT22(uStack_136,local_138));
    *(ulonglong *)((longlong)param_1 + 0x1a) = CONCAT26(uStack_140,CONCAT42(uStack_144,uStack_146));
    *(ulonglong *)((longlong)param_1 + 0x22) = CONCAT26(local_138,CONCAT42(uStack_13c,uStack_13e));
    *(ulonglong *)((longlong)param_1 + 10) = CONCAT26(uStack_150,CONCAT42(uStack_154,uStack_156));
    *(ulonglong *)((longlong)param_1 + 0x12) = CONCAT26(local_148,CONCAT42(uStack_14c,uStack_14e));
    *param_1 = 4;
    *(char *)(param_1 + 1) = local_158;
    *(byte *)((longlong)param_1 + 9) = bStack_157;
    goto LAB_180155678;
  }
  uVar12 = *(ulonglong *)(lVar17 + 0x10);
  if ((bStack_157 & 1) != 0) {
    local_268 = uVar14;
    if (((uVar12 <= uVar21) || (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
       (lVar16 = *(longlong *)(lVar17 + 8) + lVar20, *(int *)(lVar16 + 300) != iVar3)) {
      lVar17 = (longlong)&local_268 + 4;
      local_158 = (char)lVar17;
      bStack_157 = (byte)((ulonglong)lVar17 >> 8);
      uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
      uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
      uStack_150 = 0x2d10;
      uStack_14e = 0x8015;
      uStack_14c = 1;
      local_49 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    if (*(char *)(lVar16 + 0x138) == '\0') {
      if (*(uint *)(local_68 + 0x94) < *(uint *)(local_58 + 0x23)) {
        *(uint *)(local_68 + 0x94) = *(uint *)(local_58 + 0x23);
      }
      if (*(ulonglong *)(param_5 + 0x20) <= *(ulonglong *)(param_5 + 0x28)) {
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_1802581f7,0x31,&PTR_s_C__Users_burne__cargo_registry_s_180258228);
      }
      local_268 = uVar4;
      if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
          (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
         (lVar16 = *(longlong *)(lVar17 + 8) + lVar20, *(int *)(lVar16 + 300) != iVar3)) {
        lVar17 = (longlong)&local_268 + 4;
        local_158 = (char)lVar17;
        bStack_157 = (byte)((ulonglong)lVar17 >> 8);
        uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
        uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
        uStack_150 = 0x2d10;
        uStack_14e = 0x8015;
        uStack_14c = 1;
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      if (*(char *)(lVar16 + 0x138) == '\x01') {
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: !stream.is_counted",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_180258268);
      }
      *(ulonglong *)(param_5 + 0x28) = *(ulonglong *)(param_5 + 0x28) + 1;
      *(undefined1 *)(lVar16 + 0x138) = 1;
      uVar12 = *(ulonglong *)(lVar17 + 0x10);
    }
  }
  local_268 = lVar13;
  if (((uVar12 <= uVar21) || (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
     (lVar13 = *(longlong *)(lVar17 + 8) + lVar20, *(int *)(lVar13 + 300) != iVar3)) {
    lVar17 = (longlong)&local_268 + 4;
    local_158 = (char)lVar17;
    bStack_157 = (byte)((ulonglong)lVar17 >> 8);
    uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
    uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
    uStack_150 = 0x2d10;
    uStack_14e = 0x8015;
    uStack_14c = 1;
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  if (*(int *)(lVar13 + 0x30) != 1) {
    local_148 = 0;
    uStack_146 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13e = 0;
    uStack_13c = 0;
    local_158 = '\0';
    bStack_157 = 0;
    uStack_156 = 0;
    uStack_154 = 0;
    uStack_150 = 0x18;
    uStack_14e = 0;
    uStack_14c = 0;
    local_49 = 1;
    lVar13 = FUN_18015f500(local_58,&local_158);
    if (lVar13 != 0) {
      uVar12 = *(ulonglong *)(lVar13 + 0x10);
      if (0x13 < uVar12) {
LAB_180155536:
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar15 = (uint)DAT_1802fd160;
          if (uVar15 - 1 < 2) {
LAB_180155562:
            local_49 = 1;
            cVar11 = FUN_1801601d0(PTR_DAT_1802fd150,uVar15);
            puVar19 = PTR_DAT_1802fd150;
            if (cVar11 != '\0') {
              local_49 = 1;
              local_268 = FUN_180152e90(param_4);
              puVar19 = puVar19 + 0x30;
              local_268 = local_268 + 300;
              pcStack_260 = FUN_18015bcd0;
              local_348 = (undefined4 *)&DAT_1802595c6;
              uStack_340 = (code *)&local_268;
              local_3e8 = &local_348;
              puStack_3e0 = (undefined8 *)&DAT_180258dd0;
              local_158 = '\x01';
              bStack_157 = 0;
              uStack_156 = 0;
              uStack_154 = 0;
              uStack_150 = SUB82(&local_3e8,0);
              uStack_14e = (undefined2)((ulonglong)&local_3e8 >> 0x10);
              uStack_14c = (undefined4)((ulonglong)&local_3e8 >> 0x20);
              local_148 = 1;
              uStack_146 = 0;
              uStack_144 = 0;
              uStack_140 = SUB82(puVar19,0);
              uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
              uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
              local_49 = 1;
              FUN_180160ae0(PTR_DAT_1802fd150,&local_158);
            }
          }
          else if (uVar15 != 0) {
            local_49 = 1;
            uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd150);
            if ((char)uVar15 != '\0') goto LAB_180155562;
          }
        }
        local_268 = lVar8;
        if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
            (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
           (*(int *)(*(longlong *)(lVar17 + 8) + lVar20 + 300) != iVar3)) {
          lVar17 = (longlong)&local_268 + 4;
          local_158 = (char)lVar17;
          bStack_157 = (byte)((ulonglong)lVar17 >> 8);
          uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
          uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
          uStack_150 = 0x2d10;
          uStack_14e = 0x8015;
          uStack_14c = 1;
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        *param_1 = 4;
        *(undefined2 *)(param_1 + 1) = 0x100;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        *(undefined4 *)(param_1 + 2) = 1;
        goto LAB_180155678;
      }
      if (uVar12 == 0) {
        lVar16 = 0;
      }
      else {
        uVar18 = 0;
        lVar16 = 0;
        do {
          cVar11 = *(char *)(*(longlong *)(lVar13 + 8) + uVar18);
          if ((byte)(cVar11 - 0x3aU) < 0xf6) goto LAB_180155536;
          lVar16 = (ulonglong)(byte)(cVar11 - 0x30) + lVar16 * 10;
          uVar18 = uVar18 + 1;
        } while (uVar12 != uVar18);
      }
      local_268 = lVar5;
      if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
          (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
         (lVar13 = *(longlong *)(lVar17 + 8) + lVar20, *(int *)(lVar13 + 300) != iVar3)) {
        lVar17 = (longlong)&local_268 + 4;
        local_158 = (char)lVar17;
        bStack_157 = (byte)((ulonglong)lVar17 >> 8);
        uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
        uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
        uStack_150 = 0x2d10;
        uStack_14e = 0x8015;
        uStack_14c = 1;
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      *(undefined8 *)(lVar13 + 0x30) = 2;
      *(longlong *)(lVar13 + 0x38) = lVar16;
      if (((lVar16 != 0) && ((*(byte *)((longlong)local_58 + 0x11c) & 1) != 0)) &&
         (((short)local_58[0x1f] != 0xcc && ((short)local_58[0x1f] != 0x130)))) {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar15 = (uint)DAT_1802fd100;
          if (uVar15 - 1 < 2) {
LAB_180156281:
            local_49 = 1;
            cVar11 = FUN_1801601d0(PTR_DAT_1802fd0f0,uVar15);
            puVar19 = PTR_DAT_1802fd0f0;
            if (cVar11 != '\0') {
              local_49 = 1;
              local_268 = FUN_180152e90(param_4);
              puVar19 = puVar19 + 0x30;
              local_268 = local_268 + 300;
              pcStack_260 = FUN_18015bcd0;
              local_348 = (undefined4 *)&DAT_180259560;
              uStack_340 = (code *)&local_268;
              local_3e8 = &local_348;
              puStack_3e0 = (undefined8 *)&DAT_180258dd0;
              local_158 = '\x01';
              bStack_157 = 0;
              uStack_156 = 0;
              uStack_154 = 0;
              uStack_150 = SUB82(&local_3e8,0);
              uStack_14e = (undefined2)((ulonglong)&local_3e8 >> 0x10);
              uStack_14c = (undefined4)((ulonglong)&local_3e8 >> 0x20);
              local_148 = 1;
              uStack_146 = 0;
              uStack_144 = 0;
              uStack_140 = SUB82(puVar19,0);
              uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
              uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
              local_49 = 1;
              FUN_180160ae0(PTR_DAT_1802fd0f0,&local_158);
            }
          }
          else if (uVar15 != 0) {
            local_49 = 1;
            uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd0f0);
            if ((char)uVar15 != '\0') goto LAB_180156281;
          }
        }
        local_49 = 1;
        lVar17 = FUN_180152e90(param_4);
        uVar22 = *(undefined4 *)(lVar17 + 300);
        *param_1 = 4;
        *(undefined2 *)(param_1 + 1) = 0x100;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar22;
        *(undefined4 *)(param_1 + 2) = 1;
        goto LAB_180155678;
      }
    }
  }
  if ((char)local_58[0x21] == '\0') {
    local_6c = (undefined4)local_58[0x23];
    local_458 = local_58[10];
    lStack_450 = local_58[0xb];
    local_468 = local_58[8];
    lStack_460 = local_58[9];
    local_4a8 = *local_58;
    lStack_4a0 = local_58[1];
    local_498 = local_58[2];
    lStack_490 = local_58[3];
    local_488 = local_58[4];
    lStack_480 = local_58[5];
    local_478 = local_58[6];
    lStack_470 = local_58[7];
    _Src = local_58 + 0xc;
    local_5c = local_6c;
    memcpy(local_6e8,_Src,0xa0);
    bVar2 = *(byte *)(param_5 + 0x68);
    if (((local_670 == 0) || (bVar2 == 0)) || (*(char *)(local_68 + 0x9d) != '\0')) {
      if ((local_650 != 0 & bVar2) != 0) {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar15 = (uint)DAT_1802fd118;
          if (uVar15 - 1 < 2) {
LAB_180155b78:
            local_4a = 1;
            cVar11 = FUN_1801601d0(PTR_DAT_1802fd108,uVar15);
            puVar19 = PTR_DAT_1802fd108;
            if (cVar11 != '\0') {
              local_4a = 1;
              local_268 = FUN_180152e90(param_4);
              puVar19 = puVar19 + 0x30;
              local_268 = local_268 + 300;
              pcStack_260 = FUN_18015bcd0;
              local_348 = (undefined4 *)&DAT_1802596a9;
              uStack_340 = (code *)&local_268;
              local_3e8 = &local_348;
              puStack_3e0 = (undefined8 *)&DAT_180258dd0;
              local_158 = '\x01';
              bStack_157 = 0;
              uStack_156 = 0;
              uStack_154 = 0;
              uStack_150 = SUB82(&local_3e8,0);
              uStack_14e = (undefined2)((ulonglong)&local_3e8 >> 0x10);
              uStack_14c = (undefined4)((ulonglong)&local_3e8 >> 0x20);
              local_148 = 1;
              uStack_146 = 0;
              uStack_144 = 0;
              uStack_140 = SUB82(puVar19,0);
              uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
              uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
              local_4a = 1;
              FUN_180160ae0(PTR_DAT_1802fd108,&local_158);
            }
          }
          else if (uVar15 != 0) {
            local_4a = 1;
            uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd108);
            if ((char)uVar15 != '\0') goto LAB_180155b78;
          }
        }
        if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
            (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
           (*(int *)(*(longlong *)(lVar17 + 8) + lVar20 + 300) != iVar3)) {
          lVar17 = (longlong)&local_268 + 4;
          local_158 = (char)lVar17;
          bStack_157 = (byte)((ulonglong)lVar17 >> 8);
          uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
          uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
          uStack_150 = 0x2d10;
          uStack_14e = 0x8015;
          uStack_14c = 1;
          local_4a = 1;
          local_268 = uVar9;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        goto LAB_180156217;
      }
      if (99 < (ushort)(local_650 - 100U)) {
        memcpy(&local_548,_Src,0xa0);
        if (bVar2 == 0) {
          local_398 = local_58[10];
          lStack_390 = local_58[0xb];
          local_3a8 = local_58[8];
          lStack_3a0 = local_58[9];
          local_3e8 = (undefined8 *)*local_58;
          puStack_3e0 = (undefined8 *)local_58[1];
          local_3d8 = (undefined4)local_58[2];
          uStack_3d4 = *(undefined4 *)((longlong)local_58 + 0x14);
          uStack_3d0 = (undefined4)local_58[3];
          uStack_3cc = *(undefined4 *)((longlong)local_58 + 0x1c);
          local_3c8 = (undefined4)local_58[4];
          uStack_3c4 = *(undefined4 *)((longlong)local_58 + 0x24);
          uStack_3c0 = (undefined4)local_58[5];
          uStack_3bc = *(undefined4 *)((longlong)local_58 + 0x2c);
          local_3b8 = (undefined4)local_58[6];
          uStack_3b4 = *(undefined4 *)((longlong)local_58 + 0x34);
          uStack_3b0 = (undefined4)local_58[7];
          uStack_3ac = *(undefined4 *)((longlong)local_58 + 0x3c);
          local_4a = 0;
          FUN_18014bc20(&local_158,&local_548,&local_3e8,local_5c);
          if (CONCAT22(uStack_156,CONCAT11(bStack_157,local_158)) == 3) {
            local_328 = uStack_130;
            uVar22 = CONCAT22(uStack_14e,uStack_150);
            uVar23 = CONCAT22(uStack_146,local_148);
            uVar24 = CONCAT22(uStack_13e,uStack_140);
            uVar25 = CONCAT22(uStack_136,local_138);
            goto LAB_180156147;
          }
          local_2e8 = local_f8;
          uStack_2e0 = uStack_f0;
          local_2f8 = local_108;
          uStack_2f0 = uStack_100;
          local_308 = local_118;
          uStack_300 = uStack_110;
          local_348 = (undefined4 *)
                      CONCAT44(uStack_154,CONCAT22(uStack_156,CONCAT11(bStack_157,local_158)));
          uStack_340 = (code *)CONCAT44(uStack_14c,CONCAT22(uStack_14e,uStack_150));
          local_338 = CONCAT44(uStack_144,CONCAT22(uStack_146,local_148));
          uStack_330 = CONCAT44(uStack_13c,CONCAT22(uStack_13e,uStack_140));
          local_328 = CONCAT44(uStack_134,CONCAT22(uStack_136,local_138));
          local_318 = local_128;
          uStack_310 = uStack_120;
          uStack_320 = uStack_130;
          lVar17 = 3;
        }
        else {
          memcpy(&local_3e8,_Src,0xa0);
          local_3f8 = local_58[10];
          lStack_3f0 = local_58[0xb];
          local_408 = local_58[8];
          lStack_400 = local_58[9];
          local_448 = (undefined4)*local_58;
          uStack_444 = *(undefined4 *)((longlong)local_58 + 4);
          uStack_440 = (undefined4)local_58[1];
          uStack_43c = *(undefined4 *)((longlong)local_58 + 0xc);
          local_438 = (undefined4)local_58[2];
          uStack_434 = *(undefined4 *)((longlong)local_58 + 0x14);
          uStack_430 = (undefined4)local_58[3];
          uStack_42c = *(undefined4 *)((longlong)local_58 + 0x1c);
          local_428 = (undefined4)local_58[4];
          uStack_424 = *(undefined4 *)((longlong)local_58 + 0x24);
          uStack_420 = (undefined4)local_58[5];
          uStack_41c = *(undefined4 *)((longlong)local_58 + 0x2c);
          local_418 = (undefined4)local_58[6];
          uStack_414 = *(undefined4 *)((longlong)local_58 + 0x34);
          uStack_410 = (undefined4)local_58[7];
          uStack_40c = *(undefined4 *)((longlong)local_58 + 0x3c);
          local_4a = 0;
          FUN_18014c660(&local_158,&local_3e8,&local_448,local_5c);
          lVar17 = CONCAT44(uStack_154,CONCAT22(uStack_156,CONCAT11(bStack_157,local_158)));
          if (lVar17 == 3) {
            local_328 = uStack_130;
            uVar22 = CONCAT22(uStack_14e,uStack_150);
            uVar23 = CONCAT22(uStack_146,local_148);
            uVar24 = CONCAT22(uStack_13e,uStack_140);
            uVar25 = CONCAT22(uStack_136,local_138);
LAB_180156147:
            local_338 = CONCAT44(uStack_13c,uVar24);
            uStack_330 = CONCAT44(uStack_134,uVar25);
            local_348 = (undefined4 *)CONCAT44(uStack_14c,uVar22);
            uStack_340 = (code *)CONCAT44(uStack_144,uVar23);
            lVar17 = 4;
          }
          else {
            memcpy(&local_348,&uStack_150,0xd8);
          }
        }
        local_188 = local_348;
        uStack_180 = uStack_340;
        local_178 = local_338;
        uStack_170 = uStack_330;
        local_168 = local_328;
        if ((int)lVar17 == 4) goto LAB_1801565a5;
        memcpy(&uStack_238,&uStack_320,0xb0);
        pcStack_260 = (code *)local_188;
        local_258 = (undefined4)uStack_180;
        uStack_254 = uStack_180._4_4_;
        uStack_250 = local_178;
        local_248 = uStack_170;
        uStack_240 = local_168;
        local_4c = 1;
        local_268 = lVar17;
        lVar17 = FUN_180152f00(param_4);
        memcpy(&uStack_150,&local_268,0xe0);
        local_158 = '\0';
        bStack_157 = 0;
        uStack_156 = 0;
        uStack_154 = 0;
        local_4c = 0;
        FUN_18014a690(lVar17 + 0x18,local_68,&local_158);
        local_4c = 0;
        lVar13 = FUN_180152f00(param_4);
        lVar17 = *(longlong *)(lVar13 + 0xb0);
        *(undefined8 *)(lVar13 + 0xb0) = 0;
        if (lVar17 != 0) {
          local_4c = 0;
          (**(code **)(lVar17 + 8))(*(undefined8 *)(lVar13 + 0xb8));
        }
        if (bVar2 != 0) {
          local_4c = 0;
          FUN_180150d50(local_68 + 100,param_4);
        }
        goto LAB_1801566cc;
      }
      memcpy(&local_548,_Src,0xa0);
      if (bVar2 == 0) {
        local_398 = local_58[10];
        lStack_390 = local_58[0xb];
        local_3a8 = local_58[8];
        lStack_3a0 = local_58[9];
        local_3e8 = (undefined8 *)*local_58;
        puStack_3e0 = (undefined8 *)local_58[1];
        local_3d8 = (undefined4)local_58[2];
        uStack_3d4 = *(undefined4 *)((longlong)local_58 + 0x14);
        uStack_3d0 = (undefined4)local_58[3];
        uStack_3cc = *(undefined4 *)((longlong)local_58 + 0x1c);
        local_3c8 = (undefined4)local_58[4];
        uStack_3c4 = *(undefined4 *)((longlong)local_58 + 0x24);
        uStack_3c0 = (undefined4)local_58[5];
        uStack_3bc = *(undefined4 *)((longlong)local_58 + 0x2c);
        local_3b8 = (undefined4)local_58[6];
        uStack_3b4 = *(undefined4 *)((longlong)local_58 + 0x34);
        uStack_3b0 = (undefined4)local_58[7];
        uStack_3ac = *(undefined4 *)((longlong)local_58 + 0x3c);
        local_4a = 0;
        FUN_18014bc20(&local_158,&local_548,&local_3e8,local_5c);
        if (CONCAT22(uStack_156,CONCAT11(bStack_157,local_158)) == 3) {
          local_328 = uStack_130;
          uVar22 = CONCAT22(uStack_14e,uStack_150);
          uVar23 = CONCAT22(uStack_146,local_148);
          uVar24 = CONCAT22(uStack_13e,uStack_140);
          uVar25 = CONCAT22(uStack_136,local_138);
          goto LAB_180156096;
        }
        local_2e8 = local_f8;
        uStack_2e0 = uStack_f0;
        local_2f8 = local_108;
        uStack_2f0 = uStack_100;
        local_308 = local_118;
        uStack_300 = uStack_110;
        local_348 = (undefined4 *)
                    CONCAT44(uStack_154,CONCAT22(uStack_156,CONCAT11(bStack_157,local_158)));
        uStack_340 = (code *)CONCAT44(uStack_14c,CONCAT22(uStack_14e,uStack_150));
        local_338 = CONCAT44(uStack_144,CONCAT22(uStack_146,local_148));
        uStack_330 = CONCAT44(uStack_13c,CONCAT22(uStack_13e,uStack_140));
        local_328 = CONCAT44(uStack_134,CONCAT22(uStack_136,local_138));
        local_318 = local_128;
        uStack_310 = uStack_120;
        uStack_320 = uStack_130;
        lVar17 = 3;
      }
      else {
        memcpy(&local_3e8,_Src,0xa0);
        local_3f8 = local_58[10];
        lStack_3f0 = local_58[0xb];
        local_408 = local_58[8];
        lStack_400 = local_58[9];
        local_448 = (undefined4)*local_58;
        uStack_444 = *(undefined4 *)((longlong)local_58 + 4);
        uStack_440 = (undefined4)local_58[1];
        uStack_43c = *(undefined4 *)((longlong)local_58 + 0xc);
        local_438 = (undefined4)local_58[2];
        uStack_434 = *(undefined4 *)((longlong)local_58 + 0x14);
        uStack_430 = (undefined4)local_58[3];
        uStack_42c = *(undefined4 *)((longlong)local_58 + 0x1c);
        local_428 = (undefined4)local_58[4];
        uStack_424 = *(undefined4 *)((longlong)local_58 + 0x24);
        uStack_420 = (undefined4)local_58[5];
        uStack_41c = *(undefined4 *)((longlong)local_58 + 0x2c);
        local_418 = (undefined4)local_58[6];
        uStack_414 = *(undefined4 *)((longlong)local_58 + 0x34);
        uStack_410 = (undefined4)local_58[7];
        uStack_40c = *(undefined4 *)((longlong)local_58 + 0x3c);
        local_4a = 0;
        FUN_18014c660(&local_158,&local_3e8,&local_448,local_5c);
        lVar17 = CONCAT44(uStack_154,CONCAT22(uStack_156,CONCAT11(bStack_157,local_158)));
        if (lVar17 == 3) {
          local_328 = uStack_130;
          uVar22 = CONCAT22(uStack_14e,uStack_150);
          uVar23 = CONCAT22(uStack_146,local_148);
          uVar24 = CONCAT22(uStack_13e,uStack_140);
          uVar25 = CONCAT22(uStack_136,local_138);
LAB_180156096:
          local_338 = CONCAT44(uStack_13c,uVar24);
          uStack_330 = CONCAT44(uStack_134,uVar25);
          local_348 = (undefined4 *)CONCAT44(uStack_14c,uVar22);
          uStack_340 = (code *)CONCAT44(uStack_144,uVar23);
          lVar17 = 4;
        }
        else {
          memcpy(&local_348,&uStack_150,0xd8);
        }
      }
      local_188 = local_348;
      uStack_180 = uStack_340;
      local_178 = local_338;
      uStack_170 = uStack_330;
      local_168 = local_328;
      if ((int)lVar17 == 4) {
LAB_1801565a5:
        param_1[5] = local_168;
        param_1[3] = local_178;
        param_1[4] = uStack_170;
        param_1[1] = local_188;
        param_1[2] = uStack_180;
        *param_1 = 4;
        return param_1;
      }
      memcpy(&uStack_238,&uStack_320,0xb0);
      pcStack_260 = (code *)local_188;
      local_258 = (undefined4)uStack_180;
      uStack_254 = uStack_180._4_4_;
      uStack_250 = local_178;
      local_248 = uStack_170;
      uStack_240 = local_168;
      local_268 = lVar17;
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        uVar15 = (uint)DAT_1802fd178;
        if (uVar15 - 1 < 2) {
LAB_1801566ee:
          local_4b = 1;
          cVar11 = FUN_1801601d0(PTR_DAT_1802fd168,uVar15);
          if (cVar11 != '\0') {
            puVar19 = PTR_DAT_1802fd168 + 0x30;
            local_348 = &local_6c;
            uStack_340 = FUN_18015bcd0;
            local_3e8 = (undefined8 *)&DAT_18025967b;
            puStack_3e0 = &local_348;
            local_548 = &local_3e8;
            local_540 = &DAT_180258dd0;
            local_158 = '\x01';
            bStack_157 = 0;
            uStack_156 = 0;
            uStack_154 = 0;
            uStack_150 = SUB82(&local_548,0);
            uStack_14e = (undefined2)((ulonglong)&local_548 >> 0x10);
            uStack_14c = (undefined4)((ulonglong)&local_548 >> 0x20);
            local_148 = 1;
            uStack_146 = 0;
            uStack_144 = 0;
            uStack_140 = SUB82(puVar19,0);
            uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
            uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
            local_4b = 1;
            FUN_180160ae0(PTR_DAT_1802fd168,&local_158);
          }
        }
        else if (uVar15 != 0) {
          local_4b = 1;
          uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd168);
          if ((char)uVar15 != '\0') goto LAB_1801566ee;
        }
      }
      local_4b = 1;
      lVar17 = FUN_180152f00(param_4);
      memcpy(&uStack_150,&local_268,0xe0);
      local_158 = '\x03';
      bStack_157 = 0;
      uStack_156 = 0;
      uStack_154 = 0;
      local_4b = 0;
      FUN_18014a690(lVar17 + 0x18,local_68,&local_158);
      local_4b = 0;
      lVar13 = FUN_180152f00(param_4);
      lVar17 = *(longlong *)(lVar13 + 0xb0);
      *(undefined8 *)(lVar13 + 0xb0) = 0;
      if (lVar17 != 0) {
        local_4b = 0;
        (**(code **)(lVar17 + 8))(*(undefined8 *)(lVar13 + 0xb8));
      }
LAB_1801566cc:
      *param_1 = 5;
      return param_1;
    }
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      uVar15 = (uint)DAT_1802fd148;
      if (uVar15 - 1 < 2) {
LAB_180155a6a:
        local_4a = 1;
        cVar11 = FUN_1801601d0(PTR_DAT_1802fd138,uVar15);
        puVar19 = PTR_DAT_1802fd138;
        if (cVar11 != '\0') {
          local_4a = 1;
          local_268 = FUN_180152e90(param_4);
          puVar19 = puVar19 + 0x30;
          local_268 = local_268 + 300;
          pcStack_260 = FUN_18015bcd0;
          local_348 = (undefined4 *)&DAT_180259611;
          uStack_340 = (code *)&local_268;
          local_3e8 = &local_348;
          puStack_3e0 = (undefined8 *)&DAT_180258dd0;
          local_158 = '\x01';
          bStack_157 = 0;
          uStack_156 = 0;
          uStack_154 = 0;
          uStack_150 = SUB82(&local_3e8,0);
          uStack_14e = (undefined2)((ulonglong)&local_3e8 >> 0x10);
          uStack_14c = (undefined4)((ulonglong)&local_3e8 >> 0x20);
          local_148 = 1;
          uStack_146 = 0;
          uStack_144 = 0;
          uStack_140 = SUB82(puVar19,0);
          uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
          uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
          local_4a = 1;
          FUN_180160ae0(PTR_DAT_1802fd138,&local_158);
        }
      }
      else if (uVar15 != 0) {
        local_4a = 1;
        uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd138);
        if ((char)uVar15 != '\0') goto LAB_180155a6a;
      }
    }
    if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
        (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
       (*(int *)(*(longlong *)(lVar17 + 8) + lVar20 + 300) != iVar3)) {
      lVar17 = (longlong)&local_268 + 4;
      local_158 = (char)lVar17;
      bStack_157 = (byte)((ulonglong)lVar17 >> 8);
      uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
      uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
      uStack_150 = 0x2d10;
      uStack_14e = 0x8015;
      uStack_14c = 1;
      local_4a = 1;
      local_268 = uVar10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
LAB_180156217:
    local_268 = *(longlong *)puVar1;
    *param_1 = 4;
    *(undefined2 *)(param_1 + 1) = 0x100;
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    *(undefined4 *)(param_1 + 2) = 1;
    local_4d = 1;
    FUN_1800430f0(&local_4a8);
    local_49 = 0;
    FUN_1800663c0(local_6e8);
    return param_1;
  }
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    uVar15 = (uint)DAT_1802fd0e8;
    if (uVar15 - 1 < 2) {
LAB_1801558a4:
      local_49 = 1;
      cVar11 = FUN_1801601d0(PTR_DAT_1802fd0d8,uVar15);
      if (cVar11 != '\0') {
        if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
            (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
           (local_268 = *(longlong *)(lVar17 + 8) + lVar20, *(int *)(local_268 + 300) != iVar3)) {
          lVar17 = (longlong)&local_268 + 4;
          local_158 = (char)lVar17;
          bStack_157 = (byte)((ulonglong)lVar17 >> 8);
          uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
          uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
          uStack_150 = 0x2d10;
          uStack_14e = 0x8015;
          uStack_14c = 1;
          local_49 = 1;
          local_268 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        local_268 = local_268 + 300;
        puVar19 = PTR_DAT_1802fd0d8 + 0x30;
        pcStack_260 = FUN_18015bcd0;
        local_348 = (undefined4 *)&DAT_1802596fc;
        uStack_340 = (code *)&local_268;
        local_3e8 = &local_348;
        puStack_3e0 = (undefined8 *)&DAT_180258dd0;
        local_158 = '\x01';
        bStack_157 = 0;
        uStack_156 = 0;
        uStack_154 = 0;
        uStack_150 = SUB82(&local_3e8,0);
        uStack_14e = (undefined2)((ulonglong)&local_3e8 >> 0x10);
        uStack_14c = (undefined4)((ulonglong)&local_3e8 >> 0x20);
        local_148 = 1;
        uStack_146 = 0;
        uStack_144 = 0;
        uStack_140 = SUB82(puVar19,0);
        uStack_13e = (undefined2)((ulonglong)puVar19 >> 0x10);
        uStack_13c = (undefined4)((ulonglong)puVar19 >> 0x20);
        local_49 = 1;
        FUN_180160ae0(PTR_DAT_1802fd0d8,&local_158);
      }
    }
    else if (uVar15 != 0) {
      local_49 = 1;
      uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd0d8);
      if ((char)uVar15 != '\0') goto LAB_1801558a4;
    }
  }
  if ((*(byte *)(param_5 + 0x68) & bVar2) == 0) {
    *param_1 = 3;
  }
  else {
    if (((*(ulonglong *)(lVar17 + 0x10) <= uVar21) ||
        (*(int *)(*(longlong *)(lVar17 + 8) + lVar20) == 2)) ||
       (*(int *)(*(longlong *)(lVar17 + 8) + lVar20 + 300) != iVar3)) {
      lVar17 = (longlong)&local_268 + 4;
      local_158 = (char)lVar17;
      bStack_157 = (byte)((ulonglong)lVar17 >> 8);
      uStack_156 = (undefined2)((ulonglong)lVar17 >> 0x10);
      uStack_154 = (undefined4)((ulonglong)lVar17 >> 0x20);
      uStack_150 = 0x2d10;
      uStack_14e = 0x8015;
      uStack_14c = 1;
      local_49 = 1;
      local_268 = uVar7;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_158,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    local_158 = '\f';
    uStack_140 = 0;
    uStack_13e = 0;
    uStack_13c = 0;
    uStack_120 = 0;
    uStack_100 = 0;
    local_e0 = 0;
    local_c0 = 0x1af;
    uStack_210 = 0;
    uStack_220 = 2;
    local_218 = 0;
    uStack_250 = 0;
    local_248 = 8;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 8;
    local_228 = 0;
    local_268 = 0;
    uVar14 = FUN_180134c30(&local_268);
    uStack_5f0 = CONCAT62(uStack_20e,uStack_210);
    local_5f8 = local_218;
    local_608 = local_228;
    uStack_600 = uStack_220;
    local_618 = uStack_238;
    uStack_610 = uStack_230;
    local_628 = local_248;
    uStack_620 = uStack_240;
    uStack_630 = uStack_250;
    local_648 = local_268;
    pcStack_640 = pcStack_260;
    memcpy(local_5e8,&local_158,0xa0);
    memcpy(param_1,&local_648,0x100);
    param_1[0x20] = uVar14;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)((longlong)param_1 + 0x115) = 2;
    *(int *)(param_1 + 0x23) = iVar3;
    *(undefined1 *)((longlong)param_1 + 0x11c) = 5;
  }
LAB_180155678:
  FUN_1800430f0(local_58);
  FUN_1800663c0(local_58 + 0xc);
  return param_1;
}


