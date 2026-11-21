/* Unwind@180076a40 @ 180076a40 */

void Unwind_180076a40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar1 = *(longlong *)(param_2 + 0x30); lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_18007a8b0(lVar2);
    lVar2 = lVar2 + 0x60;
  }
  return;
}


