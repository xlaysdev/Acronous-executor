/* Unwind@18016e680 @ 18016e680 */

void Unwind_18016e680(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801635e0(param_2 + 0x20);
  }
  return;
}


