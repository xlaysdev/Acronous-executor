/* Unwind@1800e2490 @ 1800e2490 */

void Unwind_1800e2490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(*(longlong *)(param_2 + 0x40) + 0xa8);
    }
  }
  return;
}


