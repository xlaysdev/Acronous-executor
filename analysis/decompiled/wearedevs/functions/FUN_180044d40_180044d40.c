/* FUN_180044d40 @ 180044d40 */

void FUN_180044d40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x10);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003db20(param_1 + 0x20);
    return;
  }
  return;
}


