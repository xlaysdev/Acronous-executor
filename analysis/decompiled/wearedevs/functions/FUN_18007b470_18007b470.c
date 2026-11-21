/* FUN_18007b470 @ 18007b470 */

void FUN_18007b470(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_18018bdc0();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0();
    return;
  }
  return;
}


