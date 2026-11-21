/* Unwind@18002a900 @ 18002a900 */

void Unwind_18002a900(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffffffffffffffe0;
  **(undefined1 **)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}


