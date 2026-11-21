/* FUN_180031550 @ 180031550 */

void FUN_180031550(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_180034700();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163890();
    return;
  }
  return;
}


