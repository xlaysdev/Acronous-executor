/* FUN_18016c8e0 @ 18016c8e0 */

void FUN_18016c8e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar6 = 0;
  while (lVar6 != lVar3) {
    lVar5 = lVar6 * 0x10;
    lVar1 = lVar2 + lVar5;
    lVar6 = lVar6 + 1;
    plVar4 = *(longlong **)(lVar2 + lVar5);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180163890(lVar1);
    }
    plVar4 = *(longlong **)(lVar1 + 8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1801638e0(lVar1 + 8);
    }
  }
  return;
}


