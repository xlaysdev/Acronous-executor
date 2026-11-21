/* FUN_180152fe0 @ 180152fe0 */

void FUN_180152fe0(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_98;
  code *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  longlong *local_68;
  undefined *local_60;
  longlong local_58;
  char *local_50;
  undefined8 local_48;
  
  lVar4 = *param_2;
  puVar1 = (uint *)(param_2 + 1);
  uVar9 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  local_78 = *(char ***)puVar1;
  if (uVar9 < *(ulonglong *)(lVar4 + 0x10)) {
    lVar8 = uVar9 * 0x148;
    if ((*(int *)(*(longlong *)(lVar4 + 8) + lVar8) != 2) &&
       (lVar7 = *(longlong *)(lVar4 + 8) + lVar8, *(int *)(lVar7 + 300) == iVar2)) {
      iVar3 = *(int *)(lVar7 + 0x78);
      if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
         (((uVar6 = (uint)DAT_1802fbb38, uVar6 - 1 < 2 ||
           ((uVar6 != 0 && (uVar6 = FUN_1801faaf0(&PTR_DAT_1802fbb28), (char)uVar6 != '\0')))) &&
          (cVar5 = FUN_1801601d0(PTR_DAT_1802fbb28,uVar6), cVar5 != '\0')))) {
        local_50 = "clear_pending_capacity";
        local_48 = 0x2d;
        if (((*(ulonglong *)(lVar4 + 0x10) <= uVar9) ||
            (*(int *)(*(longlong *)(lVar4 + 8) + lVar8) == 2)) ||
           (lVar8 = *(longlong *)(lVar4 + 8) + lVar8, *(int *)(lVar8 + 300) != iVar2))
        goto LAB_180153193;
        local_80 = PTR_DAT_1802fbb28 + 0x30;
        local_58 = lVar8 + 300;
        local_78 = &local_50;
        local_70 = &DAT_180257d08;
        local_68 = &local_58;
        local_60 = &DAT_180257d28;
        local_98 = 1;
        local_90 = (code *)&local_78;
        local_88 = 2;
        FUN_180160ae0(PTR_DAT_1802fbb28,&local_98);
      }
      FUN_1801537a0(param_1,param_2,iVar3 != 1000000000);
      return;
    }
  }
LAB_180153193:
  local_78 = *(char ***)puVar1;
  local_90 = FUN_180152d10;
  local_98 = (longlong)&local_78 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_98,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


