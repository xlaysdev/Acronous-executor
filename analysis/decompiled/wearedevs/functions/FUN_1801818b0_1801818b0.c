/* FUN_1801818b0 @ 1801818b0 */

void FUN_1801818b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_48;
  
  local_48 = 0;
  while( true ) {
    if (local_48 == param_2) break;
    lVar3 = local_48 * 0x10;
    lVar1 = param_1 + lVar3;
    local_48 = local_48 + 1;
    plVar2 = *(longlong **)(param_1 + lVar3);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180163890(lVar1);
    }
    plVar2 = *(longlong **)(lVar1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801638e0(lVar1 + 8);
    }
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1,param_2 << 4,8);
  return;
}


