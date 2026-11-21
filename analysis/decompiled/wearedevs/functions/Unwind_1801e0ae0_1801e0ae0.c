/* Unwind@1801e0ae0 @ 1801e0ae0 */

void Unwind_1801e0ae0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e38e0(param_2 + 0x40);
    }
  }
  return;
}


