/* Unwind@18017dd60 @ 18017dd60 */

void Unwind_18017dd60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  plVar2 = (longlong *)*puVar1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801e38e0(puVar1);
    }
  }
  return;
}


