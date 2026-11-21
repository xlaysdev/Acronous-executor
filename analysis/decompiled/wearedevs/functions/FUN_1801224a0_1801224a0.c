/* FUN_1801224a0 @ 1801224a0 */

void FUN_1801224a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bb80(param_1 + 0x58);
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x60);
      return;
    }
  }
  return;
}


