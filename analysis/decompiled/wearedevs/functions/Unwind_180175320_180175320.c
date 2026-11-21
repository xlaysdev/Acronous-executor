/* Unwind@180175320 @ 180175320 */

void Unwind_180175320(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x113);
  if (*(char *)(param_2 + 0x114) == '\0') {
    *(byte *)(param_2 + 0x117) = bVar1 & 1;
    return;
  }
  FUN_180162290(param_2 + 0xd0);
  *(byte *)(param_2 + 0x117) = bVar1 & 1;
  return;
}


