/* FUN_1800b0f00 @ 1800b0f00 */

void FUN_1800b0f00(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1800ab580();
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dcd0();
      return;
    }
  }
  return;
}


