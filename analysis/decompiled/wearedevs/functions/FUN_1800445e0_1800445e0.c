/* FUN_1800445e0 @ 1800445e0 */

void FUN_1800445e0(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1);
  }
  plVar1 = (longlong *)param_1[2];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003db20(param_1 + 2);
    return;
  }
  return;
}


