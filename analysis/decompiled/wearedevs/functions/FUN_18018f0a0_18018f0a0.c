/* FUN_18018f0a0 @ 18018f0a0 */

void FUN_18018f0a0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1801886d0();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187950(param_1);
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187b30(param_1 + 1);
    return;
  }
  return;
}


