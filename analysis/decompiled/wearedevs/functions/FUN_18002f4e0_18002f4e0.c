/* FUN_18002f4e0 @ 18002f4e0 */

longlong * FUN_18002f4e0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  ushort uVar9;
  uint uVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong local_60;
  ushort *puStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pbVar3 = (byte *)*param_2;
  if (pbVar3 == (byte *)0x0) {
LAB_18002f5b3:
    uVar9 = *(ushort *)(param_2 + 3);
    if (uVar9 == 2) {
LAB_18002f5e3:
      *param_1 = 0;
      param_1[1] = 2;
      param_1[2] = 0;
      return param_1;
    }
    uVar13 = *(ushort *)((longlong)param_2 + 0x1a);
    *(undefined2 *)(param_2 + 3) = 0;
    if ((uVar9 & 1) == 0) goto LAB_18002f5e3;
    lVar15 = 4;
    pbVar16 = (byte *)0x0;
    uVar17 = 0;
  }
  else {
    uVar13 = *(ushort *)(param_2 + 2);
    if (uVar13 == 0) {
      pbVar4 = (byte *)param_2[1];
      if (pbVar3 == pbVar4) {
        *param_2 = 0;
        goto LAB_18002f5b3;
      }
      pbVar16 = pbVar3 + 1;
      *param_2 = (longlong)pbVar16;
      bVar2 = *pbVar3;
      uVar7 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar10 = bVar2 & 0x1f;
        pbVar16 = pbVar3 + 2;
        *param_2 = (longlong)pbVar16;
        bVar1 = pbVar3[1];
        if (bVar2 < 0xe0) {
          uVar7 = uVar10 << 6 | bVar1 & 0x3f;
        }
        else {
          pbVar16 = pbVar3 + 3;
          *param_2 = (longlong)pbVar16;
          uVar7 = pbVar3[2] & 0x3f | (bVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            uVar7 = uVar7 | uVar10 << 0xc;
          }
          else {
            pbVar16 = pbVar3 + 4;
            *param_2 = (longlong)pbVar16;
            uVar7 = pbVar3[3] & 0x3f | uVar7 << 6 | (bVar2 & 7) << 0x12;
          }
          if (0xffff < uVar7) {
            uVar13 = (ushort)(uVar7 + 0xff0000 >> 10) | 0xd800;
            *(ushort *)(param_2 + 2) = (ushort)uVar7 & 0x3ff | 0xdc00;
            lVar15 = 1;
            goto LAB_18002f624;
          }
        }
      }
      uVar13 = (ushort)uVar7;
      lVar15 = 0;
    }
    else {
      *(undefined2 *)(param_2 + 2) = 0;
      pbVar4 = (byte *)param_2[1];
      lVar15 = 0;
      pbVar16 = pbVar3;
    }
LAB_18002f624:
    uVar17 = (ulonglong)*(ushort *)(param_2 + 3);
    uVar6 = 0xffffffffffffffff;
    if ((ulonglong)((longlong)pbVar4 - (longlong)pbVar16) < 0xfffffffffffffffd) {
      uVar6 = ((longlong)pbVar4 - (longlong)pbVar16) + 3;
    }
    uVar14 = (uVar6 >> 2) + lVar15;
    uVar6 = uVar14 + uVar17;
    if (uVar17 == 2) {
      uVar6 = uVar14;
    }
    uVar14 = 3;
    if (3 < uVar6) {
      uVar14 = uVar6;
    }
    if (0x3ffffffffffffffe < uVar6) {
      uVar8 = 0;
      goto LAB_18002f66d;
    }
    lVar15 = uVar14 + 1;
  }
  unaff_RDI = lVar15 * 2;
  FUN_180027490();
  uVar8 = 2;
  puVar5 = (ushort *)thunk_FUN_1801d32d0(unaff_RDI,2);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = uVar13;
    local_50 = 1;
    pbVar3 = (byte *)param_2[1];
    uVar7 = (uint)*(ushort *)(param_2 + 2);
    uVar13 = *(ushort *)((longlong)param_2 + 0x1a);
    local_60 = lVar15;
    puStack_58 = puVar5;
    do {
      lVar15 = local_50;
      uVar9 = (ushort)uVar7;
      if (pbVar16 == (byte *)0x0) {
LAB_18002f750:
        if ((uVar17 & 1) == 0) {
          param_1[2] = local_50;
          *param_1 = local_60;
          param_1[1] = (longlong)puStack_58;
          return param_1;
        }
        uVar17 = 0;
        pbVar16 = (byte *)0x0;
        lVar12 = 0;
        uVar9 = uVar13;
        if (local_50 == local_60) goto LAB_18002f784;
      }
      else {
        if (uVar9 == 0) {
          if (pbVar16 == pbVar3) goto LAB_18002f750;
          bVar2 = *pbVar16;
          uVar9 = (ushort)bVar2;
          if ((char)bVar2 < '\0') {
            uVar7 = bVar2 & 0x1f;
            pbVar4 = pbVar16 + 1;
            if (bVar2 < 0xe0) {
              pbVar16 = pbVar16 + 2;
              uVar9 = (ushort)(uVar7 << 6) | (ushort)(*pbVar4 & 0x3f);
              uVar7 = 0;
            }
            else {
              uVar10 = pbVar16[2] & 0x3f | (*pbVar4 & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                pbVar16 = pbVar16 + 3;
                uVar10 = uVar10 | uVar7 << 0xc;
              }
              else {
                pbVar4 = pbVar16 + 3;
                pbVar16 = pbVar16 + 4;
                uVar10 = *pbVar4 & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
              }
              if (uVar10 < 0x10000) {
                uVar9 = (ushort)uVar10;
                uVar7 = 0;
              }
              else {
                uVar9 = (ushort)(uVar10 + 0xff0000 >> 10) | 0xd800;
                uVar7 = uVar10 & 0x3ff | 0xdc00;
              }
            }
          }
          else {
            pbVar16 = pbVar16 + 1;
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
        if (local_50 == local_60) {
          uVar14 = (longlong)pbVar3 - (longlong)pbVar16;
          uVar6 = (ulonglong)((short)uVar7 != 0);
          uVar11 = uVar14 + 3;
          if (0xfffffffffffffffc < uVar14) {
            uVar11 = 0xffffffffffffffff;
          }
          if ((short)uVar17 == 2) {
            lVar12 = (uVar11 >> 2) + uVar6;
            uVar17 = 2;
          }
          else {
            lVar12 = (uVar11 >> 2) + uVar6 + uVar17;
          }
LAB_18002f784:
          FUN_1801f6a80(&local_60,local_50,lVar12 + 1,2,2);
          puVar5 = puStack_58;
        }
        else {
        }
      }
      puVar5[lVar15] = uVar9;
      local_50 = lVar15 + 1;
    } while( true );
  }
LAB_18002f66d:
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar8,unaff_RDI);
}


