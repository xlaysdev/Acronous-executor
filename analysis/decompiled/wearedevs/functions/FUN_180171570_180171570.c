/* FUN_180171570 @ 180171570 */

void FUN_180171570(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x28),lVar1,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(param_1 + 0x50);
  }
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x70);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x80);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x90);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0xa0);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0xb0);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0xc0);
      return;
    }
  }
  return;
}


