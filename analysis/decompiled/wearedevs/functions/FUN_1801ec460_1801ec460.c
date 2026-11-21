/* FUN_1801ec460 @ 1801ec460 */

undefined8 FUN_1801ec460(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  
  lVar1 = param_1[2];
  uVar4 = 1;
  if ((0x7f < param_2) && (uVar4 = 2, 0x7ff < param_2)) {
    uVar4 = 4 - (ulonglong)(param_2 < 0x10000);
  }
  if ((ulonglong)(*param_1 - lVar1) < uVar4) {
    FUN_180201860(param_1,lVar1,uVar4);
    lVar2 = param_1[1];
    lVar3 = param_1[2];
  }
  else {
    lVar2 = param_1[1];
    lVar3 = lVar1;
  }
  if (param_2 < 0x80) {
    *(byte *)(lVar2 + lVar3) = (byte)param_2;
  }
  else {
    bVar5 = (byte)param_2 & 0x3f | 0x80;
    bVar6 = (byte)(param_2 >> 6);
    if (param_2 < 0x800) {
      *(byte *)(lVar2 + lVar3) = bVar6 | 0xc0;
      *(byte *)(lVar2 + 1 + lVar3) = bVar5;
    }
    else {
      bVar6 = bVar6 & 0x3f | 0x80;
      bVar7 = (byte)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        *(byte *)(lVar2 + lVar3) = bVar7 | 0xe0;
        *(byte *)(lVar2 + 1 + lVar3) = bVar6;
        *(byte *)(lVar2 + 2 + lVar3) = bVar5;
      }
      else {
        *(byte *)(lVar2 + lVar3) = (byte)(param_2 >> 0x12) | 0xf0;
        *(byte *)(lVar2 + 1 + lVar3) = bVar7 & 0x3f | 0x80;
        *(byte *)(lVar2 + 2 + lVar3) = bVar6;
        *(byte *)(lVar2 + 3 + lVar3) = bVar5;
      }
    }
  }
  param_1[2] = uVar4 + lVar1;
  return 0;
}


