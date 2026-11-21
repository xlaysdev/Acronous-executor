/* Unwind@1800ae1f0 @ 1800ae1f0 */

void Unwind_1800ae1f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  plVar2 = (longlong *)*puVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18013bc70(puVar1);
  }
  return;
}


