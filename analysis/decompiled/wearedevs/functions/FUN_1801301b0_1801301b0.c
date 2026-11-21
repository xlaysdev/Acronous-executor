/* FUN_1801301b0 @ 1801301b0 */

undefined8 FUN_1801301b0(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  uint *puVar1;
  undefined1 auVar2 [8];
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  undefined1 local_c8 [8];
  int ***local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  int **local_a8;
  code *local_a0;
  int **local_98;
  undefined *local_90;
  undefined4 *local_88;
  undefined *local_80;
  int **local_78;
  undefined *local_70;
  undefined4 local_64;
  undefined1 local_60 [8];
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_64 = param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar6 = (uint)DAT_1802fb9b8, uVar6 - 1 < 2 ||
       ((uVar6 != 0 && (uVar6 = FUN_1801faaf0(&PTR_DAT_1802fb9a8), (char)uVar6 != '\0')))) &&
      (cVar3 = FUN_1801601d0(PTR_DAT_1802fb9a8,uVar6), cVar3 != '\0')))) {
    lVar5 = *param_3;
    puVar1 = (uint *)(param_3 + 1);
    uVar4 = (ulonglong)*puVar1;
    iVar7 = *(int *)((longlong)param_3 + 0xc);
    local_60 = *(undefined1 (*) [8])puVar1;
    local_a8 = (int **)(local_60 + 4);
    if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
LAB_1801304e7:
      local_60 = *(undefined1 (*) [8])puVar1;
      local_a0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    if ((((*(int *)(*(longlong *)(lVar5 + 8) + uVar4 * 0x148) == 2) ||
         (local_e0 = (int *)(*(longlong *)(lVar5 + 8) + uVar4 * 0x148), local_e0[0x4b] != iVar7)) ||
        (local_d0 = local_e0 + 0x4b, *local_e0 == 2)) ||
       (((*local_d0 != iVar7 || (local_d8 = local_e0 + 0x10, *local_e0 == 2)) ||
        (*local_d0 != iVar7)))) goto LAB_1801304e7;
    local_b0 = PTR_DAT_1802fb9a8 + 0x30;
    local_e0 = local_e0 + 0x22;
    local_a8 = &local_d0;
    local_a0 = (code *)&DAT_180245140;
    local_98 = &local_d8;
    local_90 = &DAT_180246050;
    local_88 = &local_64;
    local_80 = &DAT_180245638;
    local_78 = &local_e0;
    local_70 = &DAT_180246070;
    local_c8 = (undefined1  [8])0x1;
    local_c0 = &local_a8;
    local_b8 = 4;
    FUN_180160410(local_60,PTR_DAT_1802fb9a8,local_c8);
    if (local_60 != (undefined1  [8])0x2) {
      FUN_180161780(local_60,&local_48);
    }
  }
  else {
    local_60 = (undefined1  [8])0x2;
    local_40 = 0;
    lVar5 = *param_3;
    uVar4 = (ulonglong)*(uint *)(param_3 + 1);
    iVar7 = *(int *)((longlong)param_3 + 0xc);
  }
  local_c8._4_4_ = iVar7;
  local_c8._0_4_ = (int)uVar4;
  if (*(ulonglong *)(lVar5 + 0x10) <= uVar4) {
LAB_1801304bb:
    local_a8 = (int **)(local_c8 + 4);
    local_a0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 8) + uVar4 * 0x148) == 2) ||
     (lVar5 = *(longlong *)(lVar5 + 8) + uVar4 * 0x148, *(int *)(lVar5 + 300) != iVar7))
  goto LAB_1801304bb;
  uVar6 = 6;
  if (3 < *(uint *)(lVar5 + 0x40)) {
    uVar6 = *(uint *)(lVar5 + 0x40) - 4;
  }
  if (((uVar6 < 7) && ((0x54U >> (uVar6 & 0x1f) & 1) != 0)) && (*(longlong *)(lVar5 + 0x90) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar4 = FUN_180131b80(lVar5 + 0x88,local_64);
    if ((uVar4 & 1) == 0) {
      FUN_18012f440(param_1,param_3);
      if (((local_60._0_4_ == 2) ||
          (FUN_180161750(local_60,&local_48), auVar2 = local_60, local_60 == (undefined1  [8])0x2))
         || (FUN_1801617b0(local_60,local_48), auVar2 == (undefined1  [8])0x0)) {
        return 0;
      }
      uVar8 = 0;
      LOCK();
      *local_58[0] = *local_58[0] + -1;
      UNLOCK();
      if (*local_58[0] != 0) {
        return 0;
      }
      goto LAB_18013047f;
    }
    uVar8 = 1;
  }
  if (local_60._0_4_ == 2) {
    return uVar8;
  }
  FUN_180161750(local_60,&local_48);
  auVar2 = local_60;
  if (local_60 == (undefined1  [8])0x2) {
    return uVar8;
  }
  FUN_1801617b0(local_60,local_48);
  if (auVar2 == (undefined1  [8])0x0) {
    return uVar8;
  }
  LOCK();
  *local_58[0] = *local_58[0] + -1;
  UNLOCK();
  if (*local_58[0] != 0) {
    return uVar8;
  }
LAB_18013047f:
  FUN_18003cc40(local_58);
  return uVar8;
}


