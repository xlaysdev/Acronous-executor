/* FUN_1801c6e10 @ 1801c6e10 */

undefined8 * FUN_1801c6e10(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  
  lVar1 = *param_2;
  uVar2 = *(ulonglong *)(lVar1 + 0x100);
  plVar6 = (longlong *)FUN_1801c8690();
  if (((char)plVar6[1] == '\x01') ||
     (plVar6 = (longlong *)FUN_1801fde30(plVar6), plVar6 != (longlong *)0x0)) {
    lVar7 = *(longlong *)(*plVar6 + 0x818);
LAB_1801c6e3d:
    if (lVar7 != 0) {
      LOCK();
      UNLOCK();
    }
  }
  else {
    uVar9 = FUN_1801c8660();
    lVar8 = FUN_1801c8b90(uVar9);
    lVar7 = *(longlong *)(lVar8 + 0x818);
    lVar3 = *(longlong *)(lVar8 + 0x820);
    *(longlong *)(lVar8 + 0x820) = lVar3 + -1;
    if (lVar3 != 1 || lVar7 != 0) goto LAB_1801c6e3d;
    FUN_1801fe8b0(lVar8);
  }
  lVar7 = FUN_1801c7400();
  if ((longlong)(*(longlong *)(lVar1 + 0x108) - uVar2) < 1) {
    uVar9 = 0;
  }
  else {
    plVar6 = (longlong *)(*(ulonglong *)(lVar1 + 0x80) & 0xfffffffffffffff8);
    lVar3 = *plVar6;
    lVar8 = (plVar6[1] - 1U & uVar2) * 0x10;
    uVar4 = *(undefined8 *)(lVar3 + lVar8);
    uVar5 = *(undefined8 *)(lVar3 + 8 + lVar8);
    uVar9 = 2;
    if (*(ulonglong *)(lVar1 + 0x80) == *(ulonglong *)(lVar1 + 0x80)) {
      LOCK();
      bVar10 = uVar2 == *(ulonglong *)(lVar1 + 0x100);
      if (bVar10) {
        *(ulonglong *)(lVar1 + 0x100) = uVar2 + 1;
      }
      UNLOCK();
      if (bVar10) {
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        *param_1 = 1;
        goto joined_r0x0001801c6ec7;
      }
    }
  }
  *param_1 = uVar9;
joined_r0x0001801c6ec7:
  if (((lVar7 != 0) &&
      (lVar1 = *(longlong *)(lVar7 + 0x818), *(longlong *)(lVar7 + 0x818) = lVar1 + -1, lVar1 == 1))
     && (*(undefined8 *)(lVar7 + 0x880) = 0, *(longlong *)(lVar7 + 0x820) == 0)) {
    FUN_1801fe8b0();
  }
  return param_1;
}


