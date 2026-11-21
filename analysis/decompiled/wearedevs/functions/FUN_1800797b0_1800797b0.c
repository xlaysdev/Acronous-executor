/* FUN_1800797b0 @ 1800797b0 */

void FUN_1800797b0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_180079680(param_1 + 0xf8);
  plVar1 = *(longlong **)(param_1 + 0x140);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(param_1 + 0x140);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x98);
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0xa8);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x130);
    return;
  }
  return;
}


