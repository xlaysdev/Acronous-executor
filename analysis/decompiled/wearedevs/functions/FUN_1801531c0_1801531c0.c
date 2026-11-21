/* FUN_1801531c0 @ 1801531c0 */

void FUN_1801531c0(undefined8 param_1,longlong *param_2)

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
  undefined8 local_90;
  code *local_88;
  longlong local_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 *local_48;
  
  lVar4 = *param_2;
  puVar1 = (uint *)(param_2 + 1);
  uVar9 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  local_90 = *(longlong *)puVar1;
  if (uVar9 < *(ulonglong *)(lVar4 + 0x10)) {
    lVar8 = uVar9 * 0x148;
    if ((*(int *)(*(longlong *)(lVar4 + 8) + lVar8) != 2) &&
       (lVar7 = *(longlong *)(lVar4 + 8) + lVar8, *(int *)(lVar7 + 300) == iVar2)) {
      iVar3 = *(int *)(lVar7 + 0x78);
      if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
         (((uVar6 = (uint)DAT_1802fd430, uVar6 - 1 < 2 ||
           ((uVar6 != 0 && (uVar6 = FUN_1801faaf0(&PTR_DAT_1802fd420), (char)uVar6 != '\0')))) &&
          (cVar5 = FUN_1801601d0(PTR_DAT_1802fd420,uVar6), cVar5 != '\0')))) {
        if (((*(ulonglong *)(lVar4 + 0x10) <= uVar9) ||
            (*(int *)(*(longlong *)(lVar4 + 8) + lVar8) == 2)) ||
           (lVar8 = *(longlong *)(lVar4 + 8) + lVar8, *(int *)(lVar8 + 300) != iVar2))
        goto LAB_18015336a;
        local_68 = PTR_DAT_1802fd420 + 0x30;
        local_90 = lVar8 + 300;
        local_88 = FUN_180154700;
        local_50 = &DAT_180257d48;
        local_48 = &local_90;
        local_60 = &local_50;
        local_58 = &DAT_180257d08;
        local_80 = 1;
        local_78 = &local_60;
        local_70 = 1;
        FUN_180160ae0(PTR_DAT_1802fd420,&local_80);
      }
      FUN_1801537a0(param_1,param_2,iVar3 != 1000000000);
      return;
    }
  }
LAB_18015336a:
  local_90 = *(longlong *)puVar1;
  local_78 = (undefined ***)FUN_180152d10;
  local_80 = (longlong)&local_90 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_80,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


