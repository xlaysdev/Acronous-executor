/* FUN_1801e2ce0 @ 1801e2ce0 */

ulonglong FUN_1801e2ce0(char *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  char cVar99;
  int iVar100;
  uint uVar101;
  undefined8 uVar102;
  ulonglong uVar103;
  void *pvVar104;
  void *pvVar105;
  char *pcVar106;
  longlong lVar107;
  uint uVar108;
  char *pcVar109;
  undefined7 uVar111;
  char *pcVar110;
  longlong lVar112;
  char *pcVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  char cVar120;
  char cVar121;
  char cVar122;
  char cVar123;
  char cVar124;
  char cVar125;
  char cVar126;
  char cVar127;
  char cVar128;
  char cVar129;
  char cVar130;
  char cVar131;
  char cVar132;
  char cVar133;
  char cVar134;
  char cVar135;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  void *local_140;
  char *local_138;
  char *local_130;
  undefined8 local_128;
  ulonglong local_120;
  char *local_118;
  char *local_108;
  longlong local_f8;
  char *local_f0;
  longlong local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  
  uVar111 = (undefined7)((ulonglong)param_1 >> 8);
  if (param_2 < param_4) {
    cVar120 = *param_1;
    local_d8 = (char *)(param_2 - 1);
    lVar107 = 0;
    pvVar105 = param_3;
    pcVar106 = param_1;
    do {
      pvVar104 = pvVar105;
      pcVar106 = pcVar106 + -1;
      if (param_2 + lVar107 <= param_2 - 4) {
        FUN_1801f2540(&local_140,param_3,param_4,param_1,param_2);
        if ((int)local_140 == 1) {
          pcVar106 = local_e0 + -1;
          if (local_108 == (char *)0xffffffffffffffff) {
            pcVar109 = local_118 + (longlong)pcVar106;
            if (local_f0 <= pcVar109) goto LAB_1801e31cc;
            local_d8 = (char *)local_120;
            local_d0 = (char *)(1 - (longlong)local_138);
            goto LAB_1801e31ed;
          }
          pcVar109 = local_118 + (longlong)pcVar106;
          if (local_f0 <= pcVar109) goto LAB_1801e31cc;
          local_d8 = local_128;
          local_d0 = local_e0 + -(longlong)local_128;
          goto LAB_1801e2e60;
        }
        if (local_128._2_1_ != '\0') goto LAB_1801e31cc;
        if (local_138 != (char *)0x0) {
          if (local_138 < local_f0) {
            if (local_138[local_f8] < -0x40) goto LAB_1801e3354;
          }
          else if (local_138 != local_f0) goto LAB_1801e3354;
        }
        if (local_138 == local_f0) {
          uVar101 = (uint)((byte)local_128 & 1);
          goto LAB_1801e329a;
        }
        bVar2 = local_138[local_f8];
        uVar101 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar108 = bVar2 & 0x1f;
          if (bVar2 < 0xe0) {
            uVar101 = uVar108 << 6 | (byte)local_138[local_f8 + 1] & 0x3f;
          }
          else {
            uVar101 = (byte)local_138[local_f8 + 2] & 0x3f |
                      ((byte)local_138[local_f8 + 1] & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              uVar101 = uVar101 | uVar108 << 0xc;
            }
            else {
              uVar101 = (byte)local_138[local_f8 + 3] & 0x3f | uVar101 << 6 | (bVar2 & 7) << 0x12;
            }
          }
        }
        uVar103 = CONCAT71(uVar111,1);
        if (((ulonglong)local_128 & 1) != 0) goto LAB_1801e337a;
        lVar107 = 1;
        if ((0x7f < uVar101) && (lVar107 = 2, 0x7ff < uVar101)) {
          lVar107 = 4 - (ulonglong)(uVar101 < 0x10000);
        }
        local_138 = local_138 + lVar107;
        if (local_138 == (char *)0x0) goto LAB_1801e337a;
        if (local_138 < local_f0) {
          if (-0x41 < local_138[local_f8]) goto LAB_1801e337a;
        }
        else if (local_138 == local_f0) goto LAB_1801e337a;
LAB_1801e3354:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(local_f8,local_f0,local_138,local_f0,
                      &PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802911e8);
      }
      uVar103 = (param_2 + lVar107) - 1;
      if (param_2 <= uVar103) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar103,param_2,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802909b8);
      }
      cVar128 = pcVar106[param_2];
      pvVar105 = (void *)((longlong)pvVar104 + -1);
      lVar107 = lVar107 + -1;
    } while (cVar128 == cVar120);
    local_d0 = (char *)(param_2 + 0xf);
    if (local_d0 <= param_4) {
      auVar114 = pshuflw(ZEXT216(CONCAT11(cVar120,cVar120)),ZEXT216(CONCAT11(cVar120,cVar120)),0);
      cVar120 = auVar114[0];
      cVar121 = auVar114[1];
      cVar122 = auVar114[2];
      cVar123 = auVar114[3];
      cVar124 = auVar114[4];
      cVar125 = auVar114[5];
      cVar126 = auVar114[6];
      cVar127 = auVar114[7];
      auVar114 = pshuflw(ZEXT216(CONCAT11(cVar128,cVar128)),ZEXT216(CONCAT11(cVar128,cVar128)),0);
      cVar128 = auVar114[0];
      cVar129 = auVar114[1];
      cVar130 = auVar114[2];
      cVar131 = auVar114[3];
      cVar132 = auVar114[4];
      cVar133 = auVar114[5];
      cVar134 = auVar114[6];
      cVar135 = auVar114[7];
      local_130 = param_1 + 1;
      local_140 = param_3;
      local_138 = (char *)param_4;
      local_128 = local_d8;
      if (param_2 + 0x3f < param_4) {
        lVar112 = 0;
        do {
          lVar107 = param_2 + lVar112;
          pcVar106 = (char *)((longlong)param_3 + lVar112);
          pcVar109 = (char *)((longlong)param_3 + lVar112 + 0x10);
          cVar4 = *pcVar109;
          cVar5 = pcVar109[1];
          cVar6 = pcVar109[2];
          cVar7 = pcVar109[3];
          cVar8 = pcVar109[4];
          cVar9 = pcVar109[5];
          cVar10 = pcVar109[6];
          cVar11 = pcVar109[7];
          cVar12 = pcVar109[8];
          cVar13 = pcVar109[9];
          cVar14 = pcVar109[10];
          cVar15 = pcVar109[0xb];
          cVar16 = pcVar109[0xc];
          cVar17 = pcVar109[0xd];
          cVar18 = pcVar109[0xe];
          cVar19 = pcVar109[0xf];
          pcVar109 = (char *)((longlong)param_3 + lVar112 + 0x20);
          cVar20 = *pcVar109;
          cVar21 = pcVar109[1];
          cVar22 = pcVar109[2];
          cVar23 = pcVar109[3];
          cVar24 = pcVar109[4];
          cVar25 = pcVar109[5];
          cVar26 = pcVar109[6];
          cVar27 = pcVar109[7];
          cVar28 = pcVar109[8];
          cVar29 = pcVar109[9];
          cVar30 = pcVar109[10];
          cVar31 = pcVar109[0xb];
          cVar32 = pcVar109[0xc];
          cVar33 = pcVar109[0xd];
          cVar34 = pcVar109[0xe];
          cVar35 = pcVar109[0xf];
          pcVar109 = (char *)((longlong)param_3 + lVar112 + 0x30);
          cVar36 = *pcVar109;
          cVar37 = pcVar109[1];
          cVar38 = pcVar109[2];
          cVar39 = pcVar109[3];
          cVar40 = pcVar109[4];
          cVar41 = pcVar109[5];
          cVar42 = pcVar109[6];
          cVar43 = pcVar109[7];
          cVar44 = pcVar109[8];
          cVar45 = pcVar109[9];
          cVar46 = pcVar109[10];
          cVar47 = pcVar109[0xb];
          cVar48 = pcVar109[0xc];
          cVar49 = pcVar109[0xd];
          cVar50 = pcVar109[0xe];
          cVar51 = pcVar109[0xf];
          auVar114[0] = -(*pcVar106 == cVar120);
          auVar114[1] = -(pcVar106[1] == cVar121);
          auVar114[2] = -(pcVar106[2] == cVar122);
          auVar114[3] = -(pcVar106[3] == cVar123);
          auVar114[4] = -(pcVar106[4] == cVar124);
          auVar114[5] = -(pcVar106[5] == cVar125);
          auVar114[6] = -(pcVar106[6] == cVar126);
          auVar114[7] = -(pcVar106[7] == cVar127);
          auVar114[8] = -(pcVar106[8] == cVar120);
          auVar114[9] = -(pcVar106[9] == cVar121);
          auVar114[10] = -(pcVar106[10] == cVar122);
          auVar114[0xb] = -(pcVar106[0xb] == cVar123);
          auVar114[0xc] = -(pcVar106[0xc] == cVar124);
          auVar114[0xd] = -(pcVar106[0xd] == cVar125);
          auVar114[0xe] = -(pcVar106[0xe] == cVar126);
          auVar114[0xf] = -(pcVar106[0xf] == cVar127);
          pcVar106 = (char *)((longlong)pvVar105 + lVar107);
          pcVar109 = (char *)((longlong)pvVar104 + lVar107 + 0xf);
          cVar52 = *pcVar109;
          cVar53 = pcVar109[1];
          cVar54 = pcVar109[2];
          cVar55 = pcVar109[3];
          cVar56 = pcVar109[4];
          cVar57 = pcVar109[5];
          cVar58 = pcVar109[6];
          cVar59 = pcVar109[7];
          cVar60 = pcVar109[8];
          cVar61 = pcVar109[9];
          cVar62 = pcVar109[10];
          cVar63 = pcVar109[0xb];
          cVar64 = pcVar109[0xc];
          cVar65 = pcVar109[0xd];
          cVar66 = pcVar109[0xe];
          cVar67 = pcVar109[0xf];
          pcVar109 = (char *)((longlong)pvVar104 + lVar107 + 0x1f);
          cVar68 = *pcVar109;
          cVar69 = pcVar109[1];
          cVar70 = pcVar109[2];
          cVar71 = pcVar109[3];
          cVar72 = pcVar109[4];
          cVar73 = pcVar109[5];
          cVar74 = pcVar109[6];
          cVar75 = pcVar109[7];
          cVar76 = pcVar109[8];
          cVar77 = pcVar109[9];
          cVar78 = pcVar109[10];
          cVar79 = pcVar109[0xb];
          cVar80 = pcVar109[0xc];
          cVar81 = pcVar109[0xd];
          cVar82 = pcVar109[0xe];
          cVar83 = pcVar109[0xf];
          pcVar109 = (char *)((longlong)pvVar104 + lVar107 + 0x2f);
          cVar84 = *pcVar109;
          cVar85 = pcVar109[1];
          cVar86 = pcVar109[2];
          cVar87 = pcVar109[3];
          cVar88 = pcVar109[4];
          cVar89 = pcVar109[5];
          cVar90 = pcVar109[6];
          cVar91 = pcVar109[7];
          cVar92 = pcVar109[8];
          cVar93 = pcVar109[9];
          cVar94 = pcVar109[10];
          cVar95 = pcVar109[0xb];
          cVar96 = pcVar109[0xc];
          cVar97 = pcVar109[0xd];
          cVar98 = pcVar109[0xe];
          cVar99 = pcVar109[0xf];
          auVar117[0] = -(*pcVar106 == cVar128);
          auVar117[1] = -(pcVar106[1] == cVar129);
          auVar117[2] = -(pcVar106[2] == cVar130);
          auVar117[3] = -(pcVar106[3] == cVar131);
          auVar117[4] = -(pcVar106[4] == cVar132);
          auVar117[5] = -(pcVar106[5] == cVar133);
          auVar117[6] = -(pcVar106[6] == cVar134);
          auVar117[7] = -(pcVar106[7] == cVar135);
          auVar117[8] = -(pcVar106[8] == cVar128);
          auVar117[9] = -(pcVar106[9] == cVar129);
          auVar117[10] = -(pcVar106[10] == cVar130);
          auVar117[0xb] = -(pcVar106[0xb] == cVar131);
          auVar117[0xc] = -(pcVar106[0xc] == cVar132);
          auVar117[0xd] = -(pcVar106[0xd] == cVar133);
          auVar117[0xe] = -(pcVar106[0xe] == cVar134);
          auVar117[0xf] = -(pcVar106[0xf] == cVar135);
          auVar117 = auVar117 & auVar114;
          uVar3 = (ushort)(SUB161(auVar117 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar117 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar117 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar117 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar117 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar117 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar117 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar117 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar117 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar117 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar117 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar117 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar117 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar117 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar117 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar117[0xf] >> 7) << 0xf;
          if (uVar3 == 0) {
            uVar103 = 0;
          }
          else {
            uVar101 = FUN_180200ac0(&local_140,lVar112,uVar3,0);
            uVar103 = (ulonglong)uVar101;
          }
          auVar140[0] = -(cVar4 == cVar120);
          auVar140[1] = -(cVar5 == cVar121);
          auVar140[2] = -(cVar6 == cVar122);
          auVar140[3] = -(cVar7 == cVar123);
          auVar140[4] = -(cVar8 == cVar124);
          auVar140[5] = -(cVar9 == cVar125);
          auVar140[6] = -(cVar10 == cVar126);
          auVar140[7] = -(cVar11 == cVar127);
          auVar140[8] = -(cVar12 == cVar120);
          auVar140[9] = -(cVar13 == cVar121);
          auVar140[10] = -(cVar14 == cVar122);
          auVar140[0xb] = -(cVar15 == cVar123);
          auVar140[0xc] = -(cVar16 == cVar124);
          auVar140[0xd] = -(cVar17 == cVar125);
          auVar140[0xe] = -(cVar18 == cVar126);
          auVar140[0xf] = -(cVar19 == cVar127);
          auVar141[0] = -(cVar52 == cVar128);
          auVar141[1] = -(cVar53 == cVar129);
          auVar141[2] = -(cVar54 == cVar130);
          auVar141[3] = -(cVar55 == cVar131);
          auVar141[4] = -(cVar56 == cVar132);
          auVar141[5] = -(cVar57 == cVar133);
          auVar141[6] = -(cVar58 == cVar134);
          auVar141[7] = -(cVar59 == cVar135);
          auVar141[8] = -(cVar60 == cVar128);
          auVar141[9] = -(cVar61 == cVar129);
          auVar141[10] = -(cVar62 == cVar130);
          auVar141[0xb] = -(cVar63 == cVar131);
          auVar141[0xc] = -(cVar64 == cVar132);
          auVar141[0xd] = -(cVar65 == cVar133);
          auVar141[0xe] = -(cVar66 == cVar134);
          auVar141[0xf] = -(cVar67 == cVar135);
          auVar141 = auVar141 & auVar140;
          uVar3 = (ushort)(SUB161(auVar141 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar141 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar141 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar141 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar141 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar141 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar141 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar141 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar141 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar141 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar141 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar141 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar141 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar141 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar141 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar141[0xf] >> 7) << 0xf;
          if (uVar3 != 0) {
            uVar102 = FUN_180200ac0(&local_140,lVar112 + 0x10,uVar3,uVar103);
            uVar103 = CONCAT71((int7)((ulonglong)uVar102 >> 8),(byte)uVar102 | (byte)uVar103) &
                      0xffffffff;
          }
          auVar138[0] = -(cVar20 == cVar120);
          auVar138[1] = -(cVar21 == cVar121);
          auVar138[2] = -(cVar22 == cVar122);
          auVar138[3] = -(cVar23 == cVar123);
          auVar138[4] = -(cVar24 == cVar124);
          auVar138[5] = -(cVar25 == cVar125);
          auVar138[6] = -(cVar26 == cVar126);
          auVar138[7] = -(cVar27 == cVar127);
          auVar138[8] = -(cVar28 == cVar120);
          auVar138[9] = -(cVar29 == cVar121);
          auVar138[10] = -(cVar30 == cVar122);
          auVar138[0xb] = -(cVar31 == cVar123);
          auVar138[0xc] = -(cVar32 == cVar124);
          auVar138[0xd] = -(cVar33 == cVar125);
          auVar138[0xe] = -(cVar34 == cVar126);
          auVar138[0xf] = -(cVar35 == cVar127);
          auVar139[0] = -(cVar68 == cVar128);
          auVar139[1] = -(cVar69 == cVar129);
          auVar139[2] = -(cVar70 == cVar130);
          auVar139[3] = -(cVar71 == cVar131);
          auVar139[4] = -(cVar72 == cVar132);
          auVar139[5] = -(cVar73 == cVar133);
          auVar139[6] = -(cVar74 == cVar134);
          auVar139[7] = -(cVar75 == cVar135);
          auVar139[8] = -(cVar76 == cVar128);
          auVar139[9] = -(cVar77 == cVar129);
          auVar139[10] = -(cVar78 == cVar130);
          auVar139[0xb] = -(cVar79 == cVar131);
          auVar139[0xc] = -(cVar80 == cVar132);
          auVar139[0xd] = -(cVar81 == cVar133);
          auVar139[0xe] = -(cVar82 == cVar134);
          auVar139[0xf] = -(cVar83 == cVar135);
          auVar139 = auVar139 & auVar138;
          uVar3 = (ushort)(SUB161(auVar139 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar139 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar139 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar139 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar139 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar139 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar139 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar139 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar139 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar139 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar139 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar139 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar139 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar139 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar139 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar139[0xf] >> 7) << 0xf;
          if (uVar3 != 0) {
            uVar102 = FUN_180200ac0(&local_140,lVar112 + 0x20,uVar3,uVar103);
            uVar103 = CONCAT71((int7)((ulonglong)uVar102 >> 8),(byte)uVar102 | (byte)uVar103) &
                      0xffffffff;
          }
          auVar136[0] = -(cVar36 == cVar120);
          auVar136[1] = -(cVar37 == cVar121);
          auVar136[2] = -(cVar38 == cVar122);
          auVar136[3] = -(cVar39 == cVar123);
          auVar136[4] = -(cVar40 == cVar124);
          auVar136[5] = -(cVar41 == cVar125);
          auVar136[6] = -(cVar42 == cVar126);
          auVar136[7] = -(cVar43 == cVar127);
          auVar136[8] = -(cVar44 == cVar120);
          auVar136[9] = -(cVar45 == cVar121);
          auVar136[10] = -(cVar46 == cVar122);
          auVar136[0xb] = -(cVar47 == cVar123);
          auVar136[0xc] = -(cVar48 == cVar124);
          auVar136[0xd] = -(cVar49 == cVar125);
          auVar136[0xe] = -(cVar50 == cVar126);
          auVar136[0xf] = -(cVar51 == cVar127);
          auVar137[0] = -(cVar84 == cVar128);
          auVar137[1] = -(cVar85 == cVar129);
          auVar137[2] = -(cVar86 == cVar130);
          auVar137[3] = -(cVar87 == cVar131);
          auVar137[4] = -(cVar88 == cVar132);
          auVar137[5] = -(cVar89 == cVar133);
          auVar137[6] = -(cVar90 == cVar134);
          auVar137[7] = -(cVar91 == cVar135);
          auVar137[8] = -(cVar92 == cVar128);
          auVar137[9] = -(cVar93 == cVar129);
          auVar137[10] = -(cVar94 == cVar130);
          auVar137[0xb] = -(cVar95 == cVar131);
          auVar137[0xc] = -(cVar96 == cVar132);
          auVar137[0xd] = -(cVar97 == cVar133);
          auVar137[0xe] = -(cVar98 == cVar134);
          auVar137[0xf] = -(cVar99 == cVar135);
          auVar137 = auVar137 & auVar136;
          uVar3 = (ushort)(SUB161(auVar137 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar137 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar137 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar137 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar137 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar137 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar137 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar137 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar137 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar137 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar137 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar137 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar137 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar137 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar137 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar137[0xf] >> 7) << 0xf;
          if (uVar3 != 0) {
            uVar102 = FUN_180200ac0(&local_140,lVar112 + 0x30,uVar3,uVar103);
            uVar103 = CONCAT71((int7)((ulonglong)uVar102 >> 8),(byte)uVar102 | (byte)uVar103) &
                      0xffffffff;
          }
          lVar107 = lVar112 + 0x40;
        } while ((lVar112 + param_2 + 0x7f < param_4) &&
                (lVar107 = lVar112 + 0x40, lVar112 = lVar107, (char)uVar103 == '\0'));
      }
      else {
        uVar103 = 0;
        lVar107 = 0;
      }
      if (((ulonglong)((longlong)local_d0 + lVar107) < param_4) && ((char)uVar103 == '\0')) {
        pcVar106 = (char *)((longlong)param_3 + lVar107);
        do {
          pcVar109 = (char *)((longlong)pvVar105 + param_2 + lVar107);
          auVar115[0] = -(*pcVar106 == cVar120);
          auVar115[1] = -(pcVar106[1] == cVar121);
          auVar115[2] = -(pcVar106[2] == cVar122);
          auVar115[3] = -(pcVar106[3] == cVar123);
          auVar115[4] = -(pcVar106[4] == cVar124);
          auVar115[5] = -(pcVar106[5] == cVar125);
          auVar115[6] = -(pcVar106[6] == cVar126);
          auVar115[7] = -(pcVar106[7] == cVar127);
          auVar115[8] = -(pcVar106[8] == cVar120);
          auVar115[9] = -(pcVar106[9] == cVar121);
          auVar115[10] = -(pcVar106[10] == cVar122);
          auVar115[0xb] = -(pcVar106[0xb] == cVar123);
          auVar115[0xc] = -(pcVar106[0xc] == cVar124);
          auVar115[0xd] = -(pcVar106[0xd] == cVar125);
          auVar115[0xe] = -(pcVar106[0xe] == cVar126);
          auVar115[0xf] = -(pcVar106[0xf] == cVar127);
          auVar118[0] = -(*pcVar109 == cVar128);
          auVar118[1] = -(pcVar109[1] == cVar129);
          auVar118[2] = -(pcVar109[2] == cVar130);
          auVar118[3] = -(pcVar109[3] == cVar131);
          auVar118[4] = -(pcVar109[4] == cVar132);
          auVar118[5] = -(pcVar109[5] == cVar133);
          auVar118[6] = -(pcVar109[6] == cVar134);
          auVar118[7] = -(pcVar109[7] == cVar135);
          auVar118[8] = -(pcVar109[8] == cVar128);
          auVar118[9] = -(pcVar109[9] == cVar129);
          auVar118[10] = -(pcVar109[10] == cVar130);
          auVar118[0xb] = -(pcVar109[0xb] == cVar131);
          auVar118[0xc] = -(pcVar109[0xc] == cVar132);
          auVar118[0xd] = -(pcVar109[0xd] == cVar133);
          auVar118[0xe] = -(pcVar109[0xe] == cVar134);
          auVar118[0xf] = -(pcVar109[0xf] == cVar135);
          auVar118 = auVar118 & auVar115;
          uVar3 = (ushort)(SUB161(auVar118 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar118 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar118 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar118 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar118 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar118 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar118 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar118 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar118 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar118 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar118 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar118 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar118 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar118 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar118[0xf] >> 7) << 0xf;
          if (uVar3 == 0) {
            uVar103 = 0;
          }
          else {
            uVar101 = FUN_180200ac0(&local_140,lVar107,uVar3,0);
            uVar103 = (ulonglong)uVar101;
          }
          if (param_4 <= param_2 + 0x1f + lVar107) break;
          lVar107 = lVar107 + 0x10;
          pcVar106 = pcVar106 + 0x10;
        } while ((char)uVar103 == '\0');
      }
      pcVar106 = (char *)((longlong)param_3 + (param_4 - (longlong)local_d8) + -0x10);
      pcVar109 = (char *)((param_4 - 0xf) + (longlong)pvVar105);
      auVar116[0] = -(*pcVar106 == cVar120);
      auVar116[1] = -(pcVar106[1] == cVar121);
      auVar116[2] = -(pcVar106[2] == cVar122);
      auVar116[3] = -(pcVar106[3] == cVar123);
      auVar116[4] = -(pcVar106[4] == cVar124);
      auVar116[5] = -(pcVar106[5] == cVar125);
      auVar116[6] = -(pcVar106[6] == cVar126);
      auVar116[7] = -(pcVar106[7] == cVar127);
      auVar116[8] = -(pcVar106[8] == cVar120);
      auVar116[9] = -(pcVar106[9] == cVar121);
      auVar116[10] = -(pcVar106[10] == cVar122);
      auVar116[0xb] = -(pcVar106[0xb] == cVar123);
      auVar116[0xc] = -(pcVar106[0xc] == cVar124);
      auVar116[0xd] = -(pcVar106[0xd] == cVar125);
      auVar116[0xe] = -(pcVar106[0xe] == cVar126);
      auVar116[0xf] = -(pcVar106[0xf] == cVar127);
      auVar119[0] = -(*pcVar109 == cVar128);
      auVar119[1] = -(pcVar109[1] == cVar129);
      auVar119[2] = -(pcVar109[2] == cVar130);
      auVar119[3] = -(pcVar109[3] == cVar131);
      auVar119[4] = -(pcVar109[4] == cVar132);
      auVar119[5] = -(pcVar109[5] == cVar133);
      auVar119[6] = -(pcVar109[6] == cVar134);
      auVar119[7] = -(pcVar109[7] == cVar135);
      auVar119[8] = -(pcVar109[8] == cVar128);
      auVar119[9] = -(pcVar109[9] == cVar129);
      auVar119[10] = -(pcVar109[10] == cVar130);
      auVar119[0xb] = -(pcVar109[0xb] == cVar131);
      auVar119[0xc] = -(pcVar109[0xc] == cVar132);
      auVar119[0xd] = -(pcVar109[0xd] == cVar133);
      auVar119[0xe] = -(pcVar109[0xe] == cVar134);
      auVar119[0xf] = -(pcVar109[0xf] == cVar135);
      auVar119 = auVar119 & auVar116;
      uVar3 = (ushort)(SUB161(auVar119 >> 7,0) & 1) | (ushort)(SUB161(auVar119 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar119 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar119 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar119 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar119 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar119 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar119 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar119 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar119 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar119 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar119 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar119 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar119 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar119 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar119[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
        uVar102 = FUN_180200ac0(&local_140,(param_4 - (longlong)local_d8) + -0x10,uVar3,uVar103);
        uVar101 = (uint)CONCAT71((int7)((ulonglong)uVar102 >> 8),(byte)uVar102 | (byte)uVar103);
LAB_1801e329a:
        uVar103 = (ulonglong)uVar101;
      }
      goto LAB_1801e337a;
    }
    do {
      iVar100 = memcmp(param_3,param_1,param_2);
      if (iVar100 == 0) goto LAB_1801e3285;
      param_3 = (void *)((longlong)param_3 + 1);
      param_4 = param_4 - 1;
    } while (param_2 <= param_4);
  }
  else if (param_2 == param_4) {
    iVar100 = memcmp(param_1,param_3,param_2);
    uVar103 = CONCAT71(uVar111,iVar100 == 0);
    goto LAB_1801e337a;
  }
LAB_1801e31cc:
  uVar103 = 0;
  goto LAB_1801e337a;
  while( true ) {
    pcVar109 = pcVar109 + -1;
    if (local_e0 <= pcVar109) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar109,local_e0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802909d0);
    }
    pcVar113 = pcVar109 + (longlong)local_118;
    if (local_f0 <= pcVar113) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar113,local_f0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802909e8);
    }
    param_1 = (char *)0x0;
    if (pcVar109[local_e8] != pcVar113[local_f8]) break;
LAB_1801e2ed0:
    if (pcVar109 <= local_108) goto LAB_1801e3285;
  }
  local_118 = local_118 + (longlong)local_128;
  local_108 = local_d0;
  while( true ) {
    pcVar109 = local_118 + (longlong)pcVar106;
    uVar103 = 0;
    if (local_f0 <= pcVar109) break;
LAB_1801e2e60:
    if ((local_120 >> ((ulonglong)(byte)pcVar109[local_f8] & 0x3f) & 1) == 0) {
      local_118 = local_118 + (longlong)local_e0;
    }
    else {
      pcVar109 = local_138;
      if (local_138 < local_108) {
        pcVar109 = local_108;
      }
      param_1 = pcVar109;
      do {
        if (local_e0 <= param_1) {
          pcVar109 = local_138;
          goto LAB_1801e2ed0;
        }
        if (local_f0 <= local_118 + (longlong)param_1) {
          pcVar106 = local_118 + (longlong)pcVar109;
          if (local_118 + (longlong)pcVar109 < local_f0) {
            pcVar106 = local_f0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(pcVar106,local_f0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180290a00);
        }
        pcVar113 = param_1 + 1;
        pcVar110 = param_1 + local_e8;
        pcVar1 = local_118 + local_f8 + (longlong)param_1;
        param_1 = pcVar113;
      } while (*pcVar110 == *pcVar1);
      local_118 = pcVar113 + ((longlong)local_118 - (longlong)local_138);
    }
    local_108 = (char *)0x0;
  }
  goto LAB_1801e337a;
LAB_1801e3285:
  uVar103 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_1801e337a;
  while( true ) {
    if (local_e0 <= local_138 + -1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(-lVar107,local_e0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802909d0);
    }
    if (local_f0 <= pcVar109) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar109,local_f0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802909e8);
    }
    lVar107 = lVar107 + 1;
    pcVar113 = pcVar109 + local_f8;
    pcVar109 = pcVar109 + -1;
    if (*param_1 != *pcVar113) break;
LAB_1801e3250:
    param_1 = param_1 + -1;
    if (lVar107 == 1) goto LAB_1801e3285;
  }
  pcVar113 = local_128;
LAB_1801e31d7:
  pcVar113 = local_118 + (longlong)pcVar113;
  while( true ) {
    pcVar109 = pcVar113 + (longlong)pcVar106;
    uVar103 = 0;
    local_118 = pcVar113;
    if (local_f0 <= pcVar109) break;
LAB_1801e31ed:
    pcVar113 = local_e0;
    if ((local_120 >> ((ulonglong)(byte)pcVar109[local_f8] & 0x3f) & 1) == 0) goto LAB_1801e31d7;
    lVar107 = 0;
    pcVar109 = local_138 + local_e8;
    pcVar110 = local_118;
    do {
      if (local_e0 <= local_138 + lVar107) {
        pcVar109 = local_138 + -1 + (longlong)local_118;
        lVar107 = (longlong)local_d0;
        param_1 = local_138 + local_e8;
        goto LAB_1801e3250;
      }
      if (local_f0 <= local_138 + (longlong)pcVar110) {
        pcVar106 = local_118 + (longlong)local_138;
        if (local_118 + (longlong)local_138 < local_f0) {
          pcVar106 = local_f0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(pcVar106,local_f0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180290a00);
      }
      cVar120 = *pcVar109;
      pcVar113 = pcVar110 + 1;
      pcVar109 = pcVar109 + 1;
      lVar107 = lVar107 + 1;
      pcVar1 = local_138 + local_f8 + (longlong)pcVar110;
      pcVar110 = pcVar113;
    } while (cVar120 == *pcVar1);
  }
LAB_1801e337a:
  return uVar103 & 0xffffffff;
}


