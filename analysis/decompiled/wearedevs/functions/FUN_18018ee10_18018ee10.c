/* FUN_18018ee10 @ 18018ee10 */

void FUN_18018ee10(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18018ec50(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(param_1 + 0x20);
    return;
  }
  return;
}


