/* FUN_180044c10 @ 180044c10 */

void FUN_180044c10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  local_38 = 0;
  lVar3 = lVar1;
  while (lVar2 != local_38) {
    local_38 = local_38 + 1;
    FUN_18009a3a0(lVar3);
    lVar3 = lVar3 + 0x1d0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x10) * 0x1d0,8);
  return;
}


