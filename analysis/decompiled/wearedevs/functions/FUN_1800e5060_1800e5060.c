/* FUN_1800e5060 @ 1800e5060 */

longlong * FUN_1800e5060(longlong *param_1)

{
  longlong *plVar1;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180124870(&local_88);
  if (local_88 == 4) {
    local_28 = lStack_80;
    FUN_180027490();
    plVar1 = (longlong *)thunk_FUN_1801d32d0(8,8);
    if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,8);
    }
    *plVar1 = lStack_80;
    *param_1 = 4;
    param_1[1] = (longlong)plVar1;
    param_1[2] = (longlong)&PTR_FUN_18020b078;
  }
  else if ((int)local_88 == 5) {
    *param_1 = 5;
  }
  else if ((int)local_88 == 6) {
    *param_1 = 6;
  }
  else {
    param_1[10] = local_38;
    param_1[0xb] = lStack_30;
    param_1[8] = local_48;
    param_1[9] = lStack_40;
    param_1[6] = local_58;
    param_1[7] = lStack_50;
    param_1[4] = local_68;
    param_1[5] = lStack_60;
    param_1[2] = local_78;
    param_1[3] = lStack_70;
    *param_1 = local_88;
    param_1[1] = lStack_80;
  }
  return param_1;
}


