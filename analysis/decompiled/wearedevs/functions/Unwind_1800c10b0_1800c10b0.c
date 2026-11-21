/* Unwind@1800c10b0 @ 1800c10b0 */

void Unwind_1800c10b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x150) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x1c6) & 1) == 0) {
    return;
  }
  FUN_180101c00(param_2 + 0x1a8);
  return;
}


