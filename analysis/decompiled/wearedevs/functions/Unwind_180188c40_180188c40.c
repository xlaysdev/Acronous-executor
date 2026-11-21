/* Unwind@180188c40 @ 180188c40 */

void Unwind_180188c40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0(param_2 + 0x48);
  }
  return;
}


