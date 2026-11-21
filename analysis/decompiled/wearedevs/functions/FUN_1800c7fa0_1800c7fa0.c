/* FUN_1800c7fa0 @ 1800c7fa0 */

void FUN_1800c7fa0(int *param_1)

{
  if (*(byte *)(param_1 + 0xa5) - 3 < 2) {
    if (*(longlong *)(param_1 + 0x9e) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x9e),1);
    }
    if (param_1[0x50] == 2) {
      FUN_18007eeb0();
      FUN_1800ba880(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x5a));
      FUN_1800c8d30(param_1 + 0x52);
    }
    else {
      FUN_1800c7620(param_1 + 0x50);
    }
    *(undefined1 *)((longlong)param_1 + 0x295) = 0;
  }
  else if (*(byte *)(param_1 + 0xa5) == 0) {
    if (*param_1 == 2) {
      FUN_18007eeb0();
      FUN_1800ba880(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
      FUN_1800c8d30(param_1 + 2);
      return;
    }
    FUN_1800c7620(param_1);
    return;
  }
  return;
}


