/* Unwind@1800d58f0 @ 1800d58f0 */

void Unwind_1800d58f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x11e5) == '\0') {
    *(undefined1 *)(param_2 + 0x11e7) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x11c0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x11c8),*(longlong *)(param_2 + 0x11c0),1);
  }
  *(undefined1 *)(param_2 + 0x11e7) = 0;
  return;
}


