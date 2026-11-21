/* Unwind@180098890 @ 180098890 */

void Unwind_180098890(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  plVar2 = (longlong *)*puVar1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003de40(puVar1);
    }
  }
  return;
}


