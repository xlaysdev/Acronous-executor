/* FUN_18007b160 @ 18007b160 */

void FUN_18007b160(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_18012e1e0();
    param_1 = (longlong *)*param_1;
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      FUN_18013bb80();
      return;
    }
  }
  return;
}


