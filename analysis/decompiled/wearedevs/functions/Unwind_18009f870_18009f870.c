/* Unwind@18009f870 @ 18009f870 */

void Unwind_18009f870(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      *(undefined1 *)(param_2 + 0x4f) = 0;
      FUN_1801139f0(param_2 + 0x20);
    }
  }
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}


