/* FUN_180163bb0 @ 180163bb0 */

void FUN_180163bb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  FUN_180170b80();
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x50),*(longlong *)(lVar1 + 0x48) << 4,8);
  }
  plVar2 = *(longlong **)(lVar1 + 0x98);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180162d10(lVar1 + 0x98);
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0xa0);
  if (plVar2 != (longlong *)0x0) {
    CloseHandle(*(HANDLE *)(lVar1 + 0xb0));
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801e3970(lVar1 + 0xa0);
    }
    plVar2 = *(longlong **)(lVar1 + 0xa8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801e3850(lVar1 + 0xa8);
    }
  }
  FUN_180186000(lVar1 + 0x68);
  plVar2 = *(longlong **)(lVar1 + 0x30);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(lVar1 + 0x30);
  }
  plVar2 = *(longlong **)(lVar1 + 200);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 200);
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0xd8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0xd8);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x110,8);
      return;
    }
  }
  return;
}


