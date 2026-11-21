/* Unwind@1800ab790 @ 1800ab790 */

void Unwind_1800ab790(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(param_2 + 0x38);
  }
  return;
}


