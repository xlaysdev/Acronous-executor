/* Unwind@18016bc10 @ 18016bc10 */

void Unwind_18016bc10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801638e0(*(longlong *)(param_2 + 0x20) + 8);
  }
  return;
}


