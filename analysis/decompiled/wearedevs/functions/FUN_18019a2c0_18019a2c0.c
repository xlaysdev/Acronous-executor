/* FUN_18019a2c0 @ 18019a2c0 */

undefined8 FUN_18019a2c0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  
  plVar1 = (longlong *)*param_1;
  pbVar12 = (byte *)*plVar1;
  pbVar2 = (byte *)plVar1[1];
  do {
    do {
      if (pbVar12 == pbVar2) {
        return 1;
      }
      pbVar14 = pbVar12 + 1;
      *plVar1 = (longlong)pbVar14;
      bVar9 = *pbVar12;
      uVar7 = (uint)bVar9;
      if ((char)bVar9 < '\0') {
        uVar10 = bVar9 & 0x1f;
        pbVar14 = pbVar12 + 2;
        *plVar1 = (longlong)pbVar14;
        bVar11 = pbVar12[1];
        if (bVar9 < 0xe0) {
          uVar7 = uVar10 << 6 | bVar11 & 0x3f;
          goto LAB_18019a390;
        }
        pbVar14 = pbVar12 + 3;
        *plVar1 = (longlong)pbVar14;
        uVar7 = pbVar12[2] & 0x3f | (bVar11 & 0x3f) << 6;
        if (0xef < bVar9) {
          pbVar14 = pbVar12 + 4;
          *plVar1 = (longlong)pbVar14;
          uVar7 = pbVar12[3] & 0x3f | uVar7 << 6 | (bVar9 & 7) << 0x12;
          if (uVar7 == 0x110000) {
            return 1;
          }
          goto LAB_18019a390;
        }
        uVar7 = uVar7 | uVar10 << 0xc;
        if (uVar7 < 0xe) goto LAB_18019a399;
LAB_18019a2f0:
        pbVar12 = pbVar14;
        uVar10 = uVar7;
      }
      else {
LAB_18019a390:
        if (0xd < uVar7) goto LAB_18019a2f0;
LAB_18019a399:
        pbVar12 = pbVar14;
        uVar10 = 0x110000;
        if ((0x2600U >> (uVar7 & 0x1f) & 1) == 0) goto LAB_18019a2f0;
      }
    } while (uVar10 == 0x110000);
    uVar8 = 1;
    if ((0x7f < uVar10) && (uVar8 = 2, 0x7ff < uVar10)) {
      uVar8 = 4 - (ulonglong)(uVar10 < 0x10000);
    }
    lVar3 = param_3[2];
    if ((ulonglong)(*param_3 - lVar3) < uVar8) {
      FUN_1801f6a80(param_3,lVar3,uVar8,1,1);
      lVar5 = param_3[2];
      lVar6 = param_3[1];
      if (0x7f < uVar10) goto LAB_18019a470;
LAB_18019a40b:
      *(byte *)(lVar6 + lVar5) = (byte)uVar10;
      param_3[2] = uVar8 + lVar3;
    }
    else {
      lVar6 = param_3[1];
      lVar5 = lVar3;
      if (uVar10 < 0x80) goto LAB_18019a40b;
LAB_18019a470:
      bVar9 = (byte)uVar10 & 0x3f | 0x80;
      bVar11 = (byte)(uVar10 >> 6);
      if (uVar10 < 0x800) {
        *(byte *)(lVar6 + lVar5) = bVar11 | 0xc0;
        *(byte *)(lVar6 + 1 + lVar5) = bVar9;
        param_3[2] = uVar8 + lVar3;
      }
      else {
        bVar11 = bVar11 & 0x3f | 0x80;
        bVar13 = (byte)(uVar10 >> 0xc);
        if (uVar10 < 0x10000) {
          *(byte *)(lVar6 + lVar5) = bVar13 | 0xe0;
          *(byte *)(lVar6 + 1 + lVar5) = bVar11;
          *(byte *)(lVar6 + 2 + lVar5) = bVar9;
          param_3[2] = uVar8 + lVar3;
        }
        else {
          *(byte *)(lVar6 + lVar5) = (byte)(uVar10 >> 0x12) | 0xf0;
          *(byte *)(lVar6 + 1 + lVar5) = bVar13 & 0x3f | 0x80;
          *(byte *)(lVar6 + 2 + lVar5) = bVar11;
          *(byte *)(lVar6 + 3 + lVar5) = bVar9;
          param_3[2] = uVar8 + lVar3;
        }
      }
    }
    bVar4 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar4) {
      return 0;
    }
  } while( true );
}


