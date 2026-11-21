/* Unwind@180049580 @ 180049580 */

void Unwind_180049580(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xd98);
  lVar2 = *(longlong *)(param_2 + 0xd68);
  for (lVar3 = *(longlong *)(param_2 + 0xdb0); lVar1 != lVar3; lVar3 = lVar3 + 1) {
    FUN_18009a3a0(lVar3 * 0x1d0 + lVar2);
  }
  return;
}


