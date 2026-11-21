/* FUN_18012e8d0 @ 18012e8d0 */

longlong * FUN_18012e8d0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  undefined8 *****local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 ****local_68;
  undefined8 *local_60;
  longlong local_58;
  uint local_50;
  int local_4c;
  undefined8 ****local_48;
  undefined *local_40;
  
  puVar2 = PTR_DAT_1802fd448;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar5 = (uint)DAT_1802fb8c8, uVar5 - 1 < 2 ||
       ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb8b8), (char)uVar5 != '\0')))) &&
      (cVar3 = FUN_1801601d0(PTR_DAT_1802fb8b8,uVar5), cVar3 != '\0')))) {
    local_70 = PTR_DAT_1802fb8b8 + 0x30;
    local_98 = &DAT_180245520;
    local_90 = (code *)0x2b;
    local_68 = (undefined8 ****)&local_98;
    local_60 = (undefined8 *)&DAT_180245120;
    local_88 = 1;
    local_80 = &local_68;
    local_78 = 1;
    FUN_180160ae0(PTR_DAT_1802fb8b8,&local_88,param_3);
  }
  uVar1 = *(ulonglong *)(param_4 + 0x18);
  if ((*(ulonglong *)(param_4 + 0x10) <= uVar1) ||
     (FUN_1801505d0(&local_58,param_2 + 0x38,param_3), local_58 == 0)) {
    *param_1 = 0;
    return param_1;
  }
  uVar7 = (ulonglong)local_50;
  if (((*(longlong *)puVar2 == 0) &&
      ((uVar5 = (uint)DAT_1802fb8e0, uVar5 - 1 < 2 ||
       ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb8d0), (char)uVar5 != '\0')))))) &&
     (cVar3 = FUN_1801601d0(PTR_DAT_1802fb8d0,uVar5), cVar3 != '\0')) {
    if (*(ulonglong *)(local_58 + 0x10) <= uVar7) goto LAB_18012ec26;
    if ((*(int *)(*(longlong *)(local_58 + 8) + uVar7 * 0x148) == 2) ||
       (lVar4 = *(longlong *)(local_58 + 8) + uVar7 * 0x148, *(int *)(lVar4 + 300) != local_4c))
    goto LAB_18012ec26;
    local_70 = PTR_DAT_1802fb8d0 + 0x30;
    local_98 = (undefined *)(lVar4 + 300);
    local_90 = FUN_180131190;
    local_68 = (undefined8 ****)&DAT_180245535;
    local_60 = &local_98;
    local_48 = &local_68;
    local_40 = &DAT_180245120;
    local_88 = 1;
    local_80 = &local_48;
    local_78 = 1;
    FUN_180160ae0(PTR_DAT_1802fb8d0,&local_88);
  }
  if (uVar7 < *(ulonglong *)(local_58 + 0x10)) {
    lVar4 = uVar7 * 0x148;
    if ((*(int *)(*(longlong *)(local_58 + 8) + lVar4) != 2) &&
       (lVar6 = *(longlong *)(local_58 + 8) + lVar4, *(int *)(lVar6 + 300) == local_4c)) {
      if (*(char *)(lVar6 + 0x138) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: !stream.is_counted",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802582d0);
      }
      *(ulonglong *)(param_4 + 0x18) = uVar1 + 1;
      *(undefined1 *)(lVar6 + 0x138) = 1;
      if (((*(ulonglong *)(local_58 + 0x10) <= uVar7) ||
          (*(int *)(*(longlong *)(local_58 + 8) + lVar4) == 2)) ||
         (lVar4 = *(longlong *)(local_58 + 8) + lVar4, *(int *)(lVar4 + 300) != local_4c)) {
        local_80 = (undefined8 *****)FUN_180152d10;
        local_88 = (longlong)&local_98 + 4;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      lVar6 = *(longlong *)(lVar4 + 0x98);
      *(undefined8 *)(lVar4 + 0x98) = 0;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar4 + 0xa0));
      }
      *param_1 = local_58;
      *(uint *)(param_1 + 1) = local_50;
      *(int *)((longlong)param_1 + 0xc) = local_4c;
      return param_1;
    }
  }
LAB_18012ec26:
  local_88 = (longlong)&local_98 + 4;
  local_80 = (undefined8 *****)FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


