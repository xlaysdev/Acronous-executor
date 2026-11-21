/* FUN_18000b8c0 @ 18000b8c0 */

void FUN_18000b8c0(char *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
      return;
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162f80();
      return;
    }
  }
  return;
}


