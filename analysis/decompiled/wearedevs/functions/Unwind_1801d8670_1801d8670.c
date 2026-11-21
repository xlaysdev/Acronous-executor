/* Unwind@1801d8670 @ 1801d8670 */

void Unwind_1801d8670(undefined8 param_1,longlong param_2)

{
  freeaddrinfo(*(undefined8 *)(param_2 + 0x238));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),*(longlong *)(param_2 + 0x30) << 5,4);
  }
  *(undefined1 *)(param_2 + 0x24f) = 0;
  return;
}


