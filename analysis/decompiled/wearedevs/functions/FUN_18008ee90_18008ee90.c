/* FUN_18008ee90 @ 18008ee90 */

void FUN_18008ee90(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_18013bd90();
  FUN_18013c270(param_1);
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70(param_1);
    return;
  }
  return;
}


