/* FUN_180158500 @ 180158500 */

longlong * FUN_180158500(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  char cVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 local_398 [160];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 ***local_298;
  byte **local_290;
  code *pcStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  longlong local_270;
  undefined1 local_268 [136];
  byte local_1e0 [40];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  longlong local_190;
  undefined1 local_188 [200];
  byte *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 **local_a8;
  undefined *local_a0;
  undefined8 *local_98;
  undefined *local_90;
  undefined1 local_88 [8];
  undefined8 ****ppppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_4;
  puVar1 = (uint *)(param_4 + 1);
  uVar19 = (ulonglong)*puVar1;
  iVar3 = *(int *)((longlong)param_4 + 0xc);
  uVar9 = *(undefined8 *)puVar1;
  uVar8 = *(undefined8 *)puVar1;
  uVar7 = *(undefined8 *)puVar1;
  local_88 = *(undefined1 (*) [8])puVar1;
  local_58 = param_3;
  if (*(ulonglong *)(lVar5 + 0x10) <= uVar19) {
LAB_180158d77:
    local_290 = (byte **)FUN_180152d10;
    local_4a = 1;
    local_298 = (undefined8 ***)(local_88 + 4);
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_298,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
  }
  lVar17 = uVar19 * 0x148;
  if ((*(int *)(*(longlong *)(lVar5 + 8) + lVar17) == 2) ||
     (lVar16 = *(longlong *)(lVar5 + 8) + lVar17, *(int *)(lVar16 + 300) != iVar3))
  goto LAB_180158d77;
  local_4a = 1;
  FUN_180138470(&local_1b8,lVar16 + 0x40);
  ppuVar10 = (undefined8 **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
  if ((char)local_1b8 != '\x03') {
    param_1[4] = CONCAT71(uStack_197,uStack_198);
    *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_1a0,uStack_1a7);
    *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT17(uStack_198,uStack_19f);
    *(uint *)((longlong)param_1 + 1) = CONCAT13(local_1b8._4_1_,local_1b8._1_3_);
    *(uint *)((longlong)param_1 + 5) = CONCAT13((undefined1)uStack_1b0,local_1b8._5_3_);
    *(uint *)((longlong)param_1 + 9) = CONCAT13(uStack_1b0._4_1_,uStack_1b0._1_3_);
    *(uint *)((longlong)param_1 + 0xd) = CONCAT13(uStack_1a8,uStack_1b0._5_3_);
    *(char *)param_1 = (char)local_1b8;
    goto LAB_180158996;
  }
  if (*(char *)(local_58 + 0x21) == '\0') {
    local_5c = *(undefined4 *)((longlong)local_58 + 0x114);
    local_2f8 = *local_58;
    uStack_2f0 = local_58[1];
    local_2e8 = local_58[2];
    uStack_2e0 = local_58[3];
    local_2d8 = local_58[4];
    uStack_2d0 = local_58[5];
    local_2c8 = local_58[6];
    uStack_2c0 = local_58[7];
    local_2b8 = local_58[8];
    uStack_2b0 = local_58[9];
    local_2a8 = local_58[10];
    uStack_2a0 = local_58[0xb];
    local_b0 = param_2;
    memcpy(local_398,local_58 + 0xc,0xa0);
    local_4a = 0;
    FUN_18014c660(&local_1b8,local_398,&local_2f8);
    local_88 = (undefined1  [8])CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    ppppuStack_80 = (undefined8 ****)CONCAT71(uStack_1a7,uStack_1a8);
    local_78 = (undefined4 *)CONCAT71(uStack_19f,uStack_1a0);
    uStack_70 = (code *)CONCAT71(uStack_197,uStack_198);
    local_68 = local_190;
    if (CONCAT44(local_1b8._4_4_,(undefined4)local_1b8) == 3) {
      param_1[4] = local_190;
      param_1[2] = (longlong)local_78;
      param_1[3] = (longlong)uStack_70;
      *param_1 = (longlong)local_88;
      param_1[1] = (longlong)ppppuStack_80;
      return param_1;
    }
    memcpy(local_268,local_188,0xb0);
    local_290 = (byte **)local_88;
    pcStack_288 = (code *)ppppuStack_80;
    local_280 = (undefined4)local_78;
    uStack_27c = local_78._4_4_;
    uStack_278 = (undefined4)uStack_70;
    uStack_274 = uStack_70._4_4_;
    local_270 = local_68;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    local_1b8._0_4_ = 0;
    local_1b8._4_4_ = 0;
    uStack_1b0._0_4_ = 0x18;
    uStack_1b0._4_4_ = 0;
    local_49 = 1;
    lVar16 = FUN_18015f500(&local_298,&local_1b8);
    if (lVar16 != 0) {
      uVar6 = *(ulonglong *)(lVar16 + 0x10);
      pbVar13 = (byte *)0x1;
      if (0x13 < uVar6) {
LAB_180158865:
        local_c0 = pbVar13;
        local_b8 = lVar16;
        uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
        if (1 < *(ulonglong *)PTR_DAT_1802fd448) goto LAB_180158cfd;
        uVar15 = (uint)DAT_1802fd220;
        if (1 < uVar15 - 1) {
          uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
          if (uVar15 == 0) goto LAB_180158cfd;
          local_49 = 1;
          uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd210);
          if ((char)uVar15 == '\0') goto LAB_180158cfd;
        }
        local_49 = 1;
        cVar11 = FUN_1801601d0(PTR_DAT_1802fd210,uVar15);
        uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
        if (cVar11 != '\0') {
          local_88 = (undefined1  [8])&local_c0;
          ppppuStack_80 = (undefined8 ****)FUN_18015bd10;
          local_78 = &local_5c;
          uStack_70 = FUN_18015bcd0;
          local_98 = (undefined8 *)&DAT_18025a068;
          local_90 = local_88;
          local_a8 = &local_98;
          local_a0 = &DAT_180258dd0;
          local_1b8._0_4_ = 1;
          local_1b8._4_4_ = 0;
          uStack_1b0 = &local_a8;
          uStack_1a8 = 1;
          uStack_1a7 = 0;
          uStack_1a0 = SUB81(PTR_DAT_1802fd210 + 0x30,0);
          uStack_19f = (undefined7)((ulonglong)(PTR_DAT_1802fd210 + 0x30) >> 8);
          local_49 = 1;
          FUN_180160ae0(PTR_DAT_1802fd210,&local_1b8);
        }
        goto LAB_180158cfd;
      }
      if (uVar6 != 0) {
        plVar2 = (longlong *)(lVar16 + 8);
        uVar18 = 0;
        lVar16 = 0;
        do {
          cVar11 = *(char *)(*plVar2 + uVar18);
          if ((byte)(cVar11 - 0x3aU) < 0xf6) goto LAB_180158865;
          lVar16 = (ulonglong)(byte)(cVar11 - 0x30) + lVar16 * 10;
          uVar18 = uVar18 + 1;
        } while (uVar6 != uVar18);
        if (lVar16 != 0) {
          pbVar13 = (byte *)0x0;
          goto LAB_180158865;
        }
      }
    }
    if ((local_1e0[0] & 0xb) == 1) {
      local_88 = (undefined1  [8])uVar7;
      if (((*(ulonglong *)(lVar5 + 0x10) <= uVar19) ||
          (*(int *)(*(longlong *)(lVar5 + 8) + lVar17) == 2)) ||
         (lVar16 = *(longlong *)(lVar5 + 8) + lVar17, *(int *)(lVar16 + 300) != iVar3)) {
        local_1b8 = local_88 + 4;
        uStack_1b0._0_4_ = 0x80152d10;
        uStack_1b0._4_4_ = 1;
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_1b8,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      memcpy(&uStack_1a0,&local_298,0xe0);
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      local_1b8._0_4_ = 0;
      local_1b8._4_4_ = 0;
      uVar7 = *(undefined8 *)(local_b0 + 0x20);
      local_49 = 0;
      FUN_18015fbf0(local_b0,uVar7,&local_1b8);
      if (*(int *)(lVar16 + 0x18) == 1) {
        if (*(ulonglong *)(lVar16 + 0x28) < *(ulonglong *)(local_b0 + 0x10)) {
          lVar14 = *(ulonglong *)(lVar16 + 0x28) * 0xf8;
          if (*(int *)(*(longlong *)(local_b0 + 8) + lVar14) != 2) {
            puVar12 = (undefined8 *)(*(longlong *)(local_b0 + 8) + lVar14);
            *puVar12 = 1;
            puVar12[1] = uVar7;
            goto LAB_180158c04;
          }
        }
        local_49 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180254fe8);
      }
      *(undefined8 *)(lVar16 + 0x18) = 1;
      *(undefined8 *)(lVar16 + 0x20) = uVar7;
LAB_180158c04:
      *(undefined8 *)(lVar16 + 0x28) = uVar7;
      local_88 = (undefined1  [8])uVar8;
      if (((*(ulonglong *)(lVar5 + 0x10) <= uVar19) ||
          (*(int *)(*(longlong *)(lVar5 + 8) + lVar17) == 2)) ||
         (lVar16 = *(longlong *)(lVar5 + 8) + lVar17, *(int *)(lVar16 + 300) != iVar3)) {
        local_1b8 = local_88 + 4;
        uStack_1b0._0_4_ = 0x80152d10;
        uStack_1b0._4_4_ = 1;
        local_49 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_1b8,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      lVar14 = *(longlong *)(lVar16 + 0xb0);
      *(undefined8 *)(lVar16 + 0xb0) = 0;
      if (lVar14 != 0) {
        local_49 = 0;
        (**(code **)(lVar14 + 8))(*(undefined8 *)(lVar16 + 0xb8));
      }
      local_88 = (undefined1  [8])uVar9;
      if (((*(ulonglong *)(lVar5 + 0x10) <= uVar19) ||
          (*(int *)(*(longlong *)(lVar5 + 8) + lVar17) == 2)) ||
         (lVar17 = *(longlong *)(lVar5 + 8) + lVar17, *(int *)(lVar17 + 300) != iVar3)) {
        local_1b8 = local_88 + 4;
        uStack_1b0._0_4_ = 0x80152d10;
        uStack_1b0._4_4_ = 1;
        local_49 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_1b8,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      lVar5 = *(longlong *)(lVar17 + 0xc0);
      *(undefined8 *)(lVar17 + 0xc0) = 0;
      if (lVar5 != 0) {
        local_49 = 0;
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar17 + 200));
      }
      *(undefined1 *)param_1 = 3;
      return param_1;
    }
    uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    if (1 < *(ulonglong *)PTR_DAT_1802fd448) goto LAB_180158cfd;
    uVar15 = (uint)DAT_1802fd238;
    if (1 < uVar15 - 1) {
      uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
      if (uVar15 == 0) goto LAB_180158cfd;
      local_49 = 1;
      uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd228);
      if ((char)uVar15 == '\0') goto LAB_180158cfd;
    }
    local_49 = 1;
    cVar11 = FUN_1801601d0(PTR_DAT_1802fd228,uVar15);
    uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    if (cVar11 != '\0') {
      local_c0 = local_1e0;
      local_88 = (undefined1  [8])&local_c0;
      ppppuStack_80 = (undefined8 ****)&LAB_180139140;
      local_78 = &local_5c;
      uStack_70 = FUN_18015bcd0;
      local_98 = (undefined8 *)&DAT_18025a0db;
      local_90 = local_88;
      local_a8 = &local_98;
      local_a0 = &DAT_180258dd0;
      local_1b8._0_4_ = 1;
      local_1b8._4_4_ = 0;
      uStack_1b0 = &local_a8;
      uStack_1a8 = 1;
      uStack_1a7 = 0;
      uStack_1a0 = SUB81(PTR_DAT_1802fd228 + 0x30,0);
      uStack_19f = (undefined7)((ulonglong)(PTR_DAT_1802fd228 + 0x30) >> 8);
      local_49 = 1;
      FUN_180160ae0(PTR_DAT_1802fd228,&local_1b8);
    }
LAB_180158cfd:
    *(undefined2 *)param_1 = 0x100;
    *(undefined4 *)((longlong)param_1 + 4) = local_5c;
    *(undefined4 *)(param_1 + 1) = 1;
    local_4a = 0;
    FUN_18015baa0(&local_298);
    return param_1;
  }
  uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    uVar15 = (uint)DAT_1802fd208;
    if (uVar15 - 1 < 2) {
LAB_1801585e9:
      local_4a = 1;
      cVar11 = FUN_1801601d0(PTR_DAT_1802fd1f8,uVar15);
      uStack_1b0 = (undefined8 ***)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
      if (cVar11 != '\0') {
        local_a8 = (undefined8 **)
                   CONCAT44(local_a8._4_4_,*(undefined4 *)((longlong)local_58 + 0x114));
        local_298 = &local_a8;
        local_290 = (byte **)FUN_18015bcd0;
        local_88 = (undefined1  [8])&DAT_18025a143;
        ppppuStack_80 = &local_298;
        local_98 = (undefined8 *)local_88;
        local_90 = &DAT_180258dd0;
        local_1b8._0_4_ = 1;
        local_1b8._4_4_ = 0;
        uStack_1b0 = (undefined8 ***)&local_98;
        uStack_1a8 = 1;
        uStack_1a7 = 0;
        uStack_1a0 = SUB81(PTR_DAT_1802fd1f8 + 0x30,0);
        uStack_19f = (undefined7)((ulonglong)(PTR_DAT_1802fd1f8 + 0x30) >> 8);
        local_4a = 1;
        FUN_180160ae0(PTR_DAT_1802fd1f8,&local_1b8);
      }
    }
    else {
      uStack_1b0 = (undefined8 ***)ppuVar10;
      if (uVar15 != 0) {
        local_4a = 1;
        uVar15 = FUN_1801faaf0(&PTR_DAT_1802fd1f8);
        if ((char)uVar15 != '\0') goto LAB_1801585e9;
      }
    }
  }
  uVar4 = *(undefined4 *)((longlong)local_58 + 0x114);
  *(undefined2 *)param_1 = 0x100;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  ppuVar10 = uStack_1b0;
LAB_180158996:
  uStack_1b0 = (undefined8 ***)ppuVar10;
  FUN_1800430f0(local_58);
  FUN_1800663c0(local_58 + 0xc);
  return param_1;
}


