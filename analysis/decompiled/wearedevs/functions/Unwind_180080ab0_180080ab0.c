/* Unwind@180080ab0 @ 180080ab0 */

void Unwind_180080ab0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003ce90(param_2 + 0x68);
  }
  return;
}


