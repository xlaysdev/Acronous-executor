/* Unwind@180171040 @ 180171040 */

void Unwind_180171040(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x30) != *(longlong *)(param_2 + 0x40)) {
    do {
      FUN_18016e850(lVar2);
      lVar2 = lVar2 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}


