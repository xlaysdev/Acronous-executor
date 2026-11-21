/* FUN_1800b0840 @ 1800b0840 */

void FUN_1800b0840(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 2) {
    FUN_1801617b0(param_1,param_1[3]);
    if (lVar1 != 0) {
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(param_1 + 1);
        return;
      }
    }
  }
  return;
}


