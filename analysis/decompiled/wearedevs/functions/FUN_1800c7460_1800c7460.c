/* FUN_1800c7460 @ 1800c7460 */

void FUN_1800c7460(char *param_1)

{
  longlong *plVar1;
  
  FUN_1800c6e10(param_1 + 0x70);
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162f80();
    }
  }
  FUN_1800c8df0(param_1 + 0x10);
  return;
}


