/* FUN_180114260 @ 180114260 */

void FUN_180114260(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x58);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18013bb80(lVar1 + 0x58);
  }
  plVar2 = *(longlong **)(lVar1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x60);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x78,8);
      return;
    }
  }
  return;
}


