/* Unwind@18006c970 @ 18006c970 */

void Unwind_18006c970(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x5a8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70(param_2 + 0x5a8);
  }
  return;
}


