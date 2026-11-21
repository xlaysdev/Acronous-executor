/* FUN_180034800 @ 180034800 */

void FUN_180034800(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    cVar3 = FUN_180177f20(lVar1);
    if (cVar3 != '\0') {
      FUN_1801776b0(lVar1);
    }
  }
  FUN_180034700();
  plVar2 = (longlong *)param_1[3];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180163890();
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801638e0(param_1 + 1);
    }
  }
  thunk_FUN_1801d3330(param_1,0x78,8);
  return;
}


