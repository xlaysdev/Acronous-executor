/* Unwind@18018eaf0 @ 18018eaf0 */

void Unwind_18018eaf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x128);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187b30(param_2 + 0x128);
  }
  return;
}


