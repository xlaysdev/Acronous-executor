/* FUN_1801f3d50 @ 1801f3d50 */

undefined1
FUN_1801f3d50(undefined8 *param_1,ulonglong param_2,uint param_3,ulonglong param_4,
             undefined8 param_5,longlong param_6,char *param_7,longlong param_8)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  bool bVar4;
  short sVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ushort uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  ulonglong *local_b0;
  char **local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  char *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined4 local_54;
  undefined8 local_50;
  byte local_48;
  
  local_80 = param_5;
  local_78 = param_6;
  local_90 = param_7;
  local_88 = param_8;
  local_50 = 0x3030303030303030;
  local_48 = 0x30;
  uVar1 = *(uint *)(param_1 + 2);
  uVar12 = (uint)param_4;
  if (param_3 == 0) {
    uVar15 = (ulonglong)*(ushort *)((longlong)param_1 + 0x16);
    uVar18 = 0;
    local_60 = 0;
  }
  else {
    uVar18 = (ulonglong)*(ushort *)((longlong)param_1 + 0x16);
    local_60 = 9;
    if ((uVar1 & 0x10000000) != 0) {
      local_60 = uVar18;
    }
    uVar15 = uVar18;
    if (local_60 == 0) {
      if (param_3 < uVar12 * 5) {
        uVar18 = 0;
LAB_1801f3fd2:
      }
      else {
LAB_1801f3fde:
        if (param_2 == 0xffffffffffffffff) {
          local_a0 = 0;
          bVar4 = false;
          goto LAB_1801f412d;
        }
        param_2 = param_2 + 1;
      }
    }
    else {
      uVar22 = (ulonglong)param_3 % (param_4 & 0xffffffff);
      uVar10 = (uint)uVar22;
      cVar6 = (char)((ulonglong)param_3 / (param_4 & 0xffffffff)) + '0';
      local_50 = CONCAT71(0x30303030303030,cVar6);
      if (uVar10 == 0) {
        uVar18 = 1;
        local_60 = 1;
      }
      else {
        uVar17 = param_4 & 0xffffffff;
        uVar21 = uVar17 / 10;
        iVar20 = (int)uVar21;
        iVar23 = (int)local_60;
        uVar11 = uVar18;
        if (iVar23 == 1) {
LAB_1801f3f52:
          if ((uint)(iVar20 * 5) <= uVar10) {
LAB_1801f3f70:
            do {
              uVar22 = uVar11 - 1;
              bVar8 = *(byte *)((longlong)&local_54 + uVar11 + 3);
              cVar6 = bVar8 + 1;
              if (0x38 < bVar8) {
                cVar6 = '0';
              }
              *(char *)((longlong)&local_54 + uVar11 + 3) = cVar6;
            } while ((0x38 < bVar8) && (uVar11 = uVar22, uVar22 != 0));
            if (0x38 < bVar8) goto LAB_1801f3fde;
          }
          goto LAB_1801f3fd2;
        }
        if (uVar12 < 10) {
LAB_1801f435a:
                    /* WARNING: Subroutine does not return */
          FUN_180201c20(&PTR_s_library_core_src_time_rs_180294590);
        }
        uVar3 = uVar22 % uVar21;
        uVar10 = (uint)uVar3;
        local_50._0_2_ = CONCAT11((char)(uVar22 / uVar21) + '0',cVar6);
        local_50 = CONCAT62(0x303030303030,(undefined2)local_50);
        if (uVar10 == 0) {
          uVar18 = 2;
          local_60 = 2;
        }
        else {
          uVar22 = uVar17 / 100;
          iVar20 = (int)uVar22;
          if (iVar23 == 2) goto LAB_1801f3f52;
          if (uVar12 < 100) goto LAB_1801f435a;
          uVar21 = uVar3 % uVar22;
          uVar10 = (uint)uVar21;
          local_50._0_3_ = CONCAT12((char)(uVar3 / uVar22) + '0',(undefined2)local_50);
          local_50 = CONCAT53(0x3030303030,(undefined3)local_50);
          if (uVar10 == 0) {
            uVar18 = 3;
            local_60 = 3;
            goto LAB_1801f4122;
          }
          uVar22 = uVar17 / 1000;
          iVar20 = (int)uVar22;
          if (iVar23 == 3) goto LAB_1801f3f52;
          if (uVar12 < 1000) goto LAB_1801f435a;
          uVar3 = uVar21 % uVar22;
          uVar10 = (uint)uVar3;
          local_50._0_4_ = CONCAT13((char)(uVar21 / uVar22) + '0',(undefined3)local_50);
          local_50 = CONCAT44(0x30303030,(undefined4)local_50);
          if (uVar10 == 0) {
            uVar18 = 4;
            local_60 = 4;
            goto LAB_1801f4122;
          }
          uVar22 = uVar17 / 10000;
          iVar20 = (int)uVar22;
          if (iVar23 == 4) goto LAB_1801f3f52;
          if (uVar12 < 10000) goto LAB_1801f435a;
          uVar10 = (uint)(uVar3 % uVar22);
          local_50._0_5_ = CONCAT14((char)(uVar3 / uVar22) + '0',(undefined4)local_50);
          local_50 = CONCAT35(0x303030,(undefined5)local_50);
          if (uVar10 == 0) {
            uVar18 = 5;
            local_60 = 5;
            goto LAB_1801f4122;
          }
          uVar21 = param_4 >> 5 & 0x7ffffff;
          iVar20 = (int)(uVar21 / 0xc35);
          if (iVar23 == 5) goto LAB_1801f3f52;
          if (uVar12 < 100000) goto LAB_1801f435a;
          uVar19 = (ushort)(uVar21 / 0xc35);
          uVar13 = (ushort)(uVar3 % uVar22);
          uVar10 = (uint)uVar13 % (uint)uVar19;
          uVar9 = (ushort)uVar10;
          local_50._0_6_ = CONCAT15((char)(uVar13 / uVar19) + '0',(undefined5)local_50);
          local_50 = CONCAT26(0x3030,(undefined6)local_50);
          if (uVar9 == 0) {
            uVar18 = 6;
            local_60 = 6;
            goto LAB_1801f4122;
          }
          iVar20 = (int)(uVar17 / 1000000);
          if (iVar23 == 6) {
LAB_1801f3f4f:
            uVar10 = (uint)uVar9;
            goto LAB_1801f3f52;
          }
          if (uVar12 < 1000000) goto LAB_1801f435a;
          uVar14 = (uint)(ushort)(uVar17 / 1000000);
          uVar9 = (ushort)(uVar10 % uVar14);
          local_50._0_7_ = CONCAT16((char)(uVar10 / uVar14) + '0',(undefined6)local_50);
          local_50 = CONCAT17(0x30,(undefined7)local_50);
          if (uVar9 == 0) {
            uVar18 = 7;
            local_60 = 7;
            goto LAB_1801f4122;
          }
          iVar20 = (int)(uVar17 / 10000000);
          if (iVar23 == 7) goto LAB_1801f3f4f;
          if (uVar12 < 10000000) goto LAB_1801f435a;
          uVar13 = (ushort)(byte)(uVar17 / 10000000);
          bVar8 = (byte)((uVar9 & 0xff) % uVar13);
          local_50 = CONCAT17((char)((uVar9 & 0xff) / uVar13) + '0',(undefined7)local_50);
          if (bVar8 == 0) {
            uVar18 = 8;
            local_60 = 8;
          }
          else {
            if (iVar23 == 8) {
              if (bVar8 < (byte)((99999999 < uVar12) * '\x05')) goto LAB_1801f3fd2;
              goto LAB_1801f3f70;
            }
            if (uVar12 < 100000000) goto LAB_1801f435a;
            local_48 = bVar8 | 0x30;
            uVar18 = 9;
            local_60 = 9;
          }
        }
      }
    }
  }
LAB_1801f4122:
  bVar4 = true;
  local_a0 = 1;
  local_98 = param_2;
LAB_1801f412d:
  local_70 = 9;
  if (uVar15 < 9) {
    local_70 = uVar15;
  }
  if ((uVar1 & 0x10000000) == 0) {
    local_70 = uVar18;
  }
  local_d0 = &local_a0;
  local_c8 = &local_80;
  local_c0 = &local_70;
  local_b8 = &local_50;
  local_b0 = &local_60;
  local_a8 = &local_90;
  if ((uVar1 & 0x8000000) != 0) {
    local_54 = (uint)*(ushort *)((longlong)param_1 + 0x14);
    uVar22 = (ulonglong)(-0x41 < *param_7);
    if ((param_8 != 1) && (uVar22 = uVar22 + (-0x41 < param_7[1]), param_8 != 2)) {
      uVar22 = uVar22 + (-0x41 < param_7[2]);
    }
    uVar11 = 0x14;
    if (bVar4) {
      if (param_2 == 0) {
        uVar11 = 1;
      }
      else {
        uVar12 = 10;
        uVar11 = param_2 / 10000000000;
        if (param_2 >> 10 < 0x9502f9) {
          uVar12 = 0;
          uVar11 = param_2;
        }
        if (99999 < uVar11) {
          uVar11 = uVar11 / 100000;
          uVar12 = uVar12 | 5;
        }
        iVar20 = (int)uVar11;
        uVar11 = (ulonglong)
                 (((iVar20 + 0x7d8f0U & iVar20 + 0xdfc18U ^ iVar20 + 0x7ff9cU & iVar20 + 0x5fff6U)
                  >> 0x11) + uVar12 + 1);
      }
    }
    if ((uVar1 & 0x10000000) == 0) {
      uVar15 = uVar18;
    }
    lVar16 = uVar15 + 1;
    if (local_70 == 0) {
      lVar16 = 0;
    }
    uVar18 = uVar22 + uVar11 + lVar16 + param_6;
    if (uVar18 < *(ushort *)((longlong)param_1 + 0x14)) {
      uVar12 = local_54 - (int)uVar18;
      switch(uVar1 >> 0x1d & 3) {
      default:
        uVar10 = 0;
        break;
      case 1:
        uVar10 = uVar12;
        break;
      case 2:
        uVar10 = (uVar12 & 0xffff) >> 1;
      }
      uVar2 = *param_1;
      lVar16 = param_1[1];
      uVar14 = uVar10 + 1;
      local_68 = param_1;
      while (uVar13 = (short)uVar14 - 1, uVar14 = (uint)uVar13, uVar13 != 0) {
        cVar6 = (**(code **)(lVar16 + 0x20))(uVar2,uVar1 & 0x1fffff);
        if (cVar6 != '\0') {
          return true;
        }
      }
      cVar6 = FUN_1801f4370(&local_d0,local_68);
      if (cVar6 != '\0') {
        return true;
      }
      uVar9 = (short)uVar12 - (short)uVar10;
      sVar5 = (short)local_54;
      uVar13 = 0xffff;
      do {
        if ((ushort)(uVar13 + (((short)uVar10 + (short)uVar18) - sVar5)) == -1) {
          uVar13 = uVar9;
          break;
        }
        cVar6 = (**(code **)(lVar16 + 0x20))(uVar2,uVar1 & 0x1fffff);
        uVar13 = uVar13 + 1;
      } while (cVar6 == '\0');
      return uVar13 < uVar9;
    }
  }
  uVar7 = FUN_1801f4370(&local_d0,param_1);
  return uVar7;
}


