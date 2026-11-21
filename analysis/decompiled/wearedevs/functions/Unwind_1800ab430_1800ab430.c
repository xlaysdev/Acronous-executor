/* Unwind@1800ab430 @ 1800ab430 */

void Unwind_1800ab430(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  if (*(char *)(param_2 + 0x6f) == '\0') {
    cVar1 = FUN_180177ca0(*(undefined8 *)(param_2 + 0x70));
  }
  else {
    FUN_1800a5c70(*(undefined8 *)(param_2 + 0x78));
    cVar1 = FUN_180177ca0(*(undefined8 *)(param_2 + 0x70));
  }
  if (cVar1 != '\0') {
    FUN_1801776a0(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


