/* Unwind@1801c5f70 @ 1801c5f70 */

void Unwind_1801c5f70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10e) == '\0') {
    *(undefined1 *)(param_2 + 0x10f) = 1;
    return;
  }
  if ((*(ulonglong *)(param_2 + 0x90) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x98),*(ulonglong *)(param_2 + 0x90),1);
  }
  *(undefined1 *)(param_2 + 0x10f) = 1;
  return;
}


