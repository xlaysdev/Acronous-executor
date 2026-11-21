/* FUN_18007ca40 @ 18007ca40 */

void FUN_18007ca40(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_18013c270();
    param_1 = (longlong *)*param_1;
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      FUN_18013bc70();
      return;
    }
  }
  return;
}


