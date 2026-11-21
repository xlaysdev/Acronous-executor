/* FUN_1800b0d40 @ 1800b0d40 */

void FUN_1800b0d40(char *param_1)

{
  longlong *plVar1;
  
  FUN_180179d40();
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
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162e30(param_1 + 0x10);
    return;
  }
  return;
}


