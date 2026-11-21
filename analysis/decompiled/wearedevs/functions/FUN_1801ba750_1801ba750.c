/* FUN_1801ba750 @ 1801ba750 */

longlong * FUN_1801ba750(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong local_60;
  ushort *puStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = *(ushort *)(param_2 + 2);
  if (uVar7 != 0) {
    *(undefined2 *)(param_2 + 2) = 0;
    pbVar15 = (byte *)*param_2;
    pbVar14 = (byte *)param_2[1];
    uVar13 = 0;
    goto LAB_1801ba878;
  }
  pbVar1 = (byte *)*param_2;
  pbVar14 = (byte *)param_2[1];
  if (pbVar1 == pbVar14) {
    *param_1 = 0;
    param_1[1] = 2;
    param_1[2] = 0;
    return param_1;
  }
  pbVar15 = pbVar1 + 1;
  *param_2 = (longlong)pbVar15;
  bVar3 = *pbVar1;
  uVar13 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    uVar8 = bVar3 & 0x1f;
    pbVar15 = pbVar1 + 2;
    *param_2 = (longlong)pbVar15;
    bVar2 = pbVar1[1];
    if (bVar3 < 0xe0) {
      uVar7 = (ushort)(uVar8 << 6) | (ushort)(bVar2 & 0x3f);
      uVar13 = 0;
      goto LAB_1801ba878;
    }
    pbVar15 = pbVar1 + 3;
    *param_2 = (longlong)pbVar15;
    uVar13 = pbVar1[2] & 0x3f | (bVar2 & 0x3f) << 6;
    if (bVar3 < 0xf0) {
      uVar13 = uVar13 | uVar8 << 0xc;
    }
    else {
      pbVar15 = pbVar1 + 4;
      *param_2 = (longlong)pbVar15;
      uVar13 = pbVar1[3] & 0x3f | uVar13 << 6 | (bVar3 & 7) << 0x12;
    }
    if (0xffff < uVar13) {
      uVar7 = (ushort)(uVar13 + 0xff0000 >> 10) | 0xd800;
      uVar13 = uVar13 & 0x3ff | 0xdc00;
      *(short *)(param_2 + 2) = (short)uVar13;
      goto LAB_1801ba878;
    }
  }
  uVar7 = (ushort)uVar13;
  uVar13 = 0;
LAB_1801ba878:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)pbVar14 - (longlong)pbVar15;
  uVar9 = (((ulonglong)((longlong)pbVar14 - (longlong)pbVar15) / 3 + 1) -
          (ulonglong)((short)uVar13 == 0)) +
          (ulonglong)(0x5555555555555555 < SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0));
  uVar12 = 3;
  if (3 < uVar9) {
    uVar12 = uVar9;
  }
  if (uVar9 < 0x3fffffffffffffff) {
    unaff_RDI = (uVar12 + 1) * 2;
    FUN_180027490();
    uVar10 = 2;
    puVar6 = (ushort *)thunk_FUN_1801d32d0(unaff_RDI,2);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = uVar7;
      lVar11 = 1;
      local_60 = uVar12 + 1;
      puStack_58 = puVar6;
      do {
        if ((short)uVar13 == 0) {
          if (pbVar15 == pbVar14) {
            param_1[2] = lVar11;
            *param_1 = local_60;
            param_1[1] = (longlong)puStack_58;
            return param_1;
          }
          bVar3 = *pbVar15;
          uVar7 = (ushort)bVar3;
          if (-1 < (char)bVar3) {
            pbVar15 = pbVar15 + 1;
            goto joined_r0x0001801ba93c;
          }
          uVar8 = bVar3 & 0x1f;
          pbVar1 = pbVar15 + 1;
          if (bVar3 < 0xe0) {
            pbVar15 = pbVar15 + 2;
            uVar7 = (ushort)(uVar8 << 6) | (ushort)(*pbVar1 & 0x3f);
            uVar13 = 0;
          }
          else {
            uVar13 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar3 < 0xf0) {
              pbVar15 = pbVar15 + 3;
              uVar13 = uVar13 | uVar8 << 0xc;
            }
            else {
              pbVar1 = pbVar15 + 3;
              pbVar15 = pbVar15 + 4;
              uVar13 = *pbVar1 & 0x3f | uVar13 << 6 | (bVar3 & 7) << 0x12;
            }
            if (uVar13 < 0x10000) goto LAB_1801ba935;
            uVar7 = (ushort)(uVar13 + 0xff0000 >> 10) | 0xd800;
            uVar13 = uVar13 & 0x3ff | 0xdc00;
          }
        }
        else {
LAB_1801ba935:
          uVar7 = (ushort)uVar13;
joined_r0x0001801ba93c:
          uVar13 = 0;
        }
        if (lVar11 == local_60) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (longlong)pbVar14 - (longlong)pbVar15;
          local_50 = lVar11;
          FUN_1801f6a80(&local_60,lVar11,
                        ((ulonglong)((longlong)pbVar14 - (longlong)pbVar15) / 3 -
                        (ulonglong)((short)uVar13 == 0)) +
                        (ulonglong)
                        (0x5555555555555555 < SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),0)) + 2,2,
                        2);
          puVar6 = puStack_58;
        }
        puVar6[lVar11] = uVar7;
        lVar11 = lVar11 + 1;
      } while( true );
    }
  }
  else {
    uVar10 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar10,unaff_RDI);
}


