/* FUN_1801e2690 @ 1801e2690 */

void FUN_1801e2690(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1801e4d70();
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e38e0();
      return;
    }
  }
  return;
}


