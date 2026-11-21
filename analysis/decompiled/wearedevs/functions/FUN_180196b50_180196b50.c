/* FUN_180196b50 @ 180196b50 */

void FUN_180196b50(longlong *param_1,ulonglong param_2,undefined8 param_3,byte *param_4,
                  byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  
  lVar3 = param_1[2];
  pbVar9 = param_4;
  do {
    uVar6 = 0x110000;
    if (pbVar9 == param_5) break;
    bVar2 = *pbVar9;
    uVar7 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      pbVar1 = pbVar9 + 1;
      if (bVar2 < 0xe0) {
        pbVar9 = pbVar9 + 2;
        uVar7 = (uVar7 & 0x1f) << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar5 = pbVar9[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          pbVar9 = pbVar9 + 3;
          uVar7 = uVar5 | (uVar7 & 0x1f) << 0xc;
        }
        else {
          pbVar1 = pbVar9 + 3;
          pbVar9 = pbVar9 + 4;
          uVar7 = *pbVar1 & 0x3f | uVar5 << 6 | (uVar7 & 7) << 0x12;
          if (uVar7 == 0x110000) break;
        }
      }
      if (uVar7 < 0xe) goto LAB_180196c2a;
LAB_180196b80:
      uVar6 = uVar7;
    }
    else {
      pbVar9 = pbVar9 + 1;
      if (0xd < uVar7) goto LAB_180196b80;
LAB_180196c2a:
      if ((0x2600U >> (uVar7 & 0x1f) & 1) == 0) goto LAB_180196b80;
    }
  } while (uVar6 == 0x110000);
  if ((char)param_2 != '\x02') {
    if ((uVar6 == 0x5c) && (param_1[6] != 0)) {
      param_2 = param_2 & 0xffffffff;
      (**(code **)(param_1[7] + 0x28))(param_1[6],0);
    }
    lVar4 = param_1[1];
    if ((lVar3 == 0) || (*(char *)(lVar4 + -1 + lVar3) != '/')) {
      lVar8 = lVar3;
      if (*param_1 == lVar3) {
        param_2 = param_2 & 0xffffffff;
        FUN_1801f6a80(param_1,lVar3,1,1,1);
        lVar4 = param_1[1];
        lVar8 = param_1[2];
      }
      *(undefined1 *)(lVar4 + lVar8) = 0x2f;
      param_1[2] = lVar3 + 1;
      if ((uVar6 == 0x2f) || (uVar6 == 0x5c)) {
        FUN_180194060(param_1,param_2,param_3,lVar3,pbVar9,param_5);
        return;
      }
    }
    FUN_180194060(param_1,param_2,param_3,lVar3,param_4,param_5);
    return;
  }
  if (uVar6 < 0x3f) {
    if (uVar6 == 0x23) {
      return;
    }
    if (uVar6 == 0x2f) goto LAB_180196d2c;
  }
  else {
    if (uVar6 == 0x3f) {
      return;
    }
    if (uVar6 == 0x110000) goto LAB_180196d2c;
  }
  lVar4 = lVar3;
  if (*param_1 == lVar3) {
    FUN_1801f6a80(param_1,lVar3,1,1,1);
    lVar4 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + lVar4) = 0x2f;
  param_1[2] = lVar3 + 1;
LAB_180196d2c:
  FUN_18019a640(param_1,lVar3,param_4,param_5);
  return;
}


