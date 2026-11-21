/* FUN_180066750 @ 180066750 */

void FUN_180066750(longlong *param_1)

{
  longlong *plVar1;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 1);
      return;
    }
  }
  return;
}


