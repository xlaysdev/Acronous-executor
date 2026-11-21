/* Unwind@180125170 @ 180125170 */

void Unwind_180125170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180113b80(param_2 + 0x38);
  }
  return;
}


