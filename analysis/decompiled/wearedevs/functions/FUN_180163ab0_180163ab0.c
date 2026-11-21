/* FUN_180163ab0 @ 180163ab0 */

void FUN_180163ab0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(longlong *)(lVar1 + 0x18);
  if (SBORROW8(0,lVar3)) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180163980(lVar1 + 0x20);
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x30),*(longlong *)(lVar1 + 0x38) << 5,8);
      lVar3 = *(longlong *)(lVar1 + 0x18);
    }
    if (lVar3 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x20),lVar3 << 4,8);
    }
    plVar2 = *(longlong **)(lVar1 + 0x40);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180187950(lVar1 + 0x40);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x58,8);
      return;
    }
  }
  return;
}


