/* Unwind@18000a860 @ 18000a860 */

void Unwind_18000a860(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (1 < *(uint *)(lVar1 + 0x1a8)) {
    plVar2 = *(longlong **)(lVar1 + 0x1b0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x1b0);
    }
  }
  return;
}


