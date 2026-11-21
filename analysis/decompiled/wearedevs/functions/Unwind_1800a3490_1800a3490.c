/* Unwind@1800a3490 @ 1800a3490 */

void Unwind_1800a3490(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x45c);
  if (*(char *)(param_2 + 0x45d) == '\0') {
    *(byte *)(param_2 + 0x45f) = bVar1 & 1;
    return;
  }
  FUN_1800a5d50(param_2 + 0x1c0);
  FUN_1800a7560(param_2 + 0x28);
  *(byte *)(param_2 + 0x45f) = bVar1 & 1;
  return;
}


