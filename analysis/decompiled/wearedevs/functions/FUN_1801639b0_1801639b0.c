/* FUN_1801639b0 @ 1801639b0 */

void FUN_1801639b0(longlong *param_1)

{
  longlong *plVar1;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = *param_1;
  plVar1 = *(longlong **)(local_18 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162f80(local_18 + 0x10);
  }
  LOCK();
  local_20 = *(longlong *)(local_18 + 0x20);
  *(longlong *)(local_18 + 0x20) = 0;
  UNLOCK();
  if (local_20 != 0) {
    FUN_18016f640(&local_20);
  }
  if (local_18 != -1) {
    LOCK();
    plVar1 = (longlong *)(local_18 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(local_18,0x28,8);
      return;
    }
  }
  return;
}


