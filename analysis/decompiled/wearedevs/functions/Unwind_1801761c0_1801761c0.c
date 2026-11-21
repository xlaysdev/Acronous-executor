/* Unwind@1801761c0 @ 1801761c0 */

void Unwind_1801761c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xa8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(param_2 + 0xa8);
  }
  return;
}


