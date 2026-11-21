/* Unwind@180080c70 @ 180080c70 */

void Unwind_180080c70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0xa8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003ce90(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


