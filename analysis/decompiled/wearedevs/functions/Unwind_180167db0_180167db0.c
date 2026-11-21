/* Unwind@180167db0 @ 180167db0 */

void Unwind_180167db0(undefined8 param_1,longlong param_2)

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


