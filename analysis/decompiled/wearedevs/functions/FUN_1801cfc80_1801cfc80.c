/* FUN_1801cfc80 @ 1801cfc80 */

undefined8
FUN_1801cfc80(byte *param_1,undefined8 param_2,byte *param_3,ulonglong param_4,byte *param_5,
             ulonglong param_6)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  char cVar42;
  int iVar43;
  byte bVar44;
  uint uVar45;
  byte *pbVar46;
  longlong lVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  byte *pbVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  
  uVar6 = *(ulonglong *)(param_1 + 0x20);
  if (param_4 < uVar6) {
    iVar43 = 0;
    if (param_6 <= param_4) {
      if (param_6 != 0) {
        iVar43 = 0;
        pbVar46 = param_3;
        do {
          iVar43 = (uint)*pbVar46 + iVar43 * 2;
          pbVar46 = pbVar46 + 1;
        } while (pbVar46 < param_3 + param_6);
      }
      iVar4 = *(int *)(param_1 + 0xe0);
      iVar5 = *(int *)(param_1 + 0xe4);
      lVar47 = 0;
      pbVar46 = param_3;
      while( true ) {
        if ((iVar4 == iVar43) && (cVar42 = FUN_1801ffd20(pbVar46,param_5,param_6), cVar42 != '\0'))
        {
          return 1;
        }
        if (param_3 + (param_4 - param_6) <= pbVar46) break;
        iVar43 = (uint)(param_3 + param_6)[lVar47] + (iVar43 - (uint)*pbVar46 * iVar5) * 2;
        lVar47 = lVar47 + 1;
        pbVar46 = param_3 + lVar47;
      }
    }
  }
  else {
    pbVar46 = param_3 + param_4;
    pbVar51 = pbVar46 + -uVar6;
    bVar2 = param_1[0x28];
    bVar3 = param_1[0x29];
    bVar10 = *param_1;
    bVar11 = param_1[1];
    bVar12 = param_1[2];
    bVar13 = param_1[3];
    bVar14 = param_1[4];
    bVar15 = param_1[5];
    bVar16 = param_1[6];
    bVar17 = param_1[7];
    bVar18 = param_1[8];
    bVar19 = param_1[9];
    bVar20 = param_1[10];
    bVar21 = param_1[0xb];
    bVar22 = param_1[0xc];
    bVar23 = param_1[0xd];
    bVar24 = param_1[0xe];
    bVar25 = param_1[0xf];
    bVar26 = param_1[0x10];
    bVar27 = param_1[0x11];
    bVar28 = param_1[0x12];
    bVar29 = param_1[0x13];
    bVar30 = param_1[0x14];
    bVar31 = param_1[0x15];
    bVar32 = param_1[0x16];
    bVar33 = param_1[0x17];
    bVar34 = param_1[0x18];
    bVar35 = param_1[0x19];
    bVar36 = param_1[0x1a];
    bVar37 = param_1[0x1b];
    bVar38 = param_1[0x1c];
    bVar39 = param_1[0x1d];
    bVar40 = param_1[0x1e];
    bVar41 = param_1[0x1f];
    if (param_6 < 4) {
      if (param_6 < 2) {
        if (param_6 == 0) {
          do {
            pbVar48 = param_3 + bVar2;
            pbVar50 = param_3 + bVar3;
            auVar58[0] = -(*pbVar48 == bVar10);
            auVar58[1] = -(pbVar48[1] == bVar11);
            auVar58[2] = -(pbVar48[2] == bVar12);
            auVar58[3] = -(pbVar48[3] == bVar13);
            auVar58[4] = -(pbVar48[4] == bVar14);
            auVar58[5] = -(pbVar48[5] == bVar15);
            auVar58[6] = -(pbVar48[6] == bVar16);
            auVar58[7] = -(pbVar48[7] == bVar17);
            auVar58[8] = -(pbVar48[8] == bVar18);
            auVar58[9] = -(pbVar48[9] == bVar19);
            auVar58[10] = -(pbVar48[10] == bVar20);
            auVar58[0xb] = -(pbVar48[0xb] == bVar21);
            auVar58[0xc] = -(pbVar48[0xc] == bVar22);
            auVar58[0xd] = -(pbVar48[0xd] == bVar23);
            auVar58[0xe] = -(pbVar48[0xe] == bVar24);
            auVar58[0xf] = -(pbVar48[0xf] == bVar25);
            auVar64[0] = -(*pbVar50 == bVar26);
            auVar64[1] = -(pbVar50[1] == bVar27);
            auVar64[2] = -(pbVar50[2] == bVar28);
            auVar64[3] = -(pbVar50[3] == bVar29);
            auVar64[4] = -(pbVar50[4] == bVar30);
            auVar64[5] = -(pbVar50[5] == bVar31);
            auVar64[6] = -(pbVar50[6] == bVar32);
            auVar64[7] = -(pbVar50[7] == bVar33);
            auVar64[8] = -(pbVar50[8] == bVar34);
            auVar64[9] = -(pbVar50[9] == bVar35);
            auVar64[10] = -(pbVar50[10] == bVar36);
            auVar64[0xb] = -(pbVar50[0xb] == bVar37);
            auVar64[0xc] = -(pbVar50[0xc] == bVar38);
            auVar64[0xd] = -(pbVar50[0xd] == bVar39);
            auVar64[0xe] = -(pbVar50[0xe] == bVar40);
            auVar64[0xf] = -(pbVar50[0xf] == bVar41);
            auVar64 = auVar64 & auVar58;
            uVar7 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar64[0xf] >> 7) << 0xf;
            if (uVar7 != 0) {
              for (uVar45 = (uint)uVar7; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
              }
              return 1;
            }
            param_3 = param_3 + 0x10;
          } while (param_3 <= pbVar51);
        }
        else {
          do {
            pbVar48 = param_3 + bVar2;
            pbVar50 = param_3 + bVar3;
            auVar59[0] = -(*pbVar48 == bVar10);
            auVar59[1] = -(pbVar48[1] == bVar11);
            auVar59[2] = -(pbVar48[2] == bVar12);
            auVar59[3] = -(pbVar48[3] == bVar13);
            auVar59[4] = -(pbVar48[4] == bVar14);
            auVar59[5] = -(pbVar48[5] == bVar15);
            auVar59[6] = -(pbVar48[6] == bVar16);
            auVar59[7] = -(pbVar48[7] == bVar17);
            auVar59[8] = -(pbVar48[8] == bVar18);
            auVar59[9] = -(pbVar48[9] == bVar19);
            auVar59[10] = -(pbVar48[10] == bVar20);
            auVar59[0xb] = -(pbVar48[0xb] == bVar21);
            auVar59[0xc] = -(pbVar48[0xc] == bVar22);
            auVar59[0xd] = -(pbVar48[0xd] == bVar23);
            auVar59[0xe] = -(pbVar48[0xe] == bVar24);
            auVar59[0xf] = -(pbVar48[0xf] == bVar25);
            auVar65[0] = -(*pbVar50 == bVar26);
            auVar65[1] = -(pbVar50[1] == bVar27);
            auVar65[2] = -(pbVar50[2] == bVar28);
            auVar65[3] = -(pbVar50[3] == bVar29);
            auVar65[4] = -(pbVar50[4] == bVar30);
            auVar65[5] = -(pbVar50[5] == bVar31);
            auVar65[6] = -(pbVar50[6] == bVar32);
            auVar65[7] = -(pbVar50[7] == bVar33);
            auVar65[8] = -(pbVar50[8] == bVar34);
            auVar65[9] = -(pbVar50[9] == bVar35);
            auVar65[10] = -(pbVar50[10] == bVar36);
            auVar65[0xb] = -(pbVar50[0xb] == bVar37);
            auVar65[0xc] = -(pbVar50[0xc] == bVar38);
            auVar65[0xd] = -(pbVar50[0xd] == bVar39);
            auVar65[0xe] = -(pbVar50[0xe] == bVar40);
            auVar65[0xf] = -(pbVar50[0xf] == bVar41);
            auVar65 = auVar65 & auVar59;
            uVar7 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar65[0xf] >> 7) << 0xf;
            if (uVar7 != 0) {
              uVar45 = (uint)uVar7;
              do {
                uVar8 = 0;
                for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                if ((ulonglong)((longlong)pbVar46 - (longlong)(param_3 + uVar8)) < param_6) break;
                if (*param_5 == param_3[uVar8]) {
                  return 1;
                }
                uVar45 = uVar45 - 1 & uVar45;
              } while (uVar45 != 0);
            }
            param_3 = param_3 + 0x10;
          } while (param_3 <= pbVar51);
        }
      }
      else if (param_6 == 2) {
        do {
          pbVar48 = param_3 + bVar2;
          pbVar50 = param_3 + bVar3;
          auVar57[0] = -(*pbVar48 == bVar10);
          auVar57[1] = -(pbVar48[1] == bVar11);
          auVar57[2] = -(pbVar48[2] == bVar12);
          auVar57[3] = -(pbVar48[3] == bVar13);
          auVar57[4] = -(pbVar48[4] == bVar14);
          auVar57[5] = -(pbVar48[5] == bVar15);
          auVar57[6] = -(pbVar48[6] == bVar16);
          auVar57[7] = -(pbVar48[7] == bVar17);
          auVar57[8] = -(pbVar48[8] == bVar18);
          auVar57[9] = -(pbVar48[9] == bVar19);
          auVar57[10] = -(pbVar48[10] == bVar20);
          auVar57[0xb] = -(pbVar48[0xb] == bVar21);
          auVar57[0xc] = -(pbVar48[0xc] == bVar22);
          auVar57[0xd] = -(pbVar48[0xd] == bVar23);
          auVar57[0xe] = -(pbVar48[0xe] == bVar24);
          auVar57[0xf] = -(pbVar48[0xf] == bVar25);
          auVar63[0] = -(*pbVar50 == bVar26);
          auVar63[1] = -(pbVar50[1] == bVar27);
          auVar63[2] = -(pbVar50[2] == bVar28);
          auVar63[3] = -(pbVar50[3] == bVar29);
          auVar63[4] = -(pbVar50[4] == bVar30);
          auVar63[5] = -(pbVar50[5] == bVar31);
          auVar63[6] = -(pbVar50[6] == bVar32);
          auVar63[7] = -(pbVar50[7] == bVar33);
          auVar63[8] = -(pbVar50[8] == bVar34);
          auVar63[9] = -(pbVar50[9] == bVar35);
          auVar63[10] = -(pbVar50[10] == bVar36);
          auVar63[0xb] = -(pbVar50[0xb] == bVar37);
          auVar63[0xc] = -(pbVar50[0xc] == bVar38);
          auVar63[0xd] = -(pbVar50[0xd] == bVar39);
          auVar63[0xe] = -(pbVar50[0xe] == bVar40);
          auVar63[0xf] = -(pbVar50[0xf] == bVar41);
          auVar63 = auVar63 & auVar57;
          uVar7 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar63[0xf] >> 7) << 0xf;
          if (uVar7 != 0) {
            uVar45 = (uint)uVar7;
            do {
              uVar8 = 0;
              for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              if ((ulonglong)((longlong)pbVar46 - (longlong)(param_3 + uVar8)) < 2) break;
              if (*(short *)param_5 == *(short *)(param_3 + uVar8)) {
                return 1;
              }
              uVar45 = uVar45 - 1 & uVar45;
            } while (uVar45 != 0);
          }
          param_3 = param_3 + 0x10;
        } while (param_3 <= pbVar51);
      }
      else {
        do {
          pbVar48 = param_3 + bVar2;
          pbVar50 = param_3 + bVar3;
          auVar56[0] = -(*pbVar48 == bVar10);
          auVar56[1] = -(pbVar48[1] == bVar11);
          auVar56[2] = -(pbVar48[2] == bVar12);
          auVar56[3] = -(pbVar48[3] == bVar13);
          auVar56[4] = -(pbVar48[4] == bVar14);
          auVar56[5] = -(pbVar48[5] == bVar15);
          auVar56[6] = -(pbVar48[6] == bVar16);
          auVar56[7] = -(pbVar48[7] == bVar17);
          auVar56[8] = -(pbVar48[8] == bVar18);
          auVar56[9] = -(pbVar48[9] == bVar19);
          auVar56[10] = -(pbVar48[10] == bVar20);
          auVar56[0xb] = -(pbVar48[0xb] == bVar21);
          auVar56[0xc] = -(pbVar48[0xc] == bVar22);
          auVar56[0xd] = -(pbVar48[0xd] == bVar23);
          auVar56[0xe] = -(pbVar48[0xe] == bVar24);
          auVar56[0xf] = -(pbVar48[0xf] == bVar25);
          auVar62[0] = -(*pbVar50 == bVar26);
          auVar62[1] = -(pbVar50[1] == bVar27);
          auVar62[2] = -(pbVar50[2] == bVar28);
          auVar62[3] = -(pbVar50[3] == bVar29);
          auVar62[4] = -(pbVar50[4] == bVar30);
          auVar62[5] = -(pbVar50[5] == bVar31);
          auVar62[6] = -(pbVar50[6] == bVar32);
          auVar62[7] = -(pbVar50[7] == bVar33);
          auVar62[8] = -(pbVar50[8] == bVar34);
          auVar62[9] = -(pbVar50[9] == bVar35);
          auVar62[10] = -(pbVar50[10] == bVar36);
          auVar62[0xb] = -(pbVar50[0xb] == bVar37);
          auVar62[0xc] = -(pbVar50[0xc] == bVar38);
          auVar62[0xd] = -(pbVar50[0xd] == bVar39);
          auVar62[0xe] = -(pbVar50[0xe] == bVar40);
          auVar62[0xf] = -(pbVar50[0xf] == bVar41);
          auVar62 = auVar62 & auVar56;
          uVar7 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar62[0xf] >> 7) << 0xf;
          if (uVar7 != 0) {
            uVar45 = (uint)uVar7;
            do {
              uVar8 = 0;
              for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              pbVar48 = param_3 + uVar8;
              if ((ulonglong)((longlong)pbVar46 - (longlong)pbVar48) < param_6) break;
              if ((*(short *)param_5 == *(short *)pbVar48) && (param_5[2] == pbVar48[2])) {
                return 1;
              }
              uVar45 = uVar45 - 1 & uVar45;
            } while (uVar45 != 0);
          }
          param_3 = param_3 + 0x10;
        } while (param_3 <= pbVar51);
      }
    }
    else {
      do {
        pbVar48 = param_3 + bVar2;
        pbVar50 = param_3 + bVar3;
        auVar55[0] = -(*pbVar48 == bVar10);
        auVar55[1] = -(pbVar48[1] == bVar11);
        auVar55[2] = -(pbVar48[2] == bVar12);
        auVar55[3] = -(pbVar48[3] == bVar13);
        auVar55[4] = -(pbVar48[4] == bVar14);
        auVar55[5] = -(pbVar48[5] == bVar15);
        auVar55[6] = -(pbVar48[6] == bVar16);
        auVar55[7] = -(pbVar48[7] == bVar17);
        auVar55[8] = -(pbVar48[8] == bVar18);
        auVar55[9] = -(pbVar48[9] == bVar19);
        auVar55[10] = -(pbVar48[10] == bVar20);
        auVar55[0xb] = -(pbVar48[0xb] == bVar21);
        auVar55[0xc] = -(pbVar48[0xc] == bVar22);
        auVar55[0xd] = -(pbVar48[0xd] == bVar23);
        auVar55[0xe] = -(pbVar48[0xe] == bVar24);
        auVar55[0xf] = -(pbVar48[0xf] == bVar25);
        auVar61[0] = -(*pbVar50 == bVar26);
        auVar61[1] = -(pbVar50[1] == bVar27);
        auVar61[2] = -(pbVar50[2] == bVar28);
        auVar61[3] = -(pbVar50[3] == bVar29);
        auVar61[4] = -(pbVar50[4] == bVar30);
        auVar61[5] = -(pbVar50[5] == bVar31);
        auVar61[6] = -(pbVar50[6] == bVar32);
        auVar61[7] = -(pbVar50[7] == bVar33);
        auVar61[8] = -(pbVar50[8] == bVar34);
        auVar61[9] = -(pbVar50[9] == bVar35);
        auVar61[10] = -(pbVar50[10] == bVar36);
        auVar61[0xb] = -(pbVar50[0xb] == bVar37);
        auVar61[0xc] = -(pbVar50[0xc] == bVar38);
        auVar61[0xd] = -(pbVar50[0xd] == bVar39);
        auVar61[0xe] = -(pbVar50[0xe] == bVar40);
        auVar61[0xf] = -(pbVar50[0xf] == bVar41);
        auVar61 = auVar61 & auVar55;
        uVar7 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar61[0xf] >> 7) << 0xf;
        if (uVar7 != 0) {
          uVar45 = (uint)uVar7;
          do {
            uVar8 = 0;
            for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            pbVar48 = param_3 + uVar8;
            if ((ulonglong)((longlong)pbVar46 - (longlong)pbVar48) < param_6) break;
            lVar54 = 0;
            lVar47 = 0;
            do {
              lVar52 = lVar47;
              if (*(int *)(param_5 + lVar52) != *(int *)(pbVar48 + lVar52)) goto LAB_1801cfdf0;
              lVar47 = lVar52 + 4;
              lVar1 = param_6 + lVar54;
              lVar54 = lVar54 + -4;
            } while (3 < lVar1 - 4U);
            uVar53 = lVar54 + param_6;
            pbVar50 = param_5 + lVar47;
            pbVar49 = pbVar48 + lVar47;
            if (uVar53 < 2) {
LAB_1801cfe76:
              if (uVar53 == 0) {
                return 1;
              }
              if (*pbVar50 == *pbVar49) {
                return 1;
              }
            }
            else if (*(short *)pbVar50 == *(short *)pbVar49) {
              pbVar50 = param_5 + lVar52 + 6;
              pbVar49 = pbVar48 + lVar52 + 6;
              uVar53 = (param_6 - lVar47) - 2;
              goto LAB_1801cfe76;
            }
LAB_1801cfdf0:
            uVar45 = uVar45 - 1 & uVar45;
          } while (uVar45 != 0);
        }
        param_3 = param_3 + 0x10;
      } while (param_3 <= pbVar51);
    }
    if ((param_3 < pbVar46) && (param_6 <= (ulonglong)((longlong)pbVar46 - (longlong)param_3))) {
      bVar44 = (char)param_3 - (char)pbVar51;
      pbVar46 = pbVar51 + bVar2;
      pbVar48 = pbVar51 + bVar3;
      auVar60[0] = -(*pbVar46 == bVar10);
      auVar60[1] = -(pbVar46[1] == bVar11);
      auVar60[2] = -(pbVar46[2] == bVar12);
      auVar60[3] = -(pbVar46[3] == bVar13);
      auVar60[4] = -(pbVar46[4] == bVar14);
      auVar60[5] = -(pbVar46[5] == bVar15);
      auVar60[6] = -(pbVar46[6] == bVar16);
      auVar60[7] = -(pbVar46[7] == bVar17);
      auVar60[8] = -(pbVar46[8] == bVar18);
      auVar60[9] = -(pbVar46[9] == bVar19);
      auVar60[10] = -(pbVar46[10] == bVar20);
      auVar60[0xb] = -(pbVar46[0xb] == bVar21);
      auVar60[0xc] = -(pbVar46[0xc] == bVar22);
      auVar60[0xd] = -(pbVar46[0xd] == bVar23);
      auVar60[0xe] = -(pbVar46[0xe] == bVar24);
      auVar60[0xf] = -(pbVar46[0xf] == bVar25);
      auVar66[0] = -(*pbVar48 == bVar26);
      auVar66[1] = -(pbVar48[1] == bVar27);
      auVar66[2] = -(pbVar48[2] == bVar28);
      auVar66[3] = -(pbVar48[3] == bVar29);
      auVar66[4] = -(pbVar48[4] == bVar30);
      auVar66[5] = -(pbVar48[5] == bVar31);
      auVar66[6] = -(pbVar48[6] == bVar32);
      auVar66[7] = -(pbVar48[7] == bVar33);
      auVar66[8] = -(pbVar48[8] == bVar34);
      auVar66[9] = -(pbVar48[9] == bVar35);
      auVar66[10] = -(pbVar48[10] == bVar36);
      auVar66[0xb] = -(pbVar48[0xb] == bVar37);
      auVar66[0xc] = -(pbVar48[0xc] == bVar38);
      auVar66[0xd] = -(pbVar48[0xd] == bVar39);
      auVar66[0xe] = -(pbVar48[0xe] == bVar40);
      auVar66[0xf] = -(pbVar48[0xf] == bVar41);
      auVar66 = auVar66 & auVar60;
      uVar45 = (uint)((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) >> (bVar44 & 0x1f)) <<
               (bVar44 & 0x1f);
      if (uVar45 != 0) {
        while( true ) {
          uVar8 = 0;
          for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          if (uVar6 - uVar8 < param_6) break;
          pbVar46 = pbVar51 + uVar8;
          pbVar48 = param_5;
          for (uVar53 = param_6; 3 < uVar53; uVar53 = uVar53 - 4) {
            if (*(int *)pbVar48 != *(int *)pbVar46) goto LAB_1801d0084;
            pbVar48 = pbVar48 + 4;
            pbVar46 = pbVar46 + 4;
          }
          if (uVar53 < 2) {
LAB_1801d00f6:
            if ((uVar53 == 0) || (*pbVar48 == *pbVar46)) {
              return 1;
            }
          }
          else if (*(short *)pbVar48 == *(short *)pbVar46) {
            pbVar48 = pbVar48 + 2;
            pbVar46 = pbVar46 + 2;
            uVar53 = uVar53 - 2;
            goto LAB_1801d00f6;
          }
LAB_1801d0084:
          uVar45 = uVar45 - 1 & uVar45;
          if (uVar45 == 0) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


