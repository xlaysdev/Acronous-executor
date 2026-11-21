/* FUN_1800b9bd0 @ 1800b9bd0 */

void FUN_1800b9bd0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18007eb90();
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_18018bdc0();
    plVar1 = *(longlong **)(param_1 + 0x18);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801876c0();
    }
  }
  FUN_1800b0d40(param_1);
  return;
}


