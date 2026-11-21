/* Unwind@180181760 @ 180181760 */

void Unwind_180181760(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x200);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163bb0(*(longlong *)(param_2 + 0x48) + 0x200);
  }
  return;
}


