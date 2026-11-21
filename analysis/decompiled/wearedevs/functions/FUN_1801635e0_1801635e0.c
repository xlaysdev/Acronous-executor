/* FUN_1801635e0 @ 1801635e0 */

void FUN_1801635e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x2d0);
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x2d8),lVar2,1);
  }
  if (*(longlong *)(lVar1 + 0x178) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x170),*(longlong *)(lVar1 + 0x178) * 0x18,8);
  }
  FUN_180162610(lVar1 + 0x100);
  FUN_180162800(lVar1 + 0x220);
  if (*(int *)(lVar1 + 0x2b8) != 1000000000) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x280),0x1860,8);
  }
  plVar3 = *(longlong **)(lVar1 + 0x2c8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_180163bb0(lVar1 + 0x2c8);
  }
  plVar3 = *(longlong **)(lVar1 + 0x200);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(lVar1 + 0x200);
    }
  }
  plVar3 = *(longlong **)(lVar1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(lVar1 + 0x210);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar1 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      thunk_FUN_1801d3330(lVar1,0x300,0x80);
      return;
    }
  }
  return;
}


