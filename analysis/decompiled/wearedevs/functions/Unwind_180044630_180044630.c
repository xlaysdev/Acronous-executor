/* Unwind@180044630 @ 180044630 */

void Unwind_180044630(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003db20(*(longlong *)(param_2 + 0x20) + 0x10);
  }
  return;
}


