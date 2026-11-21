/* FUN_18003b7b0 @ 18003b7b0 */

void FUN_18003b7b0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_18013c270();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70();
    return;
  }
  return;
}


