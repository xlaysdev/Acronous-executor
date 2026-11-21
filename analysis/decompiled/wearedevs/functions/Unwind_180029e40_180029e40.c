/* Unwind@180029e40 @ 180029e40 */

void Unwind_180029e40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  plVar2 = (longlong *)*puVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180163bb0(puVar1);
  }
  return;
}


