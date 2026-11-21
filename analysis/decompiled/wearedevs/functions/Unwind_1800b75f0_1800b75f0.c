/* Unwind@1800b75f0 @ 1800b75f0 */

void Unwind_1800b75f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x2f7c);
  bVar2 = *(byte *)(param_2 + 0x2f7d);
  FUN_18007c980(param_2 + 0x24b0);
  if ((bVar2 & 1) != 0) {
    FUN_1800b0f70(param_2 + 0x2758);
  }
  *(byte *)(param_2 + 0x2f78) = bVar2;
  *(byte *)(param_2 + 0x2f77) = bVar1 & 1;
  return;
}


