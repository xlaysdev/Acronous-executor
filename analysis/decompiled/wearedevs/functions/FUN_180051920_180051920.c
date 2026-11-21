/* FUN_180051920 @ 180051920 */

void FUN_180051920(int *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x42);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e300(param_1 + 0x42);
  }
  if (*param_1 == 2) {
    FUN_180042770(param_1 + 2);
    return;
  }
  FUN_180051710();
  return;
}


