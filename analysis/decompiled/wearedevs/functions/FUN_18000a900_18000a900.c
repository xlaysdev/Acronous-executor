/* FUN_18000a900 @ 18000a900 */

void FUN_18000a900(char *param_1)

{
  longlong *plVar1;
  
  if (param_1 == (char *)0x0) {
    return;
  }
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
  FUN_18000c570(param_1 + 0x10);
  thunk_FUN_1801d3330(param_1,0x70,8);
  return;
}


