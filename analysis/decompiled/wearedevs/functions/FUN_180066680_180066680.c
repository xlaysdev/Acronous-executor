/* FUN_180066680 @ 180066680 */

void FUN_180066680(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18) * 0x18,8);
  }
  FUN_18007f270();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30) * 0x60,8);
  }
  FUN_1801b2a70(param_1 + 0x70);
  return;
}


