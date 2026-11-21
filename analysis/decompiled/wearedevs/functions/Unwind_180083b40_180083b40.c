/* Unwind@180083b40 @ 180083b40 */

void Unwind_180083b40(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x93f);
  if ((bVar1 & 1) != 0) {
    FUN_18000d130(param_2 + 0x8a0);
  }
  FUN_18000bae0(param_2 + 0x8d0);
  *(byte *)(param_2 + 0x93d) = bVar1;
  return;
}


