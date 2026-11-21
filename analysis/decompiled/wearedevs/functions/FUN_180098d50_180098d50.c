/* FUN_180098d50 @ 180098d50 */

void FUN_180098d50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x220);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(param_1 + 0x220);
    }
  }
  if (1 < *(byte *)(param_1 + 0x188)) {
    plVar1 = *(longlong **)(param_1 + 400);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x198) + 0x20))
            (*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1a0),
             *(undefined8 *)(param_1 + 0x1a8));
  FUN_18007aaf0(param_1 + 0xf8);
  FUN_18000adf0(param_1 + 0x1b8);
  plVar1 = *(longlong **)(param_1 + 0x98);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x98);
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0xa8);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x210);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x210);
    return;
  }
  return;
}


