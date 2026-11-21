/* Unwind@1800f22e0 @ 1800f22e0 */

void Unwind_1800f22e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 1000) + 0x1c8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 1000) + 0x1c8);
  }
  return;
}


