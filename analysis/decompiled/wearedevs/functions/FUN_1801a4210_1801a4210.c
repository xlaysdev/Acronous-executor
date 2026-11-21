/* FUN_1801a4210 @ 1801a4210 */

void FUN_1801a4210(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  
  lVar13 = param_2[5];
  uVar9 = param_2[6] - lVar13;
  uVar11 = *(ulonglong *)(param_1 + 0xf0);
  uVar14 = uVar11;
  uVar7 = 0x3b;
  if (0x3b < uVar11) {
    uVar14 = *(ulonglong *)(param_1 + 8);
    uVar7 = uVar11;
  }
  puVar12 = (undefined4 *)*param_2;
  puVar3 = (undefined4 *)param_2[1];
  lVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar18 = param_2[4];
  puVar1 = (ulonglong *)(param_1 + 0xf0);
  if (uVar7 - uVar14 < uVar9) {
    if (CARRY8(uVar14,uVar9)) {
LAB_1801a4493:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
    }
    uVar11 = (uVar14 + uVar9) - 1;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar11 = 0;
    if (1 < uVar14 + uVar9) {
      uVar11 = 0xffffffffffffffff >> (~(byte)lVar6 & 0x3f);
    }
    if (uVar11 == 0xffffffffffffffff) goto LAB_1801a4493;
    lVar6 = FUN_1801a4d80(param_1,uVar11 + 1);
    if (lVar6 != -0x7fffffffffffffff) {
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(lVar6);
      }
      goto LAB_1801a4493;
    }
    uVar11 = *puVar1;
  }
  if (uVar11 < 0x3c) {
    lVar6 = param_1 + 4;
    uVar7 = 0x3b;
    puVar10 = puVar1;
    uVar14 = uVar11;
    if (0x3a < uVar11) goto LAB_1801a4398;
  }
  else {
    puVar10 = (ulonglong *)(param_1 + 8);
    uVar14 = *(ulonglong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x10);
    bVar19 = uVar11 <= uVar14;
    uVar7 = uVar11;
    uVar11 = uVar14;
    if (bVar19) goto LAB_1801a4398;
  }
  lVar15 = (lVar13 + uVar7) - uVar11;
  do {
    if (uVar18 < uVar5) {
      lVar17 = uVar18 * 0x10;
      if (lVar13 != *(longlong *)(lVar4 + lVar17)) {
        if (puVar12 == puVar3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        goto LAB_1801a436b;
      }
      uVar18 = uVar18 + 1;
      puVar16 = (undefined4 *)(lVar17 + lVar4 + 8);
      puVar8 = puVar12;
    }
    else {
      if (puVar12 == puVar3) {
        *puVar10 = uVar11;
        return;
      }
LAB_1801a436b:
      puVar8 = puVar12 + 1;
      puVar16 = puVar12;
    }
    puVar12 = puVar8;
    lVar13 = lVar13 + 1;
    *(undefined4 *)(lVar6 + uVar11 * 4) = *puVar16;
    uVar11 = uVar11 + 1;
  } while (uVar7 != uVar11);
  uVar14 = uVar7;
  lVar13 = lVar15;
LAB_1801a4398:
  *puVar10 = uVar14;
  if (uVar5 <= uVar18) goto LAB_1801a43f0;
LAB_1801a43b0:
  lVar6 = uVar18 * 0x10;
  if (lVar13 != *(longlong *)(lVar4 + lVar6)) {
    puVar8 = puVar12;
    if (puVar12 != puVar3) goto LAB_1801a4405;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar18 = uVar18 + 1;
  puVar8 = (undefined4 *)(lVar6 + lVar4 + 8);
  uVar11 = *puVar1;
  uVar14 = uVar11;
  if (0x3b < uVar11) goto LAB_1801a4413;
  do {
    uVar14 = 0x3b;
    lVar6 = param_1 + 4;
    puVar10 = puVar1;
    while( true ) {
      uVar2 = *puVar8;
      if (uVar11 == uVar14) {
        FUN_1801fbfd0(param_1);
        uVar11 = *(ulonglong *)(param_1 + 8);
        lVar6 = *(longlong *)(param_1 + 0x10);
        puVar10 = (ulonglong *)(param_1 + 8);
      }
      *(undefined4 *)(lVar6 + uVar11 * 4) = uVar2;
      *puVar10 = *puVar10 + 1;
      lVar13 = lVar13 + 1;
      if (uVar18 < uVar5) goto LAB_1801a43b0;
LAB_1801a43f0:
      puVar8 = puVar12;
      if (puVar12 == puVar3) {
        return;
      }
LAB_1801a4405:
      puVar12 = puVar8 + 1;
      uVar11 = *puVar1;
      uVar14 = uVar11;
      if (uVar11 < 0x3c) break;
LAB_1801a4413:
      uVar11 = *(ulonglong *)(param_1 + 8);
      lVar6 = *(longlong *)(param_1 + 0x10);
      puVar10 = (ulonglong *)(param_1 + 8);
    }
  } while( true );
}


