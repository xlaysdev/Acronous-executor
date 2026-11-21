/* FUN_180042db0 @ 180042db0 */

void FUN_180042db0(uint *param_1)

{
  longlong *plVar1;
  
  if (1 < *param_1) {
    plVar1 = *(longlong **)(param_1 + 2);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 2);
    }
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 8);
      return;
    }
  }
  return;
}


