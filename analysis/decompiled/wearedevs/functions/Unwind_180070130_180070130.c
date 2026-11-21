/* Unwind@180070130 @ 180070130 */

void Unwind_180070130(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x3a8);
  lVar2 = *(longlong *)(param_2 + 0x380);
  for (lVar3 = *(longlong *)(param_2 + 0x3b8); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_1800979b0(lVar2 + lVar3 * 0x48);
  }
  return;
}


