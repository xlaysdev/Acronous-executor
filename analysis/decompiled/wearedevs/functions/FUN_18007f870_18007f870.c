/* FUN_18007f870 @ 18007f870 */

void FUN_18007f870(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong *puVar17;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    puVar4 = (ulonglong *)param_1[1];
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    uVar8 = uVar2 - uVar6;
    uVar15 = uVar3 - uVar8;
    lVar14 = uVar1 - uVar15;
    bVar16 = lVar14 != 0;
    if (uVar1 < uVar15) {
      lVar14 = 0;
    }
    uVar11 = uVar8 + uVar1;
    if (uVar1 >= uVar15 && bVar16) {
      uVar11 = uVar3;
    }
    if (uVar11 != uVar8) {
      puVar17 = puVar4 + uVar8 * 10;
      lVar7 = uVar2 * 0x50 + uVar6 * -0x50;
      lVar5 = 1;
      do {
        if (*(ulonglong *)((longlong)puVar4 + lVar7) < 3) {
          lVar9 = 0x18;
          lVar10 = 0x10;
          lVar12 = 0x20;
          lVar13 = 8;
LAB_18007f9c5:
          lVar13 = *(longlong *)((longlong)puVar4 + lVar7 + lVar13);
          (**(code **)(lVar13 + 0x20))
                    (*(undefined8 *)((longlong)puVar4 + lVar7 + lVar12),
                     *(undefined8 *)((longlong)puVar4 + lVar7 + lVar10),
                     *(undefined8 *)((longlong)puVar4 + lVar7 + lVar9),lVar13,lVar14,puVar17);
        }
        else if ((int)*(ulonglong *)((longlong)puVar4 + lVar7) != 3) {
          lVar9 = 0x28;
          lVar10 = 0x20;
          lVar12 = 0x30;
          lVar13 = 0x18;
          goto LAB_18007f9c5;
        }
        lVar7 = lVar7 + 0x50;
        bVar16 = lVar5 != uVar11 - uVar8;
        lVar5 = lVar5 + 1;
      } while (bVar16);
    }
    if (uVar15 < uVar1) {
      lVar14 = (uVar15 - uVar1) + 1;
      do {
        if (*puVar4 < 3) {
          lVar5 = 0x18;
          lVar9 = 0x10;
          lVar7 = 0x20;
          lVar12 = 8;
LAB_18007f905:
          (**(code **)(*(longlong *)((longlong)puVar4 + lVar12) + 0x20))
                    (*(undefined8 *)((longlong)puVar4 + lVar7),
                     *(undefined8 *)((longlong)puVar4 + lVar9),
                     *(undefined8 *)((longlong)puVar4 + lVar5));
        }
        else if ((int)*puVar4 != 3) {
          lVar5 = 0x28;
          lVar9 = 0x20;
          lVar7 = 0x30;
          lVar12 = 0x18;
          goto LAB_18007f905;
        }
        lVar14 = lVar14 + 1;
        puVar4 = puVar4 + 10;
      } while (lVar14 != 1);
    }
  }
  return;
}


