/* FUN_180123a20 @ 180123a20 */

void FUN_180123a20(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_180128b10();
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


