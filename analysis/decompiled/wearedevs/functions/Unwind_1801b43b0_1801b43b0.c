/* Unwind@1801b43b0 @ 1801b43b0 */

void Unwind_1801b43b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3970(param_2 + 0x38);
    }
  }
  return;
}


