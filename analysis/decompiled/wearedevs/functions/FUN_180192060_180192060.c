/* FUN_180192060 @ 180192060 */

ulonglong FUN_180192060(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  do {
    uVar5 = 0x110000;
    uVar6 = 0x110000;
    if (param_1 == param_2) break;
    bVar2 = *param_1;
    uVar7 = (uint)bVar2;
    uVar8 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      pbVar1 = param_1 + 1;
      if (bVar2 < 0xe0) {
        param_1 = param_1 + 2;
        uVar7 = (uVar8 & 0x1f) << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar7 = param_1[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          param_1 = param_1 + 3;
          uVar7 = uVar7 | (uVar8 & 0x1f) << 0xc;
        }
        else {
          pbVar1 = param_1 + 3;
          param_1 = param_1 + 4;
          uVar7 = *pbVar1 & 0x3f | uVar7 << 6 | (uVar8 & 7) << 0x12;
          if (uVar7 == 0x110000) break;
        }
      }
      uVar6 = uVar7;
      if (uVar7 < 0xe) goto LAB_18019211a;
LAB_180192070:
      uVar5 = uVar7;
    }
    else {
      param_1 = param_1 + 1;
      uVar6 = (uint)bVar2;
      if (0xd < uVar8) goto LAB_180192070;
LAB_18019211a:
      uVar7 = uVar6;
      if ((0x2600U >> (uVar7 & 0x1f) & 1) == 0) goto LAB_180192070;
    }
    uVar6 = uVar5;
  } while (uVar5 == 0x110000);
  do {
    uVar5 = 0x110000;
    uVar7 = 0x110000;
    if (param_1 == param_2) break;
    bVar2 = *param_1;
    uVar8 = (uint)bVar2;
    uVar4 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      pbVar1 = param_1 + 1;
      if (bVar2 < 0xe0) {
        param_1 = param_1 + 2;
        uVar8 = (uVar4 & 0x1f) << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar8 = param_1[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          param_1 = param_1 + 3;
          uVar8 = uVar8 | (uVar4 & 0x1f) << 0xc;
        }
        else {
          pbVar1 = param_1 + 3;
          param_1 = param_1 + 4;
          uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (uVar4 & 7) << 0x12;
          if (uVar8 == 0x110000) break;
        }
      }
      uVar7 = uVar8;
      if (uVar8 < 0xe) goto LAB_1801921fa;
LAB_180192150:
      uVar5 = uVar8;
    }
    else {
      param_1 = param_1 + 1;
      uVar7 = (uint)bVar2;
      if (0xd < uVar4) goto LAB_180192150;
LAB_1801921fa:
      uVar8 = uVar7;
      if ((0x2600U >> (uVar8 & 0x1f) & 1) == 0) goto LAB_180192150;
    }
    uVar7 = uVar5;
  } while (uVar5 == 0x110000);
  do {
    uVar5 = 0x110000;
    if (param_1 == param_2) break;
    bVar2 = *param_1;
    uVar8 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      pbVar1 = param_1 + 1;
      if (bVar2 < 0xe0) {
        param_1 = param_1 + 2;
        uVar5 = (uVar8 & 0x1f) << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar4 = param_1[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          param_1 = param_1 + 3;
          uVar5 = uVar4 | (uVar8 & 0x1f) << 0xc;
        }
        else {
          uVar8 = param_1[3] & 0x3f | uVar4 << 6 | (uVar8 & 7) << 0x12;
          if (uVar8 == 0x110000) break;
          param_1 = param_1 + 4;
          uVar5 = uVar8;
        }
      }
    }
    else {
      param_1 = param_1 + 1;
      uVar5 = uVar8;
    }
  } while (((uVar5 < 0xe) && ((0x2600U >> (uVar5 & 0x1f) & 1) != 0)) || (uVar5 == 0x110000));
  uVar3 = 0;
  if ((uVar6 != 0x110000) && (uVar7 != 0x110000)) {
    uVar6 = (uVar6 & 0xffffffdf) - 0x41;
    if (uVar5 == 0x110000) {
      if (uVar6 < 0x1a) {
        uVar3 = (ulonglong)(uVar7 == 0x7c || uVar7 == 0x3a);
        goto LAB_18019237d;
      }
    }
    else if (((uVar6 < 0x1a) && ((uVar7 == 0x7c || (uVar7 == 0x3a)))) && (uVar5 - 0x23 < 0x3a)) {
      uVar3 = 0x200000010001001 >> ((byte)(uVar5 - 0x23) & 0x3f);
      goto LAB_18019237d;
    }
    uVar3 = 0;
  }
LAB_18019237d:
  return uVar3 & 0xffffffffffffff01;
}


