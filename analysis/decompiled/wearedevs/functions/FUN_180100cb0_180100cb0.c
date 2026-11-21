/* FUN_180100cb0 @ 180100cb0 */

undefined8 FUN_180100cb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_180100900();
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (uVar5 == 1) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
      uVar7 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + uVar8 * 8);
        uVar6 = uVar7 + lVar4;
        if (SCARRY8(uVar7,lVar4)) {
          uVar6 = (longlong)(uVar7 + lVar4) >> 0x3f ^ 0x8000000000000000;
        }
        lVar4 = *(longlong *)(lVar3 + 8 + uVar8 * 8);
        uVar7 = uVar6 + lVar4;
        if (SCARRY8(uVar6,lVar4)) {
          uVar7 = (longlong)(uVar6 + lVar4) >> 0x3f ^ 0x8000000000000000;
        }
        uVar8 = uVar8 + 2;
      } while ((uVar5 & 0xfffffffffffffffe) != uVar8);
    }
    uVar6 = uVar7;
    if ((uVar5 & 1) != 0) {
      lVar3 = *(longlong *)(lVar3 + uVar8 * 8);
      uVar6 = uVar7 + lVar3;
      if (SCARRY8(uVar7,lVar3)) {
        uVar6 = (longlong)(uVar7 + lVar3) >> 0x3f ^ 0x8000000000000000;
      }
    }
  }
  uVar5 = lVar2 + uVar6;
  if (SCARRY8(lVar2,uVar6)) {
    uVar5 = (longlong)(lVar2 + uVar6) >> 0x3f ^ 0x8000000000000000;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar6 = uVar5 + lVar2;
  if (SCARRY8(uVar5,lVar2)) {
    uVar6 = (longlong)(uVar5 + lVar2) >> 0x3f ^ 0x8000000000000000;
  }
  if (lVar1 <= (longlong)uVar6) {
    LOCK();
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) - lVar1;
    UNLOCK();
  }
  return CONCAT71((int7)(uVar6 >> 8),lVar1 <= (longlong)uVar6);
}


