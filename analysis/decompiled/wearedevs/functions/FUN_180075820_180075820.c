/* FUN_180075820 @ 180075820 */

void FUN_180075820(longlong param_1)

{
  longlong *plVar1;
  
  FUN_180065b90();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_18013c270();
    plVar1 = *(longlong **)(param_1 + 0x10);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18013bc70();
      return;
    }
  }
  return;
}


