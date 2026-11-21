/* Unwind@1801bf720 @ 1801bf720 */

void Unwind_1801bf720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x8f) == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x60),*(longlong *)(param_2 + 0x58) * 2,2);
  }
  return;
}


