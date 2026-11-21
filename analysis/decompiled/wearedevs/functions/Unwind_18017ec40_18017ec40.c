/* Unwind@18017ec40 @ 18017ec40 */

void Unwind_18017ec40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162e30(param_2 + 0x28);
  }
  return;
}


