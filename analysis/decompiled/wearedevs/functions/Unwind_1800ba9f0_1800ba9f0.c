/* Unwind@1800ba9f0 @ 1800ba9f0 */

void Unwind_1800ba9f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


