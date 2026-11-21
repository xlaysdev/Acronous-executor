/* Unwind@18018dea0 @ 18018dea0 */

void Unwind_18018dea0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187b30(param_2 + 0x78);
  }
  return;
}


