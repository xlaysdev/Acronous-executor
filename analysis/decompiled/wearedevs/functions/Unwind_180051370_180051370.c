/* Unwind@180051370 @ 180051370 */

void Unwind_180051370(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180113f90(*(undefined8 *)(param_2 + 0x38));
    }
  }
  return;
}


