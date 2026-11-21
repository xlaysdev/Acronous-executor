/* Unwind@180105030 @ 180105030 */

void Unwind_180105030(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


