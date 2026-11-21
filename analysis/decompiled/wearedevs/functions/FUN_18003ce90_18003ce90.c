/* FUN_18003ce90 @ 18003ce90 */

void FUN_18003ce90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  FUN_18003aaf0(lVar2 + 0x10);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x88,8);
      return;
    }
  }
  return;
}


