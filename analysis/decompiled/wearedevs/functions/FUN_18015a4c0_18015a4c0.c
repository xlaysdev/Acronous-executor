/* FUN_18015a4c0 @ 18015a4c0 */

longlong * FUN_18015a4c0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined ***pppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  longlong *plVar13;
  char cVar14;
  char cVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  code *local_188;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  undefined *local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined ***local_88;
  ulonglong *local_80;
  code *local_78;
  longlong local_70;
  byte local_65;
  uint local_64;
  ulonglong local_60;
  longlong *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar15 = *(char *)((longlong)param_3 + 0x25);
  if (cVar15 == '\x01') {
    uVar16 = (ulonglong)*(byte *)((longlong)param_3 + 0x26) + param_3[2] + 1;
    uVar19 = param_3[2];
  }
  else {
    uVar16 = param_3[2];
    uVar19 = uVar16;
  }
  if (uVar16 >> 0x1f != 0) {
    local_49 = 1;
    local_60 = uVar19;
    local_58 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_18025b870,0x30,&PTR_s_C__Users_burne__cargo_registry_s_18025b8a0);
  }
  local_64 = (uint)uVar16;
  lVar18 = *param_4;
  puVar1 = (uint *)(param_4 + 1);
  uVar16 = (ulonglong)*puVar1;
  iVar23 = *(int *)((longlong)param_4 + 0xc);
  piVar9 = *(int **)puVar1;
  piVar8 = *(int **)puVar1;
  piVar7 = *(int **)puVar1;
  lVar6 = *(longlong *)puVar1;
  lVar5 = *(longlong *)puVar1;
  piVar4 = *(int **)puVar1;
  lVar21 = *(longlong *)puVar1;
  local_90 = *(int **)puVar1;
  local_98 = param_1;
  if (*(ulonglong *)(lVar18 + 0x10) <= uVar16) {
LAB_18015b592:
    uStack_1a8._0_4_ = 0x80152d10;
    uStack_1a8._4_4_ = 1;
    local_49 = 1;
    local_60 = uVar19;
    local_58 = param_3;
    local_1b0 = (uint *)((longlong)&local_90 + 4);
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_1b0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  lVar25 = uVar16 * 0x148;
  if ((*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2) ||
     (lVar17 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar17 + 300) != iVar23))
  goto LAB_18015b592;
  uVar22 = *(uint *)(lVar17 + 0x40);
  if (uVar22 < 4) {
    if (uVar22 - 1 < 2) {
      if ((*(byte *)(lVar17 + 0x48) < 2) && (1 < *(byte *)(lVar17 + 0x49))) {
LAB_18015a5be:
        pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar22 = (uint)DAT_1802fd3b8;
          if (uVar22 - 1 < 2) {
LAB_18015a5e8:
            local_49 = 1;
            local_60 = uVar19;
            local_58 = param_3;
            cVar15 = FUN_1801601d0(PTR_DAT_1802fd3a8,uVar22);
            param_3 = local_58;
            uVar19 = local_60;
            pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
            if (cVar15 != '\0') {
              if (((*(ulonglong *)(lVar18 + 0x10) <= uVar16) ||
                  (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
                 (lVar25 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar25 + 300) != iVar23)) {
                local_1b0 = (uint *)((longlong)&local_90 + 4);
                uStack_1a8._0_4_ = 0x80152d10;
                uStack_1a8._4_4_ = 1;
                local_49 = 1;
                local_90 = (int *)lVar21;
                    /* WARNING: Subroutine does not return */
                FUN_180201ee0(&DAT_180256fac,&local_1b0,
                              &PTR_s_C__Users_burne__cargo_registry_s_180257040);
              }
              local_90 = (int *)(lVar25 + 300);
              uStack_198 = PTR_DAT_1802fd3a8 + 0x30;
              local_88 = (undefined ***)FUN_18015bcd0;
              local_b8 = &DAT_18025b8b8;
              local_b0 = &local_90;
              local_a8 = &local_b8;
              local_a0 = &DAT_180258dd0;
              local_1b0._0_4_ = 1;
              local_1b0._4_4_ = 0;
              uStack_1a8 = &local_a8;
              local_1a0._0_4_ = 1;
              local_1a0._4_4_ = 0;
              local_49 = 1;
              FUN_180160ae0(PTR_DAT_1802fd3a8,&local_1b0);
              param_3 = local_58;
              uVar19 = local_60;
              pppuVar10 = uStack_1a8;
              puVar11 = uStack_198;
            }
          }
          else {
            pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
            if (uVar22 != 0) {
              local_49 = 1;
              local_60 = uVar19;
              local_58 = param_3;
              uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd3a8);
              puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
              pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              param_3 = local_58;
              uVar19 = local_60;
              if ((char)uVar22 != '\0') goto LAB_18015a5e8;
            }
          }
        }
        *(undefined2 *)local_98 = 0x101;
        *(undefined4 *)((longlong)local_98 + 4) = 1;
        local_98[1] = (longlong)&PTR_LAB_180258e00;
        local_98[2] = 1;
        local_98[3] = 0;
        local_98[4] = 0;
        goto LAB_18015ab50;
      }
    }
    else if (uVar22 == 0) goto LAB_18015a5be;
  }
  else {
    if (uVar22 == 7) {
      cVar14 = *(char *)(lVar17 + 0x45);
    }
    else {
      if (uVar22 != 8) goto LAB_18015a5be;
      cVar14 = *(char *)(lVar17 + 0x44);
    }
    if (cVar14 == '\0') goto LAB_18015a5be;
  }
  local_70 = param_2;
  local_60 = uVar19;
  local_58 = param_3;
  local_1b0 = (uint *)CONCAT44(local_1b0._4_4_,(undefined4)local_1b0);
  local_1a0 = (int *)CONCAT44(local_1a0._4_4_,(undefined4)local_1a0);
  local_190 = (ulonglong *)CONCAT44(local_190._4_4_,(undefined4)local_190);
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    if (DAT_1802fd3e8 - 1 < 2) {
LAB_18015a85f:
      local_49 = 1;
      cVar14 = FUN_1801601d0(PTR_DAT_1802fd3d8);
      local_1b0 = (uint *)CONCAT44(local_1b0._4_4_,(undefined4)local_1b0);
      local_1a0 = (int *)CONCAT44(local_1a0._4_4_,(undefined4)local_1a0);
      local_190 = (ulonglong *)CONCAT44(local_190._4_4_,(undefined4)local_190);
      if (cVar14 != '\0') {
        local_c8 = 0;
        if (0 < *(int *)(local_70 + 0x48)) {
          local_c8 = *(int *)(local_70 + 0x48);
        }
        if (((*(ulonglong *)(lVar18 + 0x10) <= uVar16) ||
            (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
           (lVar21 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar21 + 300) != iVar23)) {
          local_1b0 = (uint *)((longlong)&local_90 + 4);
          uStack_1a8._0_4_ = 0x80152d10;
          uStack_1a8._4_4_ = 1;
          local_49 = 1;
          local_90 = (int *)lVar5;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_1b0,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        local_78 = (code *)(PTR_DAT_1802fd3d8 + 0x30);
        iVar2 = *(int *)(lVar21 + 0xa8);
        iVar24 = 0;
        if (0 < iVar2) {
          iVar24 = iVar2;
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar24);
        local_1b0 = &local_64;
        uStack_1a8._0_4_ = 0x801ee6c0;
        uStack_1a8._4_4_ = 1;
        local_1a0 = &local_c8;
        uStack_198._0_4_ = 0x801ee6c0;
        uStack_198._4_4_ = 1;
        local_190 = &local_c0;
        local_188 = FUN_1801ee6c0;
        local_b8 = &DAT_18025b8fe;
        local_b0 = &local_1b0;
        local_a8 = &local_b8;
        local_a0 = &DAT_180258dd0;
        local_90 = (int *)0x1;
        local_88 = &local_a8;
        local_80 = (ulonglong *)0x1;
        local_49 = 1;
        FUN_180160ae0(PTR_DAT_1802fd3d8,&local_90);
      }
    }
    else {
      local_1b0 = (uint *)CONCAT44(local_1b0._4_4_,(undefined4)local_1b0);
      local_1a0 = (int *)CONCAT44(local_1a0._4_4_,(undefined4)local_1a0);
      local_190 = (ulonglong *)CONCAT44(local_190._4_4_,(undefined4)local_190);
      if (DAT_1802fd3e8 != 0) {
        local_49 = 1;
        cVar14 = FUN_1801faaf0(&PTR_DAT_1802fd3d8);
        if (cVar14 != '\0') goto LAB_18015a85f;
      }
    }
  }
  puVar12 = PTR_DAT_1802fd448;
  if (uVar22 < 4) {
    uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
    if (*(longlong *)PTR_DAT_1802fd448 == 0) {
      uVar22 = (uint)DAT_1802fd3d0;
      if (uVar22 - 1 < 2) {
LAB_18015aa29:
        local_49 = 1;
        cVar15 = FUN_1801601d0(PTR_DAT_1802fd3c0,uVar22);
        uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
        if (cVar15 != '\0') {
          if (((*(ulonglong *)(lVar18 + 0x10) <= uVar16) ||
              (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
             (lVar25 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar25 + 300) != iVar23)) {
            local_1b0 = (uint *)((longlong)&local_90 + 4);
            uStack_1a8._0_4_ = 0x80152d10;
            uStack_1a8._4_4_ = 1;
            local_49 = 1;
            local_90 = (int *)lVar6;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180256fac,&local_1b0,
                          &PTR_s_C__Users_burne__cargo_registry_s_180257040);
          }
          local_90 = (int *)(lVar25 + 300);
          uStack_198 = PTR_DAT_1802fd3c0 + 0x30;
          local_88 = (undefined ***)FUN_18015bcd0;
          local_b8 = &DAT_18025baa6;
          local_b0 = &local_90;
          local_a8 = &local_b8;
          local_a0 = &DAT_180258dd0;
          local_1b0._0_4_ = 1;
          local_1b0._4_4_ = 0;
          uStack_1a8 = &local_a8;
          local_1a0._0_4_ = 1;
          local_1a0._4_4_ = 0;
          local_49 = 1;
          FUN_180160ae0(PTR_DAT_1802fd3c0,&local_1b0);
        }
      }
      else {
        uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
        if (uVar22 != 0) {
          local_49 = 1;
          uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd3c0);
          if ((char)uVar22 != '\0') goto LAB_18015aa29;
        }
      }
    }
    uVar22 = local_64;
    local_49 = 1;
    FUN_180159a30(&local_1b0,local_70,local_64);
    if ((char)local_1b0 == '\x03') {
      local_1b0._0_4_ = 0;
      local_1b0._4_4_ = 0;
      FUN_180159c70(local_70,uVar22,&local_1b0);
      if (CONCAT44(local_1b0._4_4_,(undefined4)local_1b0) != 0) {
        local_49 = 1;
        (**(code **)(CONCAT44(local_1b0._4_4_,(undefined4)local_1b0) + 0x18))(uStack_1a8);
      }
LAB_18015a791:
      *(undefined1 *)local_98 = 3;
      pppuVar10 = uStack_1a8;
      puVar11 = uStack_198;
    }
    else {
      local_98[4] = (longlong)local_190;
      local_98[2] = (longlong)local_1a0;
      local_98[3] = (longlong)uStack_198;
      *local_98 = (longlong)local_1b0;
      local_98[1] = (longlong)uStack_1a8;
      pppuVar10 = uStack_1a8;
      puVar11 = uStack_198;
    }
  }
  else {
    local_49 = 1;
    FUN_180159a30(&local_1b0,local_70);
    puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
    pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    if ((char)local_1b0 == '\x03') {
      uVar19 = *(ulonglong *)(lVar18 + 0x10);
      local_90 = piVar4;
      if (((uVar19 <= uVar16) || (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
         (lVar21 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar21 + 300) != iVar23)) {
        local_1b0 = (uint *)((longlong)&local_90 + 4);
        uStack_1a8._0_4_ = 0x80152d10;
        uStack_1a8._4_4_ = 1;
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_1b0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      uVar22 = 0;
      if (0 < (int)*(uint *)(lVar21 + 0xa8)) {
        uVar22 = *(uint *)(lVar21 + 0xa8);
      }
      if (uVar22 < local_64) {
        *(undefined2 *)local_98 = 0x100;
        *(int *)((longlong)local_98 + 4) = iVar23;
        *(undefined4 *)(local_98 + 1) = 3;
        param_3 = local_58;
        uVar19 = local_60;
        goto LAB_18015ab50;
      }
      if (*(longlong *)(lVar21 + 0x30) != 0) {
        if ((int)*(longlong *)(lVar21 + 0x30) == 2) {
          if (*(ulonglong *)(lVar21 + 0x38) < local_60) {
LAB_18015ac1c:
            if (*(ulonglong *)puVar12 < 2) {
              uVar22 = (uint)DAT_1802fd3a0;
              if (uVar22 - 1 < 2) {
LAB_18015ac3f:
                local_49 = 1;
                cVar15 = FUN_1801601d0(PTR_DAT_1802fd390,uVar22);
                puVar12 = PTR_DAT_1802fd390;
                pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
                if (cVar15 != '\0') {
                  local_49 = 1;
                  lVar21 = FUN_180152e90(param_4);
                  uStack_198 = puVar12 + 0x30;
                  local_90 = (int *)(lVar21 + 300);
                  local_c0 = local_60;
                  local_88 = (undefined ***)FUN_18015bcd0;
                  local_80 = &local_c0;
                  local_78 = (code *)&LAB_1800273d0;
                  local_b8 = &DAT_18025ba4f;
                  local_b0 = &local_90;
                  local_a8 = &local_b8;
                  local_a0 = &DAT_180258dd0;
                  local_1b0._0_4_ = 1;
                  local_1b0._4_4_ = 0;
                  uStack_1a8 = &local_a8;
                  local_1a0._0_4_ = 1;
                  local_1a0._4_4_ = 0;
                  local_49 = 1;
                  FUN_180160ae0(PTR_DAT_1802fd390,&local_1b0);
                  pppuVar10 = uStack_1a8;
                  puVar11 = uStack_198;
                }
              }
              else if (uVar22 != 0) {
                local_49 = 1;
                uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd390);
                puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
                pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                if ((char)uVar22 != '\0') goto LAB_18015ac3f;
              }
            }
            local_90 = piVar9;
            if (((*(ulonglong *)(lVar18 + 0x10) <= uVar16) ||
                (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
               (*(int *)(*(longlong *)(lVar18 + 8) + lVar25 + 300) != iVar23)) {
              local_1b0 = (uint *)((longlong)&local_90 + 4);
              uStack_1a8._0_4_ = 0x80152d10;
              uStack_1a8._4_4_ = 1;
              local_49 = 1;
              uStack_198 = puVar11;
                    /* WARNING: Subroutine does not return */
              FUN_180201ee0(&DAT_180256fac,&local_1b0,
                            &PTR_s_C__Users_burne__cargo_registry_s_180257040);
            }
            *(undefined2 *)local_98 = 0x100;
            *(int *)((longlong)local_98 + 4) = iVar23;
            *(undefined4 *)(local_98 + 1) = 1;
            param_3 = local_58;
            uVar19 = local_60;
            goto LAB_18015ab50;
          }
          *(ulonglong *)(lVar21 + 0x38) = *(ulonglong *)(lVar21 + 0x38) - local_60;
          uVar19 = *(ulonglong *)(lVar18 + 0x10);
        }
        else if (local_60 != 0) goto LAB_18015ac1c;
      }
      bVar20 = *(byte *)((longlong)local_58 + 0x24) & 1;
      if (bVar20 == 0) {
LAB_18015af05:
        local_90 = piVar8;
        if (((uVar19 <= uVar16) || (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
           (lVar25 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar25 + 300) != iVar23)) {
          local_1b0 = (uint *)((longlong)&local_90 + 4);
          uStack_1a8._0_4_ = 0x80152d10;
          uStack_1a8._4_4_ = 1;
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_1b0,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        if (*(char *)(lVar25 + 0x140) != '\x01') {
          uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
          uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
          if (*(longlong *)puVar12 == 0) {
            uVar22 = (uint)DAT_1802fd388;
            if (uVar22 - 1 < 2) {
LAB_18015b215:
              local_49 = 1;
              cVar15 = FUN_1801601d0(PTR_DAT_1802fd378,uVar22);
              puVar11 = PTR_DAT_1802fd378;
              uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
              if (cVar15 != '\0') {
                local_49 = 1;
                lVar18 = FUN_180152e90(param_4);
                uStack_198 = puVar11 + 0x30;
                local_90 = (int *)(lVar18 + 300);
                local_88 = (undefined ***)FUN_18015bcd0;
                local_b8 = &DAT_18025b92b;
                local_b0 = &local_90;
                local_a8 = &local_b8;
                local_a0 = &DAT_180258dd0;
                local_1b0._0_4_ = 1;
                local_1b0._4_4_ = 0;
                uStack_1a8 = &local_a8;
                local_1a0._0_4_ = 1;
                local_1a0._4_4_ = 0;
                local_49 = 1;
                FUN_180160ae0(PTR_DAT_1802fd378,&local_1b0);
              }
            }
            else {
              uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
              if (uVar22 != 0) {
                local_49 = 1;
                uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd378);
                if ((char)uVar22 != '\0') goto LAB_18015b215;
              }
            }
          }
          local_1b0._0_4_ = 0;
          local_1b0._4_4_ = 0;
          FUN_180159c70(local_70,local_64,&local_1b0);
          if (CONCAT44(local_1b0._4_4_,(undefined4)local_1b0) != 0) {
            local_49 = 1;
            (**(code **)(CONCAT44(local_1b0._4_4_,(undefined4)local_1b0) + 0x18))(uStack_1a8);
          }
          goto LAB_18015a791;
        }
        local_49 = 1;
        lVar18 = FUN_180152f00(param_4);
        local_49 = 1;
        uVar22 = local_64;
        uVar16 = FUN_180131f80(lVar18 + 0xa8);
        puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
        pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        if ((uVar16 & 1) == 0) {
          local_49 = 1;
          lVar18 = FUN_180152f00(param_4);
          *(int *)(lVar18 + 0x134) = *(int *)(lVar18 + 0x134) + local_64;
          iVar23 = *(byte *)((longlong)local_58 + 0x26) + 1;
          local_c4 = 0;
          pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
          puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
          if (cVar15 != '\0') {
            local_c4 = iVar23;
            uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
            if (*(longlong *)puVar12 == 0) {
              uVar22 = (uint)DAT_1802fd418;
              if (uVar22 - 1 < 2) {
LAB_18015b399:
                local_49 = 1;
                cVar15 = FUN_1801601d0(PTR_DAT_1802fd408,uVar22);
                puVar11 = PTR_DAT_1802fd408;
                uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
                if (cVar15 != '\0') {
                  local_49 = 1;
                  lVar18 = FUN_180152e90(param_4,iVar23);
                  uStack_198 = puVar11 + 0x30;
                  local_80 = (ulonglong *)(lVar18 + 300);
                  local_90 = &local_c4;
                  local_88 = (undefined ***)&LAB_180096fe0;
                  local_78 = FUN_18015bcd0;
                  local_b8 = &DAT_18025b968;
                  local_b0 = &local_90;
                  local_a8 = &local_b8;
                  local_a0 = &DAT_180258dd0;
                  local_1b0._0_4_ = 1;
                  local_1b0._4_4_ = 0;
                  uStack_1a8 = &local_a8;
                  local_1a0._0_4_ = 1;
                  local_1a0._4_4_ = 0;
                  local_49 = 1;
                  FUN_180160ae0(PTR_DAT_1802fd408,&local_1b0);
                  iVar23 = local_c4;
                }
              }
              else {
                uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                uStack_198 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
                if (uVar22 != 0) {
                  local_49 = 1;
                  uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd408);
                  if ((char)uVar22 != '\0') goto LAB_18015b399;
                }
              }
            }
            local_1b0._0_4_ = 0;
            local_1b0._4_4_ = 0;
            FUN_180158090(local_70,iVar23,param_4,&local_1b0);
            if (CONCAT44(local_1b0._4_4_,(undefined4)local_1b0) != 0) {
              local_49 = 1;
              (**(code **)(CONCAT44(local_1b0._4_4_,(undefined4)local_1b0) + 0x18))(uStack_1a8);
            }
            pppuVar10 = uStack_1a8;
            puVar11 = uStack_198;
          }
          if (local_60 != 0 || bVar20 != 0) {
            uStack_1a8._0_4_ = (undefined4)*local_58;
            uStack_1a8._4_4_ = *(undefined4 *)((longlong)local_58 + 4);
            local_1a0._0_4_ = (undefined4)local_58[1];
            local_1a0._4_4_ = *(undefined4 *)((longlong)local_58 + 0xc);
            uStack_198._0_4_ = (undefined4)local_58[2];
            uStack_198._4_4_ = *(undefined4 *)((longlong)local_58 + 0x14);
            local_190._0_4_ = (undefined4)local_58[3];
            local_190._4_4_ = *(undefined4 *)((longlong)local_58 + 0x1c);
            local_188 = (code *)(CONCAT71(local_188._1_7_,bVar20) ^ 1);
            local_1b0._0_4_ = 1;
            local_1b0._4_4_ = 0;
            local_4a = 1;
            lVar18 = FUN_180152f00(param_4);
            plVar13 = local_98;
            local_4a = 0;
            FUN_18014a690(lVar18 + 0x18,local_70,&local_1b0);
            local_4a = 0;
            lVar21 = FUN_180152f00(param_4);
            lVar18 = *(longlong *)(lVar21 + 0xb0);
            *(undefined8 *)(lVar21 + 0xb0) = 0;
            if (lVar18 != 0) {
              local_4a = 0;
              (**(code **)(lVar18 + 8))(*(undefined8 *)(lVar21 + 0xb8));
            }
            *(undefined1 *)plVar13 = 3;
            return plVar13;
          }
          *(undefined1 *)local_98 = 3;
          param_3 = local_58;
          uVar19 = local_60;
          goto LAB_18015ab50;
        }
        *(undefined2 *)local_98 = 0x101;
        *(uint *)((longlong)local_98 + 4) = uVar22;
      }
      else {
        local_90 = piVar7;
        if (((uVar19 <= uVar16) || (*(int *)(*(longlong *)(lVar18 + 8) + lVar25) == 2)) ||
           (lVar21 = *(longlong *)(lVar18 + 8) + lVar25, *(int *)(lVar21 + 300) != iVar23)) {
          local_1b0 = (uint *)((longlong)&local_90 + 4);
          uStack_1a8._0_4_ = 0x80152d10;
          uStack_1a8._4_4_ = 1;
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_1b0,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        if ((*(int *)(lVar21 + 0x30) == 2) && (*(longlong *)(lVar21 + 0x38) != 0)) {
          if (*(ulonglong *)puVar12 < 2) {
            uVar22 = (uint)DAT_1802fd370;
            if (uVar22 - 1 < 2) {
LAB_18015adc4:
              local_49 = 1;
              cVar15 = FUN_1801601d0(PTR_DAT_1802fd360,uVar22);
              puVar12 = PTR_DAT_1802fd360;
              pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
              if (cVar15 != '\0') {
                local_49 = 1;
                lVar18 = FUN_180152e90(param_4);
                uStack_198 = puVar12 + 0x30;
                local_90 = (int *)(lVar18 + 300);
                local_c0 = local_60;
                local_88 = (undefined ***)FUN_18015bcd0;
                local_80 = &local_c0;
                local_78 = (code *)&LAB_1800273d0;
                local_b8 = &DAT_18025b9f7;
                local_b0 = &local_90;
                local_a8 = &local_b8;
                local_a0 = &DAT_180258dd0;
                local_1b0._0_4_ = 1;
                local_1b0._4_4_ = 0;
                uStack_1a8 = &local_a8;
                local_1a0._0_4_ = 1;
                local_1a0._4_4_ = 0;
                local_49 = 1;
                FUN_180160ae0(PTR_DAT_1802fd360,&local_1b0);
                pppuVar10 = uStack_1a8;
                puVar11 = uStack_198;
              }
            }
            else if (uVar22 != 0) {
              local_49 = 1;
              uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd360);
              puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
              pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              if ((char)uVar22 != '\0') goto LAB_18015adc4;
            }
          }
          local_49 = 1;
          uStack_1a8 = pppuVar10;
          uStack_198 = puVar11;
          lVar18 = FUN_180152e90(param_4);
          uVar3 = *(undefined4 *)(lVar18 + 300);
          *(undefined2 *)local_98 = 0x100;
          *(undefined4 *)((longlong)local_98 + 4) = uVar3;
          *(undefined4 *)(local_98 + 1) = 1;
          pppuVar10 = uStack_1a8;
          puVar11 = uStack_198;
          goto LAB_18015aa00;
        }
        local_49 = 1;
        local_65 = bVar20;
        lVar21 = FUN_180152f00(param_4);
        local_49 = 1;
        FUN_1801379f0(&local_1b0,lVar21 + 0x40);
        if ((char)local_1b0 == '\x03') {
          local_49 = 1;
          FUN_18008e720(&local_1b0);
          uVar19 = *(ulonglong *)(lVar18 + 0x10);
          bVar20 = local_65;
          goto LAB_18015af05;
        }
        local_49 = 1;
        FUN_18008e720(&local_1b0);
        pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
        if (*(ulonglong *)puVar12 < 2) {
          uVar22 = (uint)DAT_1802fd400;
          if (uVar22 - 1 < 2) {
LAB_18015b00d:
            local_49 = 1;
            cVar15 = FUN_1801601d0(PTR_DAT_1802fd3f0,uVar22);
            puVar12 = PTR_DAT_1802fd3f0;
            pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
            if (cVar15 != '\0') {
              local_49 = 1;
              lVar18 = FUN_180152e90(param_4);
              uStack_198 = puVar12 + 0x30;
              local_90 = (int *)(lVar18 + 300);
              local_88 = (undefined ***)FUN_18015bcd0;
              local_b8 = &DAT_18025b997;
              local_b0 = &local_90;
              local_a8 = &local_b8;
              local_a0 = &DAT_180258dd0;
              local_1b0._0_4_ = 1;
              local_1b0._4_4_ = 0;
              uStack_1a8 = &local_a8;
              local_1a0._0_4_ = 1;
              local_1a0._4_4_ = 0;
              local_49 = 1;
              FUN_180160ae0(PTR_DAT_1802fd3f0,&local_1b0);
              pppuVar10 = uStack_1a8;
              puVar11 = uStack_198;
            }
          }
          else {
            pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
            if (uVar22 != 0) {
              local_49 = 1;
              uVar22 = FUN_1801faaf0(&PTR_DAT_1802fd3f0);
              puVar11 = (undefined *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
              pppuVar10 = (undefined ***)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              if ((char)uVar22 != '\0') goto LAB_18015b00d;
            }
          }
        }
        *(undefined2 *)local_98 = 0x101;
        *(undefined4 *)((longlong)local_98 + 4) = 1;
      }
      local_98[1] = (longlong)&PTR_LAB_180258e00;
      local_98[2] = 1;
      local_98[3] = 0;
      local_98[4] = 0;
    }
    else {
      local_98[4] = (longlong)local_190;
      *(ulonglong *)((longlong)local_98 + 0x11) =
           CONCAT17((undefined1)uStack_198,(int7)((ulonglong)local_1a0 >> 8));
      *(ulonglong *)((longlong)local_98 + 0x19) =
           CONCAT17((undefined1)local_190,CONCAT43(uStack_198._4_4_,uStack_198._1_3_));
      *(int *)((longlong)local_98 + 1) = (int)((ulonglong)local_1b0 >> 8);
      *(uint *)((longlong)local_98 + 5) = CONCAT13((undefined1)uStack_1a8,local_1b0._5_3_);
      *(uint *)((longlong)local_98 + 9) = CONCAT13(uStack_1a8._4_1_,uStack_1a8._1_3_);
      *(uint *)((longlong)local_98 + 0xd) = CONCAT13((undefined1)local_1a0,uStack_1a8._5_3_);
      *(char *)local_98 = (char)local_1b0;
    }
  }
LAB_18015aa00:
  param_3 = local_58;
  uVar19 = local_60;
LAB_18015ab50:
  plVar13 = local_98;
  uStack_1a8 = pppuVar10;
  uStack_198 = puVar11;
  (**(code **)(*param_3 + 0x20))(param_3[3],param_3[1],uVar19);
  return plVar13;
}


