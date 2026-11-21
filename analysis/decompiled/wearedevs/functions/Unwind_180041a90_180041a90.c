/* Unwind@180041a90 @ 180041a90 */

void Unwind_180041a90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x48);
  for (lVar3 = *(longlong *)(param_2 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_180026670(lVar3 * 0x68 + lVar2);
  }
  return;
}


