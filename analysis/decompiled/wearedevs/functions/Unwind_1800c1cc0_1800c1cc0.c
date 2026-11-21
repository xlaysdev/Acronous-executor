/* Unwind@1800c1cc0 @ 1800c1cc0 */

void Unwind_1800c1cc0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x25b);
  if (*(longlong *)(param_2 + 0x208) != 0) {
    FUN_180101150(param_2 + 0x1c8);
  }
  *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(param_2 + 0x218);
  *(byte *)(param_2 + 0x25c) = bVar1 & 1;
  return;
}


