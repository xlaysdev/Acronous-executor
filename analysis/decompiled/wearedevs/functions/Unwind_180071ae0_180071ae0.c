/* Unwind@180071ae0 @ 180071ae0 */

void Unwind_180071ae0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_2 + 0x188) == 0) &&
     (plVar1 = *(longlong **)(param_2 + 0x178), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_2 + 0x178);
    }
  }
  return;
}


