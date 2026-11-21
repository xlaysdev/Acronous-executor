/* FUN_1800312e0 @ 1800312e0 */

void FUN_1800312e0(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_18002f2e0();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x40) << 3,8);
  }
  FUN_18002cd70(param_1);
  thunk_FUN_1801d3330(param_1,0x98,8);
  return;
}


