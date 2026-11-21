/* FUN_180195450 @ 180195450 */

byte * FUN_180195450(longlong *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar5 = param_2;
  do {
    if (pbVar5 == param_3) {
      return (byte *)0x0;
    }
    bVar2 = *pbVar5;
    uVar7 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      pbVar1 = pbVar5 + 1;
      if (bVar2 < 0xe0) {
        pbVar5 = pbVar5 + 2;
        uVar7 = (uVar7 & 0x1f) << 6 | *pbVar1 & 0x3f;
        goto joined_r0x000180195509;
      }
      uVar8 = pbVar5[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (0xef < bVar2) {
        uVar7 = pbVar5[3] & 0x3f | uVar8 << 6 | (uVar7 & 7) << 0x12;
        if (uVar7 == 0x110000) {
          return (byte *)0x0;
        }
        pbVar5 = pbVar5 + 4;
        goto joined_r0x000180195509;
      }
      pbVar5 = pbVar5 + 3;
      uVar7 = uVar8 | (uVar7 & 0x1f) << 0xc;
      if (uVar7 < 0xe) goto LAB_180195550;
LAB_180195470:
      uVar8 = uVar7;
    }
    else {
      pbVar5 = pbVar5 + 1;
joined_r0x000180195509:
      if (0xd < uVar7) goto LAB_180195470;
LAB_180195550:
      uVar8 = 0x110000;
      if ((0x2600U >> (uVar7 & 0x1f) & 1) == 0) goto LAB_180195470;
    }
  } while (uVar8 == 0x110000);
  if ((uVar8 & 0xffffffdf) - 0x41 < 0x1a) {
    while (param_2 != param_3) {
      bVar2 = *param_2;
      uVar7 = (uint)bVar2;
      uVar8 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar5 = param_2 + 1;
        if (bVar2 < 0xe0) {
          param_2 = param_2 + 2;
          uVar7 = (uVar8 & 0x1f) << 6 | *pbVar5 & 0x3f;
        }
        else {
          uVar7 = param_2[2] & 0x3f | (*pbVar5 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            param_2 = param_2 + 3;
            uVar7 = uVar7 | (uVar8 & 0x1f) << 0xc;
          }
          else {
            pbVar5 = param_2 + 3;
            param_2 = param_2 + 4;
            uVar7 = *pbVar5 & 0x3f | uVar7 << 6 | (uVar8 & 7) << 0x12;
            if (uVar7 == 0x110000) break;
          }
        }
        if (uVar7 < 0xe) goto LAB_180195649;
        goto LAB_1801956f0;
      }
      param_2 = param_2 + 1;
      if (0xd < uVar8) goto LAB_1801956f0;
LAB_180195649:
      if ((0x2600U >> (uVar7 & 0x1f) & 1) == 0) {
LAB_1801956f0:
        if (uVar7 != 0x110000) {
          if (((uVar7 - 0x30 < 10 || uVar7 - 0x61 < 0x1a) || (uVar7 - 0x2d < 2)) || (uVar7 == 0x2b))
          {
            lVar4 = param_1[2];
            lVar3 = lVar4;
            if (*param_1 == lVar4) {
              FUN_1801f6a80(param_1,lVar4,1,1,1);
              lVar3 = param_1[2];
            }
            lVar6 = param_1[1];
          }
          else {
            if (uVar7 == 0x3a) {
              return param_2;
            }
            if (0x19 < uVar7 - 0x41) goto LAB_18019576f;
            lVar4 = param_1[2];
            lVar3 = lVar4;
            if (*param_1 == lVar4) {
              FUN_1801f6a80(param_1,lVar4,1,1,1);
              lVar3 = param_1[2];
            }
            lVar6 = param_1[1];
            uVar7 = (uint)(byte)((byte)uVar7 | 0x20);
          }
          *(char *)(lVar6 + lVar3) = (char)uVar7;
          param_1[2] = lVar4 + 1;
        }
      }
    }
    if ((char)param_1[8] == '\x01') {
      return param_2;
    }
LAB_18019576f:
    param_1[2] = 0;
  }
  return (byte *)0x0;
}


