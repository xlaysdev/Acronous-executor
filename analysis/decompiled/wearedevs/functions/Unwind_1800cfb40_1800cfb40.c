/* Unwind@1800cfb40 @ 1800cfb40 */

void Unwind_1800cfb40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x858) + 0x310);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x858) + 0x310);
  }
  return;
}


