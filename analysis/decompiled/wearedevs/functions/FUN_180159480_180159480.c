/* FUN_180159480 @ 180159480 */

void FUN_180159480(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_a0;
  undefined ***local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 *local_48;
  
  lVar3 = *param_2;
  puVar1 = (uint *)(param_2 + 1);
  uVar10 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined8 *)puVar1;
  uVar4 = *(undefined8 *)puVar1;
  local_80 = *(longlong *)puVar1;
  uVar7 = *(ulonglong *)(lVar3 + 0x10);
  if (uVar7 <= uVar10) {
LAB_1801596f1:
    local_80 = *(longlong *)puVar1;
    local_98 = (undefined ***)FUN_180152d10;
    local_a0 = (longlong)&local_80 + 4;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  lVar11 = uVar10 * 0x148;
  if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar11) == 2) ||
     (lVar8 = *(longlong *)(lVar3 + 8) + lVar11, *(int *)(lVar8 + 300) != iVar2))
  goto LAB_1801596f1;
  if (*(int *)(lVar8 + 0x134) != 0) {
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar9 = (uint)DAT_1802fd2b0, uVar9 - 1 < 2 ||
         ((uVar9 != 0 && (uVar9 = FUN_1801faaf0(&PTR_DAT_1802fd2a0), (char)uVar9 != '\0')))) &&
        (cVar6 = FUN_1801601d0(PTR_DAT_1802fd2a0,uVar9), cVar6 != '\0')))) {
      if (((*(ulonglong *)(lVar3 + 0x10) <= uVar10) ||
          (*(int *)(*(longlong *)(lVar3 + 8) + lVar11) == 2)) ||
         (lVar8 = *(longlong *)(lVar3 + 8) + lVar11, *(int *)(lVar8 + 300) != iVar2))
      goto LAB_1801596f1;
      local_88 = PTR_DAT_1802fd2a0 + 0x30;
      local_80 = lVar8 + 300;
      local_70 = lVar8 + 0x134;
      local_78 = FUN_18015bcd0;
      local_68 = &LAB_180096fe0;
      local_50 = &DAT_18025a6f8;
      local_48 = &local_80;
      local_60 = &local_50;
      local_58 = &DAT_180258dd0;
      local_a0 = 1;
      local_98 = &local_60;
      local_90 = 1;
      FUN_180160ae0(PTR_DAT_1802fd2a0,&local_a0);
    }
    if (((*(ulonglong *)(lVar3 + 0x10) <= uVar10) ||
        (*(int *)(*(longlong *)(lVar3 + 8) + lVar11) == 2)) ||
       (lVar8 = *(longlong *)(lVar3 + 8) + lVar11, *(int *)(lVar8 + 300) != iVar2))
    goto LAB_1801596f1;
    local_80 = uVar4;
    FUN_180159c70(param_1,*(undefined4 *)(lVar8 + 0x134),param_3);
    if (((*(ulonglong *)(lVar3 + 0x10) <= uVar10) ||
        (*(int *)(*(longlong *)(lVar3 + 8) + lVar11) == 2)) ||
       (lVar8 = *(longlong *)(lVar3 + 8) + lVar11, *(int *)(lVar8 + 300) != iVar2))
    goto LAB_18015971a;
    *(undefined4 *)(lVar8 + 0x134) = 0;
    uVar7 = *(ulonglong *)(lVar3 + 0x10);
  }
  if (((uVar10 < uVar7) && (*(int *)(*(longlong *)(lVar3 + 8) + lVar11) != 2)) &&
     (lVar11 = *(longlong *)(lVar3 + 8) + lVar11, *(int *)(lVar11 + 300) == iVar2)) {
    local_80 = uVar5;
    FUN_180158360(param_1,lVar11,param_3,param_4);
    return;
  }
LAB_18015971a:
  local_80 = *(longlong *)puVar1;
  local_98 = (undefined ***)FUN_180152d10;
  local_a0 = (longlong)&local_80 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


