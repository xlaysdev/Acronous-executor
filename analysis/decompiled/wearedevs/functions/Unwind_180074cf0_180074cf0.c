/* Unwind@180074cf0 @ 180074cf0 */

void Unwind_180074cf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x140);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x246) = 0;
    FUN_18003cc40(param_2 + 0x140);
  }
  *(undefined1 *)(param_2 + 0x246) = 0;
  return;
}


