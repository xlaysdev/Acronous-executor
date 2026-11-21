/* FUN_1801f3290 @ 1801f3290 */

bool FUN_1801f3290(uint param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  undefined4 in_R10D;
  int iVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  
  if (param_1 < 0x20) {
LAB_1801f32a2:
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (0x7e < param_1) {
      bVar9 = (byte)(param_1 >> 8);
      if (param_1 < 0x10000) {
        uVar5 = 0;
        pbVar2 = &DAT_180294082;
        pbVar12 = &DAT_180294080;
        do {
          pbVar8 = pbVar2;
          uVar1 = uVar5 + pbVar12[1];
          if (*pbVar12 == bVar9) {
            if ((uVar1 < uVar5) || (0x11c < uVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(uVar5,uVar1,0x11c,&PTR_s_library_core_src_unicode_printab_180294350);
            }
            uVar7 = 0;
            while (pbVar12[1] != uVar7) {
              lVar6 = uVar5 + uVar7;
              uVar7 = uVar7 + 1;
              if ((&DAT_1802940cc)[lVar6] == (char)param_1) goto LAB_1801f32a2;
            }
          }
          else if (bVar9 < *pbVar12) break;
          uVar5 = uVar1;
          pbVar2 = pbVar8 + (ulonglong)(pbVar8 != &DAT_1802940cc) * 2;
          pbVar12 = pbVar8;
        } while (pbVar8 != &DAT_1802940cc);
        bVar4 = true;
        lVar6 = 0;
        do {
          uVar10 = (uint)(char)(&DAT_1802941e8)[lVar6];
          lVar3 = lVar6 + 1;
          if ((int)uVar10 < 0) {
            if (lVar6 + 1 == 0x124) {
LAB_1801f3549:
                    /* WARNING: Subroutine does not return */
              FUN_180201ba0(&PTR_s_library_core_src_unicode_printab_180294338);
            }
            uVar10 = (uVar10 & 0x7f) << 8 | (uint)(byte)(&DAT_1802941e9)[lVar6];
            lVar3 = lVar6 + 2;
          }
          lVar6 = lVar3;
          param_1 = param_1 - uVar10;
        } while ((-1 < (int)param_1) && (bVar4 = (bool)(bVar4 ^ 1), lVar6 != 0x124));
      }
      else if (param_1 < 0x20000) {
        uVar5 = 0;
        pbVar2 = &DAT_180293d5a;
        pbVar12 = &DAT_180293d58;
        do {
          pbVar8 = pbVar2;
          uVar1 = uVar5 + pbVar12[1];
          if (*pbVar12 == bVar9) {
            if ((uVar1 < uVar5) || (0xd4 < uVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(uVar5,uVar1,0xd4,&PTR_s_library_core_src_unicode_printab_180294350);
            }
            uVar7 = 0;
            while (pbVar12[1] != uVar7) {
              lVar6 = uVar5 + uVar7;
              uVar7 = uVar7 + 1;
              if ((&DAT_180293db4)[lVar6] == (char)param_1) goto LAB_1801f32a2;
            }
          }
          else if (bVar9 < *pbVar12) break;
          uVar5 = uVar1;
          pbVar2 = pbVar8 + (ulonglong)(pbVar8 != &DAT_180293db4) * 2;
          pbVar12 = pbVar8;
        } while (pbVar8 != &DAT_180293db4);
        param_1 = param_1 & 0xffff;
        bVar4 = true;
        lVar6 = 0;
        do {
          uVar10 = (uint)(char)(&DAT_180293e88)[lVar6];
          lVar3 = lVar6 + 1;
          if ((int)uVar10 < 0) {
            if (lVar6 + 1 == 0x1f8) goto LAB_1801f3549;
            uVar10 = (uVar10 & 0x7f) << 8 | (uint)(byte)(&DAT_180293e89)[lVar6];
            lVar3 = lVar6 + 2;
          }
          lVar6 = lVar3;
          param_1 = param_1 - uVar10;
        } while ((-1 < (int)param_1) && (bVar4 = (bool)(bVar4 ^ 1), lVar6 != 0x1f8));
      }
      else {
        auVar13._0_4_ = -(uint)(0x7ffffff0 < (int)(param_1 - 0x2ebf0 ^ 0x80000000));
        auVar13._4_4_ = -(uint)(0x7ffff65d < (int)(param_1 - 0x2f800 ^ 0x80000000));
        auVar13._8_4_ = -(uint)(0x7ffffa1d < (int)(param_1 - 0x30000 ^ 0x80000000));
        auVar13._12_4_ = -(uint)(0x7ffffffa < (int)(param_1 - 0x31350 ^ 0x80000000));
        iVar11 = movmskps(in_R10D,auVar13);
        bVar4 = (((param_1 & 0x1ffffe) != 0x2ceae && (param_1 & 0x1ffffe) != 0x2b81e) &&
                param_1 - 0xe0100 < 0xfff5337a) &&
                ((param_1 < 0xe01f0 && (param_1 & 0x1fffe0) != 0x2a6e0) && iVar11 == 0);
      }
    }
  }
  return bVar4;
}


