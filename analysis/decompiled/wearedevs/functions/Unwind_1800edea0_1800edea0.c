/* Unwind@1800edea0 @ 1800edea0 */

void Unwind_1800edea0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


