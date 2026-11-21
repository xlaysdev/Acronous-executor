/* Unwind@1800aabe0 @ 1800aabe0 */

void Unwind_1800aabe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d880(param_2 + 0x40);
  }
  return;
}


