/* FUN_1801eca50 @ 1801eca50 */

void FUN_1801eca50(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if ((*(char *)(param_2 + 3) != '\x01') && (param_2[2] != 0)) {
    pbVar6 = (byte *)param_2[1];
    pbVar5 = pbVar6 + param_2[2];
    pbVar7 = pbVar6 + 1;
    do {
      bVar1 = *pbVar6;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          pbVar6 = pbVar7 + (pbVar7 != pbVar5);
        }
        else if (bVar1 == 0xed) {
          pbVar8 = pbVar7 + (pbVar7 != pbVar5);
          pbVar6 = pbVar8 + (pbVar8 != pbVar5);
          if (((pbVar7 != pbVar5) && (pbVar8 != pbVar5)) && (0x9f < *pbVar7)) {
            uVar2 = *param_2;
            uVar3 = param_2[1];
            uVar4 = param_2[3];
            param_1[2] = param_2[2];
            param_1[3] = uVar4;
            *param_1 = uVar2;
            param_1[1] = uVar3;
            return;
          }
        }
        else {
          pbVar6 = pbVar7 + (pbVar7 != pbVar5) + (pbVar7 + (pbVar7 != pbVar5) != pbVar5);
          if (0xef < bVar1) {
            pbVar6 = pbVar6 + (pbVar6 != pbVar5);
          }
        }
      }
      else {
        pbVar6 = pbVar7;
      }
      pbVar7 = pbVar6 + (pbVar6 != pbVar5);
    } while (pbVar6 != pbVar5);
  }
  param_1[3] = param_2[2];
  uVar2 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar2;
  *param_1 = 0x8000000000000000;
  return;
}


