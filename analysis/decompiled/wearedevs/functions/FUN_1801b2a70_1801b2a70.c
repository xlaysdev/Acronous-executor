/* FUN_1801b2a70 @ 1801b2a70 */

void FUN_1801b2a70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)param_1[3];
  if (((ulonglong)plVar2 & 1) == 0) {
    LOCK();
    plVar1 = plVar2 + 4;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (*plVar2 != 0) {
        thunk_FUN_1801d3330(plVar2[1],*plVar2,1);
      }
      thunk_FUN_1801d3330(plVar2,0x28,8);
      return;
    }
  }
  else {
    lVar3 = param_1[2] + ((ulonglong)plVar2 >> 5);
    if (lVar3 != 0) {
      thunk_FUN_1801d3330(*param_1 - ((ulonglong)plVar2 >> 5),lVar3,1);
      return;
    }
  }
  return;
}


