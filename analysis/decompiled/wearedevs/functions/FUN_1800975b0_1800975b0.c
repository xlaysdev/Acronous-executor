/* FUN_1800975b0 @ 1800975b0 */

void FUN_1800975b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003e2b0(param_1 + 0x1c0);
    }
  }
  if (1 < *(uint *)(param_1 + 0x1a8)) {
    plVar1 = *(longlong **)(param_1 + 0x1b0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x1b0);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x1c8);
    }
  }
  FUN_18009adc0(param_1);
  return;
}


