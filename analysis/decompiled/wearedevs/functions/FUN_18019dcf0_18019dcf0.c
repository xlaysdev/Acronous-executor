/* FUN_18019dcf0 @ 18019dcf0 */

longlong * FUN_18019dcf0(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = 0;
  local_58 = 1;
  local_50 = 0;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    pbVar3 = (byte *)param_2[1];
    pbVar9 = (byte *)*param_2;
    lVar4 = 1;
    lVar7 = 0;
    do {
      do {
        if (pbVar9 == pbVar3) goto LAB_18019dd2e;
        bVar2 = *pbVar9;
        uVar5 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          pbVar1 = pbVar9 + 1;
          if (bVar2 < 0xe0) {
            pbVar9 = pbVar9 + 2;
            uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
            goto joined_r0x00018019de03;
          }
          uVar8 = pbVar9[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (0xef < bVar2) {
            uVar5 = pbVar9[3] & 0x3f | uVar8 << 6 | (uVar5 & 7) << 0x12;
            if (uVar5 != 0x110000) {
              pbVar9 = pbVar9 + 4;
              goto joined_r0x00018019de03;
            }
            goto LAB_18019dd2e;
          }
          pbVar9 = pbVar9 + 3;
          uVar5 = uVar8 | (uVar5 & 0x1f) << 0xc;
          if (uVar5 < 0xe) goto LAB_18019de40;
LAB_18019dd80:
          uVar8 = uVar5;
        }
        else {
          pbVar9 = pbVar9 + 1;
joined_r0x00018019de03:
          if (0xd < uVar5) goto LAB_18019dd80;
LAB_18019de40:
          uVar8 = 0x110000;
          if ((0x2600U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_18019dd80;
        }
      } while (uVar8 == 0x110000);
      if ((uVar8 != 0x5c) && (uVar8 != 0x2f)) break;
      lVar6 = lVar7;
      if (local_60 == lVar7) {
        FUN_1801f6a80(&local_60,lVar7,1,1,1);
        lVar4 = local_58;
        lVar6 = local_50;
      }
      *(char *)(lVar4 + lVar6) = (char)uVar8;
      lVar7 = lVar7 + 1;
      local_50 = lVar7;
    } while ((uVar8 == 0x2f) || (uVar8 == 0x5c));
  }
LAB_18019dd2e:
  param_1[2] = local_50;
  *param_1 = local_60;
  param_1[1] = local_58;
  return param_1;
}


