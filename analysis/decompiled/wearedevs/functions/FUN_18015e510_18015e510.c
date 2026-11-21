/* FUN_18015e510 @ 18015e510 */

void FUN_18015e510(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = -*(longlong *)(param_1 + 0x10) &
          (*(longlong *)(param_1 + 0x10) + (lVar1 + 1) * *(longlong *)(param_1 + 8)) - 1U;
  thunk_FUN_1801d3330(*(longlong *)(param_1 + 0x18) - uVar2,lVar1 + uVar2 + 0x11);
  return;
}


