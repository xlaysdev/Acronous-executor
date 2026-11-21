/* Unwind@180041db0 @ 180041db0 */

void Unwind_180041db0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x168);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 0x30) + 0x168);
  }
  return;
}


