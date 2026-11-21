/* Unwind@1800aa710 @ 1800aa710 */

void Unwind_1800aa710(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d580(param_2 + 0x40);
  }
  return;
}


