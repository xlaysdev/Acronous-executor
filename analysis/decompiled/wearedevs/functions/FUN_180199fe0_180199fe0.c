/* FUN_180199fe0 @ 180199fe0 */

undefined1 FUN_180199fe0(byte *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar3 = param_1 + param_2;
  pbVar5 = (byte *)*param_3;
  do {
    if (param_1 == pbVar3) {
      return 1;
    }
    bVar1 = *param_1;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar8 = bVar1 & 0x1f;
      pbVar6 = param_1 + 1;
      if (bVar1 < 0xe0) {
        param_1 = param_1 + 2;
        uVar7 = uVar8 << 6 | *pbVar6 & 0x3f;
      }
      else {
        uVar7 = param_1[2] & 0x3f | (*pbVar6 & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          param_1 = param_1 + 3;
          uVar7 = uVar7 | uVar8 << 0xc;
        }
        else {
          pbVar6 = param_1 + 3;
          param_1 = param_1 + 4;
          uVar7 = *pbVar6 & 0x3f | uVar7 << 6 | (bVar1 & 7) << 0x12;
        }
      }
    }
    else {
      param_1 = param_1 + 1;
    }
    do {
      if (pbVar5 == (byte *)param_3[1]) {
        return 0;
      }
      pbVar6 = pbVar5 + 1;
      *param_3 = (longlong)pbVar6;
      bVar1 = *pbVar5;
      uVar8 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = bVar1 & 0x1f;
        pbVar6 = pbVar5 + 2;
        *param_3 = (longlong)pbVar6;
        bVar2 = pbVar5[1];
        if (bVar1 < 0xe0) {
          uVar8 = uVar4 << 6 | bVar2 & 0x3f;
          goto LAB_18019a120;
        }
        pbVar6 = pbVar5 + 3;
        *param_3 = (longlong)pbVar6;
        uVar8 = pbVar5[2] & 0x3f | (bVar2 & 0x3f) << 6;
        if (0xef < bVar1) {
          pbVar6 = pbVar5 + 4;
          *param_3 = (longlong)pbVar6;
          uVar8 = pbVar5[3] & 0x3f | uVar8 << 6 | (bVar1 & 7) << 0x12;
          if (uVar8 == 0x110000) {
            return 0;
          }
          goto LAB_18019a120;
        }
        uVar8 = uVar8 | uVar4 << 0xc;
        if (uVar8 < 0xe) goto LAB_18019a129;
LAB_18019a080:
        pbVar5 = pbVar6;
        uVar4 = uVar8;
      }
      else {
LAB_18019a120:
        if (0xd < uVar8) goto LAB_18019a080;
LAB_18019a129:
        pbVar5 = pbVar6;
        uVar4 = 0x110000;
        if ((0x2600U >> (uVar8 & 0x1f) & 1) == 0) goto LAB_18019a080;
      }
    } while (uVar4 == 0x110000);
    if (uVar4 != uVar7) {
      return 0;
    }
  } while( true );
}


