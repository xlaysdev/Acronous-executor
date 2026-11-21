/* FUN_180178c10 @ 180178c10 */

ulonglong *
FUN_180178c10(ulonglong *param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = param_2;
  local_50 = FUN_1801df8c0();
  local_48 = (undefined4)uVar1;
  uVar1 = FUN_1801df650(&local_50,param_2,param_3);
  iVar4 = (int)param_2;
  if (iVar4 == 1000000000) {
    uVar2 = FUN_1801df8c0();
    uVar1 = FUN_1801e5a10(uVar2);
    iVar4 = (int)param_2;
    local_40 = FUN_1801798a0(param_4);
    lVar3 = param_2 + 0x220;
    if ((local_40 & 1) != 0) {
      lVar3 = param_2 + 0x160;
    }
    if (*(int *)(lVar3 + 0x98) == 1000000000) {
      local_38 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                    ,0x73,param_4);
    }
  }
  else {
    local_40 = FUN_1801798a0(param_4);
    lVar3 = param_2 + 0x220;
    if ((local_40 & 1) != 0) {
      lVar3 = param_2 + 0x160;
    }
    if (*(int *)(lVar3 + 0x98) == 1000000000) {
      local_38 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                    ,0x73,param_4);
    }
  }
  param_1[0xc] = uVar1;
  *(int *)(param_1 + 0xd) = iVar4;
  *param_1 = local_40;
  param_1[1] = param_2;
  param_1[2] = 2;
  return param_1;
}


