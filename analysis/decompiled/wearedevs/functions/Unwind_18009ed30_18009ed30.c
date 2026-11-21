/* Unwind@18009ed30 @ 18009ed30 */

void Unwind_18009ed30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x48);
  for (lVar3 = *(longlong *)(param_2 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_1800979b0(lVar2 + lVar3 * 0x48);
  }
  return;
}


