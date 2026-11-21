/* Unwind@180008aa0 @ 180008aa0 */

void Unwind_180008aa0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x768) = *(undefined8 *)(param_2 + 0x688);
  *(undefined8 *)(param_2 + 0x760) = *(undefined8 *)(param_2 + 0x690);
  *(undefined8 *)(param_2 + 0x758) = *(undefined8 *)(param_2 + 0x6a8);
  *(undefined8 *)(param_2 + 0x750) = *(undefined8 *)(param_2 + 0x6b0);
  if (*(char *)(*(longlong *)(param_2 + 0x770) + 0xa1) == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x6a0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x698),*(longlong *)(param_2 + 0x6a0),1);
  }
  return;
}


