/* Unwind@1800abc20 @ 1800abc20 */

void Unwind_1800abc20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x80);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00((undefined8 *)(param_2 + 0x80));
  }
  return;
}


