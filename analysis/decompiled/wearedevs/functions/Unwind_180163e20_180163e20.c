/* Unwind@180163e20 @ 180163e20 */

void Unwind_180163e20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x28) + 0x30);
  }
  return;
}


