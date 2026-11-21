/* Unwind@180174590 @ 180174590 */

void Unwind_180174590(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(*(longlong *)(param_2 + 0x28) + 0xd8);
    }
  }
  return;
}


