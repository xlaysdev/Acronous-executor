/* Unwind@180176a60 @ 180176a60 */

void Unwind_180176a60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x135) == '\0') {
    *(undefined1 *)(param_2 + 0x136) = 1;
    return;
  }
  if ((*(ulonglong *)(param_2 + 0xf0) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xf8),*(ulonglong *)(param_2 + 0xf0),1);
  }
  *(undefined1 *)(param_2 + 0x136) = 1;
  return;
}


