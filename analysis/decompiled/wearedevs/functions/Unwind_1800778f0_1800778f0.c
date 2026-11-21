/* Unwind@1800778f0 @ 1800778f0 */

void Unwind_1800778f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


