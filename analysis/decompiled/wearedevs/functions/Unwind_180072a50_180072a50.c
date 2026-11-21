/* Unwind@180072a50 @ 180072a50 */

void Unwind_180072a50(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1ae);
  if (*(char *)(param_2 + 0x1ad) != '\0') {
    FUN_1800758e0(param_2 + 0x100);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1800758e0(param_2 + 0x78);
  return;
}


