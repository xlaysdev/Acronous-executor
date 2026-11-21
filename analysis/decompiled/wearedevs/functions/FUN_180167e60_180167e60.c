/* FUN_180167e60 @ 180167e60 */

void FUN_180167e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (SBORROW8(0,lVar2)) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180163980(param_1 + 1);
      return;
    }
  }
  else {
    if (param_1[4] != 0) {
      thunk_FUN_1801d3330(param_1[3],param_1[4] << 5,8);
      lVar2 = *param_1;
    }
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(param_1[1],lVar2 << 4,8);
    }
    plVar1 = (longlong *)param_1[5];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187950(param_1 + 5);
      return;
    }
  }
  return;
}


