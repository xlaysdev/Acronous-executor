/* Unwind@180172600 @ 180172600 */

void Unwind_180172600(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162e30(param_2 + 0x68);
  }
  return;
}


