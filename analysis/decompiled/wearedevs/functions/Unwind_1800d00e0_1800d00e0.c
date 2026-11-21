/* Unwind@1800d00e0 @ 1800d00e0 */

void Unwind_1800d00e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x858) + 0x360);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 0x858) + 0x360);
    }
  }
  return;
}


