/* Unwind@18007af60 @ 18007af60 */

void Unwind_18007af60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_1800519a0(lVar1 + 0x108);
  plVar2 = *(longlong **)(lVar1 + 0x128);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x128);
    }
  }
  return;
}


