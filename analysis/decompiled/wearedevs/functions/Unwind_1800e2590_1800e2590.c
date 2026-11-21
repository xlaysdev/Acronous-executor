/* Unwind@1800e2590 @ 1800e2590 */

void Unwind_1800e2590(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003de40(*(undefined8 *)(param_2 + 0x38));
    }
  }
  return;
}


