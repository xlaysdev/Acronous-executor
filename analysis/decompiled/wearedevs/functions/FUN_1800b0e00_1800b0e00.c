/* FUN_1800b0e00 @ 1800b0e00 */

void FUN_1800b0e00(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        *(ulonglong *)(lVar2 + 0x30) = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(*(undefined8 *)(lVar2 + 0x18));
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      FUN_180177590(lVar2 + 0x20);
    }
    if ((uVar4 & 2) != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar2 + 0x38) = 0;
      FUN_18003c2f0(uVar3);
    }
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      LOCK();
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (*param_1 == 0) {
        FUN_18003de40();
        return;
      }
    }
  }
  return;
}


