/* Unwind@1800ac060 @ 1800ac060 */

void Unwind_1800ac060(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(param_2 + 0x50);
  }
  return;
}


