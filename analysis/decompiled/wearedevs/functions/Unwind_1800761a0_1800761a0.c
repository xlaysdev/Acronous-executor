/* Unwind@1800761a0 @ 1800761a0 */

void Unwind_1800761a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180114080(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


