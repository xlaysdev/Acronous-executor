/* FUN_1801bf480 @ 1801bf480 */

undefined8 * FUN_1801bf480(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_40;
  longlong *local_38;
  code *local_30;
  undefined8 local_28;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_40 = param_3;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    if (param_3 == 0) {
      FUN_180027490();
      uVar1 = 4;
      local_20 = (undefined4 *)thunk_FUN_1801d32d0(4,1);
      if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,4);
      }
      *local_20 = 0x656c6449;
      local_28 = 4;
    }
    else if (param_3 == 4) {
      FUN_180027490();
      local_20 = (undefined4 *)thunk_FUN_1801d32d0(6,1);
      if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,6);
      }
      *(undefined2 *)(local_20 + 1) = 0x6d65;
      *local_20 = 0x74737953;
      local_28 = 6;
      uVar1 = 6;
    }
    else {
      local_38 = &local_40;
      local_30 = FUN_1801b8520;
      FUN_1801ec780(&local_28,&DAT_180286d88,&local_38);
      uVar1 = local_18;
    }
    *param_1 = local_28;
    param_1[1] = local_20;
    param_1[2] = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    FUN_1801e5470(param_1,*(longlong *)(param_2 + 0x40),*(ushort *)(param_2 + 0x38) >> 1);
  }
  return param_1;
}


