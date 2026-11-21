/* Unwind@180186140 @ 180186140 */

void Unwind_180186140(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + -0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(*(longlong *)(param_2 + 0x28) + -0x10);
  }
  return;
}


