/* Unwind@180121e00 @ 180121e00 */

void Unwind_180121e00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180113f90(param_2 + 0x38);
  }
  return;
}


