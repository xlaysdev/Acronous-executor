/* Unwind@180073380 @ 180073380 */

void Unwind_180073380(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cf20(param_2 + 0x78);
  }
  return;
}


