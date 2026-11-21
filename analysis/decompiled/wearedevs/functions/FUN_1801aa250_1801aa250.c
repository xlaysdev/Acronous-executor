/* FUN_1801aa250 @ 1801aa250 */

uint FUN_1801aa250(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    return 0x110000;
  }
  pbVar5 = (byte *)*param_1;
  bVar2 = *pbVar5;
  if (-1 < (char)bVar2) {
    *param_1 = (longlong)(pbVar5 + 1);
    param_1[1] = lVar6 + -1;
    return (uint)bVar2;
  }
  if ((lVar6 != 1) && (0xcc < (byte)(bVar2 + 0xb))) {
    bVar3 = pbVar5[1];
    cVar8 = -0x80;
    cVar7 = -0x41;
    switch(bVar2) {
    case 0xe0:
      cVar8 = -0x60;
      break;
    case 0xed:
      cVar7 = -0x61;
      break;
    case 0xf0:
      cVar8 = -0x70;
      break;
    case 0xf4:
      cVar7 = -0x71;
    }
    if ((byte)(bVar3 - cVar8) <= (byte)(cVar7 - cVar8)) {
      pbVar1 = pbVar5 + 2;
      if (bVar2 < 0xe0) {
        *param_1 = (longlong)pbVar1;
        param_1[1] = lVar6 + -2;
        return bVar3 & 0x3f | (bVar2 & 0x1f) << 6;
      }
      if (lVar6 == 2) {
        *param_1 = (longlong)pbVar1;
        param_1[1] = 0;
        return 0xfffd;
      }
      bVar4 = *pbVar1;
      if ((char)bVar4 < -0x40) {
        *param_1 = (longlong)(pbVar5 + 3);
        param_1[1] = lVar6 + -3;
        if (bVar2 < 0xf0) {
          return bVar4 & 0x3f | (bVar3 & 0x3f) << 6 | (bVar2 & 0xf) << 0xc;
        }
        return 0xfffd;
      }
      lVar6 = lVar6 + -2;
      *param_1 = (longlong)pbVar1;
      goto LAB_1801aa2ea;
    }
  }
  lVar6 = lVar6 + -1;
  *param_1 = (longlong)(pbVar5 + 1);
LAB_1801aa2ea:
  param_1[1] = lVar6;
  return 0xfffd;
}


