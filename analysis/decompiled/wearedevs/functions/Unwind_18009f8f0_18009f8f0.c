/* Unwind@18009f8f0 @ 18009f8f0 */

void Unwind_18009f8f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0x4f) != '\0') &&
     (plVar1 = *(longlong **)(param_2 + 0x30), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801139f0(param_2 + 0x30);
    }
  }
  return;
}


