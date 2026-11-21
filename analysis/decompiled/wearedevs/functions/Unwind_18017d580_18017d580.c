/* Unwind@18017d580 @ 18017d580 */

void Unwind_18017d580(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  plVar2 = (longlong *)*puVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801e3970(puVar1);
  }
  plVar2 = (longlong *)puVar1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801e3850(puVar1 + 1);
  }
  return;
}


