/* FUN_18012a720 @ 18012a720 */

void FUN_18012a720(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  
  uVar18 = 0xfffffffffffffffe;
  lVar7 = param_1[4];
  lVar9 = param_1[5];
  param_1[5] = 0;
  lVar17 = 0;
  lVar13 = lVar7;
  lVar15 = lVar9;
  while( true ) {
    lVar13 = lVar13 + 0x68;
    lVar9 = lVar9 + -1;
    if (lVar17 == lVar15) break;
    lVar5 = lVar17 * 0x68;
    lVar16 = lVar7 + lVar5;
    lVar17 = lVar17 + 1;
    lVar5 = *(longlong *)(lVar7 + 0x40 + lVar5);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x20))
                (*(undefined8 *)(lVar16 + 0x58),*(undefined8 *)(lVar16 + 0x48),
                 *(undefined8 *)(lVar16 + 0x50));
    }
    (**(code **)(*(longlong *)(lVar16 + 0x18) + 0x20))
              (*(undefined8 *)(lVar16 + 0x30),*(undefined8 *)(lVar16 + 0x20),
               *(undefined8 *)(lVar16 + 0x28),lVar13,lVar9,lVar15,lVar13,lVar16,lVar17,uVar18);
  }
  lVar7 = param_1[8];
  param_1[8] = 0;
  puVar6 = (undefined8 *)(param_1[7] + 0x38);
  while (bVar14 = lVar7 != 0, lVar7 = lVar7 + -1, bVar14) {
    uVar18 = *puVar6;
    plVar1 = puVar6 + -3;
    puVar2 = puVar6 + -2;
    puVar3 = puVar6 + -1;
    puVar6 = puVar6 + 9;
    (**(code **)(*plVar1 + 0x20))(uVar18,*puVar2,*puVar3);
  }
  *param_1 = 0;
  lVar7 = param_1[10];
  if (lVar7 != 0) {
    puVar4 = (undefined4 *)param_1[9];
    uVar10 = lVar7 * 4 - 4;
    puVar8 = puVar4;
    if (0x1b < uVar10) {
      uVar10 = (uVar10 >> 2) + 1;
      uVar11 = uVar10 & 0xfffffffffffffff8;
      puVar8 = puVar4 + uVar11;
      uVar12 = 0;
      do {
        *(undefined8 *)(puVar4 + uVar12) = 0xffff0000ffff;
        *(undefined8 *)((longlong)(puVar4 + uVar12) + 8) = 0xffff0000ffff;
        *(undefined8 *)(puVar4 + uVar12 + 4) = 0xffff0000ffff;
        *(undefined8 *)((longlong)(puVar4 + uVar12 + 4) + 8) = 0xffff0000ffff;
        uVar12 = uVar12 + 8;
      } while (uVar11 != uVar12);
      if (uVar10 == uVar11) {
        return;
      }
    }
    do {
      *puVar8 = 0xffff;
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar4 + lVar7);
  }
  return;
}


