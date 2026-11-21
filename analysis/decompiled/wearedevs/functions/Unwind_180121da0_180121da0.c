/* Unwind@180121da0 @ 180121da0 */

void Unwind_180121da0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180113f90(param_2 + 0x40);
  }
  return;
}


