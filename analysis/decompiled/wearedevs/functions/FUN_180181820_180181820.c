/* FUN_180181820 @ 180181820 */

void FUN_180181820(longlong param_1)

{
  longlong *plVar1;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  local_18 = param_1;
  if (*plVar1 == 0) {
    FUN_180162f80(param_1 + 0x10);
  }
  LOCK();
  local_20 = *(longlong *)(local_18 + 0x20);
  *(longlong *)(local_18 + 0x20) = 0;
  UNLOCK();
  if (local_20 != 0) {
    FUN_18016f640(&local_20);
  }
  return;
}


