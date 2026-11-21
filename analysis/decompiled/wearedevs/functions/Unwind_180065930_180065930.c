/* Unwind@180065930 @ 180065930 */

void Unwind_180065930(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1e7);
  if (*(int *)(param_2 + 0x1a8) != 2) {
    FUN_180161750(param_2 + 0x1a8,param_2 + 0x1c0);
  }
  *(byte *)(param_2 + 0x1e5) = bVar1 & 1;
  return;
}


