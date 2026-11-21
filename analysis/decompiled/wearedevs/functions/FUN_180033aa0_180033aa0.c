/* FUN_180033aa0 @ 180033aa0 */

void FUN_180033aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    if ((10 < *(byte *)(param_2 + 0x6d0)) && (*(longlong *)(param_2 + 0x6e0) != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x6d8),*(longlong *)(param_2 + 0x6e0),1);
    }
    if (*(longlong *)(param_2 + 0x668) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x670),*(longlong *)(param_2 + 0x668),1);
    }
    FUN_18000b470(param_2 + 0x608);
    plVar1 = *(longlong **)(param_2 + 0x6e8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003e300(param_2 + 0x6e8);
    }
    FUN_18000c1f0(param_2);
    FUN_18000a900(*(undefined8 *)(param_2 + 0x6f0));
    uVar2 = 0x700;
    FUN_18000a900(*(undefined8 *)(param_2 + 0x6f8));
  }
  else {
    if (param_2 == 0) {
      return;
    }
    uVar2 = 0x90;
    FUN_180033930(param_2);
  }
  thunk_FUN_1801d3330(param_2,uVar2,8);
  return;
}


