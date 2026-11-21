/* Unwind@18004a840 @ 18004a840 */

void Unwind_18004a840(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xaf8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(param_2 + 0xaf8);
    }
  }
  return;
}


