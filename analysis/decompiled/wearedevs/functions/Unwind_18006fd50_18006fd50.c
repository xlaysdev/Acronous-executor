/* Unwind@18006fd50 @ 18006fd50 */

void Unwind_18006fd50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2e0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003ce90(param_2 + 0x2e0);
  }
  return;
}


