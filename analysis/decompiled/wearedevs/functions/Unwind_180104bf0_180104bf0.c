/* Unwind@180104bf0 @ 180104bf0 */

void Unwind_180104bf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar3 = *(longlong *)(param_2 + 0x38); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_180026670(lVar3 * 0x68 + lVar2);
  }
  return;
}


