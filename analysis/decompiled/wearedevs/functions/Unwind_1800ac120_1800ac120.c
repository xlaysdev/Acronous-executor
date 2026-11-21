/* Unwind@1800ac120 @ 1800ac120 */

void Unwind_1800ac120(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (*(longlong *)(param_2 + 0x40) != 0 && *(longlong *)(param_2 + 0x38) != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_2 + 0x38),*(longlong *)(param_2 + 0x40),1);
    }
  }
  return;
}


