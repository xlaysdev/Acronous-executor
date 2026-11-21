/* FUN_180043d10 @ 180043d10 */

void FUN_180043d10(longlong param_1)

{
  longlong *plVar1;
  
  if ((10 < *(byte *)(param_1 + 0x6d0)) && (*(longlong *)(param_1 + 0x6e0) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x6d8),*(longlong *)(param_1 + 0x6e0),1);
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x670),*(longlong *)(param_1 + 0x668),1);
  }
  FUN_1800430f0(param_1 + 0x608);
  plVar1 = *(longlong **)(param_1 + 0x6e8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e300(param_1 + 0x6e8);
  }
  FUN_180043e90(param_1);
  FUN_18000a900(*(undefined8 *)(param_1 + 0x6f0));
  FUN_18000a900(*(undefined8 *)(param_1 + 0x6f8));
  return;
}


