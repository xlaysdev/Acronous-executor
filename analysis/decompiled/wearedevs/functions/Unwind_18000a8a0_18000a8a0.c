/* Unwind@18000a8a0 @ 18000a8a0 */

void Unwind_18000a8a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  plVar2 = *(longlong **)(lVar1 + 0x1c8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x1c8);
    }
  }
  return;
}


