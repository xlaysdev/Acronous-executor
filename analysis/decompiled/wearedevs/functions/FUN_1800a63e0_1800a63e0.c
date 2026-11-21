/* FUN_1800a63e0 @ 1800a63e0 */

void FUN_1800a63e0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1800ac180();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e0f0();
    return;
  }
  return;
}


