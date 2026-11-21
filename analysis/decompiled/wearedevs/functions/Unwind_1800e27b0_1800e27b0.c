/* Unwind@1800e27b0 @ 1800e27b0 */

void Unwind_1800e27b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x168);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x40) + 0x168);
  }
  return;
}


