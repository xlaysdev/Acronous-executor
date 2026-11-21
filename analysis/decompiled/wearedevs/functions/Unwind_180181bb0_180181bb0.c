/* Unwind@180181bb0 @ 180181bb0 */

void Unwind_180181bb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801638e0(*(longlong *)(param_2 + 0x30) + 8);
    }
  }
  return;
}


