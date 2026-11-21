/* FUN_1801638e0 @ 1801638e0 */

void FUN_1801638e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180163ab0(lVar1 + 0x10);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x28,8);
      return;
    }
  }
  return;
}


