/* Unwind@18016f4b0 @ 18016f4b0 */

void Unwind_18016f4b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  FUN_18016ec90(&PTR_FUN_180261980,plVar1,plVar1 + 2);
  if (*plVar1 != 2) {
    plVar2 = plVar1 + 1;
    if (*plVar1 == 0) {
      plVar1 = (longlong *)*plVar2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801635e0(plVar2);
      }
    }
    else {
      plVar1 = (longlong *)*plVar2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162f80(plVar2);
      }
    }
  }
  return;
}


