/* Unwind@180038780 @ 180038780 */

void Unwind_180038780(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar3 = *(longlong *)(param_2 + 0x70); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_1800300c0(lVar3 * 0x20 + lVar2);
  }
  return;
}


