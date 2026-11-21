/* Unwind@180071a20 @ 180071a20 */

void Unwind_180071a20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1b8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0x68);
  }
  return;
}


