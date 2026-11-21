/* Unwind@180162990 @ 180162990 */

void Unwind_180162990(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(*(longlong *)(param_2 + 0x38) + 8);
  }
  return;
}


