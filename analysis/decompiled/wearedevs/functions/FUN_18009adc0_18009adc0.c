/* FUN_18009adc0 @ 18009adc0 */

void FUN_18009adc0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18007aaf0(param_1 + 0xf8);
  plVar1 = *(longlong **)(param_1 + 0x188);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x188);
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0xd8);
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0xe8);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(param_1 + 0x198);
      return;
    }
  }
  return;
}


