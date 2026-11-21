/* FUN_180198d10 @ 180198d10 */

void FUN_180198d10(longlong *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  byte **local_80;
  longlong local_78;
  longlong local_70;
  byte *local_68;
  ulonglong local_60;
  byte *local_58;
  byte *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = (longlong)param_3 - (longlong)param_2;
  local_58 = param_2;
  local_50 = param_3;
  if (uVar3 == 0) {
LAB_180199017:
    lVar7 = -0x8000000000000000;
    uVar3 = 0;
  }
  else {
    bVar10 = false;
    lVar7 = 0;
    uVar6 = 0;
    pbVar4 = param_2;
    do {
      bVar2 = *pbVar4;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar1 = pbVar4 + 1;
        if (bVar2 < 0xe0) {
          pbVar4 = pbVar4 + 2;
          uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
          goto joined_r0x000180198e2d;
        }
        uVar8 = pbVar4[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          pbVar4 = pbVar4 + 3;
          uVar5 = uVar8 | (uVar5 & 0x1f) << 0xc;
          goto joined_r0x000180198e2d;
        }
        pbVar1 = pbVar4 + 3;
        pbVar4 = pbVar4 + 4;
        uVar5 = *pbVar1 & 0x3f | uVar8 << 6 | (uVar5 & 7) << 0x12;
        if (uVar5 < 0x40) goto LAB_180198e30;
LAB_180198e43:
        lVar9 = 1;
        if (uVar5 == 0x5c) break;
        lVar7 = lVar7 + 1;
        if ((0x7f < uVar5) && (lVar9 = 2, 0x7ff < uVar5)) {
          lVar9 = 4 - (ulonglong)(uVar5 < 0x10000);
        }
      }
      else {
        pbVar4 = pbVar4 + 1;
joined_r0x000180198e2d:
        if (0x3f < uVar5) goto LAB_180198e43;
LAB_180198e30:
        lVar9 = 1;
        if ((0x2600UL >> ((ulonglong)uVar5 & 0x3f) & 1) == 0) {
          if ((0x8000800800000000U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0) goto LAB_180198e43;
          break;
        }
        bVar10 = true;
      }
      uVar6 = uVar6 + lVar9;
    } while (pbVar4 != param_3);
    if (bVar10) {
      local_70 = 0;
      local_68 = (byte *)0x1;
      local_60 = 0;
      if (lVar7 != 0) {
        local_80 = &local_58;
        local_78 = lVar7;
        FUN_18019a2c0(&local_80,lVar7 + -1,&local_70);
      }
      bVar10 = SBORROW8(0,local_70);
      uVar3 = local_60;
      lVar7 = local_70;
      pbVar4 = local_68;
    }
    else {
      if (lVar7 != 0) {
        do {
          if (local_58 == param_3) break;
          bVar2 = *local_58;
          uVar5 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            pbVar4 = local_58 + 1;
            if (bVar2 < 0xe0) {
              local_58 = local_58 + 2;
              uVar5 = (uVar5 & 0x1f) << 6 | *pbVar4 & 0x3f;
            }
            else {
              uVar8 = local_58[2] & 0x3f | (*pbVar4 & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                local_58 = local_58 + 3;
                uVar5 = uVar8 | (uVar5 & 0x1f) << 0xc;
              }
              else {
                pbVar4 = local_58 + 3;
                local_58 = local_58 + 4;
                uVar5 = *pbVar4 & 0x3f | uVar8 << 6 | (uVar5 & 7) << 0x12;
                if (uVar5 == 0x110000) break;
              }
            }
          }
          else {
            local_58 = local_58 + 1;
          }
        } while ((((uVar5 < 0xe) && ((0x2600U >> (uVar5 & 0x1f) & 1) != 0)) || (uVar5 == 0x110000))
                || (lVar7 = lVar7 + -1, lVar7 != 0));
      }
      if (uVar6 == 0) goto LAB_180199017;
      if (uVar6 < uVar3) {
        if ((char)param_2[uVar6] < -0x40) goto LAB_180199101;
        uVar3 = uVar6;
      }
      else if (uVar6 != uVar3) {
LAB_180199101:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(param_2,uVar3,0,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180267400);
      }
      bVar10 = true;
      lVar7 = -0x8000000000000000;
      pbVar4 = param_2;
    }
    if (((uVar3 == 2) && (uVar3 = 2, (byte)((*pbVar4 & 0xdf) + 0xbf) < 0x1a)) &&
       ((pbVar4[1] == 0x3a || (pbVar4[1] == 0x7c)))) {
      *param_1 = -0x8000000000000000;
      param_1[1] = 1;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[4] = (longlong)param_2;
      param_1[5] = (longlong)param_3;
      if (!(bool)(bVar10 | lVar7 == 0)) {
        thunk_FUN_1801d3330(pbVar4,lVar7,1);
        return;
      }
      return;
    }
    param_2 = pbVar4;
  }
  *param_1 = lVar7;
  param_1[1] = (longlong)param_2;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = (longlong)local_58;
  param_1[5] = (longlong)local_50;
  return;
}


