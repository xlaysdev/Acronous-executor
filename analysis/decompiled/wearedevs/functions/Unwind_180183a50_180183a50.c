/* Unwind@180183a50 @ 180183a50 */

void Unwind_180183a50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801638e0(param_2 + 0x2b0);
    }
  }
  FUN_1801679a0(param_2 + 0x330);
  *(undefined1 *)(param_2 + 0x477) = 0;
  *(undefined1 *)(param_2 + 0x476) = 1;
  return;
}


