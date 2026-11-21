/* FUN_18012f240 @ 18012f240 */

void FUN_18012f240(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int local_7c;
  longlong local_78;
  uint local_70;
  int local_6c;
  longlong local_68;
  int *local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  while( true ) {
    FUN_180150440(&local_78,param_1 + 0x10,param_2);
    uVar2 = local_70;
    if (local_78 == 0) {
      return;
    }
    local_7c = local_6c;
    if (*(ulonglong *)(local_78 + 0x10) <= (ulonglong)local_70) break;
    lVar4 = (ulonglong)local_70 * 0x148;
    if ((*(int *)(*(longlong *)(local_78 + 8) + lVar4) == 2) ||
       (lVar4 = *(longlong *)(local_78 + 8) + lVar4, *(int *)(lVar4 + 300) != local_6c)) break;
    iVar1 = *(int *)(lVar4 + 0x78);
    iVar5 = local_6c;
    if (*(int *)(lVar4 + 0x40) == 3) {
      local_4c = local_6c;
      local_50 = *(undefined4 *)(lVar4 + 0x44);
      local_68 = lVar4;
      FUN_180132bb0(lVar4 + 0x40);
      lVar3 = local_68;
      *(undefined4 *)(local_68 + 0x40) = 1;
      *(undefined2 *)(local_68 + 0x48) = 0x100;
      *(int *)(local_68 + 0x4c) = local_4c;
      *(undefined4 *)(local_68 + 0x50) = local_50;
      lVar4 = *(longlong *)(local_68 + 0x98);
      *(undefined8 *)(local_68 + 0x98) = 0;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(local_68 + 0xa0));
      }
      lVar4 = *(longlong *)(lVar3 + 0xc0);
      *(undefined8 *)(lVar3 + 0xc0) = 0;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 200));
      }
      lVar4 = *(longlong *)(lVar3 + 0xb0);
      *(undefined8 *)(lVar3 + 0xb0) = 0;
      iVar5 = local_4c;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0xb8));
        iVar5 = local_4c;
      }
    }
    local_58 = (code *)CONCAT44(iVar5,uVar2);
    FUN_1801537a0(param_3,&local_60,iVar1 != 1000000000);
  }
  local_60 = &local_7c;
  local_58 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


