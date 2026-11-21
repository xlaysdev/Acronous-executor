/* FUN_180112aa0 @ 180112aa0 */

/* WARNING: Removing unreachable block (ram,0x000180112b8e) */
/* WARNING: Removing unreachable block (ram,0x000180112b2e) */

ulonglong FUN_180112aa0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  byte unaff_BL;
  uint unaff_EBP;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint in_R10D;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  uVar5 = param_1[2];
  lVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar5 != uVar3) {
    if (uVar3 <= uVar5) goto LAB_180113026;
    cVar1 = *(char *)(lVar2 + uVar5);
    uVar13 = uVar5 + 1;
    param_1[2] = uVar13;
    bVar14 = cVar1 - 0x30;
    in_R10D = (uint)bVar14;
    if (9 < bVar14) goto LAB_180112aee;
    uVar15 = 1;
    if (uVar13 == uVar3) {
LAB_180112b33:
      param_1[2] = uVar13;
      goto LAB_180112be4;
    }
    if (uVar13 < uVar3) {
      cVar1 = *(char *)(lVar2 + uVar13);
      uVar8 = uVar5 + 2;
      param_1[2] = uVar8;
      unaff_BL = cVar1 - 0x30;
      if (9 < unaff_BL) goto LAB_180112b33;
      in_R10D = (uint)unaff_BL + in_R10D * 10;
      uVar10 = 0;
      if (in_R10D < 0x100) {
        uVar13 = uVar8;
        if (uVar8 == uVar3) {
LAB_180112b90:
          param_1[2] = uVar8;
        }
        else {
          if (uVar3 <= uVar8) goto LAB_180113023;
          cVar1 = *(char *)(lVar2 + uVar8);
          unaff_R14 = uVar5 + 3;
          param_1[2] = unaff_R14;
          unaff_BL = cVar1 - 0x30;
          if (9 < unaff_BL) goto LAB_180112b90;
          in_R10D = (uint)unaff_BL + in_R10D * 10;
          if (0xff < in_R10D) goto LAB_180112bf1;
          if (unaff_R14 == uVar3) {
LAB_180112bd4:
            param_1[2] = unaff_R14;
            unaff_BL = 0;
            uVar13 = unaff_R14;
          }
          else {
            uVar13 = unaff_R14;
            if (uVar3 <= unaff_R14) goto LAB_180113023;
            cVar1 = *(char *)(lVar2 + unaff_R14);
            param_1[2] = uVar5 + 4;
            bVar14 = cVar1 - 0x30;
            unaff_EBP = (uint)bVar14;
            unaff_BL = 1;
            uVar13 = uVar5 + 4;
            if (9 < bVar14) goto LAB_180112bd4;
          }
          if (unaff_BL != 0) goto LAB_180112bf1;
        }
        goto LAB_180112be4;
      }
      goto LAB_180112bf1;
    }
LAB_180113023:
    uVar5 = uVar13;
LAB_180113026:
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar5,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
  }
LAB_180112aee:
  param_1[2] = uVar5;
  uVar13 = uVar5;
  uVar15 = 0;
LAB_180112be4:
  uVar10 = uVar15;
  uVar8 = uVar13;
  uVar15 = uVar10;
  if (uVar10 == 0) {
LAB_180112bf1:
    param_1[2] = uVar5;
    uVar8 = uVar5;
  }
  if ((uVar10 != 0) && (uVar8 != uVar3)) {
    if (uVar3 <= uVar8) goto LAB_180113032;
    if (*(char *)(lVar2 + uVar8) != '.') goto LAB_180113002;
    uVar11 = uVar8 + 1;
    param_1[2] = uVar11;
    if (uVar11 == uVar3) {
LAB_180112c55:
      param_1[2] = uVar11;
      bVar4 = false;
      uVar13 = uVar11;
LAB_180112d3d:
      uVar8 = uVar13;
      uVar13 = unaff_R14;
      bVar16 = bVar4;
      if (!bVar4) goto LAB_180112d4a;
    }
    else {
      if (uVar3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar11,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
      }
      cVar1 = *(char *)(lVar2 + 1 + uVar8);
      uVar13 = uVar8 + 2;
      param_1[2] = uVar13;
      bVar14 = cVar1 - 0x30;
      uVar15 = (uint)bVar14;
      if (9 < bVar14) goto LAB_180112c55;
      bVar4 = true;
      if (uVar13 == uVar3) {
LAB_180112c8c:
        param_1[2] = uVar13;
        uVar8 = 0;
      }
      else {
        if (uVar3 <= uVar13) goto LAB_180113023;
        cVar1 = *(char *)(lVar2 + uVar13);
        unaff_R14 = uVar8 + 3;
        param_1[2] = unaff_R14;
        unaff_BL = cVar1 - 0x30;
        if (9 < unaff_BL) goto LAB_180112c8c;
        uVar8 = 1;
        uVar13 = unaff_R14;
      }
      unaff_EBP = (uint)uVar8;
      uVar15 = (uint)bVar14;
      if (uVar8 == 0) goto LAB_180112d3d;
      uVar15 = (uint)unaff_BL + (uint)bVar14 * 10;
      bVar16 = false;
      if (uVar15 < 0x100) {
        if (uVar13 == uVar3) {
LAB_180112ce5:
          param_1[2] = uVar13;
          bVar17 = false;
        }
        else {
          if (uVar3 <= uVar13) goto LAB_180113023;
          cVar1 = *(char *)(lVar2 + uVar13);
          unaff_R15 = uVar13 + 1;
          param_1[2] = unaff_R15;
          bVar14 = cVar1 - 0x30;
          uVar8 = (ulonglong)bVar14;
          if (9 < bVar14) goto LAB_180112ce5;
          bVar17 = true;
          uVar13 = unaff_R15;
        }
        unaff_EBP = (uint)uVar8;
        unaff_R14 = 0;
        if (!bVar17) goto LAB_180112d3d;
        uVar15 = unaff_EBP + uVar15 * 10;
        unaff_R14 = uVar8;
        if (0xff < uVar15) goto LAB_180112cb6;
        if (uVar13 == uVar3) {
LAB_180112d2c:
          param_1[2] = uVar13;
          unaff_EBP = 0;
          uVar8 = uVar13;
        }
        else {
          if (uVar3 <= uVar13) goto LAB_180113023;
          cVar1 = *(char *)(lVar2 + uVar13);
          param_1[2] = uVar13 + 1;
          bVar14 = cVar1 - 0x30;
          unaff_R15 = (ulonglong)bVar14;
          unaff_EBP = 1;
          uVar8 = uVar13 + 1;
          if (9 < bVar14) goto LAB_180112d2c;
        }
        uVar13 = uVar8;
        unaff_R14 = uVar13;
        if ((char)unaff_EBP == '\0') goto LAB_180112d3d;
      }
      else {
LAB_180112cb6:
        uVar13 = unaff_R14;
      }
LAB_180112d4a:
      param_1[2] = uVar11;
      uVar8 = uVar11;
    }
    bVar14 = (byte)unaff_R15;
    if ((bVar16) && (uVar8 != uVar3)) {
      if (uVar3 <= uVar8) goto LAB_180113032;
      if (*(char *)(lVar2 + uVar8) != '.') goto LAB_180113002;
      uVar12 = uVar8 + 1;
      param_1[2] = uVar12;
      if (uVar12 == uVar3) {
LAB_180112da3:
        uVar10 = (uint)uVar11;
        param_1[2] = uVar12;
        bVar4 = false;
        uVar8 = uVar12;
      }
      else {
        if (uVar3 <= uVar12) goto LAB_180113050;
        cVar1 = *(char *)(lVar2 + 1 + uVar8);
        param_1[2] = uVar8 + 2;
        bVar9 = cVar1 - 0x30;
        uVar11 = (ulonglong)bVar9;
        uVar10 = (uint)bVar9;
        if (9 < bVar9) goto LAB_180112da3;
        bVar4 = true;
        uVar8 = uVar8 + 2;
      }
      if (bVar4) {
        if (uVar8 == uVar3) {
LAB_180112de0:
          uVar6 = unaff_EBP;
          param_1[2] = uVar8;
          bVar16 = false;
        }
        else {
          uVar13 = uVar8;
          if (uVar3 <= uVar8) goto LAB_180113023;
          cVar1 = *(char *)(lVar2 + uVar8);
          unaff_R15 = uVar8 + 1;
          param_1[2] = unaff_R15;
          bVar14 = cVar1 - 0x30;
          uVar6 = (uint)bVar14;
          unaff_EBP = (uint)bVar14;
          if (9 < bVar14) goto LAB_180112de0;
          bVar16 = true;
          uVar8 = unaff_R15;
        }
        bVar14 = (byte)unaff_R15;
        uVar10 = uVar10 & 0xff;
        uVar13 = 0;
        if (!bVar16) goto LAB_180112e90;
        uVar13 = (ulonglong)(byte)uVar6;
        uVar10 = (uVar6 & 0xff) + uVar10 * 10;
        uVar6 = 0;
        if (uVar10 < 0x100) {
          if (uVar8 == uVar3) {
LAB_180112e39:
            param_1[2] = uVar8;
            bVar14 = false;
          }
          else {
            uVar13 = uVar8;
            if (uVar3 <= uVar8) goto LAB_180113023;
            cVar1 = *(char *)(lVar2 + uVar8);
            param_1[2] = uVar8 + 1;
            bVar14 = cVar1 - 0x30;
            uVar13 = (ulonglong)bVar14;
            if (9 < bVar14) goto LAB_180112e39;
            bVar14 = true;
            uVar8 = uVar8 + 1;
          }
          if (!(bool)bVar14) goto LAB_180112e90;
          uVar10 = (int)uVar13 + uVar10 * 10;
          if (0xff < uVar10) goto LAB_180112e0a;
          if (uVar8 == uVar3) {
LAB_180112e7e:
            param_1[2] = uVar8;
            bVar14 = 0;
            uVar13 = uVar8;
          }
          else {
            uVar13 = uVar8;
            if (uVar3 <= uVar8) goto LAB_180113023;
            cVar1 = *(char *)(lVar2 + uVar8);
            param_1[2] = uVar8 + 1;
            bVar14 = 1;
            uVar13 = uVar8 + 1;
            if (9 < (byte)(cVar1 - 0x30U)) goto LAB_180112e7e;
          }
          uVar8 = uVar13;
          uVar13 = uVar8;
          if (bVar14 == 0) goto LAB_180112e90;
        }
        else {
LAB_180112e0a:
        }
LAB_180112e9b:
        uVar18 = (uint)uVar13;
        param_1[2] = uVar12;
        uVar8 = uVar12;
      }
      else {
LAB_180112e90:
        uVar18 = (uint)uVar13;
        uVar6 = (uint)bVar4;
        if (!bVar4) goto LAB_180112e9b;
      }
      if ((uVar6 != 0) && (uVar8 != uVar3)) {
        if (uVar3 <= uVar8) {
LAB_180113032:
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar8,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
        }
        if (*(char *)(lVar2 + uVar8) != '.') goto LAB_180113002;
        uVar12 = uVar8 + 1;
        param_1[2] = uVar12;
        if (uVar12 == uVar3) {
LAB_180112ef5:
          uVar7 = uVar6;
          param_1[2] = uVar12;
          bVar4 = false;
          uVar13 = uVar12;
        }
        else {
          if (uVar3 <= uVar12) {
LAB_180113050:
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar12,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
          }
          cVar1 = *(char *)(lVar2 + 1 + uVar8);
          param_1[2] = uVar8 + 2;
          bVar9 = cVar1 - 0x30;
          uVar7 = (uint)bVar9;
          uVar6 = (uint)bVar9;
          if (9 < bVar9) goto LAB_180112ef5;
          bVar4 = true;
          uVar13 = uVar8 + 2;
        }
        if (bVar4) {
          if (uVar13 == uVar3) {
LAB_180112f31:
            param_1[2] = uVar13;
            bVar16 = false;
          }
          else {
            if (uVar3 <= uVar13) goto LAB_180113023;
            cVar1 = *(char *)(lVar2 + uVar13);
            param_1[2] = uVar13 + 1;
            bVar14 = cVar1 - 0x30;
            if (9 < bVar14) goto LAB_180112f31;
            bVar16 = true;
            uVar13 = uVar13 + 1;
          }
          uVar18 = uVar7;
          if (!bVar16) goto LAB_180112fcb;
          uVar18 = (uint)bVar14 + uVar7 * 10;
          bVar16 = false;
          if (uVar18 < 0x100) {
            if (uVar13 == uVar3) {
LAB_180112f89:
              param_1[2] = uVar13;
              bVar17 = false;
            }
            else {
              if (uVar3 <= uVar13) goto LAB_180113023;
              cVar1 = *(char *)(lVar2 + uVar13);
              param_1[2] = uVar13 + 1;
              bVar14 = cVar1 - 0x30;
              if (9 < bVar14) goto LAB_180112f89;
              bVar17 = true;
              uVar13 = uVar13 + 1;
            }
            if (bVar17) {
              uVar18 = (uint)bVar14 + uVar18 * 10;
              if (0xff < uVar18) goto LAB_180112fd6;
              if (uVar13 != uVar3) {
                if (uVar3 <= uVar13) goto LAB_180113023;
                cVar1 = *(char *)(lVar2 + uVar13);
                param_1[2] = uVar13 + 1;
                if ((byte)(cVar1 - 0x30U) < 10) goto LAB_180112fd6;
              }
              param_1[2] = uVar13;
            }
            goto LAB_180112fcb;
          }
LAB_180112fd6:
          bVar4 = bVar16;
          param_1[2] = uVar12;
        }
        else {
LAB_180112fcb:
          bVar16 = bVar4;
          if (!bVar4) goto LAB_180112fd6;
        }
        if (bVar4) {
          param_1 = (longlong *)
                    (ulonglong)
                    (in_R10D & 0xff |
                    (uVar15 & 0xff) << 8 | (uVar10 & 0xff) << 0x10 | uVar18 << 0x18);
          bVar14 = 1;
          goto LAB_180113008;
        }
      }
    }
  }
LAB_180113002:
  param_1[2] = uVar5;
  bVar14 = 0;
LAB_180113008:
  return (longlong)param_1 << 8 | (ulonglong)bVar14;
}


