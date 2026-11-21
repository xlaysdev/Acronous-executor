/* FUN_18003c4b0 @ 18003c4b0 */

void FUN_18003c4b0(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162f80();
    }
  }
  FUN_18000c570(param_1 + 2);
  return;
}


