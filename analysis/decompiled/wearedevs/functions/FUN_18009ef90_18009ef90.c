/* FUN_18009ef90 @ 18009ef90 */

void FUN_18009ef90(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = -*(longlong *)(param_1 + 0x10) &
            (*(longlong *)(param_1 + 0x10) + (lVar1 + 1) * *(longlong *)(param_1 + 8)) - 1U;
    if (lVar1 + uVar2 != -0x11) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 0x18) - uVar2);
      return;
    }
  }
  return;
}


