/* FUN_18012f440 @ 18012f440 */

void FUN_18012f440(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int **ppiVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined1 auVar13 [8];
  longlong lVar14;
  int local_104;
  int *local_100;
  int **local_f8;
  undefined8 local_f0;
  uint local_e4;
  int **local_e0;
  code *local_d8;
  uint *local_d0;
  undefined *local_c8;
  int *local_c0;
  undefined *local_b8;
  int ***local_b0;
  undefined *local_a8;
  int ***local_a0;
  undefined *local_98;
  undefined1 local_90 [8];
  longlong *local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  int ***local_58;
  undefined1 *local_50;
  undefined *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_1802fd448;
  local_38 = 0xfffffffffffffffe;
  puVar1 = (uint *)(param_2 + 1);
  local_90 = *(undefined1 (*) [8])puVar1;
  auVar13 = *(undefined1 (*) [8])puVar1;
  if (*(ulonglong *)(*param_2 + 0x10) <= (ulonglong)*puVar1) {
LAB_18012fbf2:
    local_90 = auVar13;
    local_d8 = FUN_180152d10;
    local_e0 = (int **)(local_90 + 4);
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  lVar9 = *(longlong *)(*param_2 + 8);
  lVar14 = (ulonglong)*puVar1 * 0x148;
  if ((*(int *)(lVar9 + lVar14) == 2) ||
     (lVar9 = lVar9 + lVar14, *(int *)(lVar9 + 300) != *(int *)((longlong)param_2 + 0xc)))
  goto LAB_18012fbf2;
  if (*(char *)(lVar9 + 0x13c) != '\0') {
    return;
  }
  local_104 = *(int *)(lVar9 + 0x130);
  auVar13 = local_90;
  if (*(int *)(lVar9 + 300) != *(int *)((longlong)param_2 + 0xc)) goto LAB_18012fbf2;
  iVar5 = *(int *)(lVar9 + 0x8c);
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(lVar9 + 0x88)) {
    iVar6 = *(int *)(lVar9 + 0x88);
  }
  local_e4 = iVar6 - iVar5;
  if ((uint)(local_104 - iVar5) <= (uint)(iVar6 - iVar5)) {
    local_e4 = local_104 - iVar5;
  }
  if ((*(longlong *)PTR_DAT_1802fd448 - 1U < 5) ||
     (((uVar7 = (uint)DAT_1802fb940, 1 < uVar7 - 1 &&
       ((uVar7 == 0 || (uVar7 = FUN_1801faaf0(&PTR_DAT_1802fb930), (char)uVar7 == '\0')))) ||
      (cVar4 = FUN_1801601d0(PTR_DAT_1802fb930,uVar7), cVar4 == '\0')))) {
    local_90 = (undefined1  [8])0x2;
    local_70 = 0;
    lVar9 = *(longlong *)puVar3;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(param_2 + 1);
    local_90 = (undefined1  [8])param_2[1];
    auVar13 = local_90;
    if (*(ulonglong *)(*param_2 + 0x10) <= uVar10) goto LAB_18012fbf2;
    lVar9 = *(longlong *)(*param_2 + 8);
    lVar14 = uVar10 * 0x148;
    if ((*(int *)(lVar9 + lVar14) == 2) ||
       (lVar9 = lVar9 + lVar14, *(int *)(lVar9 + 300) != *(int *)((longlong)param_2 + 0xc)))
    goto LAB_18012fbf2;
    local_c8 = PTR_DAT_1802fb930 + 0x30;
    local_f8 = (int **)(lVar9 + 300);
    local_60 = (undefined1  [8])&local_f8;
    local_58 = (int ***)&DAT_180245140;
    local_e0 = (int **)0x1;
    local_d8 = (code *)local_60;
    local_d0 = (uint *)0x1;
    FUN_180160410(local_90,PTR_DAT_1802fb930,&local_e0);
    if (local_90 != (undefined1  [8])0x2) {
      FUN_180161780(local_90,&local_78);
    }
    lVar9 = *(longlong *)puVar3;
  }
  if (((lVar9 == 0) &&
      ((uVar7 = (uint)DAT_1802fb988, uVar7 - 1 < 2 ||
       ((uVar7 != 0 && (uVar7 = FUN_1801faaf0(&PTR_DAT_1802fb978), (char)uVar7 != '\0')))))) &&
     (cVar4 = FUN_1801601d0(PTR_DAT_1802fb978,uVar7), cVar4 != '\0')) {
    uVar10 = (ulonglong)*(uint *)(param_2 + 1);
    local_60 = (undefined1  [8])param_2[1];
    if (*(ulonglong *)(*param_2 + 0x10) <= uVar10) {
LAB_18012fcc1:
      local_e0 = (int **)(local_60 + 4);
      local_d8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    lVar9 = *(longlong *)(*param_2 + 8);
    lVar14 = uVar10 * 0x148;
    if ((*(int *)(lVar9 + lVar14) == 2) ||
       (lVar9 = lVar9 + lVar14, *(int *)(lVar9 + 300) != *(int *)((longlong)param_2 + 0xc)))
    goto LAB_18012fcc1;
    local_c0 = (int *)(lVar9 + 0x90);
    local_68._0_4_ = 0;
    if (0 < *(int *)(lVar9 + 0x88)) {
      local_68._0_4_ = *(int *)(lVar9 + 0x88);
    }
    local_48 = PTR_DAT_1802fb978 + 0x30;
    local_100 = (int *)CONCAT44(local_100._4_4_,*(undefined4 *)(param_1 + 4));
    local_f8 = &local_100;
    local_e0 = (int **)&local_104;
    local_d8 = (code *)&DAT_180245638;
    local_d0 = &local_e4;
    local_c8 = &DAT_180245638;
    local_b8 = &DAT_180245658;
    local_b0 = (int ***)&local_68;
    local_a8 = &DAT_180245638;
    local_a0 = &local_f8;
    local_98 = &DAT_180245ce0;
    local_60 = (undefined1  [8])0x1;
    local_58 = &local_e0;
    local_50 = (undefined1 *)0x5;
    FUN_180160ae0(PTR_DAT_1802fb978,local_60);
  }
  if (local_e4 != 0) {
    uVar10 = (ulonglong)*(uint *)(param_2 + 1);
    local_60 = (undefined1  [8])param_2[1];
    ppiVar2 = (int **)(local_60 + 4);
    if (*(ulonglong *)(*param_2 + 0x10) <= uVar10) {
LAB_18012fc18:
      local_d8 = FUN_180152d10;
      local_e0 = ppiVar2;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    lVar9 = *(longlong *)(*param_2 + 8);
    lVar14 = uVar10 * 0x148;
    if ((*(int *)(lVar9 + lVar14) == 2) ||
       (lVar9 = lVar9 + lVar14, *(int *)(lVar9 + 300) != *(int *)((longlong)param_2 + 0xc)))
    goto LAB_18012fc18;
    iVar5 = 6;
    if (3 < *(uint *)(lVar9 + 0x40)) {
      iVar5 = *(uint *)(lVar9 + 0x40) - 4;
    }
    if ((((iVar5 == 5) || (iVar5 == 3)) && (*(char *)(lVar9 + 0x44) == '\x01')) ||
       (*(longlong *)(lVar9 + 0x90) != 0)) {
      uVar7 = *(uint *)(param_1 + 4);
      if (0 < (int)uVar7) {
        local_68._4_4_ = local_e4;
        if (uVar7 <= local_e4) {
          local_68._4_4_ = uVar7;
        }
        if (((*(longlong *)puVar3 == 0) &&
            ((uVar8 = (uint)DAT_1802fb970, uVar8 - 1 < 2 ||
             ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fb960), (char)uVar8 != '\0'))))))
           && (cVar4 = FUN_1801601d0(PTR_DAT_1802fb960,uVar8), cVar4 != '\0')) {
          local_c8 = PTR_DAT_1802fb960 + 0x30;
          local_f8 = (int **)0x180245d00;
          local_f0 = 0x13;
          local_60 = (undefined1  [8])&local_f8;
          local_58 = (int ***)&DAT_180245120;
          local_50 = (undefined1 *)((longlong)&local_68 + 4);
          local_48 = &DAT_180245638;
          local_e0 = (int **)0x1;
          local_d8 = (code *)local_60;
          local_d0 = (uint *)0x2;
          FUN_180160ae0(PTR_DAT_1802fb960,&local_e0);
        }
        uVar10 = (ulonglong)*(uint *)(param_2 + 1);
        local_60 = (undefined1  [8])param_2[1];
        if (*(ulonglong *)(*param_2 + 0x10) <= uVar10) {
LAB_18012fc99:
          local_d8 = FUN_180152d10;
          local_e0 = ppiVar2;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
        }
        lVar9 = *(longlong *)(*param_2 + 8);
        lVar14 = uVar10 * 0x148;
        if ((*(int *)(lVar9 + lVar14) == 2) ||
           (lVar9 = lVar9 + lVar14, *(int *)(lVar9 + 300) != *(int *)((longlong)param_2 + 0xc)))
        goto LAB_18012fc99;
        FUN_180132160(lVar9,local_68._4_4_,*(undefined8 *)(param_1 + 8));
        if (!SBORROW4(uVar7,local_68._4_4_)) {
          *(uint *)(param_1 + 4) = uVar7 - local_68._4_4_;
        }
      }
      if ((*(longlong *)puVar3 == 0) &&
         (((uVar7 = (uint)DAT_1802fb958, uVar7 - 1 < 2 ||
           ((uVar7 != 0 && (uVar7 = FUN_1801faaf0(&PTR_DAT_1802fb948), (char)uVar7 != '\0')))) &&
          (cVar4 = FUN_1801601d0(PTR_DAT_1802fb948,uVar7), cVar4 != '\0')))) {
        puVar1 = (uint *)(param_2 + 1);
        local_60 = *(undefined1 (*) [8])puVar1;
        if (*(ulonglong *)(*param_2 + 0x10) <= (ulonglong)*puVar1) {
LAB_18012fced:
          local_d8 = FUN_180152d10;
          local_e0 = ppiVar2;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
        }
        lVar9 = *(longlong *)(*param_2 + 8);
        lVar14 = (ulonglong)*puVar1 * 0x148;
        if ((*(int *)(lVar9 + lVar14) == 2) ||
           (piVar12 = (int *)(lVar9 + lVar14), piVar12[0x4b] != *(int *)((longlong)param_2 + 0xc)))
        goto LAB_18012fced;
        local_68._0_4_ = piVar12[0x23];
        local_100 = (int *)&local_68;
        if ((*piVar12 == 2) || (piVar12[0x4b] != *(int *)((longlong)param_2 + 0xc))) {
          local_d8 = FUN_180152d10;
          local_e0 = ppiVar2;
          local_60 = (undefined1  [8])*(undefined8 *)puVar1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
        }
        local_48 = PTR_DAT_1802fb948 + 0x30;
        local_d0 = (uint *)(piVar12 + 0x4c);
        local_c0 = piVar12 + 0x24;
        if (piVar12[0x22] < 0) {
          local_39 = false;
        }
        else {
          local_39 = piVar12[0x23] < piVar12[0x22];
        }
        local_f8 = (int **)&local_39;
        local_e0 = &local_100;
        local_d8 = (code *)&DAT_180245ce0;
        local_c8 = &DAT_180245638;
        local_b8 = &DAT_180245658;
        local_b0 = &local_f8;
        local_a8 = &DAT_180245d10;
        local_60 = (undefined1  [8])0x1;
        local_58 = &local_e0;
        local_50 = &DAT_00000004;
        FUN_180160ae0(PTR_DAT_1802fb948,local_60);
      }
      lVar9 = *param_2;
      uVar11 = (ulonglong)*(uint *)(param_2 + 1);
      iVar5 = *(int *)((longlong)param_2 + 0xc);
      local_60 = (undefined1  [8])param_2[1];
      uVar10 = *(ulonglong *)(lVar9 + 0x10);
      if (uVar10 <= uVar11) {
LAB_18012fc43:
        local_d8 = FUN_180152d10;
        local_e0 = ppiVar2;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      if ((*(int *)(*(longlong *)(lVar9 + 8) + uVar11 * 0x148) == 2) ||
         (lVar14 = *(longlong *)(lVar9 + 8) + uVar11 * 0x148, *(int *)(lVar14 + 300) != iVar5))
      goto LAB_18012fc43;
      uVar7 = *(uint *)(lVar14 + 0x8c);
      if ((((int)uVar7 < 0) || (uVar7 < *(uint *)(lVar14 + 0x130))) &&
         ((int)uVar7 < *(int *)(lVar14 + 0x88) && -1 < *(int *)(lVar14 + 0x88))) {
        FUN_180151ed0(param_1 + 0x24,param_2);
        lVar9 = *param_2;
        uVar11 = (ulonglong)*(uint *)(param_2 + 1);
        iVar5 = *(int *)((longlong)param_2 + 0xc);
        uVar10 = *(ulonglong *)(lVar9 + 0x10);
      }
      local_60._4_4_ = iVar5;
      local_60._0_4_ = (int)uVar11;
      if (uVar10 <= uVar11) {
LAB_18012fc6e:
        local_d8 = FUN_180152d10;
        local_e0 = ppiVar2;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      if ((*(int *)(*(longlong *)(lVar9 + 8) + uVar11 * 0x148) == 2) ||
         (lVar9 = *(longlong *)(lVar9 + 8) + uVar11 * 0x148, *(int *)(lVar9 + 300) != iVar5))
      goto LAB_18012fc6e;
      if (((*(longlong *)(lVar9 + 0x90) != 0) && (*(char *)(lVar9 + 0x13c) == '\0')) &&
         (*(char *)(lVar9 + 0x13d) == '\0')) {
        FUN_180151610(param_1 + 0x10,param_2);
      }
      if (local_90._0_4_ == 2) {
        return;
      }
      FUN_180161750(local_90,&local_78);
      auVar13 = local_90;
      if (local_90 == (undefined1  [8])0x2) {
        return;
      }
      FUN_1801617b0(local_90,local_78);
      goto LAB_18012f84c;
    }
  }
  if (local_90._0_4_ == 2) {
    return;
  }
  FUN_180161750(local_90,&local_78);
  auVar13 = local_90;
  if (local_90 == (undefined1  [8])0x2) {
    return;
  }
  FUN_1801617b0(local_90,local_78);
LAB_18012f84c:
  if (auVar13 != (undefined1  [8])0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    UNLOCK();
    if (*local_88[0] == 0) {
      FUN_18003cc40(local_88);
    }
  }
  return;
}


