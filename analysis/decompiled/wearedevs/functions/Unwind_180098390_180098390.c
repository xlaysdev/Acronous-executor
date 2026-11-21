/* Unwind@180098390 @ 180098390 */

void Unwind_180098390(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x418);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(*(longlong *)(param_2 + 0x40) + 0x418);
    }
  }
  return;
}


