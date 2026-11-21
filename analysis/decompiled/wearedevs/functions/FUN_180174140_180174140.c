/* FUN_180174140 @ 180174140 */

void FUN_180174140(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(ulonglong *)(lVar2 + 0x30) = uVar3 | 4;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (((uint)uVar3 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(*(undefined8 *)(lVar2 + 0x18));
    }
    if (((uint)uVar3 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))(*(undefined8 *)(lVar2 + 0x28));
    }
    if ((uVar3 & 2) != 0) {
      *(undefined1 *)(lVar2 + 0x38) = 0;
    }
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      LOCK();
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (*param_1 == 0) {
        FUN_180162c50();
        return;
      }
    }
  }
  return;
}


