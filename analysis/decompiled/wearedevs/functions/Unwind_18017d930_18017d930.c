/* Unwind@18017d930 @ 18017d930 */

void Unwind_18017d930(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162d10(*(longlong *)(param_2 + 0x20) + 0x10);
  }
  return;
}


