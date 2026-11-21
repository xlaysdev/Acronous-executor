/* Unwind@1801d4a10 @ 1801d4a10 */

void Unwind_1801d4a10(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0x9f) != '\0') && (*(longlong *)(param_2 + 0x80) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x88),*(longlong *)(param_2 + 0x80) * 2,2);
  }
  ReleaseMutex(*(HANDLE *)(param_2 + 0x78));
  return;
}


