/* Unwind@1800e59a0 @ 1800e59a0 */

void Unwind_1800e59a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_18000caa0(param_2 + 0xb8);
  plVar1 = *(longlong **)(param_2 + 0x1a0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0x1a0);
  }
  return;
}


