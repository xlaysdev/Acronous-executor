/* Unwind@1800d80d0 @ 1800d80d0 */

void Unwind_1800d80d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_18000caa0(param_2 + 0xb8);
  plVar1 = *(longlong **)(param_2 + 0x240);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(param_2 + 0x240);
    }
  }
  plVar1 = *(longlong **)(param_2 + 0x220);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  uVar2 = *(undefined8 *)(param_2 + 0x250);
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0x220);
  }
  FUN_18007c8d0(uVar2);
  return;
}


