/* FUN_180029d70 @ 180029d70 */

void FUN_180029d70(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  FUN_180177210();
  plVar2 = (longlong *)*param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180163bb0(param_1);
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    uVar4 = *(ulonglong *)(lVar3 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        *(ulonglong *)(lVar3 + 0x30) = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(*(undefined8 *)(lVar3 + 0x18));
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      FUN_180177590(lVar3 + 0x20);
    }
    if ((uVar4 & 2) != 0) {
      *(undefined1 *)(lVar3 + 0x38) = 0;
    }
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180162c50();
        return;
      }
    }
  }
  return;
}


