/* Unwind@18014a1e0 @ 18014a1e0 */

void Unwind_18014a1e0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x36e);
  if (*(int *)(param_2 + 0x240) != 2) {
    FUN_180161750(param_2 + 0x240,param_2 + 600);
  }
  *(byte *)(param_2 + 0x35f) = bVar1 & 1;
  return;
}


