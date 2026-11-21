/* Unwind@1800bf980 @ 1800bf980 */

void Unwind_1800bf980(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x160) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x1b6) & 1) == 0) {
    return;
  }
  FUN_180101c00(param_2 + 0x198);
  return;
}


