/* Unwind@18005da10 @ 18005da10 */

void Unwind_18005da10(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xde);
  if (*(char *)(param_2 + 0xdf) == '\0') {
    *(byte *)(param_2 + 0xdd) = bVar1 & 1;
    return;
  }
  FUN_180066370(param_2 + 0x80);
  *(byte *)(param_2 + 0xdd) = bVar1 & 1;
  return;
}


