/* FUN_18011a8c0 @ 18011a8c0 */

undefined8 FUN_18011a8c0(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  char cVar28;
  byte bVar27;
  char cVar30;
  byte bVar29;
  char cVar32;
  byte bVar31;
  char cVar34;
  byte bVar33;
  char cVar36;
  byte bVar35;
  char cVar38;
  byte bVar37;
  byte bVar39;
  undefined1 auVar26 [16];
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar66 [16];
  undefined8 local_90;
  ulonglong local_88;
  char *local_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_50;
  
  pcVar9 = *(char **)(param_1 + 8);
  local_88 = *(ulonglong *)(param_1 + 0x10);
  if (local_88 == 0) goto LAB_18011aaa0;
  if (local_88 < 8) {
    bVar13 = false;
    pcVar10 = pcVar9;
LAB_18011aa66:
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      bVar13 = (bool)(bVar13 | (cVar3 != '\t' && (byte)(cVar3 + 0x81U) < 0xa1));
    } while (pcVar10 != pcVar9 + local_88);
  }
  else if (local_88 < 0x20) {
    uVar6 = 0;
    uVar11 = 0;
LAB_18011a9d4:
    uVar12 = local_88 & 0xfffffffffffffff8;
    pcVar10 = pcVar9 + uVar12;
    auVar14 = ZEXT416(uVar11);
    auVar15._8_4_ = 0xffffffff;
    auVar15._0_8_ = 0xffffffffffffffff;
    auVar15._12_4_ = 0xffffffff;
    do {
      uVar2 = *(undefined8 *)(pcVar9 + uVar6);
      bVar7 = (char)uVar2 + 0x81;
      cVar28 = (char)((ulonglong)uVar2 >> 8);
      bVar27 = cVar28 + 0x81;
      cVar30 = (char)((ulonglong)uVar2 >> 0x10);
      bVar29 = cVar30 + 0x81;
      cVar32 = (char)((ulonglong)uVar2 >> 0x18);
      bVar31 = cVar32 + 0x81;
      cVar34 = (char)((ulonglong)uVar2 >> 0x20);
      bVar33 = cVar34 + 0x81;
      cVar36 = (char)((ulonglong)uVar2 >> 0x28);
      bVar35 = cVar36 + 0x81;
      cVar38 = (char)((ulonglong)uVar2 >> 0x30);
      cVar3 = (char)((ulonglong)uVar2 >> 0x38);
      bVar37 = cVar38 + 0x81;
      bVar39 = cVar3 + 0x81;
      auVar41[0] = -((byte)((bVar7 < 0xa1) * -0x5f | (bVar7 >= 0xa1) * bVar7) == bVar7);
      auVar41[1] = -((byte)((bVar27 < 0xa1) * -0x5f | (bVar27 >= 0xa1) * bVar27) == bVar27);
      auVar41[2] = -((byte)((bVar29 < 0xa1) * -0x5f | (bVar29 >= 0xa1) * bVar29) == bVar29);
      auVar41[3] = -((byte)((bVar31 < 0xa1) * -0x5f | (bVar31 >= 0xa1) * bVar31) == bVar31);
      auVar41[4] = -((byte)((bVar33 < 0xa1) * -0x5f | (bVar33 >= 0xa1) * bVar33) == bVar33);
      auVar41[5] = -((byte)((bVar35 < 0xa1) * -0x5f | (bVar35 >= 0xa1) * bVar35) == bVar35);
      auVar41[6] = -((byte)((bVar37 < 0xa1) * -0x5f | (bVar37 >= 0xa1) * bVar37) == bVar37);
      auVar41[7] = -((byte)((bVar39 < 0xa1) * -0x5f | (bVar39 >= 0xa1) * bVar39) == bVar39);
      auVar41[8] = 0xff;
      auVar41[9] = 0xff;
      auVar41[10] = 0xff;
      auVar41[0xb] = 0xff;
      auVar41[0xc] = 0xff;
      auVar41[0xd] = 0xff;
      auVar41[0xe] = 0xff;
      auVar41[0xf] = 0xff;
      auVar17[0] = -((char)uVar2 == '\t');
      auVar17[1] = -(cVar28 == '\t');
      auVar17[2] = -(cVar30 == '\t');
      auVar17[3] = -(cVar32 == '\t');
      auVar17[4] = -(cVar34 == '\t');
      auVar17[5] = -(cVar36 == '\t');
      auVar17[6] = -(cVar38 == '\t');
      auVar17[7] = -(cVar3 == '\t');
      auVar17[8] = 0xff;
      auVar17[9] = 0xff;
      auVar17[10] = 0xff;
      auVar17[0xb] = 0xff;
      auVar17[0xc] = 0xff;
      auVar17[0xd] = 0xff;
      auVar17[0xe] = 0xff;
      auVar17[0xf] = 0xff;
      auVar17 = auVar17 | auVar41;
      auVar25._0_14_ = auVar17._0_14_;
      auVar25[0xe] = auVar17[7];
      auVar25[0xf] = auVar17[7];
      auVar24._14_2_ = auVar25._14_2_;
      auVar24._0_13_ = auVar17._0_13_;
      auVar24[0xd] = auVar17[6];
      auVar23._13_3_ = auVar24._13_3_;
      auVar23._0_12_ = auVar17._0_12_;
      auVar23[0xc] = auVar17[6];
      auVar22._12_4_ = auVar23._12_4_;
      auVar22._0_11_ = auVar17._0_11_;
      auVar22[0xb] = auVar17[5];
      auVar21._11_5_ = auVar22._11_5_;
      auVar21._0_10_ = auVar17._0_10_;
      auVar21[10] = auVar17[5];
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_9_ = auVar17._0_9_;
      auVar20[9] = auVar17[4];
      auVar19._9_7_ = auVar20._9_7_;
      auVar19._0_8_ = auVar17._0_8_;
      auVar19[8] = auVar17[4];
      auVar18._8_8_ = auVar19._8_8_;
      auVar18[7] = auVar17[3];
      auVar18[6] = auVar17[3];
      auVar18[5] = auVar17[2];
      auVar18[4] = auVar17[2];
      auVar18[3] = auVar17[1];
      auVar18[2] = auVar17[1];
      auVar18[0] = auVar17[0];
      auVar18[1] = auVar18[0];
      auVar14 = auVar14 | auVar18 ^ auVar15;
      uVar6 = uVar6 + 8;
    } while (uVar12 != uVar6);
    auVar14 = psllw(auVar14,7);
    bVar13 = (((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0x17,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x47,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x67,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0;
    if (local_88 != uVar12) goto LAB_18011aa66;
  }
  else {
    uVar6 = local_88 & 0xffffffffffffffe0;
    auVar14 = (undefined1  [16])0x0;
    uVar12 = 0;
    auVar15 = (undefined1  [16])0x0;
    do {
      pcVar10 = pcVar9 + uVar12;
      pcVar1 = pcVar9 + uVar12 + 0x10;
      bVar7 = *pcVar10 + 0x81;
      bVar27 = pcVar10[1] + 0x81;
      bVar29 = pcVar10[2] + 0x81;
      bVar31 = pcVar10[3] + 0x81;
      bVar33 = pcVar10[4] + 0x81;
      bVar35 = pcVar10[5] + 0x81;
      bVar37 = pcVar10[6] + 0x81;
      bVar39 = pcVar10[7] + 0x81;
      bVar42 = pcVar10[8] + 0x81;
      bVar43 = pcVar10[9] + 0x81;
      bVar44 = pcVar10[10] + 0x81;
      bVar45 = pcVar10[0xb] + 0x81;
      bVar46 = pcVar10[0xc] + 0x81;
      bVar47 = pcVar10[0xd] + 0x81;
      bVar48 = pcVar10[0xe] + 0x81;
      bVar49 = pcVar10[0xf] + 0x81;
      bVar50 = *pcVar1 + 0x81;
      bVar51 = pcVar1[1] + 0x81;
      bVar52 = pcVar1[2] + 0x81;
      bVar53 = pcVar1[3] + 0x81;
      bVar54 = pcVar1[4] + 0x81;
      bVar55 = pcVar1[5] + 0x81;
      bVar56 = pcVar1[6] + 0x81;
      bVar57 = pcVar1[7] + 0x81;
      bVar58 = pcVar1[8] + 0x81;
      bVar59 = pcVar1[9] + 0x81;
      bVar60 = pcVar1[10] + 0x81;
      bVar61 = pcVar1[0xb] + 0x81;
      bVar62 = pcVar1[0xc] + 0x81;
      bVar63 = pcVar1[0xd] + 0x81;
      bVar64 = pcVar1[0xe] + 0x81;
      bVar65 = pcVar1[0xf] + 0x81;
      auVar66[0] = -((byte)((0xa0 < bVar7) * -0x60 | (0xa0 >= bVar7) * bVar7) == bVar7);
      auVar66[1] = -((byte)((0xa0 < bVar27) * -0x60 | (0xa0 >= bVar27) * bVar27) == bVar27);
      auVar66[2] = -((byte)((0xa0 < bVar29) * -0x60 | (0xa0 >= bVar29) * bVar29) == bVar29);
      auVar66[3] = -((byte)((0xa0 < bVar31) * -0x60 | (0xa0 >= bVar31) * bVar31) == bVar31);
      auVar66[4] = -((byte)((0xa0 < bVar33) * -0x60 | (0xa0 >= bVar33) * bVar33) == bVar33);
      auVar66[5] = -((byte)((0xa0 < bVar35) * -0x60 | (0xa0 >= bVar35) * bVar35) == bVar35);
      auVar66[6] = -((byte)((0xa0 < bVar37) * -0x60 | (0xa0 >= bVar37) * bVar37) == bVar37);
      auVar66[7] = -((byte)((0xa0 < bVar39) * -0x60 | (0xa0 >= bVar39) * bVar39) == bVar39);
      auVar66[8] = -((byte)((0xa0 < bVar42) * -0x60 | (0xa0 >= bVar42) * bVar42) == bVar42);
      auVar66[9] = -((byte)((0xa0 < bVar43) * -0x60 | (0xa0 >= bVar43) * bVar43) == bVar43);
      auVar66[10] = -((byte)((0xa0 < bVar44) * -0x60 | (0xa0 >= bVar44) * bVar44) == bVar44);
      auVar66[0xb] = -((byte)((0xa0 < bVar45) * -0x60 | (0xa0 >= bVar45) * bVar45) == bVar45);
      auVar66[0xc] = -((byte)((0xa0 < bVar46) * -0x60 | (0xa0 >= bVar46) * bVar46) == bVar46);
      auVar66[0xd] = -((byte)((0xa0 < bVar47) * -0x60 | (0xa0 >= bVar47) * bVar47) == bVar47);
      auVar66[0xe] = -((byte)((0xa0 < bVar48) * -0x60 | (0xa0 >= bVar48) * bVar48) == bVar48);
      auVar66[0xf] = -((byte)((0xa0 < bVar49) * -0x60 | (0xa0 >= bVar49) * bVar49) == bVar49);
      auVar40[0] = -((byte)((0xa0 < bVar50) * -0x60 | (0xa0 >= bVar50) * bVar50) == bVar50);
      auVar40[1] = -((byte)((0xa0 < bVar51) * -0x60 | (0xa0 >= bVar51) * bVar51) == bVar51);
      auVar40[2] = -((byte)((0xa0 < bVar52) * -0x60 | (0xa0 >= bVar52) * bVar52) == bVar52);
      auVar40[3] = -((byte)((0xa0 < bVar53) * -0x60 | (0xa0 >= bVar53) * bVar53) == bVar53);
      auVar40[4] = -((byte)((0xa0 < bVar54) * -0x60 | (0xa0 >= bVar54) * bVar54) == bVar54);
      auVar40[5] = -((byte)((0xa0 < bVar55) * -0x60 | (0xa0 >= bVar55) * bVar55) == bVar55);
      auVar40[6] = -((byte)((0xa0 < bVar56) * -0x60 | (0xa0 >= bVar56) * bVar56) == bVar56);
      auVar40[7] = -((byte)((0xa0 < bVar57) * -0x60 | (0xa0 >= bVar57) * bVar57) == bVar57);
      auVar40[8] = -((byte)((0xa0 < bVar58) * -0x60 | (0xa0 >= bVar58) * bVar58) == bVar58);
      auVar40[9] = -((byte)((0xa0 < bVar59) * -0x60 | (0xa0 >= bVar59) * bVar59) == bVar59);
      auVar40[10] = -((byte)((0xa0 < bVar60) * -0x60 | (0xa0 >= bVar60) * bVar60) == bVar60);
      auVar40[0xb] = -((byte)((0xa0 < bVar61) * -0x60 | (0xa0 >= bVar61) * bVar61) == bVar61);
      auVar40[0xc] = -((byte)((0xa0 < bVar62) * -0x60 | (0xa0 >= bVar62) * bVar62) == bVar62);
      auVar40[0xd] = -((byte)((0xa0 < bVar63) * -0x60 | (0xa0 >= bVar63) * bVar63) == bVar63);
      auVar40[0xe] = -((byte)((0xa0 < bVar64) * -0x60 | (0xa0 >= bVar64) * bVar64) == bVar64);
      auVar40[0xf] = -((byte)((0xa0 < bVar65) * -0x60 | (0xa0 >= bVar65) * bVar65) == bVar65);
      auVar16[0] = -(*pcVar10 == '\t');
      auVar16[1] = -(pcVar10[1] == '\t');
      auVar16[2] = -(pcVar10[2] == '\t');
      auVar16[3] = -(pcVar10[3] == '\t');
      auVar16[4] = -(pcVar10[4] == '\t');
      auVar16[5] = -(pcVar10[5] == '\t');
      auVar16[6] = -(pcVar10[6] == '\t');
      auVar16[7] = -(pcVar10[7] == '\t');
      auVar16[8] = -(pcVar10[8] == '\t');
      auVar16[9] = -(pcVar10[9] == '\t');
      auVar16[10] = -(pcVar10[10] == '\t');
      auVar16[0xb] = -(pcVar10[0xb] == '\t');
      auVar16[0xc] = -(pcVar10[0xc] == '\t');
      auVar16[0xd] = -(pcVar10[0xd] == '\t');
      auVar16[0xe] = -(pcVar10[0xe] == '\t');
      auVar16[0xf] = -(pcVar10[0xf] == '\t');
      auVar14 = auVar14 | ~auVar16 & auVar66;
      auVar26[0] = -(*pcVar1 == '\t');
      auVar26[1] = -(pcVar1[1] == '\t');
      auVar26[2] = -(pcVar1[2] == '\t');
      auVar26[3] = -(pcVar1[3] == '\t');
      auVar26[4] = -(pcVar1[4] == '\t');
      auVar26[5] = -(pcVar1[5] == '\t');
      auVar26[6] = -(pcVar1[6] == '\t');
      auVar26[7] = -(pcVar1[7] == '\t');
      auVar26[8] = -(pcVar1[8] == '\t');
      auVar26[9] = -(pcVar1[9] == '\t');
      auVar26[10] = -(pcVar1[10] == '\t');
      auVar26[0xb] = -(pcVar1[0xb] == '\t');
      auVar26[0xc] = -(pcVar1[0xc] == '\t');
      auVar26[0xd] = -(pcVar1[0xd] == '\t');
      auVar26[0xe] = -(pcVar1[0xe] == '\t');
      auVar26[0xf] = -(pcVar1[0xf] == '\t');
      auVar15 = auVar15 | ~auVar26 & auVar40;
      uVar12 = uVar12 + 0x20;
    } while (uVar6 != uVar12);
    auVar14 = psllw(auVar15 | auVar14,7);
    bVar13 = (((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0)
                         || (SUB161(auVar14 >> 0x17,0) & 1) != 0) ||
                        (SUB161(auVar14 >> 0x1f,0) & 1) != 0) ||
                       (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                      ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                    (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0)
                  || (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0)
                || (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
              (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
             auVar14[0xf] < '\0';
    uVar11 = (uint)bVar13;
    if (local_88 != uVar6) {
      if ((local_88 & 0x18) == 0) {
        pcVar10 = pcVar9 + uVar6;
        goto LAB_18011aa66;
      }
      goto LAB_18011a9d4;
    }
  }
  if (bVar13) {
    return 0;
  }
LAB_18011aaa0:
  local_90 = 0;
  local_70 = 0;
  local_60 = 0x2c0000002c;
  local_58 = 1;
  local_50 = 1;
  local_80 = pcVar9;
  local_78 = local_88;
  local_68 = local_88;
  lVar4 = FUN_1801199f0(&local_90);
  if (lVar4 != 0) {
    do {
      pbVar5 = (byte *)FUN_180110f50(lVar4);
      if ((((((pcVar9 == (char *)0xa) &&
             (iVar8 = *pbVar5 - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | *pbVar5,
             pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x6b))
            && (iVar8 = pbVar5[1] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[1],
               pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x65))
           && ((iVar8 = pbVar5[2] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[2],
               pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x65
               && (iVar8 = pbVar5[3] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[3],
                  pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7),
                  bVar7 == 0x70)))) &&
          ((iVar8 = pbVar5[4] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[4],
           pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x2d &&
           ((iVar8 = pbVar5[5] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[5],
            pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x61 &&
            (iVar8 = pbVar5[6] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[6],
            pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x6c)))))
          ) && ((iVar8 = pbVar5[7] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[7],
                pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7), bVar7 == 0x69
                && ((iVar8 = pbVar5[8] - 0x41, bVar7 = ((byte)iVar8 < 0x1a) << 5 | pbVar5[8],
                    pcVar9 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar7),
                    bVar7 == 0x76 &&
                    ((byte)(((byte)(pbVar5[9] + 0xbf) < 0x1a) << 5 | pbVar5[9]) == 0x65)))))) {
        return 1;
      }
      lVar4 = FUN_1801199f0(&local_90);
    } while (lVar4 != 0);
  }
  return 0;
}


