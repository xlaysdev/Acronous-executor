/* FUN_18003d7f0 @ 18003d7f0 */

void FUN_18003d7f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  FreeCredentialsHandle(lVar2 + 0x10);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x20,8);
      return;
    }
  }
  return;
}


