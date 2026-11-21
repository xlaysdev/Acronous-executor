/* Unwind@1800d1d70 @ 1800d1d70 */

void Unwind_1800d1d70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x4c8) + 0x1d8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x4c8) + 0x1d8);
  }
  return;
}


