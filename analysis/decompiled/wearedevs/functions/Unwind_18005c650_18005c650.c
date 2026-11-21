/* Unwind@18005c650 @ 18005c650 */

void Unwind_18005c650(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar1 = *(byte *)(param_2 + 0x3a4);
  bVar2 = *(byte *)(param_2 + 0x3a5);
  bVar3 = *(byte *)(param_2 + 0x3a6);
  bVar4 = *(byte *)(param_2 + 0x3a7);
  if (*(int *)(param_2 + 0x280) != 2) {
    FUN_180161750(param_2 + 0x280,param_2 + 0x298);
  }
  *(byte *)(param_2 + 0x39e) = bVar4 & 1;
  *(byte *)(param_2 + 0x39d) = bVar3 & 1;
  *(byte *)(param_2 + 0x39c) = bVar2 & 1;
  *(byte *)(param_2 + 0x39b) = bVar1 & 1;
  return;
}


