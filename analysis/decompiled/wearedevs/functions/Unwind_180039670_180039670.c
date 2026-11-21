/* Unwind@180039670 @ 180039670 */

void Unwind_180039670(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003df30(param_2 + 0x28);
  }
  return;
}


