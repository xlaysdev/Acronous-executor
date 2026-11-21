/* FUN_18017db00 @ 18017db00 */

void FUN_18017db00(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162f80();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162d10(param_1 + 0x38);
  }
  FUN_18017dcf0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(param_1 + 0x20);
    return;
  }
  return;
}


