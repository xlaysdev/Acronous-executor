/* Unwind@18009f0d0 @ 18009f0d0 */

void Unwind_18009f0d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar3 = *(longlong *)(param_2 + 0x40); lVar3 != lVar1; lVar3 = lVar3 + 1) {
    FUN_1800979b0(lVar2 + lVar3 * 0x48);
  }
  return;
}


