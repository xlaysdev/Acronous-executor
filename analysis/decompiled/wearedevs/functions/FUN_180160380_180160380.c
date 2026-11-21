/* FUN_180160380 @ 180160380 */

longlong FUN_180160380(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 2) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[3];
    FUN_1801617b0(param_1,lVar3);
    if (lVar1 != 0) {
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(param_1 + 1);
      }
    }
  }
  return lVar3;
}


