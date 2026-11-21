/* Unwind@180013000 @ 180013000 */

void Unwind_180013000(undefined8 param_1,longlong param_2)

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


