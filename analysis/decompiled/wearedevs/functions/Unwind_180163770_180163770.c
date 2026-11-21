/* Unwind@180163770 @ 180163770 */

void Unwind_180163770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x2c8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163bb0(*(longlong *)(param_2 + 0x28) + 0x2c8);
  }
  return;
}


