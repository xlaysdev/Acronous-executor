/* FUN_1801e39d0 @ 1801e39d0 */

void FUN_1801e39d0(longlong *param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar7 = param_2;
  lVar5 = FUN_1801ed5f0();
  bVar4 = true;
  uVar9 = 0;
  if ((byte *)0x2 < pbVar7) {
    if (((pbVar7[lVar5 + -2] & 0xf0) == 0xa0) && (pbVar7[lVar5 + -3] == 0xed)) {
      uVar9 = (pbVar7[lVar5 + -1] & 0x3f) << 10 | (pbVar7[lVar5 + -2] & 0xf) << 0x10;
      bVar4 = false;
    }
  }
  if ((((param_3 < 3) || (*param_2 != 0xed)) || (bVar2 = param_2[1], (bVar2 & 0xf0) != 0xb0)) ||
     (bVar4)) {
    if (((char)param_1[3] != '\0') && (param_3 != 0)) {
      pbVar8 = param_2 + param_3;
      pbVar7 = param_2 + 1;
      pbVar6 = param_2;
      do {
        bVar2 = *pbVar6;
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xe0) {
            pbVar6 = pbVar7 + (pbVar7 != pbVar8);
          }
          else if (bVar2 == 0xed) {
            pbVar1 = pbVar7 + (pbVar7 != pbVar8);
            pbVar6 = pbVar1 + (pbVar1 != pbVar8);
            if ((pbVar7 != pbVar8 && pbVar1 != pbVar8) && (0x9f < *pbVar7)) {
              *(undefined1 *)(param_1 + 3) = 0;
              break;
            }
          }
          else {
            pbVar6 = pbVar7 + (pbVar7 != pbVar8) + (pbVar7 + (pbVar7 != pbVar8) != pbVar8);
            if (0xef < bVar2) {
              pbVar6 = pbVar6 + (pbVar6 != pbVar8);
            }
          }
        }
        else {
          pbVar6 = pbVar7;
        }
        pbVar7 = pbVar6 + (pbVar6 != pbVar8);
      } while (pbVar6 != pbVar8);
    }
  }
  else {
    bVar3 = param_2[2];
    FUN_1801ed5f0(param_1);
    pbVar7 = pbVar7 + -3;
    pbVar8 = (byte *)param_1[2];
    if (pbVar7 <= (byte *)param_1[2]) {
      param_1[2] = (longlong)pbVar7;
      pbVar8 = pbVar7;
    }
    if ((ulonglong)(*param_1 - (longlong)pbVar8) < param_3 + 1) {
      FUN_180200f70(param_1,pbVar8,param_3 + 1,1,1);
    }
    param_2 = param_2 + 3;
    FUN_1801ecb50(param_1,((bVar2 & 0xf) << 6 | bVar3 & 0x3f | uVar9) + 0x10000);
    param_3 = param_3 - 3;
  }
  lVar5 = param_1[2];
  if ((ulonglong)(*param_1 - lVar5) < param_3) {
    FUN_180200f70(param_1,lVar5,param_3,1,1);
    lVar5 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar5),param_2,param_3);
  param_1[2] = lVar5 + param_3;
  return;
}


