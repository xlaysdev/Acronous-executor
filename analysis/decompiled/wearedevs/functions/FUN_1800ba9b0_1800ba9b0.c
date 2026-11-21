/* FUN_1800ba9b0 @ 1800ba9b0 */

void FUN_1800ba9b0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_18018bdc0();
    param_1 = (longlong *)*param_1;
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      FUN_1801876c0();
      return;
    }
  }
  return;
}


