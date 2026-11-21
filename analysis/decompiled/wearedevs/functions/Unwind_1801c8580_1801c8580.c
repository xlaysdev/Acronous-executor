/* Unwind@1801c8580 @ 1801c8580 */

void Unwind_1801c8580(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3800(*(undefined8 *)(param_2 + 0x50));
    }
  }
  return;
}


