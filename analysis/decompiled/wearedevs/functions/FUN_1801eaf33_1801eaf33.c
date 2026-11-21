/* FUN_1801eaf33 @ 1801eaf33 */

ulonglong FUN_1801eaf33(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  bool bVar21;
  ulonglong uVar22;
  longlong lVar23;
  char *unaff_R13;
  ulonglong uVar24;
  uint *puVar25;
  bool bVar26;
  uint auStack_28c [129];
  longlong local_88;
  byte *local_80;
  longlong local_78;
  undefined8 local_70;
  char *local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  uint local_44;
  
  memset(auStack_28c + 1,0,0x200);
  local_78 = param_1[3];
  if (local_78 != 0) {
    local_70 = param_2;
    local_68 = (char *)param_1[2];
    cVar8 = *local_68;
    pbVar12 = (byte *)*param_1;
    local_88 = param_1[1];
    local_80 = pbVar12;
    if (local_88 == 0) {
      uVar22 = 0;
    }
    else {
      pbVar10 = pbVar12 + local_88;
      uVar22 = 0;
      do {
        bVar7 = *pbVar12;
        uVar9 = (uint)bVar7;
        if ((char)bVar7 < '\0') {
          uVar17 = bVar7 & 0x1f;
          pbVar1 = pbVar12 + 1;
          if (bVar7 < 0xe0) {
            pbVar12 = pbVar12 + 2;
            uVar9 = uVar17 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar9 = pbVar12[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar7 < 0xf0) {
              pbVar12 = pbVar12 + 3;
              uVar9 = uVar9 | uVar17 << 0xc;
            }
            else {
              uVar9 = pbVar12[3] & 0x3f | uVar9 << 6 | (bVar7 & 7) << 0x12;
              if (uVar9 == 0x110000) break;
              pbVar12 = pbVar12 + 4;
            }
          }
        }
        else {
          pbVar12 = pbVar12 + 1;
        }
        if (uVar22 == 0x80) goto LAB_1801eb2aa;
        auStack_28c[uVar22 + 1] = uVar9;
        uVar22 = uVar22 + 1;
      } while (pbVar12 != pbVar10);
    }
    unaff_R13 = local_68 + local_78;
    local_50 = uVar22 * 4 + 4;
    local_58 = 700;
    uVar15 = 0x48;
    local_60 = 0x80;
    uVar13 = 0;
    pcVar14 = local_68;
    while( true ) {
      pcVar14 = pcVar14 + 1;
      uVar20 = 1;
      bVar21 = true;
      bVar26 = false;
      uVar24 = 0x24;
      uVar18 = 0;
      while( true ) {
        lVar23 = 0;
        if (uVar15 <= uVar24) {
          lVar23 = uVar24 - uVar15;
        }
        uVar16 = lVar23 + (ulonglong)(lVar23 == 0);
        if (0x19 < uVar16) {
          uVar16 = 0x1a;
        }
        if (bVar26) {
          if (pcVar14 == unaff_R13) goto LAB_1801eb2aa;
          cVar6 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        }
        else {
          cVar6 = cVar8;
          if (!bVar21) goto LAB_1801eb2aa;
        }
        bVar7 = cVar6 + 0x9f;
        if (0x19 < bVar7) {
          if (9 < (byte)(cVar6 - 0x30U)) goto LAB_1801eb2aa;
          bVar7 = cVar6 - 0x16;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT71(0,bVar7);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar20;
        uVar11 = SUB168(auVar2 * auVar4,0);
        if ((SUB168(auVar2 * auVar4,8) != 0) ||
           (bVar26 = CARRY8(uVar18,uVar11), uVar18 = uVar18 + uVar11, bVar26)) goto LAB_1801eb2aa;
        if (CONCAT71(0,bVar7) < uVar16) break;
        uVar24 = uVar24 + 0x24;
        bVar21 = false;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar20;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = 0x24 - uVar16;
        uVar20 = SUB168(auVar3 * auVar5,0);
        bVar26 = true;
        if (SUB168(auVar3 * auVar5,8) != 0) goto LAB_1801eb2aa;
      }
      if (CARRY8(uVar13,uVar18)) goto LAB_1801eb2aa;
      uVar20 = uVar22 + 1;
      uVar15 = (uVar13 + uVar18) % uVar20;
      uVar24 = (uVar13 + uVar18) / uVar20 + local_60;
      if ((((uVar24 < local_60) || (uVar24 >> 0x20 != 0)) || (uVar24 == 0x110000)) ||
         ((((uint)uVar24 ^ 0xd800) - 0x110000 < 0xffef0800 || (0x7f < uVar22)))) goto LAB_1801eb2aa;
      if (uVar15 < uVar22) {
        do {
          auStack_28c[uVar22 + 1] = auStack_28c[uVar22];
          uVar22 = uVar22 - 1;
        } while (uVar15 < uVar22);
      }
      else if (0x7f < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar15,0x80,&PTR_s__rust_deps_rustc_demangle_0_1_26_1802922c8);
      }
      auStack_28c[uVar15 + 1] = (uint)uVar24;
      uVar19 = local_70;
      puVar25 = auStack_28c;
      if (pcVar14 == unaff_R13) break;
      uVar18 = (uVar18 / local_58) / uVar20 + uVar18 / local_58;
      lVar23 = 0;
      uVar22 = uVar18;
      if (0x1c7 < uVar18) {
        do {
          uVar18 = uVar22 / 0x23;
          lVar23 = lVar23 + 0x24;
          bVar26 = 0x3e57 < uVar22;
          uVar22 = uVar18;
        } while (bVar26);
      }
      uVar13 = uVar15 + 1;
      cVar8 = *pcVar14;
      uVar15 = (ulonglong)(ushort)(((int)uVar18 * 0x24 & 0xffffU) / ((int)uVar18 + 0x26U & 0xffff))
               + lVar23;
      local_50 = local_50 + 4;
      local_58 = 2;
      local_60 = uVar24;
      uVar22 = uVar20;
    }
    lVar23 = local_50;
    do {
      puVar25 = puVar25 + 1;
      local_44 = *puVar25;
      uVar9 = FUN_1801edd10(&local_44,uVar19);
      uVar22 = (ulonglong)uVar9;
      if ((char)uVar9 != '\0') break;
      lVar23 = lVar23 + -4;
    } while (lVar23 != 0);
    goto LAB_1801eb31f;
  }
  pcVar14 = (char *)*param_1;
  uVar19 = param_1[1];
  goto LAB_1801eb05b;
LAB_1801eb2aa:
  param_2 = local_70;
  cVar8 = FUN_1801f0c50(local_70,"punycode{EmptyInvalidDigitPosOverflowNegOverflowZero",9);
  uVar22 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if ((cVar8 != '\0') ||
     (((local_88 != 0 &&
       ((cVar8 = FUN_1801f0c50(param_2,local_80), cVar8 != '\0' ||
        (cVar8 = FUN_1801f0c50(param_2,&DAT_1802923d2,1), cVar8 != '\0')))) ||
      (cVar8 = FUN_1801f0c50(param_2,local_68,local_78), cVar8 != '\0')))) {
LAB_1801eb31f:
    return uVar22 & 0xffffffff;
  }
  pcVar14 = "}";
  uVar19 = 1;
LAB_1801eb05b:
  uVar22 = FUN_1801f0c50(param_2,pcVar14,uVar19);
  return uVar22;
}


