/* Unwind@1800e4380 @ 1800e4380 */

void Unwind_1800e4380(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_2 + 0x66c);
  if (*(char *)(param_2 + 0x66b) != '\0') {
    FUN_180099b90(*(longlong *)(param_2 + 0x660) + 0xf8);
  }
  if ((bVar1 & 1) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x660) + 0x140);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cf20(*(longlong *)(param_2 + 0x660) + 0x140);
      }
    }
    lVar3 = *(longlong *)(param_2 + 0x660);
    FUN_18000caa0(lVar3);
    plVar2 = *(longlong **)(lVar3 + 0x130);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(*(longlong *)(param_2 + 0x660) + 0x130);
    }
  }
  return;
}


