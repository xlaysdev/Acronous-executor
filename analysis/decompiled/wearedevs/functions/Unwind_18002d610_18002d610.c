/* Unwind@18002d610 @ 18002d610 */

void Unwind_18002d610(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar2 = -*(longlong *)(param_2 + 0x30);
    do {
      FUN_180032b10(lVar1);
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


