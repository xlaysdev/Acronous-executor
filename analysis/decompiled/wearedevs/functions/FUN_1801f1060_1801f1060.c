/* FUN_1801f1060 @ 1801f1060 */

ulonglong FUN_1801f1060(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  
  pbVar2 = (byte *)*param_1;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar5 = *pbVar2 - 0x30;
    if (uVar5 < 10) {
      lVar10 = lVar1 + -1;
      if (lVar10 == 0) {
LAB_1801f10f3:
        pbVar7 = pbVar2 + lVar1;
        bVar14 = lVar1 != 1;
        lVar10 = 0;
      }
      else if (pbVar2[1] - 0x30 < 10) {
        uVar5 = (pbVar2[1] - 0x30) + uVar5 * 10;
        lVar10 = lVar1 + -2;
        if (lVar10 == 0) goto LAB_1801f10f3;
        bVar14 = true;
        if (pbVar2[2] - 0x30 < 10) {
          uVar5 = (pbVar2[2] - 0x30) + uVar5 * 10;
          lVar10 = lVar1 + -3;
          if (lVar10 == 0) goto LAB_1801f10f3;
          pbVar7 = pbVar2 + 3;
          if ((byte)(*pbVar7 - 0x30) < 10) goto LAB_1801f13c6;
        }
        else {
          pbVar7 = pbVar2 + 2;
        }
      }
      else {
        pbVar7 = pbVar2 + 1;
        bVar14 = false;
      }
      if (((((bool)((~bVar14 | *pbVar2 != 0x30) & uVar5 < 0x100)) && (lVar10 != 0)) &&
          (*pbVar7 == 0x2e)) && (lVar10 != 1)) {
        bVar3 = pbVar7[1];
        uVar6 = bVar3 - 0x30;
        if (uVar6 < 10) {
          uVar13 = lVar10 - 2;
          if (uVar13 == 0) {
LAB_1801f11d8:
            pbVar7 = pbVar7 + lVar10;
            bVar14 = lVar10 != 2;
            uVar13 = 0;
          }
          else if (pbVar7[2] - 0x30 < 10) {
            uVar6 = (pbVar7[2] - 0x30) + uVar6 * 10;
            uVar13 = lVar10 - 3;
            if (uVar13 == 0) goto LAB_1801f11d8;
            bVar14 = true;
            if (pbVar7[3] - 0x30 < 10) {
              uVar6 = (pbVar7[3] - 0x30) + uVar6 * 10;
              uVar13 = lVar10 - 4;
              if (uVar13 == 0) goto LAB_1801f11d8;
              pbVar7 = pbVar7 + 4;
              if ((byte)(*pbVar7 - 0x30) < 10) goto LAB_1801f13c6;
            }
            else {
              pbVar7 = pbVar7 + 3;
            }
          }
          else {
            pbVar7 = pbVar7 + 2;
            bVar14 = false;
          }
          uVar9 = (uint)(bVar3 != 0x30);
          if ((((bool)((~bVar14 | bVar3 != 0x30) & uVar6 < 0x100)) && (uVar13 != 0)) &&
             (*pbVar7 == 0x2e)) {
            lVar10 = uVar13 - 1;
            pbVar8 = pbVar7 + 1;
            if (lVar10 == 0) {
LAB_1801f12ac:
              uVar4 = (uint)uVar13;
              bVar14 = false;
            }
            else {
              bVar3 = pbVar7[1];
              uVar9 = bVar3 - 0x30;
              if (9 < uVar9) goto LAB_1801f12ac;
              lVar11 = uVar13 - 2;
              if (lVar11 == 0) {
LAB_1801f12b1:
                pbVar7 = pbVar7 + uVar13;
                bVar14 = lVar10 != 1;
                lVar11 = 0;
              }
              else if (pbVar7[2] - 0x30 < 10) {
                uVar9 = (pbVar7[2] - 0x30) + uVar9 * 10;
                lVar11 = uVar13 - 3;
                if (lVar11 == 0) goto LAB_1801f12b1;
                bVar14 = true;
                if (pbVar7[3] - 0x30 < 10) {
                  uVar9 = (pbVar7[3] - 0x30) + uVar9 * 10;
                  lVar11 = uVar13 - 4;
                  if (lVar11 == 0) goto LAB_1801f12b1;
                  pbVar7 = pbVar7 + 4;
                  uVar13 = (ulonglong)(byte)(*pbVar7 - 0x30);
                  if ((byte)(*pbVar7 - 0x30) < 10) goto LAB_1801f12ac;
                }
                else {
                  pbVar7 = pbVar7 + 3;
                }
              }
              else {
                pbVar7 = pbVar7 + 2;
                bVar14 = false;
              }
              uVar4 = (uint)(bVar3 != 0x30);
              bVar14 = (bool)((~bVar14 | bVar3 != 0x30) & uVar9 < 0x100);
              if (bVar14) {
                lVar10 = lVar11;
                pbVar8 = pbVar7;
              }
            }
            if (((bVar14) && (lVar10 != 0)) && (*pbVar8 == 0x2e)) {
              lVar11 = lVar10 + -1;
              if (lVar11 == 0) {
LAB_1801f1391:
                bVar14 = false;
LAB_1801f1394:
                *param_1 = (longlong)(pbVar8 + 1);
                param_1[1] = lVar11;
              }
              else {
                bVar3 = pbVar8[1];
                uVar4 = bVar3 - 0x30;
                if (9 < uVar4) goto LAB_1801f1391;
                lVar12 = lVar10 + -2;
                if (lVar12 == 0) {
LAB_1801f13e5:
                  pbVar7 = pbVar8 + lVar10;
                  bVar14 = lVar11 != 1;
                  lVar12 = 0;
                }
                else if (pbVar8[2] - 0x30 < 10) {
                  uVar4 = (pbVar8[2] - 0x30) + uVar4 * 10;
                  lVar12 = lVar10 + -3;
                  if (lVar12 == 0) goto LAB_1801f13e5;
                  bVar14 = true;
                  if (pbVar8[3] - 0x30 < 10) {
                    uVar4 = (pbVar8[3] - 0x30) + uVar4 * 10;
                    lVar12 = lVar10 + -4;
                    if (lVar12 == 0) goto LAB_1801f13e5;
                    pbVar7 = pbVar8 + 4;
                    if ((byte)(*pbVar7 - 0x30) < 10) goto LAB_1801f1391;
                  }
                  else {
                    pbVar7 = pbVar8 + 3;
                  }
                }
                else {
                  pbVar7 = pbVar8 + 2;
                  bVar14 = false;
                }
                *param_1 = (longlong)pbVar7;
                param_1[1] = lVar12;
                bVar14 = (bool)((~bVar14 | bVar3 != 0x30) & uVar4 < 0x100);
                if (!bVar14) goto LAB_1801f1394;
              }
              if (bVar14) {
                pbVar2 = (byte *)(ulonglong)
                                 (uVar5 & 0xff |
                                 (uVar6 & 0xff) << 8 | (uVar9 & 0xff) << 0x10 | uVar4 << 0x18);
                bVar3 = 1;
                goto LAB_1801f13cf;
              }
            }
          }
        }
      }
    }
  }
LAB_1801f13c6:
  *param_1 = (longlong)pbVar2;
  param_1[1] = lVar1;
  bVar3 = 0;
LAB_1801f13cf:
  return (longlong)pbVar2 << 8 | (ulonglong)bVar3;
}


