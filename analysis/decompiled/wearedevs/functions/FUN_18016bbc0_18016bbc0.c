/* FUN_18016bbc0 @ 18016bbc0 */

void FUN_18016bbc0(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163890(param_1);
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801638e0(param_1 + 1);
    return;
  }
  return;
}


