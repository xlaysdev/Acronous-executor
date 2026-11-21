/* FUN_18019d960 @ 18019d960 */

byte * FUN_18019d960(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  
  pbVar4 = param_1 + param_2;
  pbVar5 = (byte *)0x0;
  pbVar10 = param_1;
  do {
    pbVar7 = pbVar5;
    if (pbVar10 == pbVar4) {
      pbVar7 = (byte *)0x0;
      pbVar8 = pbVar4;
      break;
    }
    bVar1 = *pbVar10;
    uVar9 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if (bVar1 < 0xe0) {
        pbVar8 = pbVar10 + 2;
        uVar9 = (uVar9 & 0x1f) << 6 | pbVar10[1] & 0x3f;
      }
      else {
        uVar6 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          pbVar8 = pbVar10 + 3;
          uVar9 = uVar6 | (uVar9 & 0x1f) << 0xc;
        }
        else {
          pbVar8 = pbVar10 + 4;
          uVar9 = pbVar10[3] & 0x3f | uVar6 << 6 | (uVar9 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar8 = pbVar10 + 1;
    }
    pbVar5 = pbVar8 + ((longlong)pbVar7 - (longlong)pbVar10);
    pbVar10 = pbVar8;
  } while (uVar9 < 0x21);
LAB_18019da39:
  do {
    if (pbVar8 == pbVar4) goto LAB_18019daa7;
    bVar1 = pbVar4[-1];
    if (-1 < (char)bVar1) {
      pbVar4 = pbVar4 + -1;
      if (0x20 < bVar1) goto LAB_18019daa7;
      goto LAB_18019da39;
    }
    bVar2 = pbVar4[-2];
    if ((char)bVar2 < -0x40) {
      bVar3 = pbVar4[-3];
      if ((char)bVar3 < -0x40) {
        pbVar5 = pbVar4 + -4;
        uVar9 = bVar3 & 0x3f | (pbVar4[-4] & 7) << 6;
      }
      else {
        pbVar5 = pbVar4 + -3;
        uVar9 = bVar3 & 0xf;
      }
      uVar9 = bVar2 & 0x3f | uVar9 << 6;
    }
    else {
      pbVar5 = pbVar4 + -2;
      uVar9 = bVar2 & 0x1f;
    }
    pbVar4 = pbVar5;
    if (0x20 < ((uint)(bVar1 & 0x3f) | uVar9 << 6)) {
LAB_18019daa7:
      return param_1 + (longlong)pbVar7;
    }
  } while( true );
}


