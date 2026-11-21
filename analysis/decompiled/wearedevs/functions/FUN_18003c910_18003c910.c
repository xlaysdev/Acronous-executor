/* FUN_18003c910 @ 18003c910 */

void FUN_18003c910(longlong param_1)

{
  longlong *plVar1;
  
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
      return;
    }
  }
  return;
}


