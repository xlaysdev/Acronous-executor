/* Unwind@1800b7920 @ 1800b7920 */

void Unwind_1800b7920(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x2f77);
  if ((*(byte *)(param_2 + 0x2f78) & 1) != 0) {
    FUN_1800b0f00(param_2 + 0x2e10);
  }
  FUN_18007c6c0(param_2 + 0x22b0);
  *(byte *)(param_2 + 0x2f65) = bVar1 & 1;
  return;
}


