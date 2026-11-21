/* FUN_180162d10 @ 180162d10 */

void FUN_180162d10(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 != 0) {
    uVar6 = *(ulonglong *)(lVar3 + 0x30);
    do {
      uVar5 = uVar6;
      if ((uVar5 & 4) != 0) goto LAB_180162d7a;
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      if (uVar5 == uVar1) {
        *(ulonglong *)(lVar3 + 0x30) = uVar5 | 2;
        uVar6 = uVar5;
      }
      else {
        uVar6 = uVar1;
      }
      UNLOCK();
    } while (uVar5 != uVar1);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))(*(undefined8 *)(lVar3 + 0x28));
    }
LAB_180162d7a:
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180162c50();
      }
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar4 = (longlong *)(lVar2 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      thunk_FUN_1801d3330(lVar2,0x18,8);
      return;
    }
  }
  return;
}


