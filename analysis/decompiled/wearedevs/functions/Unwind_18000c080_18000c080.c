/* Unwind@18000c080 @ 18000c080 */

void Unwind_18000c080(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x170);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(*(longlong *)(param_2 + 0x30) + 0x170);
    }
  }
  return;
}


