/* FUN_18003db20 @ 18003db20 */

void FUN_18003db20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  FUN_1800a0a80(lVar2 + 0x10);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x40,8);
      return;
    }
  }
  return;
}


