/* Unwind@1800e24d0 @ 1800e24d0 */

void Unwind_1800e24d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  FUN_18000caa0(lVar1);
  plVar2 = *(longlong **)(lVar1 + 0x168);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x40) + 0x168);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x178);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cf20(*(longlong *)(param_2 + 0x40) + 0x178);
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x40);
  FUN_180099b90(lVar1 + 0x130);
  FUN_18003c220(lVar1 + 0x110);
  return;
}


