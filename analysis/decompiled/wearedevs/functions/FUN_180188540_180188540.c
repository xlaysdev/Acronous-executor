/* FUN_180188540 @ 180188540 */

void FUN_180188540(undefined8 *param_1)

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


