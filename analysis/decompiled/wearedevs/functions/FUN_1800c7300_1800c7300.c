/* FUN_1800c7300 @ 1800c7300 */

void FUN_1800c7300(char *param_1)

{
  longlong *plVar1;
  
  FUN_1800c61c0(param_1 + 0x70);
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


