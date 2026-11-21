/* Unwind@18009c0d0 @ 18009c0d0 */

void Unwind_18009c0d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7f) == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x60),*(longlong *)(param_2 + 0x58) * 2,2);
  }
  return;
}


