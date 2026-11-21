/* Unwind@1800a8d50 @ 1800a8d50 */

void Unwind_1800a8d50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4ef) == '\0') {
    *(undefined1 *)(param_2 + 0x4f9) = 0;
    return;
  }
  FUN_1800a5d50(param_2 + 0x350);
  *(undefined1 *)(param_2 + 0x4f9) = 1;
  return;
}


