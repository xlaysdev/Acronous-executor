/* FUN_18009b4c0 @ 18009b4c0 */

byte * FUN_18009b4c0(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar3 = param_1 + param_2;
  pbVar4 = (byte *)0x0;
  pbVar9 = param_1;
  do {
    pbVar6 = pbVar4;
    if (pbVar9 == pbVar3) {
      pbVar6 = (byte *)0x0;
      pbVar7 = pbVar3;
      break;
    }
    bVar1 = *pbVar9;
    uVar8 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if (bVar1 < 0xe0) {
        pbVar7 = pbVar9 + 2;
        uVar8 = (uVar8 & 0x1f) << 6 | pbVar9[1] & 0x3f;
      }
      else {
        uVar5 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          pbVar7 = pbVar9 + 3;
          uVar8 = uVar5 | (uVar8 & 0x1f) << 0xc;
        }
        else {
          pbVar7 = pbVar9 + 4;
          uVar8 = pbVar9[3] & 0x3f | uVar5 << 6 | (uVar8 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar7 = pbVar9 + 1;
    }
    pbVar4 = pbVar7 + ((longlong)pbVar6 - (longlong)pbVar9);
    pbVar9 = pbVar7;
  } while ((uVar8 - 0x5b & 0xfffffffd) == 0);
  do {
    if (pbVar7 == pbVar3) break;
    uVar8 = (uint)(char)pbVar3[-1];
    if ((int)uVar8 < 0) {
      bVar1 = pbVar3[-2];
      if ((char)bVar1 < -0x40) {
        bVar2 = pbVar3[-3];
        if ((char)bVar2 < -0x40) {
          pbVar4 = pbVar3 + -4;
          uVar8 = bVar2 & 0x3f | (pbVar3[-4] & 7) << 6;
        }
        else {
          pbVar4 = pbVar3 + -3;
          uVar8 = bVar2 & 0xf;
        }
        uVar8 = bVar1 & 0x3f | uVar8 << 6;
      }
      else {
        pbVar4 = pbVar3 + -2;
        uVar8 = bVar1 & 0x1f;
      }
      uVar8 = (uint)(pbVar3[-1] & 0x3f) | uVar8 << 6;
      pbVar3 = pbVar4;
    }
    else {
      pbVar3 = pbVar3 + -1;
    }
  } while ((uVar8 - 0x5b & 0xfffffffd) == 0);
  return param_1 + (longlong)pbVar6;
}


