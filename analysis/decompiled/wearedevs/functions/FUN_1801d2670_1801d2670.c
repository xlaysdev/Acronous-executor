/* FUN_1801d2670 @ 1801d2670 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801d2670(char param_1,char *param_2,char *param_3)

{
  undefined1 auVar1 [15];
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar17;
  undefined1 in_XMM1 [16];
  longlong lVar16;
  longlong lVar18;
  longlong lVar20;
  undefined1 auVar19 [16];
  longlong lVar21;
  undefined1 auVar22 [11];
  undefined1 auVar24 [12];
  char cVar55;
  undefined1 auVar26 [13];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar23 [11];
  undefined1 auVar25 [12];
  undefined1 auVar27 [13];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [11];
  undefined1 auVar59 [12];
  undefined1 auVar62 [13];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar57 [11];
  undefined1 auVar60 [12];
  undefined1 auVar63 [13];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar58 [11];
  undefined1 auVar61 [12];
  undefined1 auVar64 [13];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  char cVar104;
  ushort uVar105;
  undefined4 uVar106;
  undefined6 uVar107;
  ushort uVar139;
  ushort uVar142;
  uint7 uVar108;
  undefined8 uVar109;
  undefined1 auVar110 [11];
  undefined1 auVar112 [12];
  undefined1 auVar111 [12];
  char cVar138;
  char cVar141;
  char cVar147;
  ushort uVar148;
  undefined1 auVar114 [13];
  undefined1 auVar115 [14];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar113 [12];
  undefined1 auVar116 [14];
  byte bVar137;
  byte bVar140;
  byte bVar143;
  char cVar144;
  byte bVar146;
  byte bVar149;
  undefined1 auVar135 [16];
  ushort uVar145;
  ushort uVar150;
  byte bVar152;
  ushort uVar151;
  byte bVar154;
  ushort uVar153;
  undefined1 auVar136 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  
  if (param_3 <= param_2) {
    return 0;
  }
  uVar9 = (longlong)param_3 - (longlong)param_2;
  if (uVar9 < 0x10) {
    if (uVar9 < 4) {
      lVar3 = 0;
      pcVar7 = param_2;
    }
    else {
      uVar6 = (ulonglong)((uint)uVar9 & 0xc);
      pcVar7 = param_2 + uVar6;
      lVar3 = 0;
      lVar16 = 0;
      uVar2 = 0;
      lVar18 = 0;
      lVar20 = 0;
      do {
        auVar28[0] = -((char)*(undefined2 *)(param_2 + uVar2) == param_1);
        cVar55 = -((char)((ushort)*(undefined2 *)(param_2 + uVar2) >> 8) == param_1);
        auVar34._0_9_ = CONCAT18(0xff,0xff00000000000000);
        auVar22._0_10_ = CONCAT19(0xff,auVar34._0_9_);
        auVar22[10] = 0xff;
        auVar24[0xb] = 0xff;
        auVar24._0_11_ = auVar22;
        auVar26[0xc] = 0xff;
        auVar26._0_12_ = auVar24;
        auVar89[0xd] = 0xff;
        auVar89._0_13_ = auVar26;
        auVar89[0xe] = 0xff;
        auVar89[0xf] = 0xff;
        auVar38._14_2_ = auVar89._14_2_;
        auVar38[0xd] = 0xff;
        auVar38._0_13_ = auVar26;
        auVar37._13_3_ = auVar38._13_3_;
        auVar37[0xc] = 0xff;
        auVar37._0_12_ = auVar24;
        auVar36._12_4_ = auVar37._12_4_;
        auVar36[0xb] = 0xff;
        auVar36._0_11_ = auVar22;
        auVar35._11_5_ = auVar36._11_5_;
        auVar35[10] = 0xff;
        auVar35._0_10_ = auVar22._0_10_;
        auVar34._10_6_ = auVar35._10_6_;
        auVar34[9] = 0xff;
        auVar33._9_7_ = auVar34._9_7_;
        auVar33[8] = 0xff;
        auVar33._0_8_ = 0xff00000000000000;
        auVar32._8_8_ = auVar33._8_8_;
        auVar32._0_8_ = 0xff00000000000000;
        auVar31._7_9_ = auVar32._7_9_;
        auVar31._0_7_ = 0xff000000000000;
        auVar30._6_10_ = auVar31._6_10_;
        auVar30._0_6_ = 0xff0000000000;
        auVar29._5_11_ = auVar30._5_11_;
        auVar29._0_5_ = 0xff00000000;
        auVar28._4_12_ = auVar29._4_12_;
        auVar28[3] = cVar55;
        auVar28[2] = cVar55;
        auVar28[1] = auVar28[0];
        auVar38 = pshuflw(auVar28,auVar28,0xd4);
        auVar39._12_4_ = auVar38._12_4_;
        auVar39._0_8_ = auVar38._0_8_;
        auVar39._8_4_ = auVar38._4_4_;
        auVar39 = auVar39 & _DAT_18025f330;
        lVar3 = lVar3 + auVar39._0_8_;
        lVar16 = lVar16 + auVar39._8_8_;
        auVar65[0] = -((char)*(undefined2 *)(param_2 + uVar2 + 2) == param_1);
        cVar55 = -((char)((ushort)*(undefined2 *)(param_2 + uVar2 + 2) >> 8) == param_1);
        auVar71._0_9_ = CONCAT18(0xff,0xff00000000000000);
        auVar56._0_10_ = CONCAT19(0xff,auVar71._0_9_);
        auVar56[10] = 0xff;
        auVar59[0xb] = 0xff;
        auVar59._0_11_ = auVar56;
        auVar62[0xc] = 0xff;
        auVar62._0_12_ = auVar59;
        auVar76[0xd] = 0xff;
        auVar76._0_13_ = auVar62;
        auVar76[0xe] = 0xff;
        auVar76[0xf] = 0xff;
        auVar75._14_2_ = auVar76._14_2_;
        auVar75[0xd] = 0xff;
        auVar75._0_13_ = auVar62;
        auVar74._13_3_ = auVar75._13_3_;
        auVar74[0xc] = 0xff;
        auVar74._0_12_ = auVar59;
        auVar73._12_4_ = auVar74._12_4_;
        auVar73[0xb] = 0xff;
        auVar73._0_11_ = auVar56;
        auVar72._11_5_ = auVar73._11_5_;
        auVar72[10] = 0xff;
        auVar72._0_10_ = auVar56._0_10_;
        auVar71._10_6_ = auVar72._10_6_;
        auVar71[9] = 0xff;
        auVar70._9_7_ = auVar71._9_7_;
        auVar70[8] = 0xff;
        auVar70._0_8_ = 0xff00000000000000;
        auVar69._8_8_ = auVar70._8_8_;
        auVar69._0_8_ = 0xff00000000000000;
        auVar68._7_9_ = auVar69._7_9_;
        auVar68._0_7_ = 0xff000000000000;
        auVar67._6_10_ = auVar68._6_10_;
        auVar67._0_6_ = 0xff0000000000;
        auVar66._5_11_ = auVar67._5_11_;
        auVar66._0_5_ = 0xff00000000;
        auVar65._4_12_ = auVar66._4_12_;
        auVar65[3] = cVar55;
        auVar65[2] = cVar55;
        auVar65[1] = auVar65[0];
        auVar38 = pshuflw(auVar39,auVar65,0xd4);
        auVar40._12_4_ = auVar38._12_4_;
        auVar40._0_8_ = auVar38._0_8_;
        auVar40._8_4_ = auVar38._4_4_;
        lVar18 = lVar18 + SUB168(auVar40 & _DAT_18025f330,0);
        lVar20 = lVar20 + SUB168(auVar40 & _DAT_18025f330,8);
        uVar2 = uVar2 + 4;
      } while (uVar6 != uVar2);
      lVar3 = lVar20 + lVar16 + lVar18 + lVar3;
      if (uVar9 == uVar6) {
        return lVar3;
      }
    }
    do {
      lVar3 = lVar3 + (ulonglong)(*pcVar7 == param_1);
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != param_3);
    return lVar3;
  }
  pcVar7 = (char *)(((ulonglong)param_2 & 0xfffffffffffffff0) + 0x10);
  pcVar4 = param_2 + 1;
  if (param_2 + 1 < pcVar7) {
    pcVar4 = pcVar7;
  }
  auVar38 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_1,param_1)),0);
  uVar2 = (longlong)pcVar4 - (longlong)param_2;
  if (uVar2 < 4) {
    lVar3 = 0;
    pcVar4 = param_2;
LAB_1801d2830:
    do {
      lVar3 = lVar3 + (ulonglong)(*pcVar4 == param_1);
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar7);
  }
  else {
    uVar6 = uVar2 & 0xfffffffffffffffc;
    pcVar4 = param_2 + uVar6;
    lVar3 = 0;
    lVar16 = 0;
    uVar8 = 0;
    lVar18 = 0;
    lVar20 = 0;
    do {
      auVar77[0] = -((char)*(undefined2 *)(param_2 + uVar8) == param_1);
      cVar55 = -((char)((ushort)*(undefined2 *)(param_2 + uVar8) >> 8) == param_1);
      auVar83._0_9_ = CONCAT18(0xff,0xff00000000000000);
      auVar57._0_10_ = CONCAT19(0xff,auVar83._0_9_);
      auVar57[10] = 0xff;
      auVar60[0xb] = 0xff;
      auVar60._0_11_ = auVar57;
      auVar63[0xc] = 0xff;
      auVar63._0_12_ = auVar60;
      auVar88[0xd] = 0xff;
      auVar88._0_13_ = auVar63;
      auVar88[0xe] = 0xff;
      auVar88[0xf] = 0xff;
      auVar87._14_2_ = auVar88._14_2_;
      auVar87[0xd] = 0xff;
      auVar87._0_13_ = auVar63;
      auVar86._13_3_ = auVar87._13_3_;
      auVar86[0xc] = 0xff;
      auVar86._0_12_ = auVar60;
      auVar85._12_4_ = auVar86._12_4_;
      auVar85[0xb] = 0xff;
      auVar85._0_11_ = auVar57;
      auVar84._11_5_ = auVar85._11_5_;
      auVar84[10] = 0xff;
      auVar84._0_10_ = auVar57._0_10_;
      auVar83._10_6_ = auVar84._10_6_;
      auVar83[9] = 0xff;
      auVar82._9_7_ = auVar83._9_7_;
      auVar82[8] = 0xff;
      auVar82._0_8_ = 0xff00000000000000;
      auVar81._8_8_ = auVar82._8_8_;
      auVar81._0_8_ = 0xff00000000000000;
      auVar80._7_9_ = auVar81._7_9_;
      auVar80._0_7_ = 0xff000000000000;
      auVar79._6_10_ = auVar80._6_10_;
      auVar79._0_6_ = 0xff0000000000;
      auVar78._5_11_ = auVar79._5_11_;
      auVar78._0_5_ = 0xff00000000;
      auVar77._4_12_ = auVar78._4_12_;
      auVar77[3] = cVar55;
      auVar77[2] = cVar55;
      auVar77[1] = auVar77[0];
      auVar89 = pshuflw(auVar77,auVar77,0xd4);
      auVar90._12_4_ = auVar89._12_4_;
      auVar90._0_8_ = auVar89._0_8_;
      auVar90._8_4_ = auVar89._4_4_;
      auVar90 = auVar90 & _DAT_18025f330;
      lVar3 = lVar3 + auVar90._0_8_;
      lVar16 = lVar16 + auVar90._8_8_;
      auVar117[0] = -((char)*(undefined2 *)(param_2 + uVar8 + 2) == param_1);
      cVar55 = -((char)((ushort)*(undefined2 *)(param_2 + uVar8 + 2) >> 8) == param_1);
      auVar123._0_9_ = CONCAT18(0xff,0xff00000000000000);
      auVar110._0_10_ = CONCAT19(0xff,auVar123._0_9_);
      auVar110[10] = 0xff;
      auVar111[0xb] = 0xff;
      auVar111._0_11_ = auVar110;
      auVar114[0xc] = 0xff;
      auVar114._0_12_ = auVar111;
      auVar128[0xd] = 0xff;
      auVar128._0_13_ = auVar114;
      auVar128[0xe] = 0xff;
      auVar128[0xf] = 0xff;
      auVar127._14_2_ = auVar128._14_2_;
      auVar127[0xd] = 0xff;
      auVar127._0_13_ = auVar114;
      auVar126._13_3_ = auVar127._13_3_;
      auVar126[0xc] = 0xff;
      auVar126._0_12_ = auVar111;
      auVar125._12_4_ = auVar126._12_4_;
      auVar125[0xb] = 0xff;
      auVar125._0_11_ = auVar110;
      auVar124._11_5_ = auVar125._11_5_;
      auVar124[10] = 0xff;
      auVar124._0_10_ = auVar110._0_10_;
      auVar123._10_6_ = auVar124._10_6_;
      auVar123[9] = 0xff;
      auVar122._9_7_ = auVar123._9_7_;
      auVar122[8] = 0xff;
      auVar122._0_8_ = 0xff00000000000000;
      auVar121._8_8_ = auVar122._8_8_;
      auVar121._0_8_ = 0xff00000000000000;
      auVar120._7_9_ = auVar121._7_9_;
      auVar120._0_7_ = 0xff000000000000;
      auVar119._6_10_ = auVar120._6_10_;
      auVar119._0_6_ = 0xff0000000000;
      auVar118._5_11_ = auVar119._5_11_;
      auVar118._0_5_ = 0xff00000000;
      auVar117._4_12_ = auVar118._4_12_;
      auVar117[3] = cVar55;
      auVar117[2] = cVar55;
      auVar117[1] = auVar117[0];
      auVar89 = pshuflw(auVar90,auVar117,0xd4);
      auVar91._12_4_ = auVar89._12_4_;
      auVar91._0_8_ = auVar89._0_8_;
      auVar91._8_4_ = auVar89._4_4_;
      lVar18 = lVar18 + SUB168(auVar91 & _DAT_18025f330,0);
      lVar20 = lVar20 + SUB168(auVar91 & _DAT_18025f330,8);
      uVar8 = uVar8 + 4;
    } while (uVar6 != uVar8);
    lVar3 = lVar20 + lVar16 + lVar18 + lVar3;
    if (uVar2 != uVar6) goto LAB_1801d2830;
  }
  cVar55 = auVar38[0];
  cVar10 = auVar38[2];
  cVar11 = auVar38[3];
  cVar12 = auVar38[4];
  cVar13 = auVar38[5];
  cVar14 = auVar38[6];
  cVar15 = auVar38[7];
  cVar17 = auVar38[1];
  if (pcVar7 <= param_3 + -0x40 && 0x3f < uVar9) {
    do {
      auVar129[0] = -(*pcVar7 == cVar55);
      auVar129[1] = -(pcVar7[1] == cVar17);
      auVar129[2] = -(pcVar7[2] == cVar10);
      auVar129[3] = -(pcVar7[3] == cVar11);
      auVar129[4] = -(pcVar7[4] == cVar12);
      auVar129[5] = -(pcVar7[5] == cVar13);
      auVar129[6] = -(pcVar7[6] == cVar14);
      auVar129[7] = -(pcVar7[7] == cVar15);
      auVar129[8] = -(pcVar7[8] == cVar55);
      auVar129[9] = -(pcVar7[9] == cVar17);
      auVar129[10] = -(pcVar7[10] == cVar10);
      auVar129[0xb] = -(pcVar7[0xb] == cVar11);
      auVar129[0xc] = -(pcVar7[0xc] == cVar12);
      auVar129[0xd] = -(pcVar7[0xd] == cVar13);
      auVar129[0xe] = -(pcVar7[0xe] == cVar14);
      auVar129[0xf] = -(pcVar7[0xf] == cVar15);
      uVar139 = (ushort)(SUB161(auVar129 >> 7,0) & 1) | (ushort)(SUB161(auVar129 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar129 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar129 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar129 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar129 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar129 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar129 >> 0x3f,0) & 1) << 7;
      uVar105 = uVar139 | (ushort)(SUB161(auVar129 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar129 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar129 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar129 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar129 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar129 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar129 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar129[0xf] >> 7) << 0xf;
      auVar130[0] = -(pcVar7[0x10] == cVar55);
      auVar130[1] = -(pcVar7[0x11] == cVar17);
      auVar130[2] = -(pcVar7[0x12] == cVar10);
      auVar130[3] = -(pcVar7[0x13] == cVar11);
      auVar130[4] = -(pcVar7[0x14] == cVar12);
      auVar130[5] = -(pcVar7[0x15] == cVar13);
      auVar130[6] = -(pcVar7[0x16] == cVar14);
      auVar130[7] = -(pcVar7[0x17] == cVar15);
      auVar130[8] = -(pcVar7[0x18] == cVar55);
      auVar130[9] = -(pcVar7[0x19] == cVar17);
      auVar130[10] = -(pcVar7[0x1a] == cVar10);
      auVar130[0xb] = -(pcVar7[0x1b] == cVar11);
      auVar130[0xc] = -(pcVar7[0x1c] == cVar12);
      auVar130[0xd] = -(pcVar7[0x1d] == cVar13);
      auVar130[0xe] = -(pcVar7[0x1e] == cVar14);
      auVar130[0xf] = -(pcVar7[0x1f] == cVar15);
      uVar142 = (ushort)(SUB161(auVar130 >> 7,0) & 1) | (ushort)(SUB161(auVar130 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar130 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar130 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar130 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar130 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar130 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar130 >> 0x3f,0) & 1) << 7;
      uVar145 = uVar142 | (ushort)(SUB161(auVar130 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar130 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar130 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar130 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar130 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar130 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar130 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar130[0xf] >> 7) << 0xf;
      auVar131[0] = -(pcVar7[0x20] == cVar55);
      auVar131[1] = -(pcVar7[0x21] == cVar17);
      auVar131[2] = -(pcVar7[0x22] == cVar10);
      auVar131[3] = -(pcVar7[0x23] == cVar11);
      auVar131[4] = -(pcVar7[0x24] == cVar12);
      auVar131[5] = -(pcVar7[0x25] == cVar13);
      auVar131[6] = -(pcVar7[0x26] == cVar14);
      auVar131[7] = -(pcVar7[0x27] == cVar15);
      auVar131[8] = -(pcVar7[0x28] == cVar55);
      auVar131[9] = -(pcVar7[0x29] == cVar17);
      auVar131[10] = -(pcVar7[0x2a] == cVar10);
      auVar131[0xb] = -(pcVar7[0x2b] == cVar11);
      auVar131[0xc] = -(pcVar7[0x2c] == cVar12);
      auVar131[0xd] = -(pcVar7[0x2d] == cVar13);
      auVar131[0xe] = -(pcVar7[0x2e] == cVar14);
      auVar131[0xf] = -(pcVar7[0x2f] == cVar15);
      uVar148 = (ushort)(SUB161(auVar131 >> 7,0) & 1) | (ushort)(SUB161(auVar131 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar131 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar131 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar131 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar131 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar131 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar131 >> 0x3f,0) & 1) << 7;
      uVar150 = uVar148 | (ushort)(SUB161(auVar131 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar131 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar131 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar131 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar131 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar131 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar131 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar131[0xf] >> 7) << 0xf;
      auVar132[0] = -(pcVar7[0x30] == cVar55);
      auVar132[1] = -(pcVar7[0x31] == cVar17);
      auVar132[2] = -(pcVar7[0x32] == cVar10);
      auVar132[3] = -(pcVar7[0x33] == cVar11);
      auVar132[4] = -(pcVar7[0x34] == cVar12);
      auVar132[5] = -(pcVar7[0x35] == cVar13);
      auVar132[6] = -(pcVar7[0x36] == cVar14);
      auVar132[7] = -(pcVar7[0x37] == cVar15);
      auVar132[8] = -(pcVar7[0x38] == cVar55);
      auVar132[9] = -(pcVar7[0x39] == cVar17);
      auVar132[10] = -(pcVar7[0x3a] == cVar10);
      auVar132[0xb] = -(pcVar7[0x3b] == cVar11);
      auVar132[0xc] = -(pcVar7[0x3c] == cVar12);
      auVar132[0xd] = -(pcVar7[0x3d] == cVar13);
      auVar132[0xe] = -(pcVar7[0x3e] == cVar14);
      auVar132[0xf] = -(pcVar7[0x3f] == cVar15);
      uVar151 = (ushort)(SUB161(auVar132 >> 7,0) & 1) | (ushort)(SUB161(auVar132 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar132 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar132 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar132 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar132 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar132 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar132 >> 0x3f,0) & 1) << 7;
      uVar153 = uVar151 | (ushort)(SUB161(auVar132 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar132 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar132 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar132 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar132 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar132 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar132 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar132[0xf] >> 7) << 0xf;
      auVar155._0_2_ = uVar105 >> 1;
      auVar155._2_2_ = uVar145 >> 1;
      auVar155._4_2_ = uVar150 >> 1;
      auVar155._6_2_ = uVar153 >> 1;
      auVar155._8_8_ = 0;
      auVar155 = auVar155 & (undefined1  [16])s_UUUUUUUUUUUUUUUU_18028a3d0;
      uVar105 = CONCAT11((char)(uVar105 >> 8) - auVar155[1],(char)uVar139 - auVar155[0]);
      uVar106 = CONCAT13((char)(uVar145 >> 8) - auVar155[3],
                         CONCAT12((char)uVar142 - auVar155[2],uVar105));
      uVar107 = CONCAT15((char)(uVar150 >> 8) - auVar155[5],
                         CONCAT14((char)uVar148 - auVar155[4],uVar106));
      uVar109 = CONCAT17((char)(uVar153 >> 8) - auVar155[7],
                         CONCAT16((char)uVar151 - auVar155[6],uVar107));
      auVar112._0_10_ = CONCAT19(-auVar155[9],CONCAT18(-auVar155[8],uVar109));
      auVar112[10] = -auVar155[10];
      auVar112[0xb] = -auVar155[0xb];
      auVar115[0xc] = -auVar155[0xc];
      auVar115._0_12_ = auVar112;
      auVar115[0xd] = -auVar155[0xd];
      auVar133[0xe] = -auVar155[0xe];
      auVar133._0_14_ = auVar115;
      auVar133[0xf] = -auVar155[0xf];
      auVar38 = auVar133 & (undefined1  [16])s_3333333333333333C__Users_burne___18028a3e0._0_16_;
      auVar134._0_2_ = uVar105 >> 2;
      auVar134._2_2_ = (ushort)((uint)uVar106 >> 0x12);
      auVar134._4_2_ = (ushort)((uint6)uVar107 >> 0x22);
      auVar134._6_2_ = (ushort)((ulonglong)uVar109 >> 0x32);
      auVar134._8_2_ = (ushort)((unkuint10)auVar112._0_10_ >> 0x42);
      auVar134._10_2_ = auVar112._10_2_ >> 2;
      auVar134._12_2_ = auVar115._12_2_ >> 2;
      auVar134._14_2_ = auVar133._14_2_ >> 2;
      auVar134 = auVar134 & (undefined1  [16])s_3333333333333333C__Users_burne___18028a3e0._0_16_;
      cVar104 = auVar134[0] + auVar38[0];
      bVar137 = auVar134[1] + auVar38[1];
      uVar105 = CONCAT11(bVar137,cVar104);
      cVar138 = auVar134[2] + auVar38[2];
      bVar140 = auVar134[3] + auVar38[3];
      uVar106 = CONCAT13(bVar140,CONCAT12(cVar138,uVar105));
      cVar141 = auVar134[4] + auVar38[4];
      bVar143 = auVar134[5] + auVar38[5];
      uVar107 = CONCAT15(bVar143,CONCAT14(cVar141,uVar106));
      cVar144 = auVar134[6] + auVar38[6];
      bVar146 = auVar134[7] + auVar38[7];
      uVar109 = CONCAT17(bVar146,CONCAT16(cVar144,uVar107));
      cVar147 = auVar134[8] + auVar38[8];
      bVar149 = auVar134[9] + auVar38[9];
      auVar113._0_10_ = CONCAT19(bVar149,CONCAT18(cVar147,uVar109));
      auVar113[10] = auVar134[10] + auVar38[10];
      auVar113[0xb] = auVar134[0xb] + auVar38[0xb];
      auVar116[0xc] = auVar134[0xc] + auVar38[0xc];
      auVar116._0_12_ = auVar113;
      auVar116[0xd] = auVar134[0xd] + auVar38[0xd];
      auVar135[0xe] = auVar134[0xe] + auVar38[0xe];
      auVar135._0_14_ = auVar116;
      auVar135[0xf] = auVar134[0xf] + auVar38[0xf];
      auVar156[0] = (char)(uVar105 >> 4) + cVar104;
      auVar156[1] = (bVar137 >> 4) + bVar137;
      auVar156[2] = (char)((uint)uVar106 >> 0x14) + cVar138;
      auVar156[3] = (bVar140 >> 4) + bVar140;
      auVar156[4] = (char)((uint6)uVar107 >> 0x24) + cVar141;
      auVar156[5] = (bVar143 >> 4) + bVar143;
      auVar156[6] = (char)((ulonglong)uVar109 >> 0x34) + cVar144;
      auVar156[7] = (bVar146 >> 4) + bVar146;
      auVar156[8] = (char)((unkuint10)auVar113._0_10_ >> 0x44) + cVar147;
      auVar156[9] = (bVar149 >> 4) + bVar149;
      auVar156[10] = (char)(auVar113._10_2_ >> 4) + auVar113[10];
      auVar156[0xb] = (auVar113[0xb] >> 4) + auVar113[0xb];
      auVar156[0xc] = (char)(auVar116._12_2_ >> 4) + auVar116[0xc];
      auVar156[0xd] = (auVar116[0xd] >> 4) + auVar116[0xd];
      auVar156[0xe] = (char)(auVar135._14_2_ >> 4) + auVar135[0xe];
      auVar156[0xf] = (auVar135[0xf] >> 4) + auVar135[0xf];
      auVar156 = auVar156 & _DAT_18028a3b0;
      auVar38 = psllw(auVar156,8);
      cVar104 = auVar38[1] + auVar156[1];
      auVar1._1_14_ = auVar38._2_14_;
      auVar1[0] = cVar104;
      bVar137 = auVar38[3] + auVar156[3];
      bVar140 = auVar38[5] + auVar156[5];
      bVar143 = auVar38[7] + auVar156[7];
      bVar146 = auVar38[9] + auVar156[9];
      bVar149 = auVar38[0xb] + auVar156[0xb];
      bVar152 = auVar38[0xd] + auVar156[0xd];
      bVar154 = auVar38[0xf] + auVar156[0xf];
      uVar105 = auVar1._0_2_ & 0xff;
      uVar139 = (ushort)(((uint)bVar137 << 0x18) >> 0x18);
      uVar142 = (ushort)(((uint6)bVar140 << 0x28) >> 0x28);
      uVar145 = (ushort)(((ulonglong)bVar143 << 0x38) >> 0x38);
      uVar148 = (ushort)((uint3)((uint3)bVar146 << 0x10) >> 0x10);
      uVar150 = (ushort)(((uint5)bVar149 << 0x20) >> 0x20);
      uVar151 = (ushort)(((uint7)bVar152 << 0x30) >> 0x30);
      uVar153 = (ushort)((uint3)((uint3)bVar154 << 0x10) >> 0x10);
      uVar108 = CONCAT16((uVar151 != 0) * (uVar151 < 0x100) * bVar152 - (0xff < uVar151),
                         CONCAT15((uVar150 != 0) * (uVar150 < 0x100) * bVar149 - (0xff < uVar150),
                                  CONCAT14((uVar148 != 0) * (uVar148 < 0x100) * bVar146 -
                                           (0xff < uVar148),
                                           CONCAT13((uVar145 != 0) * (uVar145 < 0x100) * bVar143 -
                                                    (0xff < uVar145),
                                                    CONCAT12((uVar142 != 0) * (uVar142 < 0x100) *
                                                             bVar140 - (0xff < uVar142),
                                                             CONCAT11((uVar139 != 0) *
                                                                      (uVar139 < 0x100) * bVar137 -
                                                                      (0xff < uVar139),
                                                                      (uVar105 != 0) *
                                                                      (uVar105 < 0x100) * cVar104 -
                                                                      (0xff < uVar105)))))));
      auVar136._0_8_ = (ulonglong)uVar108 & 0xffffffff;
      auVar136._8_4_ =
           (int)(CONCAT17((uVar153 != 0) * (uVar153 < 0x100) * bVar154 - (0xff < uVar153),uVar108)
                >> 0x20);
      auVar136._12_4_ = 0;
      auVar38 = psadbw(auVar136,(undefined1  [16])0x0);
      lVar3 = lVar3 + auVar38._0_8_;
      pcVar7 = pcVar7 + 0x40;
    } while (pcVar7 <= param_3 + -0x40);
  }
  for (; pcVar7 <= param_3 + -0x10; pcVar7 = pcVar7 + 0x10) {
    auVar19[0] = -(*pcVar7 == cVar55);
    auVar19[1] = -(pcVar7[1] == cVar17);
    auVar19[2] = -(pcVar7[2] == cVar10);
    auVar19[3] = -(pcVar7[3] == cVar11);
    auVar19[4] = -(pcVar7[4] == cVar12);
    auVar19[5] = -(pcVar7[5] == cVar13);
    auVar19[6] = -(pcVar7[6] == cVar14);
    auVar19[7] = -(pcVar7[7] == cVar15);
    auVar19[8] = -(pcVar7[8] == cVar55);
    auVar19[9] = -(pcVar7[9] == cVar17);
    auVar19[10] = -(pcVar7[10] == cVar10);
    auVar19[0xb] = -(pcVar7[0xb] == cVar11);
    auVar19[0xc] = -(pcVar7[0xc] == cVar12);
    auVar19[0xd] = -(pcVar7[0xd] == cVar13);
    auVar19[0xe] = -(pcVar7[0xe] == cVar14);
    auVar19[0xf] = -(pcVar7[0xf] == cVar15);
    uVar105 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
    uVar5 = (uint)uVar105 - (uVar105 >> 1 & 0x5555);
    uVar5 = (uVar5 >> 2 & 0x3333) + (uVar5 & 0x3333);
    uVar5 = (uVar5 >> 4) + uVar5 & 0xf0f;
    lVar3 = lVar3 + (ulonglong)((uVar5 >> 8) + uVar5 & 0xff);
  }
  if (pcVar7 < param_3) {
    uVar9 = (longlong)param_3 - (longlong)pcVar7;
    if (uVar9 < 4) {
      lVar16 = 0;
      pcVar4 = pcVar7;
    }
    else {
      uVar6 = uVar9 & 0xfffffffffffffffc;
      pcVar4 = pcVar7 + uVar6;
      lVar16 = 0;
      lVar18 = 0;
      uVar2 = 0;
      lVar20 = 0;
      lVar21 = 0;
      do {
        auVar41[0] = -((char)*(undefined2 *)(pcVar7 + uVar2) == param_1);
        cVar55 = -((char)((ushort)*(undefined2 *)(pcVar7 + uVar2) >> 8) == param_1);
        auVar47._0_9_ = CONCAT18(0xff,0xff00000000000000);
        auVar23._0_10_ = CONCAT19(0xff,auVar47._0_9_);
        auVar23[10] = 0xff;
        auVar25[0xb] = 0xff;
        auVar25._0_11_ = auVar23;
        auVar27[0xc] = 0xff;
        auVar27._0_12_ = auVar25;
        auVar52[0xd] = 0xff;
        auVar52._0_13_ = auVar27;
        auVar52[0xe] = 0xff;
        auVar52[0xf] = 0xff;
        auVar51._14_2_ = auVar52._14_2_;
        auVar51[0xd] = 0xff;
        auVar51._0_13_ = auVar27;
        auVar50._13_3_ = auVar51._13_3_;
        auVar50[0xc] = 0xff;
        auVar50._0_12_ = auVar25;
        auVar49._12_4_ = auVar50._12_4_;
        auVar49[0xb] = 0xff;
        auVar49._0_11_ = auVar23;
        auVar48._11_5_ = auVar49._11_5_;
        auVar48[10] = 0xff;
        auVar48._0_10_ = auVar23._0_10_;
        auVar47._10_6_ = auVar48._10_6_;
        auVar47[9] = 0xff;
        auVar46._9_7_ = auVar47._9_7_;
        auVar46[8] = 0xff;
        auVar46._0_8_ = 0xff00000000000000;
        auVar45._8_8_ = auVar46._8_8_;
        auVar45._0_8_ = 0xff00000000000000;
        auVar44._7_9_ = auVar45._7_9_;
        auVar44._0_7_ = 0xff000000000000;
        auVar43._6_10_ = auVar44._6_10_;
        auVar43._0_6_ = 0xff0000000000;
        auVar42._5_11_ = auVar43._5_11_;
        auVar42._0_5_ = 0xff00000000;
        auVar41._4_12_ = auVar42._4_12_;
        auVar41[3] = cVar55;
        auVar41[2] = cVar55;
        auVar41[1] = auVar41[0];
        auVar38 = pshuflw(auVar41,auVar41,0xd4);
        auVar53._12_4_ = auVar38._12_4_;
        auVar53._0_8_ = auVar38._0_8_;
        auVar53._8_4_ = auVar38._4_4_;
        auVar53 = auVar53 & _DAT_18025f330;
        lVar16 = lVar16 + auVar53._0_8_;
        lVar18 = lVar18 + auVar53._8_8_;
        auVar92[0] = -((char)*(undefined2 *)(pcVar7 + uVar2 + 2) == param_1);
        cVar55 = -((char)((ushort)*(undefined2 *)(pcVar7 + uVar2 + 2) >> 8) == param_1);
        auVar98._0_9_ = CONCAT18(0xff,0xff00000000000000);
        auVar58._0_10_ = CONCAT19(0xff,auVar98._0_9_);
        auVar58[10] = 0xff;
        auVar61[0xb] = 0xff;
        auVar61._0_11_ = auVar58;
        auVar64[0xc] = 0xff;
        auVar64._0_12_ = auVar61;
        auVar103[0xd] = 0xff;
        auVar103._0_13_ = auVar64;
        auVar103[0xe] = 0xff;
        auVar103[0xf] = 0xff;
        auVar102._14_2_ = auVar103._14_2_;
        auVar102[0xd] = 0xff;
        auVar102._0_13_ = auVar64;
        auVar101._13_3_ = auVar102._13_3_;
        auVar101[0xc] = 0xff;
        auVar101._0_12_ = auVar61;
        auVar100._12_4_ = auVar101._12_4_;
        auVar100[0xb] = 0xff;
        auVar100._0_11_ = auVar58;
        auVar99._11_5_ = auVar100._11_5_;
        auVar99[10] = 0xff;
        auVar99._0_10_ = auVar58._0_10_;
        auVar98._10_6_ = auVar99._10_6_;
        auVar98[9] = 0xff;
        auVar97._9_7_ = auVar98._9_7_;
        auVar97[8] = 0xff;
        auVar97._0_8_ = 0xff00000000000000;
        auVar96._8_8_ = auVar97._8_8_;
        auVar96._0_8_ = 0xff00000000000000;
        auVar95._7_9_ = auVar96._7_9_;
        auVar95._0_7_ = 0xff000000000000;
        auVar94._6_10_ = auVar95._6_10_;
        auVar94._0_6_ = 0xff0000000000;
        auVar93._5_11_ = auVar94._5_11_;
        auVar93._0_5_ = 0xff00000000;
        auVar92._4_12_ = auVar93._4_12_;
        auVar92[3] = cVar55;
        auVar92[2] = cVar55;
        auVar92[1] = auVar92[0];
        auVar38 = pshuflw(auVar53,auVar92,0xd4);
        auVar54._12_4_ = auVar38._12_4_;
        auVar54._0_8_ = auVar38._0_8_;
        auVar54._8_4_ = auVar38._4_4_;
        lVar20 = lVar20 + SUB168(auVar54 & _DAT_18025f330,0);
        lVar21 = lVar21 + SUB168(auVar54 & _DAT_18025f330,8);
        uVar2 = uVar2 + 4;
      } while (uVar6 != uVar2);
      lVar16 = lVar21 + lVar18 + lVar20 + lVar16;
      if (uVar9 == uVar6) goto LAB_1801d2a74;
    }
    do {
      lVar16 = lVar16 + (ulonglong)(*pcVar4 == param_1);
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 != param_3);
  }
  else {
    lVar16 = 0;
  }
LAB_1801d2a74:
  return lVar16 + lVar3;
}


