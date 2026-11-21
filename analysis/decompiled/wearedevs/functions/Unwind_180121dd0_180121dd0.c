/* Unwind@180121dd0 @ 180121dd0 */

void Unwind_180121dd0(undefined8 param_1,longlong param_2)

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


