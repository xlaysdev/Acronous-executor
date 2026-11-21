/* FUN_180121bb0 @ 180121bb0 */

void FUN_180121bb0(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_40 = (longlong *)0x0;
  local_30 = (longlong *)param_3;
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180241f28);
  }
  local_38 = param_2;
  if (param_2[7] != 0) {
    FUN_180121830();
  }
  plVar18 = local_38;
  param_2[7] = 1;
  uVar2 = *(undefined4 *)((longlong)local_30 + 4);
  uVar3 = *(undefined4 *)((longlong)local_30 + 8);
  uVar4 = *(undefined4 *)((longlong)local_30 + 0xc);
  uVar5 = *(undefined4 *)((longlong)local_30 + 0x10);
  uVar6 = *(undefined4 *)((longlong)local_30 + 0x14);
  uVar7 = *(undefined4 *)((longlong)local_30 + 0x18);
  uVar8 = *(undefined4 *)((longlong)local_30 + 0x1c);
  uVar9 = *(undefined4 *)((longlong)local_30 + 0x20);
  uVar10 = *(undefined4 *)((longlong)local_30 + 0x24);
  uVar11 = *(undefined4 *)((longlong)local_30 + 0x28);
  uVar12 = *(undefined4 *)((longlong)local_30 + 0x2c);
  *(int *)(param_2 + 8) = (int)*local_30;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar2;
  *(undefined4 *)(param_2 + 9) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar4;
  *(undefined4 *)(param_2 + 10) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar6;
  *(undefined4 *)(param_2 + 0xb) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar8;
  *(undefined4 *)(param_2 + 0xc) = uVar9;
  *(undefined4 *)((longlong)param_2 + 100) = uVar10;
  *(undefined4 *)(param_2 + 0xd) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar12;
  uVar19 = FUN_1801775a0(local_38 + 6);
  if ((uVar19 & 5) == 1) {
    (**(code **)(plVar18[4] + 0x10))(plVar18[5]);
  }
  if ((uVar19 & 4) == 0) {
    *param_1 = 0;
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      FUN_180113f90(&local_38);
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    local_30 = local_40;
    uVar19 = FUN_1801775a0(local_40 + 6);
    if ((uVar19 & 5) == 1) {
      (**(code **)(local_30[4] + 0x10))(local_30[5]);
    }
  }
  else {
    bVar1 = *(byte *)(local_38 + 7);
    local_38[7] = 0;
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180241f40);
    }
    lVar13 = local_38[8];
    uVar2 = *(undefined4 *)((longlong)local_38 + 0x44);
    lVar14 = local_38[9];
    uVar3 = *(undefined4 *)((longlong)local_38 + 0x4c);
    lVar15 = local_38[10];
    uVar4 = *(undefined4 *)((longlong)local_38 + 0x54);
    lVar16 = local_38[0xb];
    uVar5 = *(undefined4 *)((longlong)local_38 + 0x5c);
    uVar6 = *(undefined4 *)((longlong)local_38 + 100);
    lVar17 = local_38[0xd];
    uVar7 = *(undefined4 *)((longlong)local_38 + 0x6c);
    *(int *)(param_1 + 5) = (int)local_38[0xc];
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
    *(int *)(param_1 + 6) = (int)lVar17;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
    *(int *)(param_1 + 3) = (int)lVar15;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 4) = (int)lVar16;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
    *(int *)(param_1 + 1) = (int)lVar13;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 2) = (int)lVar14;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *param_1 = 1;
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      FUN_180113f90(&local_38);
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    local_30 = local_40;
    uVar19 = FUN_1801775a0(local_40 + 6);
    if ((uVar19 & 5) == 1) {
      (**(code **)(local_30[4] + 0x10))(local_30[5]);
    }
  }
  LOCK();
  *local_30 = *local_30 + -1;
  UNLOCK();
  if (*local_30 == 0) {
    FUN_180113f90(&local_40);
  }
  return;
}


