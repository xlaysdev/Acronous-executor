/* Unwind@1801bf380 @ 1801bf380 */

void Unwind_1801bf380(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x37f) == '\0') {
    return;
  }
  if (*(longlong *)(param_2 + 0x308) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x310),*(longlong *)(param_2 + 0x308) << 3,8);
  }
  return;
}


