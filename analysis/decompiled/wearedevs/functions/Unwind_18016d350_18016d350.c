/* Unwind@18016d350 @ 18016d350 */

void Unwind_18016d350(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)(param_2 + 0x67);
  lVar2 = *(longlong *)(param_2 + 0x58);
  FUN_18000b8c0(lVar2);
  if (cVar1 != '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180162d10(lVar2 + 0x10);
    }
  }
  return;
}


