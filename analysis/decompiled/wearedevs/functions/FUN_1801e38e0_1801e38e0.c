/* FUN_1801e38e0 @ 1801e38e0 */

void FUN_1801e38e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  FUN_1801e2570(lVar2 + 0x10);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x28,8);
      return;
    }
  }
  return;
}


