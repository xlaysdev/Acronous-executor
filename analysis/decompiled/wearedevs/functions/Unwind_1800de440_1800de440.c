/* Unwind@1800de440 @ 1800de440 */

void Unwind_1800de440(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1800e37d0(param_2 + 0x30);
  FUN_18000caa0(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 0x1d0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0x1d0);
  }
  return;
}


