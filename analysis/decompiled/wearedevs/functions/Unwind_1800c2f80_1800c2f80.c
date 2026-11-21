/* Unwind@1800c2f80 @ 1800c2f80 */

void Unwind_1800c2f80(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x24b);
  if (*(longlong *)(param_2 + 0x1f8) != 0) {
    FUN_180101150(param_2 + 0x1b8);
  }
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x208);
  *(byte *)(param_2 + 0x24c) = bVar1 & 1;
  return;
}


