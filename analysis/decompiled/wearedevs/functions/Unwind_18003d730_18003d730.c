/* Unwind@18003d730 @ 18003d730 */

void Unwind_18003d730(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x20);
  for (lVar3 = *(longlong *)(param_2 + 0x30); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18009a3a0(lVar3 * 0x1d0 + lVar2);
  }
  return;
}


