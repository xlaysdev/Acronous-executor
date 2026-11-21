/* Unwind@18018d1f0 @ 18018d1f0 */

void Unwind_18018d1f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187b30(param_2 + 0x28);
  }
  return;
}


