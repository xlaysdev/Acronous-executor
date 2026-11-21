/* FUN_180118fd0 @ 180118fd0 */

undefined8 *
FUN_180118fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
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
  byte bVar26;
  char cVar29;
  byte bVar28;
  char cVar31;
  byte bVar30;
  char cVar33;
  byte bVar32;
  char cVar35;
  byte bVar34;
  char cVar37;
  byte bVar36;
  char cVar39;
  byte bVar38;
  byte bVar40;
  undefined1 auVar27 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar43 [16];
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
  byte bVar66;
  byte bVar67;
  undefined1 auVar68 [16];
  int local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  lVar5 = FUN_18012be30();
  if (lVar5 != 0) {
    do {
      pcVar3 = *(char **)(lVar5 + 8);
      puVar4 = *(undefined1 **)(lVar5 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
LAB_18011920f:
        *param_4 = 0;
        param_4[1] = puVar4;
        param_4[2] = pcVar3;
        param_4[3] = puVar4;
        param_4[4] = 0;
        param_4[5] = puVar4;
        param_4[6] = 0x2c0000002c;
        *(undefined1 *)(param_4 + 7) = 1;
        *(undefined2 *)(param_4 + 8) = 1;
        puVar13 = (undefined1 *)0x0;
        puVar12 = (undefined1 *)0x0;
        do {
          puVar11 = puVar13;
          if (puVar4 < puVar13) {
          }
          else {
            do {
              puVar13 = puVar11 + (longlong)pcVar3;
              if (puVar4 + -(longlong)puVar11 < (undefined1 *)0x10) {
                puVar10 = (undefined1 *)0x0;
                if (puVar4 == puVar11) {
LAB_180119300:
                  param_4[4] = puVar4;
                  puVar13 = puVar4;
                  break;
                }
                while (puVar13[(longlong)puVar10] != ',') {
                  puVar10 = puVar10 + 1;
                  if (puVar4 + -(longlong)puVar11 == puVar10) goto LAB_180119300;
                }
              }
              else {
                uVar6 = FUN_1801f2f70(0x2c);
                puVar10 = puVar13;
                if ((uVar6 & 1) == 0) goto LAB_180119300;
              }
              puVar13 = puVar10 + (longlong)puVar11 + 1;
              param_4[4] = puVar13;
              puVar10 = puVar10 + (longlong)puVar11;
              if ((puVar10 < puVar4) && (pcVar3[(longlong)puVar10] == ',')) {
                *param_4 = puVar13;
                bVar14 = false;
                puVar11 = puVar13;
                goto LAB_180119317;
              }
              puVar11 = puVar13;
            } while (puVar13 <= puVar4);
          }
          *(undefined1 *)((longlong)param_4 + 0x41) = 1;
          bVar14 = true;
          puVar10 = puVar4;
          puVar11 = puVar12;
LAB_180119317:
          lVar5 = (longlong)puVar10 - (longlong)puVar12;
          uVar7 = FUN_180110f50(puVar12 + (longlong)pcVar3,lVar5);
          FUN_1801ae6b0(local_f0,uVar7,lVar5);
          if (local_f0[0] != 1) {
            param_1[3] = local_d8;
            param_1[4] = uStack_d0;
            param_1[1] = local_e8;
            param_1[2] = uStack_e0;
            uVar7 = 1;
            goto LAB_18011937e;
          }
          puVar12 = puVar11;
        } while (!bVar14);
      }
      else {
        if (&DAT_00000007 < puVar4) {
          if (puVar4 < (undefined1 *)0x20) {
            puVar13 = (undefined1 *)0x0;
            uVar9 = 0;
LAB_18011914f:
            puVar12 = (undefined1 *)((ulonglong)puVar4 & 0xfffffffffffffff8);
            pcVar8 = puVar12 + (longlong)pcVar3;
            auVar15 = ZEXT416(uVar9);
            do {
              uVar7 = *(undefined8 *)(pcVar3 + (longlong)puVar13);
              bVar26 = (char)uVar7 + 0x81;
              cVar29 = (char)((ulonglong)uVar7 >> 8);
              bVar28 = cVar29 + 0x81;
              cVar31 = (char)((ulonglong)uVar7 >> 0x10);
              bVar30 = cVar31 + 0x81;
              cVar33 = (char)((ulonglong)uVar7 >> 0x18);
              bVar32 = cVar33 + 0x81;
              cVar35 = (char)((ulonglong)uVar7 >> 0x20);
              bVar34 = cVar35 + 0x81;
              cVar37 = (char)((ulonglong)uVar7 >> 0x28);
              bVar36 = cVar37 + 0x81;
              cVar39 = (char)((ulonglong)uVar7 >> 0x30);
              cVar2 = (char)((ulonglong)uVar7 >> 0x38);
              bVar38 = cVar39 + 0x81;
              bVar40 = cVar2 + 0x81;
              auVar42[0] = -((byte)((bVar26 < 0xa1) * -0x5f | (bVar26 >= 0xa1) * bVar26) == bVar26);
              auVar42[1] = -((byte)((bVar28 < 0xa1) * -0x5f | (bVar28 >= 0xa1) * bVar28) == bVar28);
              auVar42[2] = -((byte)((bVar30 < 0xa1) * -0x5f | (bVar30 >= 0xa1) * bVar30) == bVar30);
              auVar42[3] = -((byte)((bVar32 < 0xa1) * -0x5f | (bVar32 >= 0xa1) * bVar32) == bVar32);
              auVar42[4] = -((byte)((bVar34 < 0xa1) * -0x5f | (bVar34 >= 0xa1) * bVar34) == bVar34);
              auVar42[5] = -((byte)((bVar36 < 0xa1) * -0x5f | (bVar36 >= 0xa1) * bVar36) == bVar36);
              auVar42[6] = -((byte)((bVar38 < 0xa1) * -0x5f | (bVar38 >= 0xa1) * bVar38) == bVar38);
              auVar42[7] = -((byte)((bVar40 < 0xa1) * -0x5f | (bVar40 >= 0xa1) * bVar40) == bVar40);
              auVar42[8] = 0xff;
              auVar42[9] = 0xff;
              auVar42[10] = 0xff;
              auVar42[0xb] = 0xff;
              auVar42[0xc] = 0xff;
              auVar42[0xd] = 0xff;
              auVar42[0xe] = 0xff;
              auVar42[0xf] = 0xff;
              auVar17[0] = -((char)uVar7 == '\t');
              auVar17[1] = -(cVar29 == '\t');
              auVar17[2] = -(cVar31 == '\t');
              auVar17[3] = -(cVar33 == '\t');
              auVar17[4] = -(cVar35 == '\t');
              auVar17[5] = -(cVar37 == '\t');
              auVar17[6] = -(cVar39 == '\t');
              auVar17[7] = -(cVar2 == '\t');
              auVar17[8] = 0xff;
              auVar17[9] = 0xff;
              auVar17[10] = 0xff;
              auVar17[0xb] = 0xff;
              auVar17[0xc] = 0xff;
              auVar17[0xd] = 0xff;
              auVar17[0xe] = 0xff;
              auVar17[0xf] = 0xff;
              auVar17 = auVar17 | auVar42;
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
              auVar16._8_4_ = 0xffffffff;
              auVar16._0_8_ = 0xffffffffffffffff;
              auVar16._12_4_ = 0xffffffff;
              auVar15 = auVar15 | auVar18 ^ auVar16;
              puVar13 = puVar13 + 8;
            } while (puVar12 != puVar13);
            auVar15 = psllw(auVar15,7);
            bVar14 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0
                          ) || (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
                     (SUB161(auVar15 >> 0x77,0) & 1) != 0;
            if (puVar4 != puVar12) goto LAB_1801191d0;
          }
          else {
            puVar13 = (undefined1 *)((ulonglong)puVar4 & 0xffffffffffffffe0);
            auVar15 = (undefined1  [16])0x0;
            puVar12 = (undefined1 *)0x0;
            auVar16 = (undefined1  [16])0x0;
            do {
              pcVar1 = pcVar3 + (longlong)puVar12;
              pcVar8 = pcVar3 + 0x10 + (longlong)puVar12;
              bVar26 = *pcVar1 + 0x81;
              bVar28 = pcVar1[1] + 0x81;
              bVar30 = pcVar1[2] + 0x81;
              bVar32 = pcVar1[3] + 0x81;
              bVar34 = pcVar1[4] + 0x81;
              bVar36 = pcVar1[5] + 0x81;
              bVar38 = pcVar1[6] + 0x81;
              bVar40 = pcVar1[7] + 0x81;
              bVar44 = pcVar1[8] + 0x81;
              bVar45 = pcVar1[9] + 0x81;
              bVar46 = pcVar1[10] + 0x81;
              bVar47 = pcVar1[0xb] + 0x81;
              bVar48 = pcVar1[0xc] + 0x81;
              bVar49 = pcVar1[0xd] + 0x81;
              bVar50 = pcVar1[0xe] + 0x81;
              bVar51 = pcVar1[0xf] + 0x81;
              bVar52 = *pcVar8 + 0x81;
              bVar53 = pcVar8[1] + 0x81;
              bVar54 = pcVar8[2] + 0x81;
              bVar55 = pcVar8[3] + 0x81;
              bVar56 = pcVar8[4] + 0x81;
              bVar57 = pcVar8[5] + 0x81;
              bVar58 = pcVar8[6] + 0x81;
              bVar59 = pcVar8[7] + 0x81;
              bVar60 = pcVar8[8] + 0x81;
              bVar61 = pcVar8[9] + 0x81;
              bVar62 = pcVar8[10] + 0x81;
              bVar63 = pcVar8[0xb] + 0x81;
              bVar64 = pcVar8[0xc] + 0x81;
              bVar65 = pcVar8[0xd] + 0x81;
              bVar66 = pcVar8[0xe] + 0x81;
              bVar67 = pcVar8[0xf] + 0x81;
              auVar68[0] = -((byte)((0xa0 < bVar26) * -0x60 | (0xa0 >= bVar26) * bVar26) == bVar26);
              auVar68[1] = -((byte)((0xa0 < bVar28) * -0x60 | (0xa0 >= bVar28) * bVar28) == bVar28);
              auVar68[2] = -((byte)((0xa0 < bVar30) * -0x60 | (0xa0 >= bVar30) * bVar30) == bVar30);
              auVar68[3] = -((byte)((0xa0 < bVar32) * -0x60 | (0xa0 >= bVar32) * bVar32) == bVar32);
              auVar68[4] = -((byte)((0xa0 < bVar34) * -0x60 | (0xa0 >= bVar34) * bVar34) == bVar34);
              auVar68[5] = -((byte)((0xa0 < bVar36) * -0x60 | (0xa0 >= bVar36) * bVar36) == bVar36);
              auVar68[6] = -((byte)((0xa0 < bVar38) * -0x60 | (0xa0 >= bVar38) * bVar38) == bVar38);
              auVar68[7] = -((byte)((0xa0 < bVar40) * -0x60 | (0xa0 >= bVar40) * bVar40) == bVar40);
              auVar68[8] = -((byte)((0xa0 < bVar44) * -0x60 | (0xa0 >= bVar44) * bVar44) == bVar44);
              auVar68[9] = -((byte)((0xa0 < bVar45) * -0x60 | (0xa0 >= bVar45) * bVar45) == bVar45);
              auVar68[10] = -((byte)((0xa0 < bVar46) * -0x60 | (0xa0 >= bVar46) * bVar46) == bVar46)
              ;
              auVar68[0xb] = -((byte)((0xa0 < bVar47) * -0x60 | (0xa0 >= bVar47) * bVar47) == bVar47
                              );
              auVar68[0xc] = -((byte)((0xa0 < bVar48) * -0x60 | (0xa0 >= bVar48) * bVar48) == bVar48
                              );
              auVar68[0xd] = -((byte)((0xa0 < bVar49) * -0x60 | (0xa0 >= bVar49) * bVar49) == bVar49
                              );
              auVar68[0xe] = -((byte)((0xa0 < bVar50) * -0x60 | (0xa0 >= bVar50) * bVar50) == bVar50
                              );
              auVar68[0xf] = -((byte)((0xa0 < bVar51) * -0x60 | (0xa0 >= bVar51) * bVar51) == bVar51
                              );
              auVar43[0] = -((byte)((0xa0 < bVar52) * -0x60 | (0xa0 >= bVar52) * bVar52) == bVar52);
              auVar43[1] = -((byte)((0xa0 < bVar53) * -0x60 | (0xa0 >= bVar53) * bVar53) == bVar53);
              auVar43[2] = -((byte)((0xa0 < bVar54) * -0x60 | (0xa0 >= bVar54) * bVar54) == bVar54);
              auVar43[3] = -((byte)((0xa0 < bVar55) * -0x60 | (0xa0 >= bVar55) * bVar55) == bVar55);
              auVar43[4] = -((byte)((0xa0 < bVar56) * -0x60 | (0xa0 >= bVar56) * bVar56) == bVar56);
              auVar43[5] = -((byte)((0xa0 < bVar57) * -0x60 | (0xa0 >= bVar57) * bVar57) == bVar57);
              auVar43[6] = -((byte)((0xa0 < bVar58) * -0x60 | (0xa0 >= bVar58) * bVar58) == bVar58);
              auVar43[7] = -((byte)((0xa0 < bVar59) * -0x60 | (0xa0 >= bVar59) * bVar59) == bVar59);
              auVar43[8] = -((byte)((0xa0 < bVar60) * -0x60 | (0xa0 >= bVar60) * bVar60) == bVar60);
              auVar43[9] = -((byte)((0xa0 < bVar61) * -0x60 | (0xa0 >= bVar61) * bVar61) == bVar61);
              auVar43[10] = -((byte)((0xa0 < bVar62) * -0x60 | (0xa0 >= bVar62) * bVar62) == bVar62)
              ;
              auVar43[0xb] = -((byte)((0xa0 < bVar63) * -0x60 | (0xa0 >= bVar63) * bVar63) == bVar63
                              );
              auVar43[0xc] = -((byte)((0xa0 < bVar64) * -0x60 | (0xa0 >= bVar64) * bVar64) == bVar64
                              );
              auVar43[0xd] = -((byte)((0xa0 < bVar65) * -0x60 | (0xa0 >= bVar65) * bVar65) == bVar65
                              );
              auVar43[0xe] = -((byte)((0xa0 < bVar66) * -0x60 | (0xa0 >= bVar66) * bVar66) == bVar66
                              );
              auVar43[0xf] = -((byte)((0xa0 < bVar67) * -0x60 | (0xa0 >= bVar67) * bVar67) == bVar67
                              );
              auVar27[0] = -(*pcVar1 == '\t');
              auVar27[1] = -(pcVar1[1] == '\t');
              auVar27[2] = -(pcVar1[2] == '\t');
              auVar27[3] = -(pcVar1[3] == '\t');
              auVar27[4] = -(pcVar1[4] == '\t');
              auVar27[5] = -(pcVar1[5] == '\t');
              auVar27[6] = -(pcVar1[6] == '\t');
              auVar27[7] = -(pcVar1[7] == '\t');
              auVar27[8] = -(pcVar1[8] == '\t');
              auVar27[9] = -(pcVar1[9] == '\t');
              auVar27[10] = -(pcVar1[10] == '\t');
              auVar27[0xb] = -(pcVar1[0xb] == '\t');
              auVar27[0xc] = -(pcVar1[0xc] == '\t');
              auVar27[0xd] = -(pcVar1[0xd] == '\t');
              auVar27[0xe] = -(pcVar1[0xe] == '\t');
              auVar27[0xf] = -(pcVar1[0xf] == '\t');
              auVar15 = auVar15 | ~auVar27 & auVar68;
              auVar41[0] = -(*pcVar8 == '\t');
              auVar41[1] = -(pcVar8[1] == '\t');
              auVar41[2] = -(pcVar8[2] == '\t');
              auVar41[3] = -(pcVar8[3] == '\t');
              auVar41[4] = -(pcVar8[4] == '\t');
              auVar41[5] = -(pcVar8[5] == '\t');
              auVar41[6] = -(pcVar8[6] == '\t');
              auVar41[7] = -(pcVar8[7] == '\t');
              auVar41[8] = -(pcVar8[8] == '\t');
              auVar41[9] = -(pcVar8[9] == '\t');
              auVar41[10] = -(pcVar8[10] == '\t');
              auVar41[0xb] = -(pcVar8[0xb] == '\t');
              auVar41[0xc] = -(pcVar8[0xc] == '\t');
              auVar41[0xd] = -(pcVar8[0xd] == '\t');
              auVar41[0xe] = -(pcVar8[0xe] == '\t');
              auVar41[0xf] = -(pcVar8[0xf] == '\t');
              auVar16 = auVar16 | ~auVar41 & auVar43;
              puVar12 = puVar12 + 0x20;
            } while (puVar13 != puVar12);
            auVar15 = psllw(auVar16 | auVar15,7);
            bVar14 = (((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 ||
                                  (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                                 (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                                (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                               (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                              (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
                             (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                            (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x5f,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0';
            uVar9 = (uint)bVar14;
            if (puVar4 != puVar13) {
              if (((ulonglong)puVar4 & 0x18) == 0) {
                pcVar8 = puVar13 + (longlong)pcVar3;
                goto LAB_1801191d0;
              }
              goto LAB_18011914f;
            }
          }
        }
        else {
          bVar14 = false;
          pcVar8 = pcVar3;
LAB_1801191d0:
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            bVar14 = (bool)(bVar14 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
          } while (pcVar8 != pcVar3 + (longlong)puVar4);
        }
        if (!bVar14) goto LAB_18011920f;
      }
      lVar5 = FUN_18012be30();
    } while (lVar5 != 0);
  }
  uVar7 = 0;
LAB_18011937e:
  *param_1 = uVar7;
  return param_1;
}


