/* Unwind@180041560 @ 180041560 */

void Unwind_180041560(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x1d8) = *(undefined1 *)(param_2 + 0x1e6);
  if (*(char *)(param_2 + 0x1e7) == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x110) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x118),*(longlong *)(param_2 + 0x110),1);
  }
  return;
}


