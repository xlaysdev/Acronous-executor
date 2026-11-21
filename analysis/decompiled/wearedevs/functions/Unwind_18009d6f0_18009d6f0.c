/* Unwind@18009d6f0 @ 18009d6f0 */

void Unwind_18009d6f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x4e0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(param_2 + 0x4e0);
    }
  }
  FUN_18007c8d0(param_2 + 0x448);
  FUN_18007aaf0(param_2 + 0x3b8);
  FUN_18000adf0(param_2 + 0x478);
  FUN_18000caa0(param_2 + 0x2c0);
  plVar1 = *(longlong **)(param_2 + 0x4d0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0x4d0);
  }
  return;
}


