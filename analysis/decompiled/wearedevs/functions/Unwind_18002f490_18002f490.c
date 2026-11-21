/* Unwind@18002f490 @ 18002f490 */

void Unwind_18002f490(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x30) - 1U != *(ulonglong *)(param_2 + 0x38)) {
    lVar1 = *(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x40);
    lVar2 = ~*(ulonglong *)(param_2 + 0x38) + *(longlong *)(param_2 + 0x30);
    do {
      FUN_180032b10(lVar1);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


