/* Unwind@1800aa960 @ 1800aa960 */

void Unwind_1800aa960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003de40(param_2 + 0x38);
  }
  return;
}


