/* Unwind@180082e80 @ 180082e80 */

void Unwind_180082e80(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x7cd);
  if (*(char *)(param_2 + 0x7ce) == '\0') {
    *(byte *)(param_2 + 0x7ca) = bVar1 & 1;
    return;
  }
  FUN_18000b7c0(param_2 + 0x760);
  *(byte *)(param_2 + 0x7ca) = bVar1 & 1;
  return;
}


