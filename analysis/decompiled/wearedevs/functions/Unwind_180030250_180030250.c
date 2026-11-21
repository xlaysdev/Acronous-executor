/* Unwind@180030250 @ 180030250 */

void Unwind_180030250(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xa8);
  lVar3 = *(longlong *)(param_2 + 0xa0);
  if (lVar3 != *(longlong *)(param_2 + 0x90)) {
    do {
      lVar2 = lVar3 * 0x20;
      lVar3 = lVar3 + 1;
      FUN_1800300c0(lVar2 + lVar1);
    } while (lVar3 != *(longlong *)(param_2 + 0x90));
  }
  return;
}


