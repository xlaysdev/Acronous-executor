/* FUN_1800af6f0 @ 1800af6f0 */

void FUN_1800af6f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18) * 0x18,8);
  }
  FUN_18007f270();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30) * 0x60,8);
  }
  FUN_1801b2a70(param_1 + 0x70);
  FUN_1801b2a70(param_1 + 0x128);
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 4) {
    if ((int)lVar1 == 3) {
      FUN_1801b2a70(param_1 + 0xe8);
    }
    else if ((int)lVar1 == 1) {
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xe8),*(longlong *)(param_1 + 0xf0),1);
      }
    }
    else if (lVar1 == 0) {
      (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x20))
                (*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xf0),
                 *(undefined8 *)(param_1 + 0xf8));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 3) {
    if ((int)lVar1 == 1) {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0xa8),1);
        return;
      }
    }
    else if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800af835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x20))
                (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xa8),
                 *(undefined8 *)(param_1 + 0xb0));
      return;
    }
  }
  return;
}


