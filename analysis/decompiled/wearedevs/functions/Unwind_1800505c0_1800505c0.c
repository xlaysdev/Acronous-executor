/* Unwind@1800505c0 @ 1800505c0 */

void Unwind_1800505c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x1b0);
  lVar2 = *(longlong *)(param_2 + 0x198);
  for (lVar3 = *(longlong *)(param_2 + 0x1a8); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_180026670(lVar3 * 0x68 + lVar2);
  }
  return;
}


