/* Unwind@180098860 @ 180098860 */

void Unwind_180098860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e0f0(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


