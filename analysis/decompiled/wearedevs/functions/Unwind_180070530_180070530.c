/* Unwind@180070530 @ 180070530 */

void Unwind_180070530(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x3c6);
  if (*(char *)(param_2 + 0x3c7) != '\0') {
    FUN_180076920(param_2 + 0x290);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_180076810(param_2 + 0x130);
  return;
}


