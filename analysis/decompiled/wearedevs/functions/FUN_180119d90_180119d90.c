/* FUN_180119d90 @ 180119d90 */

bool FUN_180119d90(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  byte bVar30;
  char cVar33;
  byte bVar32;
  char cVar35;
  byte bVar34;
  char cVar37;
  byte bVar36;
  char cVar39;
  byte bVar38;
  char cVar41;
  byte bVar40;
  char cVar43;
  byte bVar42;
  byte bVar44;
  undefined1 auVar31 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined1 auVar71 [16];
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_50;
  
  if (*(ulonglong *)(param_1 + 0x10) == 2) {
    return false;
  }
  if ((*(ulonglong *)(param_1 + 0x10) & 1) == 0) {
    pcVar14 = *(char **)(param_1 + 0x28);
    pcVar13 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x28);
    if (pcVar13 <= pcVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar14,pcVar13,&PTR_s_C__Users_burne__cargo_registry_s_180242da8);
    }
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (longlong)pcVar14 * 0x68;
    local_80 = *(char **)(lVar11 + 0x20);
    local_88 = *(char **)(lVar11 + 0x28);
  }
  else {
    pcVar14 = *(char **)(param_1 + 0x18);
    pcVar13 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x40);
    if (pcVar13 <= pcVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar14,pcVar13,&PTR_s_C__Users_burne__cargo_registry_s_180242dc0);
    }
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + (longlong)pcVar14 * 0x48;
    local_80 = *(char **)(lVar11 + 0x28);
    local_88 = *(char **)(lVar11 + 0x30);
  }
  if (local_88 == (char *)0x0) goto LAB_180119fe0;
  if (&DAT_00000007 < local_88) {
    if (local_88 < (char *)0x20) {
      pcVar13 = (char *)0x0;
      uVar15 = 0;
LAB_180119f14:
      pcVar16 = (char *)((ulonglong)local_88 & 0xfffffffffffffff8);
      pcVar14 = local_80 + (longlong)pcVar16;
      auVar18 = ZEXT416(uVar15);
      auVar19._8_4_ = 0xffffffff;
      auVar19._0_8_ = 0xffffffffffffffff;
      auVar19._12_4_ = 0xffffffff;
      do {
        uVar2 = *(undefined8 *)(local_80 + (longlong)pcVar13);
        bVar30 = (char)uVar2 + 0x81;
        cVar33 = (char)((ulonglong)uVar2 >> 8);
        bVar32 = cVar33 + 0x81;
        cVar35 = (char)((ulonglong)uVar2 >> 0x10);
        bVar34 = cVar35 + 0x81;
        cVar37 = (char)((ulonglong)uVar2 >> 0x18);
        bVar36 = cVar37 + 0x81;
        cVar39 = (char)((ulonglong)uVar2 >> 0x20);
        bVar38 = cVar39 + 0x81;
        cVar41 = (char)((ulonglong)uVar2 >> 0x28);
        bVar40 = cVar41 + 0x81;
        cVar43 = (char)((ulonglong)uVar2 >> 0x30);
        cVar3 = (char)((ulonglong)uVar2 >> 0x38);
        bVar42 = cVar43 + 0x81;
        bVar44 = cVar3 + 0x81;
        auVar46[0] = -((byte)((bVar30 < 0xa1) * -0x5f | (bVar30 >= 0xa1) * bVar30) == bVar30);
        auVar46[1] = -((byte)((bVar32 < 0xa1) * -0x5f | (bVar32 >= 0xa1) * bVar32) == bVar32);
        auVar46[2] = -((byte)((bVar34 < 0xa1) * -0x5f | (bVar34 >= 0xa1) * bVar34) == bVar34);
        auVar46[3] = -((byte)((bVar36 < 0xa1) * -0x5f | (bVar36 >= 0xa1) * bVar36) == bVar36);
        auVar46[4] = -((byte)((bVar38 < 0xa1) * -0x5f | (bVar38 >= 0xa1) * bVar38) == bVar38);
        auVar46[5] = -((byte)((bVar40 < 0xa1) * -0x5f | (bVar40 >= 0xa1) * bVar40) == bVar40);
        auVar46[6] = -((byte)((bVar42 < 0xa1) * -0x5f | (bVar42 >= 0xa1) * bVar42) == bVar42);
        auVar46[7] = -((byte)((bVar44 < 0xa1) * -0x5f | (bVar44 >= 0xa1) * bVar44) == bVar44);
        auVar46[8] = 0xff;
        auVar46[9] = 0xff;
        auVar46[10] = 0xff;
        auVar46[0xb] = 0xff;
        auVar46[0xc] = 0xff;
        auVar46[0xd] = 0xff;
        auVar46[0xe] = 0xff;
        auVar46[0xf] = 0xff;
        auVar21[0] = -((char)uVar2 == '\t');
        auVar21[1] = -(cVar33 == '\t');
        auVar21[2] = -(cVar35 == '\t');
        auVar21[3] = -(cVar37 == '\t');
        auVar21[4] = -(cVar39 == '\t');
        auVar21[5] = -(cVar41 == '\t');
        auVar21[6] = -(cVar43 == '\t');
        auVar21[7] = -(cVar3 == '\t');
        auVar21[8] = 0xff;
        auVar21[9] = 0xff;
        auVar21[10] = 0xff;
        auVar21[0xb] = 0xff;
        auVar21[0xc] = 0xff;
        auVar21[0xd] = 0xff;
        auVar21[0xe] = 0xff;
        auVar21[0xf] = 0xff;
        auVar21 = auVar21 | auVar46;
        auVar29._0_14_ = auVar21._0_14_;
        auVar29[0xe] = auVar21[7];
        auVar29[0xf] = auVar21[7];
        auVar28._14_2_ = auVar29._14_2_;
        auVar28._0_13_ = auVar21._0_13_;
        auVar28[0xd] = auVar21[6];
        auVar27._13_3_ = auVar28._13_3_;
        auVar27._0_12_ = auVar21._0_12_;
        auVar27[0xc] = auVar21[6];
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._0_11_ = auVar21._0_11_;
        auVar26[0xb] = auVar21[5];
        auVar25._11_5_ = auVar26._11_5_;
        auVar25._0_10_ = auVar21._0_10_;
        auVar25[10] = auVar21[5];
        auVar24._10_6_ = auVar25._10_6_;
        auVar24._0_9_ = auVar21._0_9_;
        auVar24[9] = auVar21[4];
        auVar23._9_7_ = auVar24._9_7_;
        auVar23._0_8_ = auVar21._0_8_;
        auVar23[8] = auVar21[4];
        auVar22._8_8_ = auVar23._8_8_;
        auVar22[7] = auVar21[3];
        auVar22[6] = auVar21[3];
        auVar22[5] = auVar21[2];
        auVar22[4] = auVar21[2];
        auVar22[3] = auVar21[1];
        auVar22[2] = auVar21[1];
        auVar22[0] = auVar21[0];
        auVar22[1] = auVar22[0];
        auVar18 = auVar18 | auVar22 ^ auVar19;
        pcVar13 = pcVar13 + 8;
      } while (pcVar16 != pcVar13);
      auVar18 = psllw(auVar18,7);
      uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1);
      uVar5 = (ushort)(SUB161(auVar18 >> 0x17,0) & 1);
      uVar6 = (ushort)(SUB161(auVar18 >> 0x27,0) & 1);
      uVar7 = (ushort)(SUB161(auVar18 >> 0x37,0) & 1);
      bVar30 = SUB161(auVar18 >> 0x47,0) & 1;
      uVar8 = (ushort)(SUB161(auVar18 >> 0x57,0) & 1);
      uVar9 = (ushort)(SUB161(auVar18 >> 0x67,0) & 1);
      uVar10 = (ushort)(SUB161(auVar18 >> 0x77,0) & 1);
      pcVar13 = (char *)(ulonglong)
                        (ushort)(uVar4 | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 | uVar5 << 2 |
                                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 | uVar6 << 4 |
                                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 | uVar7 << 6 |
                                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 | (ushort)bVar30 << 8
                                 | (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 | uVar8 << 10 |
                                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb | uVar9 << 0xc |
                                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd | uVar10 << 0xe |
                                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
      bVar17 = ((((((uVar4 != 0 || uVar5 != 0) || uVar6 != 0) || uVar7 != 0) || bVar30 != 0) ||
                uVar8 != 0) || uVar9 != 0) || uVar10 != 0;
      if (local_88 != pcVar16) goto LAB_180119fa6;
    }
    else {
      pcVar13 = (char *)((ulonglong)local_88 & 0xffffffffffffffe0);
      auVar18 = (undefined1  [16])0x0;
      pcVar14 = (char *)0x0;
      auVar19 = (undefined1  [16])0x0;
      do {
        pcVar16 = local_80 + (longlong)pcVar14;
        pcVar1 = local_80 + 0x10 + (longlong)pcVar14;
        bVar30 = *pcVar16 + 0x81;
        bVar32 = pcVar16[1] + 0x81;
        bVar34 = pcVar16[2] + 0x81;
        bVar36 = pcVar16[3] + 0x81;
        bVar38 = pcVar16[4] + 0x81;
        bVar40 = pcVar16[5] + 0x81;
        bVar42 = pcVar16[6] + 0x81;
        bVar44 = pcVar16[7] + 0x81;
        bVar47 = pcVar16[8] + 0x81;
        bVar48 = pcVar16[9] + 0x81;
        bVar49 = pcVar16[10] + 0x81;
        bVar50 = pcVar16[0xb] + 0x81;
        bVar51 = pcVar16[0xc] + 0x81;
        bVar52 = pcVar16[0xd] + 0x81;
        bVar53 = pcVar16[0xe] + 0x81;
        bVar54 = pcVar16[0xf] + 0x81;
        bVar55 = *pcVar1 + 0x81;
        bVar56 = pcVar1[1] + 0x81;
        bVar57 = pcVar1[2] + 0x81;
        bVar58 = pcVar1[3] + 0x81;
        bVar59 = pcVar1[4] + 0x81;
        bVar60 = pcVar1[5] + 0x81;
        bVar61 = pcVar1[6] + 0x81;
        bVar62 = pcVar1[7] + 0x81;
        bVar63 = pcVar1[8] + 0x81;
        bVar64 = pcVar1[9] + 0x81;
        bVar65 = pcVar1[10] + 0x81;
        bVar66 = pcVar1[0xb] + 0x81;
        bVar67 = pcVar1[0xc] + 0x81;
        bVar68 = pcVar1[0xd] + 0x81;
        bVar69 = pcVar1[0xe] + 0x81;
        bVar70 = pcVar1[0xf] + 0x81;
        auVar71[0] = -((byte)((0xa0 < bVar30) * -0x60 | (0xa0 >= bVar30) * bVar30) == bVar30);
        auVar71[1] = -((byte)((0xa0 < bVar32) * -0x60 | (0xa0 >= bVar32) * bVar32) == bVar32);
        auVar71[2] = -((byte)((0xa0 < bVar34) * -0x60 | (0xa0 >= bVar34) * bVar34) == bVar34);
        auVar71[3] = -((byte)((0xa0 < bVar36) * -0x60 | (0xa0 >= bVar36) * bVar36) == bVar36);
        auVar71[4] = -((byte)((0xa0 < bVar38) * -0x60 | (0xa0 >= bVar38) * bVar38) == bVar38);
        auVar71[5] = -((byte)((0xa0 < bVar40) * -0x60 | (0xa0 >= bVar40) * bVar40) == bVar40);
        auVar71[6] = -((byte)((0xa0 < bVar42) * -0x60 | (0xa0 >= bVar42) * bVar42) == bVar42);
        auVar71[7] = -((byte)((0xa0 < bVar44) * -0x60 | (0xa0 >= bVar44) * bVar44) == bVar44);
        auVar71[8] = -((byte)((0xa0 < bVar47) * -0x60 | (0xa0 >= bVar47) * bVar47) == bVar47);
        auVar71[9] = -((byte)((0xa0 < bVar48) * -0x60 | (0xa0 >= bVar48) * bVar48) == bVar48);
        auVar71[10] = -((byte)((0xa0 < bVar49) * -0x60 | (0xa0 >= bVar49) * bVar49) == bVar49);
        auVar71[0xb] = -((byte)((0xa0 < bVar50) * -0x60 | (0xa0 >= bVar50) * bVar50) == bVar50);
        auVar71[0xc] = -((byte)((0xa0 < bVar51) * -0x60 | (0xa0 >= bVar51) * bVar51) == bVar51);
        auVar71[0xd] = -((byte)((0xa0 < bVar52) * -0x60 | (0xa0 >= bVar52) * bVar52) == bVar52);
        auVar71[0xe] = -((byte)((0xa0 < bVar53) * -0x60 | (0xa0 >= bVar53) * bVar53) == bVar53);
        auVar71[0xf] = -((byte)((0xa0 < bVar54) * -0x60 | (0xa0 >= bVar54) * bVar54) == bVar54);
        auVar45[0] = -((byte)((0xa0 < bVar55) * -0x60 | (0xa0 >= bVar55) * bVar55) == bVar55);
        auVar45[1] = -((byte)((0xa0 < bVar56) * -0x60 | (0xa0 >= bVar56) * bVar56) == bVar56);
        auVar45[2] = -((byte)((0xa0 < bVar57) * -0x60 | (0xa0 >= bVar57) * bVar57) == bVar57);
        auVar45[3] = -((byte)((0xa0 < bVar58) * -0x60 | (0xa0 >= bVar58) * bVar58) == bVar58);
        auVar45[4] = -((byte)((0xa0 < bVar59) * -0x60 | (0xa0 >= bVar59) * bVar59) == bVar59);
        auVar45[5] = -((byte)((0xa0 < bVar60) * -0x60 | (0xa0 >= bVar60) * bVar60) == bVar60);
        auVar45[6] = -((byte)((0xa0 < bVar61) * -0x60 | (0xa0 >= bVar61) * bVar61) == bVar61);
        auVar45[7] = -((byte)((0xa0 < bVar62) * -0x60 | (0xa0 >= bVar62) * bVar62) == bVar62);
        auVar45[8] = -((byte)((0xa0 < bVar63) * -0x60 | (0xa0 >= bVar63) * bVar63) == bVar63);
        auVar45[9] = -((byte)((0xa0 < bVar64) * -0x60 | (0xa0 >= bVar64) * bVar64) == bVar64);
        auVar45[10] = -((byte)((0xa0 < bVar65) * -0x60 | (0xa0 >= bVar65) * bVar65) == bVar65);
        auVar45[0xb] = -((byte)((0xa0 < bVar66) * -0x60 | (0xa0 >= bVar66) * bVar66) == bVar66);
        auVar45[0xc] = -((byte)((0xa0 < bVar67) * -0x60 | (0xa0 >= bVar67) * bVar67) == bVar67);
        auVar45[0xd] = -((byte)((0xa0 < bVar68) * -0x60 | (0xa0 >= bVar68) * bVar68) == bVar68);
        auVar45[0xe] = -((byte)((0xa0 < bVar69) * -0x60 | (0xa0 >= bVar69) * bVar69) == bVar69);
        auVar45[0xf] = -((byte)((0xa0 < bVar70) * -0x60 | (0xa0 >= bVar70) * bVar70) == bVar70);
        auVar20[0] = -(*pcVar16 == '\t');
        auVar20[1] = -(pcVar16[1] == '\t');
        auVar20[2] = -(pcVar16[2] == '\t');
        auVar20[3] = -(pcVar16[3] == '\t');
        auVar20[4] = -(pcVar16[4] == '\t');
        auVar20[5] = -(pcVar16[5] == '\t');
        auVar20[6] = -(pcVar16[6] == '\t');
        auVar20[7] = -(pcVar16[7] == '\t');
        auVar20[8] = -(pcVar16[8] == '\t');
        auVar20[9] = -(pcVar16[9] == '\t');
        auVar20[10] = -(pcVar16[10] == '\t');
        auVar20[0xb] = -(pcVar16[0xb] == '\t');
        auVar20[0xc] = -(pcVar16[0xc] == '\t');
        auVar20[0xd] = -(pcVar16[0xd] == '\t');
        auVar20[0xe] = -(pcVar16[0xe] == '\t');
        auVar20[0xf] = -(pcVar16[0xf] == '\t');
        auVar18 = auVar18 | ~auVar20 & auVar71;
        auVar31[0] = -(*pcVar1 == '\t');
        auVar31[1] = -(pcVar1[1] == '\t');
        auVar31[2] = -(pcVar1[2] == '\t');
        auVar31[3] = -(pcVar1[3] == '\t');
        auVar31[4] = -(pcVar1[4] == '\t');
        auVar31[5] = -(pcVar1[5] == '\t');
        auVar31[6] = -(pcVar1[6] == '\t');
        auVar31[7] = -(pcVar1[7] == '\t');
        auVar31[8] = -(pcVar1[8] == '\t');
        auVar31[9] = -(pcVar1[9] == '\t');
        auVar31[10] = -(pcVar1[10] == '\t');
        auVar31[0xb] = -(pcVar1[0xb] == '\t');
        auVar31[0xc] = -(pcVar1[0xc] == '\t');
        auVar31[0xd] = -(pcVar1[0xd] == '\t');
        auVar31[0xe] = -(pcVar1[0xe] == '\t');
        auVar31[0xf] = -(pcVar1[0xf] == '\t');
        auVar19 = auVar19 | ~auVar31 & auVar45;
        pcVar14 = pcVar14 + 0x20;
      } while (pcVar13 != pcVar14);
      auVar18 = psllw(auVar19 | auVar18,7);
      bVar17 = (((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 ||
                            (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                           (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                          (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                         (SUB161(auVar18 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
               auVar18[0xf] < '\0';
      uVar15 = (uint)bVar17;
      if (local_88 != pcVar13) {
        if (((ulonglong)local_88 & 0x18) == 0) {
          pcVar14 = pcVar13 + (longlong)local_80;
          goto LAB_180119fa6;
        }
        goto LAB_180119f14;
      }
    }
  }
  else {
    bVar17 = false;
    pcVar14 = local_80;
LAB_180119fa6:
    pcVar13 = local_80 + (longlong)local_88;
    do {
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      bVar17 = (bool)(bVar17 | (cVar3 != '\t' && (byte)(cVar3 + 0x81U) < 0xa1));
    } while (pcVar14 != pcVar13);
  }
  if (bVar17) {
    return false;
  }
LAB_180119fe0:
  local_90 = 0;
  local_70 = 0;
  local_60 = 0x2c0000002c;
  local_58 = 1;
  local_50 = 1;
  local_78 = local_88;
  local_68 = local_88;
  lVar11 = FUN_180119bc0(&local_90);
  if (((((lVar11 == 0) || (pbVar12 = (byte *)FUN_180110f50(lVar11), pcVar13 != &DAT_00000007)) ||
       ((byte)(((byte)(*pbVar12 + 0xbf) < 0x1a) << 5 | *pbVar12) != 99)) ||
      (((byte)(((byte)(pbVar12[1] + 0xbf) < 0x1a) << 5 | pbVar12[1]) != 0x68 ||
       ((byte)(((byte)(pbVar12[2] + 0xbf) < 0x1a) << 5 | pbVar12[2]) != 0x75)))) ||
     (((byte)(((byte)(pbVar12[3] + 0xbf) < 0x1a) << 5 | pbVar12[3]) != 0x6e ||
      (((byte)(((byte)(pbVar12[4] + 0xbf) < 0x1a) << 5 | pbVar12[4]) != 0x6b ||
       ((byte)(((byte)(pbVar12[5] + 0xbf) < 0x1a) << 5 | pbVar12[5]) != 0x65)))))) {
    return false;
  }
  return (byte)(((byte)(pbVar12[6] + 0xbf) < 0x1a) << 5 | pbVar12[6]) == 100;
}


