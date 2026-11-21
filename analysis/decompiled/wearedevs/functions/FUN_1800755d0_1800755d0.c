/* FUN_1800755d0 @ 1800755d0 */

void FUN_1800755d0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_18013c270();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70(param_1);
  }
  plVar1 = (longlong *)param_1[2];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d400(param_1 + 2);
    return;
  }
  return;
}


