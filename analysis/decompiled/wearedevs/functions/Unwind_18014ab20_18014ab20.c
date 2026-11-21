/* Unwind@18014ab20 @ 18014ab20 */

void Unwind_18014ab20(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x296);
  if (*(char *)(param_2 + 0x297) == '\0') {
    *(byte *)(param_2 + 0x294) = bVar1 & 1;
    return;
  }
  FUN_1800430f0(*(undefined8 *)(param_2 + 0x278));
  *(byte *)(param_2 + 0x294) = bVar1 & 1;
  return;
}


