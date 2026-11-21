/* Unwind@1800b0ec0 @ 1800b0ec0 */

void Unwind_1800b0ec0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003de40(*(undefined8 *)(param_2 + 0x20));
    }
  }
  return;
}


