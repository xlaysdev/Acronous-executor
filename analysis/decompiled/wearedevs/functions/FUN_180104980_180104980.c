/* FUN_180104980 @ 180104980 */

void FUN_180104980(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_18010d6d0();
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114080();
      return;
    }
  }
  return;
}


