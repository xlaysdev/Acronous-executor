/* Unwind@180098e80 @ 180098e80 */

void Unwind_180098e80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  plVar2 = *(longlong **)(lVar1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0xa8);
    }
  }
  return;
}


