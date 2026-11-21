/* FUN_1800c7e10 @ 1800c7e10 */

void FUN_1800c7e10(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[4];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dca0(param_1 + 4);
  }
  if (*param_1 != 0) {
    FUN_180101100(param_1 + 1);
  }
  FUN_180101150(param_1 + 2);
  return;
}


