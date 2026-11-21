/* Unwind@18007b390 @ 18007b390 */

void Unwind_18007b390(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


