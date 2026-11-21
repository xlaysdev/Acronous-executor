/* Unwind@180044da0 @ 180044da0 */

void Unwind_180044da0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003db20(*(longlong *)(param_2 + 0x20) + 0x20);
  }
  return;
}


