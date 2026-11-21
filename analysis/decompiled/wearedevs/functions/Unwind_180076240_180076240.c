/* Unwind@180076240 @ 180076240 */

void Unwind_180076240(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  plVar2 = (longlong *)*puVar1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003d970(puVar1);
    }
  }
  return;
}


