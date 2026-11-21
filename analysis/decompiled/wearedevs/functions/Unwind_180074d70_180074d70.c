/* Unwind@180074d70 @ 180074d70 */

void Unwind_180074d70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x238);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0xb0);
  }
  *(undefined1 *)(param_2 + 0x243) = 1;
  return;
}


