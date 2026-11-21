/* FUN_1801020a0 @ 1801020a0 */

longlong * FUN_1801020a0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte *pbVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong unaff_RBX;
  ushort uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  longlong local_60;
  ushort *puStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pbVar3 = (byte *)*param_2;
  if (pbVar3 == (byte *)0x0) {
LAB_18010216e:
    uVar13 = *(ushort *)(param_2 + 3);
    if (uVar13 == 2) {
LAB_18010219b:
      *param_1 = 0;
      param_1[1] = 2;
      param_1[2] = 0;
      return param_1;
    }
    uVar11 = *(ushort *)((longlong)param_2 + 0x1a);
    *(undefined2 *)(param_2 + 3) = 0;
    if ((uVar13 & 1) == 0) goto LAB_18010219b;
    lVar12 = 4;
    pbVar18 = (byte *)0x0;
    uVar16 = 0;
  }
  else {
    uVar11 = *(ushort *)(param_2 + 2);
    if (uVar11 == 0) {
      pbVar6 = (byte *)param_2[1];
      if (pbVar3 == pbVar6) {
        *param_2 = 0;
        goto LAB_18010216e;
      }
      pbVar18 = pbVar3 + 1;
      *param_2 = (longlong)pbVar18;
      bVar2 = *pbVar3;
      uVar10 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar14 = bVar2 & 0x1f;
        pbVar18 = pbVar3 + 2;
        *param_2 = (longlong)pbVar18;
        bVar1 = pbVar3[1];
        if (bVar2 < 0xe0) {
          uVar10 = uVar14 << 6 | bVar1 & 0x3f;
        }
        else {
          pbVar18 = pbVar3 + 3;
          *param_2 = (longlong)pbVar18;
          uVar10 = pbVar3[2] & 0x3f | (bVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            uVar10 = uVar10 | uVar14 << 0xc;
          }
          else {
            pbVar18 = pbVar3 + 4;
            *param_2 = (longlong)pbVar18;
            uVar10 = pbVar3[3] & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
          }
          if (0xffff < uVar10) {
            uVar11 = (ushort)(uVar10 + 0xff0000 >> 10) | 0xd800;
            *(ushort *)(param_2 + 2) = (ushort)uVar10 & 0x3ff | 0xdc00;
            lVar12 = 1;
            goto LAB_1801021d8;
          }
        }
      }
      uVar11 = (ushort)uVar10;
      lVar12 = 0;
    }
    else {
      *(undefined2 *)(param_2 + 2) = 0;
      pbVar6 = (byte *)param_2[1];
      lVar12 = 0;
      pbVar18 = pbVar3;
    }
LAB_1801021d8:
    uVar16 = (ulonglong)*(ushort *)(param_2 + 3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)pbVar6 - (longlong)pbVar18;
    lVar12 = (ulonglong)((longlong)pbVar6 - (longlong)pbVar18) / 3 + lVar12;
    lVar15 = lVar12 + uVar16;
    if (uVar16 == 2) {
      lVar15 = lVar12;
    }
    uVar7 = lVar15 + (ulonglong)
                     (0x5555555555555555 < SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0));
    uVar9 = 3;
    if (3 < uVar7) {
      uVar9 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar7) {
      uVar17 = 0;
      goto LAB_180102236;
    }
    lVar12 = uVar9 + 1;
  }
  unaff_RBX = lVar12 * 2;
  FUN_180027490();
  uVar17 = 2;
  puVar8 = (ushort *)thunk_FUN_1801d32d0(unaff_RBX,2);
  if (puVar8 != (ushort *)0x0) {
    *puVar8 = uVar11;
    local_50 = 1;
    pbVar3 = (byte *)param_2[1];
    uVar10 = (uint)*(ushort *)(param_2 + 2);
    uVar11 = *(ushort *)((longlong)param_2 + 0x1a);
    local_60 = lVar12;
    puStack_58 = puVar8;
    do {
      lVar12 = local_50;
      uVar13 = (ushort)uVar10;
      if (pbVar18 == (byte *)0x0) {
LAB_180102330:
        if ((uVar16 & 1) == 0) {
          param_1[2] = local_50;
          *param_1 = local_60;
          param_1[1] = (longlong)puStack_58;
          return param_1;
        }
        uVar16 = 0;
        pbVar18 = (byte *)0x0;
        lVar15 = 0;
        uVar13 = uVar11;
        if (local_50 == local_60) goto LAB_180102367;
      }
      else {
        if (uVar13 == 0) {
          if (pbVar18 == pbVar3) goto LAB_180102330;
          bVar2 = *pbVar18;
          uVar13 = (ushort)bVar2;
          if ((char)bVar2 < '\0') {
            uVar10 = bVar2 & 0x1f;
            pbVar6 = pbVar18 + 1;
            if (bVar2 < 0xe0) {
              pbVar18 = pbVar18 + 2;
              uVar13 = (ushort)(uVar10 << 6) | (ushort)(*pbVar6 & 0x3f);
              uVar10 = 0;
            }
            else {
              uVar14 = pbVar18[2] & 0x3f | (*pbVar6 & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                pbVar18 = pbVar18 + 3;
                uVar14 = uVar14 | uVar10 << 0xc;
              }
              else {
                pbVar6 = pbVar18 + 3;
                pbVar18 = pbVar18 + 4;
                uVar14 = *pbVar6 & 0x3f | uVar14 << 6 | (bVar2 & 7) << 0x12;
              }
              if (uVar14 < 0x10000) {
                uVar13 = (ushort)uVar14;
                uVar10 = 0;
              }
              else {
                uVar13 = (ushort)(uVar14 + 0xff0000 >> 10) | 0xd800;
                uVar10 = uVar14 & 0x3ff | 0xdc00;
              }
            }
          }
          else {
            pbVar18 = pbVar18 + 1;
            uVar10 = 0;
          }
        }
        else {
          uVar10 = 0;
        }
        if (local_50 == local_60) {
          uVar9 = (longlong)pbVar3 - (longlong)pbVar18;
          uVar7 = (ulonglong)((short)uVar10 != 0);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar9;
          uVar9 = uVar9 / 3;
          if ((short)uVar16 == 2) {
            lVar15 = uVar9 + uVar7;
            uVar16 = 2;
          }
          else {
            lVar15 = uVar9 + uVar7 + uVar16;
          }
          lVar15 = lVar15 + (ulonglong)
                            (0x5555555555555555 < SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),0));
LAB_180102367:
          FUN_1801f6a80(&local_60,local_50,lVar15 + 1,2,2);
          puVar8 = puStack_58;
        }
        else {
        }
      }
      puVar8[lVar12] = uVar13;
      local_50 = lVar12 + 1;
    } while( true );
  }
LAB_180102236:
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar17,unaff_RBX);
}


