/* FUN_18008e8a0 @ 18008e8a0 */

void FUN_18008e8a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_38 = 0;
  lVar3 = lVar1;
  while (lVar2 != local_38) {
    local_38 = local_38 + 1;
    FUN_180098c20(lVar3);
    lVar3 = lVar3 + 0x138;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x18) * 0x138,8);
  return;
}


