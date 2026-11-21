/* FUN_180187b30 @ 180187b30 */

void FUN_180187b30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  FUN_18018ec50(lVar1 + 0x18);
  plVar2 = *(longlong **)(lVar1 + 0x20);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180187680(lVar1 + 0x20);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x78,8);
      return;
    }
  }
  return;
}


