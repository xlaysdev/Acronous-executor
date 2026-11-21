/* FUN_1800a5820 @ 1800a5820 */

void FUN_1800a5820(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1800ab890();
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


