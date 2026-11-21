/* FUN_18016d690 @ 18016d690 */

void FUN_18016d690(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  FUN_18016ec90(&PTR_FUN_180261980,param_1,param_1 + 2,param_4,param_1,0xfffffffffffffffe);
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801635e0();
        return;
      }
    }
    else {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162f80();
        return;
      }
    }
  }
  return;
}


