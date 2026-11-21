/* Unwind@18007ad00 @ 18007ad00 */

void Unwind_18007ad00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  plVar2 = *(longlong **)(lVar1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003dca0(lVar1 + 0x78);
    }
  }
  return;
}


