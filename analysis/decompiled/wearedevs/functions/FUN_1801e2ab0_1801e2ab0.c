/* FUN_1801e2ab0 @ 1801e2ab0 */

void FUN_1801e2ab0(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e38e0();
    return;
  }
  return;
}


