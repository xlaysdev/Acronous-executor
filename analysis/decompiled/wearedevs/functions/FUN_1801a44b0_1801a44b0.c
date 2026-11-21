/* FUN_1801a44b0 @ 1801a44b0 */

void FUN_1801a44b0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  
  lVar13 = param_2[5];
  uVar8 = param_2[6] - lVar13;
  uVar10 = *(ulonglong *)(param_1 + 0xf0);
  uVar14 = uVar10;
  uVar7 = 0x3b;
  if (0x3b < uVar10) {
    uVar14 = *(ulonglong *)(param_1 + 8);
    uVar7 = uVar10;
  }
  pbVar11 = (byte *)*param_2;
  pbVar3 = (byte *)param_2[1];
  lVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar17 = param_2[4];
  puVar1 = (ulonglong *)(param_1 + 0xf0);
  if (uVar7 - uVar14 < uVar8) {
    if (CARRY8(uVar14,uVar8)) {
LAB_1801a4743:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
    }
    uVar10 = (uVar14 + uVar8) - 1;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = 0;
    if (1 < uVar14 + uVar8) {
      uVar10 = 0xffffffffffffffff >> (~(byte)lVar6 & 0x3f);
    }
    if (uVar10 == 0xffffffffffffffff) goto LAB_1801a4743;
    lVar6 = FUN_1801a4d80(param_1,uVar10 + 1);
    if (lVar6 != -0x7fffffffffffffff) {
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(lVar6);
      }
      goto LAB_1801a4743;
    }
    uVar10 = *puVar1;
  }
  if (uVar10 < 0x3c) {
    lVar6 = param_1 + 4;
    uVar7 = 0x3b;
    puVar9 = puVar1;
    uVar14 = uVar10;
    if (0x3a < uVar10) goto LAB_1801a4640;
  }
  else {
    puVar9 = (ulonglong *)(param_1 + 8);
    uVar14 = *(ulonglong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 0x10);
    bVar18 = uVar10 <= uVar14;
    uVar7 = uVar10;
    uVar10 = uVar14;
    if (bVar18) goto LAB_1801a4640;
  }
  lVar15 = (lVar13 + uVar7) - uVar10;
  do {
    if (uVar17 < uVar5) {
      lVar16 = uVar17 * 0x10;
      if (lVar13 != *(longlong *)(lVar4 + lVar16)) {
        if (pbVar11 == pbVar3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        goto LAB_1801a4609;
      }
      uVar17 = uVar17 + 1;
      uVar12 = *(uint *)(lVar16 + lVar4 + 8);
    }
    else {
      if (pbVar11 == pbVar3) {
        *puVar9 = uVar10;
        return;
      }
LAB_1801a4609:
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar12 = (uint)(byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2);
    }
    lVar13 = lVar13 + 1;
    *(uint *)(lVar6 + uVar10 * 4) = uVar12;
    uVar10 = uVar10 + 1;
  } while (uVar7 != uVar10);
  uVar14 = uVar7;
  lVar13 = lVar15;
LAB_1801a4640:
  *puVar9 = uVar14;
  if (uVar5 <= uVar17) goto LAB_1801a4690;
LAB_1801a4650:
  lVar6 = uVar17 * 0x10;
  if (lVar13 != *(longlong *)(lVar4 + lVar6)) {
    if (pbVar11 != pbVar3) goto LAB_1801a46a5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar17 = uVar17 + 1;
  uVar12 = *(uint *)(lVar6 + lVar4 + 8);
  uVar10 = *puVar1;
  uVar14 = uVar10;
  if (0x3b < uVar10) goto LAB_1801a46c6;
  do {
    uVar14 = 0x3b;
    lVar6 = param_1 + 4;
    puVar9 = puVar1;
    while( true ) {
      if (uVar10 == uVar14) {
        FUN_1801fbfd0(param_1);
        uVar10 = *(ulonglong *)(param_1 + 8);
        lVar6 = *(longlong *)(param_1 + 0x10);
        puVar9 = (ulonglong *)(param_1 + 8);
      }
      *(uint *)(lVar6 + uVar10 * 4) = uVar12;
      *puVar9 = *puVar9 + 1;
      lVar13 = lVar13 + 1;
      if (uVar17 < uVar5) goto LAB_1801a4650;
LAB_1801a4690:
      if (pbVar11 == pbVar3) {
        return;
      }
LAB_1801a46a5:
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar12 = (uint)(byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2);
      uVar10 = *puVar1;
      uVar14 = uVar10;
      if (uVar10 < 0x3c) break;
LAB_1801a46c6:
      uVar10 = *(ulonglong *)(param_1 + 8);
      lVar6 = *(longlong *)(param_1 + 0x10);
      puVar9 = (ulonglong *)(param_1 + 8);
    }
  } while( true );
}


