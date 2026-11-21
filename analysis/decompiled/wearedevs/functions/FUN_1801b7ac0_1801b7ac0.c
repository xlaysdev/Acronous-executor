/* FUN_1801b7ac0 @ 1801b7ac0 */

void FUN_1801b7ac0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = param_2 * 0x18;
  if (param_2 == 0) {
    lVar1 = 4;
  }
  else {
    FUN_180027490();
    lVar1 = thunk_FUN_1801d32d0(lVar2,4);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(4,lVar2);
    }
  }
  local_58 = lVar2;
  local_3c = CallNtPowerInformation(0xb,0,0,lVar1,(int)param_2 * 0x18);
  local_50 = lVar1;
  local_48 = param_2;
  if (local_3c < 0) {
    if (param_2 == 0) {
      lVar2 = 8;
    }
    else {
      FUN_180027490();
      lVar2 = thunk_FUN_1801d3550(param_2 * 8,8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,param_2 * 8);
      }
    }
    *param_1 = param_2;
    param_1[1] = lVar2;
    param_1[2] = param_2;
    if (param_2 != 0) {
      thunk_FUN_1801d3330(lVar1,local_58,4);
      return;
    }
  }
  else {
    local_60 = lVar1 + param_2 * 0x18;
    local_78 = lVar1;
    local_70 = lVar1;
    local_68 = param_2;
    FUN_1801ba5f0(param_1,&local_78);
  }
  return;
}


