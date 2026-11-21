/* Unwind@1801634d0 @ 1801634d0 */

void Unwind_1801634d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x200);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163bb0(*(longlong *)(param_2 + 0x40) + 0x200);
  }
  return;
}


