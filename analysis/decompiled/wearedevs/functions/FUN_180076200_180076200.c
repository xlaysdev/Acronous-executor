/* FUN_180076200 @ 180076200 */

void FUN_180076200(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1800abe30();
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d970();
      return;
    }
  }
  return;
}


