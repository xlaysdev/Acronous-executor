/* Unwind@1800052f0 @ 1800052f0 */

void Unwind_1800052f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x770) + 0x160);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e300(*(longlong *)(param_2 + 0x770) + 0x160);
  }
  return;
}


