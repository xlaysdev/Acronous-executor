/* FUN_1800edf20 @ 1800edf20 */

void FUN_1800edf20(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 2) {
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
    if (param_1[0x10] != 0) {
      thunk_FUN_1801d3330(param_1[0xe],param_1[0x10] << 5,4);
      return;
    }
  }
  return;
}


