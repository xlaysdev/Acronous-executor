/* Unwind@1800f2540 @ 1800f2540 */

void Unwind_1800f2540(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 1000) + 0x1d0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 1000) + 0x1d0);
    }
  }
  return;
}


