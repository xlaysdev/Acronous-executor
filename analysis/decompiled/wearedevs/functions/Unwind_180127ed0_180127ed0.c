/* Unwind@180127ed0 @ 180127ed0 */

void Unwind_180127ed0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(param_2 + 0x88);
  }
  return;
}


