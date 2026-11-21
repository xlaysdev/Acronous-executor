/* Unwind@18018e0e0 @ 18018e0e0 */

void Unwind_18018e0e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(param_2 + 0x28);
  }
  return;
}


