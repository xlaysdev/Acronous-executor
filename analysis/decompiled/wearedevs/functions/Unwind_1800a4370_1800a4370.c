/* Unwind@1800a4370 @ 1800a4370 */

void Unwind_1800a4370(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x518);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180113f90(param_2 + 0x80);
  }
  return;
}


