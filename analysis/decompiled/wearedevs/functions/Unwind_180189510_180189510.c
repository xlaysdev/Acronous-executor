/* Unwind@180189510 @ 180189510 */

void Unwind_180189510(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0(param_2 + 0xe8);
  }
  return;
}


