/* FUN_1801c5220 @ 1801c5220 */

void FUN_1801c5220(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + 0x1d0);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if ((*plVar1 == 0) && (lVar3 = *(longlong *)(param_1 + 0x208), lVar3 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x200);
    lVar6 = 0;
    lVar5 = 0;
    do {
      LOCK();
      plVar1 = (longlong *)(lVar4 + 0x10 + lVar6);
      lVar2 = *plVar1;
      *plVar1 = 3;
      UNLOCK();
      if (lVar2 == 2) {
        FUN_1801c2880(param_1 + 0x1d8,lVar5);
      }
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + 1;
    } while (lVar3 * 0x28 != lVar6);
  }
  return;
}


