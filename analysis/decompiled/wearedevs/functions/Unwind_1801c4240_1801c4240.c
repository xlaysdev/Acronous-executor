/* Unwind@1801c4240 @ 1801c4240 */

void Unwind_1801c4240(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  bVar1 = *(byte *)(param_2 + 0x46);
  if (*(char *)(param_2 + 0x45) != '\0') {
    FUN_1801c4b90(param_2 + 0x110);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_1801c4a50(param_2 + 0xf0);
  return;
}


