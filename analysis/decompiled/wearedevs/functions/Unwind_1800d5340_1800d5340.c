/* Unwind@1800d5340 @ 1800d5340 */

void Unwind_1800d5340(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x29d) == '\0') {
    *(undefined1 *)(param_2 + 0x29f) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x268) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x270),*(longlong *)(param_2 + 0x268),1);
  }
  *(undefined1 *)(param_2 + 0x29f) = 0;
  return;
}


