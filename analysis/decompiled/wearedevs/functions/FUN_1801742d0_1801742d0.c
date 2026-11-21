/* FUN_1801742d0 @ 1801742d0 */

void FUN_1801742d0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_180170b80();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x48) << 4,8);
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162d10(param_1 + 0x98);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xb0));
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3970(param_1 + 0xa0);
    }
    plVar1 = *(longlong **)(param_1 + 0xa8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3850(param_1 + 0xa8);
    }
  }
  FUN_180186000(param_1 + 0x68);
  plVar1 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 0x30);
  }
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 200);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0xd8);
      return;
    }
  }
  return;
}


