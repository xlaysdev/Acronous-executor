/* FUN_180162470 @ 180162470 */

void FUN_180162470(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_38 = 0;
  while (lVar3 != local_38) {
    lVar1 = local_38 * 8;
    local_38 = local_38 + 1;
    FUN_18016bc40(*(undefined8 *)(lVar2 + lVar1));
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar2,*(longlong *)(param_1 + 8) << 3,8);
  return;
}


