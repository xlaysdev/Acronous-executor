/* Unwind@1800debb0 @ 1800debb0 */

void Unwind_1800debb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x107e) == '\0') {
    *(undefined1 *)(param_2 + 0x107f) = 0;
    return;
  }
  FUN_18007c8d0(param_2 + 0x1040);
  *(undefined1 *)(param_2 + 0x107f) = 1;
  return;
}


