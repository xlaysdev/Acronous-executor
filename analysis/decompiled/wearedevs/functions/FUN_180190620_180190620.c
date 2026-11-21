/* FUN_180190620 @ 180190620 */

undefined8 FUN_180190620(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if (param_4 < 0) {
    uVar1 = 0;
LAB_180190635:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar1,param_4);
  }
  if (param_4 == 0) {
    local_68 = 1;
  }
  else {
    FUN_180027490();
    uVar1 = 1;
    local_68 = thunk_FUN_1801d32d0(param_4,1);
    if (local_68 == 0) goto LAB_180190635;
  }
  local_58 = param_2[4];
  local_60 = 0;
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_40 = *(undefined4 *)(param_2 + 2);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_38 = *(undefined4 *)(param_2 + 3);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_30 = 0;
  local_70 = param_4;
  FUN_180199170(param_1,&local_70,param_3,param_4);
  return param_1;
}


