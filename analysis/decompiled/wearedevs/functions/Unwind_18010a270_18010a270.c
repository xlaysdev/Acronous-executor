/* Unwind@18010a270 @ 18010a270 */

void Unwind_18010a270(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_18002ce10(*(undefined8 *)((param_2 & 0xffffffffffffff80) + 0x78));
  uVar1 = *(undefined8 *)((param_2 & 0xffffffffffffff80) + 0x50);
  cVar2 = FUN_180177ca0(uVar1);
  if (cVar2 != '\0') {
    FUN_1801776a0(uVar1);
  }
  return;
}


