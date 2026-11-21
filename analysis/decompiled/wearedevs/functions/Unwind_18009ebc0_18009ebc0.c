/* Unwind@18009ebc0 @ 18009ebc0 */

void Unwind_18009ebc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801139f0(param_2 + 0x20);
    }
  }
  return;
}


