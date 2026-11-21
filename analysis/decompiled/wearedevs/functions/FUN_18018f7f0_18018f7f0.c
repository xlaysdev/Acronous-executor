/* FUN_18018f7f0 @ 18018f7f0 */

void FUN_18018f7f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    param_2 = 1 - param_2;
    do {
      plVar1 = (longlong *)*param_1;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187b30(param_1);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 != 1);
  }
  return;
}


