/* FUN_1801b9a50 @ 1801b9a50 */

undefined8 FUN_1801b9a50(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar3 = *param_1;
  uVar7 = *(ulonglong *)(lVar3 + 0x108);
  lVar6 = uVar7 - *(longlong *)(lVar3 + 0x100);
  if (lVar6 < 1) {
LAB_1801b9ae2:
    uVar4 = 0;
  }
  else {
    if ((char)param_1[3] == '\x01') {
      uVar1 = uVar7 - 1;
      *(ulonglong *)(lVar3 + 0x108) = uVar1;
      LOCK();
      UNLOCK();
      lVar3 = *param_1;
      lVar6 = uVar1 - *(ulonglong *)(lVar3 + 0x100);
      if (lVar6 < 0) {
        *(ulonglong *)(lVar3 + 0x108) = uVar7;
        return 0;
      }
      uVar5 = param_1[2];
      uVar4 = *(undefined8 *)(param_1[1] + (uVar5 - 1 & uVar1) * 0x10);
      if (uVar1 == *(ulonglong *)(lVar3 + 0x100)) {
        LOCK();
        bVar8 = uVar1 == *(ulonglong *)(lVar3 + 0x100);
        if (bVar8) {
          *(ulonglong *)(lVar3 + 0x100) = uVar7;
        }
        UNLOCK();
        *(ulonglong *)(*param_1 + 0x108) = uVar7;
        if (bVar8) {
          return uVar4;
        }
        goto LAB_1801b9ae2;
      }
      uVar7 = uVar5 + 3;
      if (-1 < (longlong)uVar5) {
        uVar7 = uVar5;
      }
      if (uVar5 < 0x41) {
        return uVar4;
      }
      if ((longlong)uVar7 >> 2 <= lVar6) {
        return uVar4;
      }
    }
    else {
      LOCK();
      puVar2 = (ulonglong *)(lVar3 + 0x100);
      uVar1 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (-1 < (longlong)(uVar1 - uVar7)) {
        *(ulonglong *)(*param_1 + 0x100) = uVar1;
        return 0;
      }
      uVar5 = param_1[2];
      uVar4 = *(undefined8 *)(param_1[1] + (uVar5 - 1 & uVar1) * 0x10);
      uVar7 = uVar5 + 3;
      if (-1 < (longlong)uVar5) {
        uVar7 = uVar5;
      }
      if (uVar5 < 0x41) {
        return uVar4;
      }
      if ((longlong)uVar7 >> 2 < lVar6) {
        return uVar4;
      }
    }
    FUN_1801fccf0(param_1,uVar5 >> 1);
  }
  return uVar4;
}


