/* Unwind@18007f7c0 @ 18007f7c0 */

void Unwind_18007f7c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x58);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003ce90(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


