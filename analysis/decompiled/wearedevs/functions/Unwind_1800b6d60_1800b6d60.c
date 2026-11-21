/* Unwind@1800b6d60 @ 1800b6d60 */

void Unwind_1800b6d60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x2f90) + 0x178);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(*(longlong *)(param_2 + 0x2f90) + 0x178);
    }
  }
  return;
}


