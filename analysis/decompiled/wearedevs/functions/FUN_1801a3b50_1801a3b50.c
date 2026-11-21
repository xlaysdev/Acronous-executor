/* FUN_1801a3b50 @ 1801a3b50 */

void FUN_1801a3b50(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  pbVar11 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  uVar7 = (longlong)pbVar2 - (longlong)pbVar11;
  uVar5 = *(ulonglong *)(param_1 + 0x3f8);
  uVar12 = uVar5;
  uVar8 = 0xfd;
  if (0xfd < uVar5) {
    uVar12 = *(ulonglong *)(param_1 + 8);
    uVar8 = uVar5;
  }
  puVar3 = (ulonglong *)param_2[2];
  puVar1 = (ulonglong *)(param_1 + 0x3f8);
  if (uVar8 - uVar12 < uVar7) {
    if (CARRY8(uVar12,uVar7)) {
LAB_1801a3d84:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
    }
    uVar5 = (uVar12 + uVar7) - 1;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar5 = 0;
    if (1 < uVar12 + uVar7) {
      uVar5 = 0xffffffffffffffff >> (~(byte)lVar4 & 0x3f);
    }
    if (uVar5 == 0xffffffffffffffff) goto LAB_1801a3d84;
    lVar4 = FUN_1801a4f90(param_1,uVar5 + 1);
    if (lVar4 != -0x7fffffffffffffff) {
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(lVar4);
      }
      goto LAB_1801a3d84;
    }
    uVar5 = *puVar1;
  }
  if (uVar5 < 0xfe) {
    lVar4 = param_1 + 4;
    uVar8 = 0xfd;
    puVar9 = puVar1;
    uVar12 = uVar5;
    if (0xfc < uVar5) goto LAB_1801a3c0d;
  }
  else {
    uVar12 = *(ulonglong *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 0x10);
    puVar9 = (ulonglong *)(param_1 + 8);
    uVar8 = uVar5;
    if (uVar5 <= uVar12) {
LAB_1801a3c0d:
      *puVar9 = uVar12;
      goto joined_r0x0001801a3ca6;
    }
  }
  do {
    if (pbVar11 == pbVar2) {
      *puVar9 = uVar12;
      return;
    }
    bVar6 = *pbVar11;
    uVar13 = 1L << (bVar6 & 0x3f);
    uVar7 = uVar13;
    uVar5 = 0L << (bVar6 & 0x3f) | 1UL >> 0x40 - (bVar6 & 0x3f);
    if ((bVar6 & 0x40) != 0) {
      uVar7 = 0;
      uVar5 = uVar13;
    }
    if ((uVar7 & *puVar3) == 0 && (uVar5 & puVar3[1]) == 0) {
LAB_1801a3c40:
      uVar10 = (uint)bVar6;
    }
    else {
      uVar10 = 0xfffd;
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
        goto LAB_1801a3c40;
      }
    }
    pbVar11 = pbVar11 + 1;
    *(uint *)(lVar4 + uVar12 * 4) = uVar10;
    uVar12 = uVar12 + 1;
  } while (uVar8 != uVar12);
  *puVar9 = uVar8;
joined_r0x0001801a3ca6:
  if (pbVar11 != pbVar2) {
    do {
      bVar6 = *pbVar11;
      uVar8 = 1L << (bVar6 & 0x3f);
      uVar12 = uVar8;
      uVar5 = 0L << (bVar6 & 0x3f) | 1UL >> 0x40 - (bVar6 & 0x3f);
      if ((bVar6 & 0x40) != 0) {
        uVar12 = 0;
        uVar5 = uVar8;
      }
      if ((uVar12 & *puVar3) == 0 && (uVar5 & puVar3[1]) == 0) {
LAB_1801a3cf7:
        uVar10 = (uint)bVar6;
      }
      else {
        uVar10 = 0xfffd;
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
          goto LAB_1801a3cf7;
        }
      }
      uVar5 = *puVar1;
      if (uVar5 < 0xfe) {
        uVar8 = 0xfd;
        uVar12 = uVar5;
        lVar4 = param_1 + 4;
        puVar9 = puVar1;
      }
      else {
        uVar12 = *(ulonglong *)(param_1 + 8);
        lVar4 = *(longlong *)(param_1 + 0x10);
        puVar9 = (ulonglong *)(param_1 + 8);
        uVar8 = uVar5;
      }
      if (uVar12 == uVar8) {
        FUN_1801fc110(param_1);
        uVar12 = *(ulonglong *)(param_1 + 8);
        lVar4 = *(longlong *)(param_1 + 0x10);
        puVar9 = (ulonglong *)(param_1 + 8);
      }
      pbVar11 = pbVar11 + 1;
      *(uint *)(lVar4 + uVar12 * 4) = uVar10;
      *puVar9 = *puVar9 + 1;
    } while (pbVar11 != pbVar2);
  }
  return;
}


