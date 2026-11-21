/* FUN_1801e6984 @ 1801e6984 */

uint FUN_1801e6984(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  longlong lVar8;
  byte **local_88;
  byte *local_80;
  byte **local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 local_58;
  byte *local_50;
  longlong local_48;
  byte *local_40;
  longlong local_38;
  byte local_2c;
  byte local_2b [3];
  
  uVar2 = param_1[4];
  lVar5 = param_1[1] - uVar2;
  if ((ulonglong)param_1[1] < uVar2) {
    return 0x110001;
  }
  pbVar6 = (byte *)*param_1;
  *param_1 = (longlong)(pbVar6 + uVar2);
  param_1[1] = lVar5;
  if (uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_1802921b8,0x28,&PTR_s__rust_deps_rustc_demangle_0_1_26_1802921e0);
  }
  bVar1 = *pbVar6;
  uVar3 = bVar1 - 0x30;
  if (0x39 < bVar1) {
    uVar3 = (bVar1 - 0x41 & 0xffffffdf) + 10;
  }
  if (uVar3 < 0x10) {
    bVar1 = pbVar6[1];
    uVar7 = bVar1 - 0x30;
    if (0x39 < bVar1) {
      uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
    }
    if (uVar7 < 0x10) {
      local_2c = (byte)uVar7 | (char)uVar3 << 4;
      if ((char)local_2c < '\0') {
        if (local_2c < 0xc0) {
          return 0x110000;
        }
        local_38 = 2;
        if (((0xdf < local_2c) && (local_38 = 3, 0xef < local_2c)) &&
           (local_38 = 4, 0xf7 < local_2c)) {
          return 0x110000;
        }
        pbVar4 = local_2b;
        local_2b[0] = 0;
        local_2b[1] = 0;
        local_2b[2] = 0;
        pbVar6 = pbVar6 + 4;
        lVar8 = 0;
        do {
          local_40 = &local_2c;
          if ((ulonglong)(lVar5 + lVar8) < 2) {
            return 0x110000;
          }
          *param_1 = (longlong)pbVar6;
          param_1[1] = lVar5 + lVar8 + -2;
          bVar1 = pbVar6[-2];
          uVar3 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar3 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar3) goto LAB_1801e6bfa;
          bVar1 = pbVar6[-1];
          uVar7 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar7) goto LAB_1801e6bfa;
          *pbVar4 = (byte)uVar7 | (char)uVar3 << 4;
          lVar8 = lVar8 + -2;
          pbVar4 = pbVar4 + 1;
          pbVar6 = pbVar6 + 2;
        } while (local_38 * 2 + -2 + lVar8 != 0);
      }
      else {
        local_2b[0] = 0;
        local_2b[1] = 0;
        local_2b[2] = 0;
        local_38 = 1;
      }
      local_40 = &local_2c;
      FUN_1801f2ab0(&local_88,local_40,local_38);
      if ((char)local_88 != '\0') {
        return 0x110000;
      }
      local_50 = local_80;
      local_48 = (longlong)local_78;
      if (local_78 != (byte **)0x0) {
        bVar1 = *local_80;
        uVar3 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          if (bVar1 < 0xe0) {
            pbVar6 = local_80 + 2;
            uVar3 = (uVar3 & 0x1f) << 6 | local_80[1] & 0x3f;
          }
          else {
            uVar7 = local_80[2] & 0x3f | (local_80[1] & 0x3f) << 6;
            if (bVar1 < 0xf0) {
              pbVar6 = local_80 + 3;
              uVar3 = (uVar3 & 0x1f) << 0xc | uVar7;
            }
            else {
              pbVar6 = local_80 + 4;
              uVar3 = (uVar3 & 7) << 0x12 | local_80[3] & 0x3f | uVar7 << 6;
            }
          }
        }
        else {
          pbVar6 = local_80 + 1;
        }
        if ((pbVar6 == local_80 + (longlong)local_78) && (uVar3 != 0x110000)) {
          return uVar3;
        }
      }
      local_58 = FUN_1801ec378();
      local_68 = &local_58;
      local_88 = &local_40;
      local_80 = &LAB_1801eae04;
      local_78 = &local_50;
      local_70 = &LAB_1800a54a0;
      local_60 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_1802921f8,&local_88,&PTR_s__rust_deps_rustc_demangle_0_1_26_180292270);
    }
  }
LAB_1801e6bfa:
                    /* WARNING: Subroutine does not return */
  FUN_180201ba0(&PTR_s__rust_deps_rustc_demangle_0_1_26_1802921a0);
}


