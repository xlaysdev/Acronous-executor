/* Unwind@1800814a0 @ 1800814a0 */

void Unwind_1800814a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cf20(param_2 + 0x58);
  }
  return;
}


