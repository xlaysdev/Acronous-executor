/* Unwind@1800c6d10 @ 1800c6d10 */

void Unwind_1800c6d10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x158);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 0x38) + 0x158);
  }
  return;
}


