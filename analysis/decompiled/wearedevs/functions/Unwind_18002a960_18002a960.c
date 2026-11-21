/* Unwind@18002a960 @ 18002a960 */

void Unwind_18002a960(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffffffffffffffe0;
  if ((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x160) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x40),1);
  }
  return;
}


