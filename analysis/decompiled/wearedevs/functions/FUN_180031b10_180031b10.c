/* FUN_180031b10 @ 180031b10 */

void FUN_180031b10(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_18016ec70();
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801635e0();
        return;
      }
    }
    else {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162f80();
        return;
      }
    }
  }
  return;
}


