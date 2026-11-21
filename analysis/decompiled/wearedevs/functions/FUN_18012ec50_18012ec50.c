/* FUN_18012ec50 @ 18012ec50 */

void FUN_18012ec50(undefined8 param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auVar6 [8];
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong local_d0;
  int *local_c8;
  undefined1 local_c0 [8];
  int ***local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  int **local_a0;
  code *local_98;
  uint *local_90;
  undefined *local_88;
  longlong *local_80;
  undefined *local_78;
  int *local_70;
  undefined *local_68;
  uint local_5c;
  undefined1 local_58 [8];
  longlong *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_5c = param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     ((uVar2 = (uint)DAT_1802fb8f8, uVar2 - 1 < 2 ||
      ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fb8e8), (char)uVar2 != '\0')))))) {
    cVar8 = FUN_1801601d0(PTR_DAT_1802fb8e8,uVar2);
    if (cVar8 == '\0') goto LAB_18012ec89;
    puVar1 = (uint *)(param_3 + 1);
    iVar4 = *(int *)((longlong)param_3 + 0xc);
    local_58 = *(undefined1 (*) [8])puVar1;
    local_a0 = (int **)(local_58 + 4);
    if (*(ulonglong *)(*param_3 + 0x10) <= (ulonglong)*puVar1) {
LAB_18012f042:
      local_58 = *(undefined1 (*) [8])puVar1;
      local_98 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    lVar7 = *(longlong *)(*param_3 + 8);
    lVar9 = (ulonglong)*puVar1 * 0x148;
    if (((((*(int *)(lVar7 + lVar9) == 2) ||
          (local_70 = (int *)(lVar7 + lVar9), local_70[0x4b] != iVar4)) ||
         (local_c8 = local_70 + 0x4b, *local_70 == 2)) ||
        ((*local_c8 != iVar4 ||
         (local_d0 = (ulonglong)param_2 + *(longlong *)(local_70 + 0x24), *local_70 == 2)))) ||
       (*local_c8 != iVar4)) goto LAB_18012f042;
    local_a8 = PTR_DAT_1802fb8e8 + 0x30;
    local_70 = local_70 + 0x4c;
    local_a0 = &local_c8;
    local_98 = (code *)&DAT_180245140;
    local_90 = &local_5c;
    local_88 = &DAT_180245638;
    local_80 = &local_d0;
    local_78 = &DAT_180245658;
    local_68 = &DAT_180245638;
    local_c0 = (undefined1  [8])0x1;
    local_b8 = &local_a0;
    local_b0 = 4;
    FUN_180160410(local_58,PTR_DAT_1802fb8e8,local_c0);
    if (local_58 != (undefined1  [8])0x2) {
      FUN_180161780(local_58,&local_40);
    }
  }
  else {
LAB_18012ec89:
    local_58 = (undefined1  [8])0x2;
    local_38 = 0;
  }
  uVar3 = (ulonglong)*(uint *)(param_3 + 1);
  local_c0 = (undefined1  [8])param_3[1];
  if (*(ulonglong *)(*param_3 + 0x10) <= uVar3) {
LAB_18012eff2:
    local_98 = FUN_180152d10;
    local_a0 = (int **)(local_c0 + 4);
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  lVar7 = *(longlong *)(*param_3 + 8);
  lVar9 = uVar3 * 0x148;
  if ((*(int *)(lVar7 + lVar9) == 2) ||
     (lVar7 = lVar7 + lVar9, *(int *)(lVar7 + 300) != *(int *)((longlong)param_3 + 0xc)))
  goto LAB_18012eff2;
  uVar3 = (ulonglong)local_5c + *(longlong *)(lVar7 + 0x90);
  cVar8 = (*(uint *)(lVar7 + 0x130) < uVar3) - (uVar3 < *(uint *)(lVar7 + 0x130));
  if (cVar8 == -1) {
    *(int *)(lVar7 + 0x130) = (int)uVar3;
    uVar5 = (ulonglong)*(uint *)(param_3 + 1);
    local_c0 = (undefined1  [8])param_3[1];
    if (*(ulonglong *)(*param_3 + 0x10) <= uVar5) {
LAB_18012f01a:
      local_98 = FUN_180152d10;
      local_a0 = (int **)(local_c0 + 4);
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    lVar7 = *(longlong *)(*param_3 + 8);
    lVar9 = uVar5 * 0x148;
    if ((*(int *)(lVar7 + lVar9) == 2) ||
       (lVar7 = lVar7 + lVar9, *(int *)(lVar7 + 300) != *(int *)((longlong)param_3 + 0xc)))
    goto LAB_18012f01a;
    uVar2 = *(uint *)(lVar7 + 0x8c);
    uVar5 = 0;
    if (0 < (int)uVar2) {
      uVar5 = (ulonglong)uVar2;
    }
    if (uVar3 < uVar5) {
      iVar4 = (int)uVar5 - (int)uVar3;
      if (!SBORROW4(uVar2,iVar4)) {
        *(uint *)(lVar7 + 0x8c) = uVar2 - iVar4;
      }
      FUN_1801305e0(param_1,iVar4,param_3,param_4);
    }
  }
  else if (cVar8 == '\x01') {
    uVar2 = 6;
    if (3 < *(uint *)(lVar7 + 0x40)) {
      uVar2 = *(uint *)(lVar7 + 0x40) - 4;
    }
    if ((uVar2 < 7) && ((0x54U >> (uVar2 & 0x1f) & 1) != 0)) {
      if (local_58._0_4_ == 2) {
        return;
      }
      FUN_180161750(local_58,&local_40);
      auVar6 = local_58;
      if (local_58 == (undefined1  [8])0x2) {
        return;
      }
      FUN_1801617b0(local_58,local_40);
      goto LAB_18012efcb;
    }
    uVar5 = 0xffffffff;
    if (uVar3 < 0xffffffff) {
      uVar5 = uVar3;
    }
    *(int *)(lVar7 + 0x130) = (int)uVar5;
    FUN_18012f440(param_1,param_3);
  }
  if (local_58._0_4_ == 2) {
    return;
  }
  FUN_180161750(local_58,&local_40);
  auVar6 = local_58;
  if (local_58 == (undefined1  [8])0x2) {
    return;
  }
  FUN_1801617b0(local_58,local_40);
LAB_18012efcb:
  if (auVar6 != (undefined1  [8])0x0) {
    LOCK();
    *local_50[0] = *local_50[0] + -1;
    UNLOCK();
    if (*local_50[0] == 0) {
      FUN_18003cc40(local_50);
    }
  }
  return;
}


