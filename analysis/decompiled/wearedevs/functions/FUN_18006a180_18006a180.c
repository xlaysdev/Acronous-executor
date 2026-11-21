/* FUN_18006a180 @ 18006a180 */

undefined8 FUN_18006a180(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  *(undefined1 *)(param_1 + 0xb1) = 0;
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  uVar5 = uVar2;
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar5 = *(ulonglong *)(param_1 + 0x70);
  }
  uVar4 = 0;
  if (uVar1 <= uVar5) {
    uVar4 = uVar5 - uVar1;
  }
  if (uVar2 <= uVar4) {
    uVar4 = uVar2;
  }
  local_40 = *(ulonglong *)(param_1 + 0xa0);
  if (local_40 - uVar1 < uVar4) {
    FUN_1801b2210(param_1 + 0x90,uVar4,CONCAT71((int7)(local_40 - uVar1 >> 8),1));
    uVar1 = *(ulonglong *)(param_1 + 0x98);
    local_40 = *(ulonglong *)(param_1 + 0xa0);
  }
  if (local_40 == uVar1) {
    FUN_1801b2210(param_1 + 0x90,0x40,1);
    uVar1 = *(ulonglong *)(param_1 + 0x98);
    local_40 = *(ulonglong *)(param_1 + 0xa0);
  }
  local_40 = local_40 - uVar1;
  local_48 = uVar1 + *(longlong *)(param_1 + 0x90);
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))
                    (*(undefined8 *)(param_1 + 0x78),param_2,&local_48);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      if (local_40 < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,local_38,local_40,&PTR_s_C__Users_burne__cargo_registry_s_18020b700);
      }
      local_20 = *(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98);
      if (local_20 < local_38) {
        local_28 = local_38;
                    /* WARNING: Subroutine does not return */
        FUN_1801fc980(&local_28);
      }
      *(ulonglong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + local_38;
      FUN_180116180(param_1 + 0x60);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb1) = 1;
    uVar3 = 2;
  }
  return uVar3;
}


