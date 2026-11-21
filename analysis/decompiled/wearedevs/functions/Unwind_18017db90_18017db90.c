/* Unwind@18017db90 @ 18017db90 */

void Unwind_18017db90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162d10(*(longlong *)(param_2 + 0x20) + 0x38);
  }
  return;
}


