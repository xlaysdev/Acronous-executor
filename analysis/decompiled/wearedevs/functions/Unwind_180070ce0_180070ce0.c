/* Unwind@180070ce0 @ 180070ce0 */

void Unwind_180070ce0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cda0(param_2 + 0x30);
  }
  return;
}


