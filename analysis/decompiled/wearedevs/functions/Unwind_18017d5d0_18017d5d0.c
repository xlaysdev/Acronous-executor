/* Unwind@18017d5d0 @ 18017d5d0 */

void Unwind_18017d5d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


