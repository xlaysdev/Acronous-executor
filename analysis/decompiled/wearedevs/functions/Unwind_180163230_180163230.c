/* Unwind@180163230 @ 180163230 */

void Unwind_180163230(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  for (lVar6 = *(longlong *)(param_2 + 0x28); lVar6 != lVar3; lVar6 = lVar6 + 1) {
    lVar1 = lVar4 + lVar6 * 0x10;
    plVar5 = *(longlong **)(lVar4 + lVar6 * 0x10);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_180163890(lVar1);
      plVar5 = *(longlong **)(lVar1 + 8);
      LOCK();
      *plVar5 = *plVar5 + -1;
      lVar2 = *plVar5;
      UNLOCK();
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
      LOCK();
      *plVar5 = *plVar5 + -1;
      lVar2 = *plVar5;
      UNLOCK();
    }
    if (lVar2 == 0) {
      FUN_1801638e0(lVar1 + 8);
    }
  }
  return;
}


