/* Unwind@1800b8280 @ 1800b8280 */

void Unwind_1800b8280(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x2f90);
  FUN_18000caa0(lVar1);
  plVar2 = *(longlong **)(lVar1 + 0x168);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(lVar1 + 0x168);
  }
  plVar2 = *(longlong **)(lVar1 + 0x178);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cf20(lVar1 + 0x178);
    }
  }
  if (*(char *)(lVar1 + 0x1af) != '\0') {
    FUN_180099b90(lVar1 + 0x130);
  }
  if (*(char *)(lVar1 + 0x1ae) == '\0') {
    return;
  }
  FUN_18003c220(lVar1 + 0x110);
  return;
}


