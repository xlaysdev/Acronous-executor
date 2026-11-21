/* Unwind@18016eea0 @ 18016eea0 */

void Unwind_18016eea0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x38) != *(longlong *)(param_2 + 0x40)) {
    do {
      FUN_18016ea20(lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}


