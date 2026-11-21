/* Unwind@18007f370 @ 18007f370 */

void Unwind_18007f370(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar3 = *(longlong *)(param_2 + 0x40); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18007a8b0(lVar2 + lVar3 * 0x60 + 0x10);
  }
  return;
}


