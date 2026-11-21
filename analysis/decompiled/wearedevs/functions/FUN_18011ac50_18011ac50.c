/* FUN_18011ac50 @ 18011ac50 */

longlong FUN_18011ac50(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  char *pcVar15;
  char cVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  longlong lVar21;
  char *unaff_R14;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  byte bVar34;
  char cVar37;
  byte bVar36;
  char cVar39;
  byte bVar38;
  char cVar41;
  byte bVar40;
  char cVar43;
  byte bVar42;
  char cVar45;
  byte bVar44;
  char cVar47;
  byte bVar46;
  byte bVar48;
  undefined1 auVar35 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined1 auVar51 [16];
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
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined1 auVar76 [16];
  char *local_138;
  char *local_130;
  undefined8 local_128;
  char *pcStack_120;
  char *local_118;
  char *pcStack_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined2 local_e8;
  int local_e0 [2];
  char *local_d8;
  longlong local_d0;
  
  local_118 = (char *)0x0;
  pcStack_110 = (char *)0x0;
  local_128 = 0;
  pcStack_120 = &DAT_00000018;
  FUN_18012aef0(local_e0,param_1);
  if (local_e0[0] == 1) {
    if (*(char **)(local_d0 + 0x28) <= local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_d8,*(char **)(local_d0 + 0x28),
                    &PTR_s_C__Users_burne__cargo_registry_s_180242e08);
    }
    lVar21 = (longlong)local_d8 * 0x68;
    bVar22 = (*(byte *)(*(longlong *)(local_d0 + 0x20) + lVar21) & 1) == 0;
    if (!bVar22) {
      local_138 = *(char **)(*(longlong *)(local_d0 + 0x20) + lVar21 + 0x10);
    }
    cVar16 = !bVar22;
    lVar12 = 0;
    uVar17 = 0;
    do {
      if ((uVar17 & 1) == 0) {
        pcVar15 = *(char **)(local_d0 + 0x28);
        if (pcVar15 <= local_d8) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(local_d8,pcVar15,&PTR_s_C__Users_burne__cargo_registry_s_1802430c0);
        }
        piVar11 = (int *)(*(longlong *)(local_d0 + 0x20) + lVar21);
        if (cVar16 == '\0') {
          cVar16 = '\x02';
          uVar17 = 2;
        }
        else {
          if (*piVar11 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0(&DAT_1802430d8,0x28,&PTR_s_C__Users_burne__cargo_registry_s_180243100);
          }
          unaff_R14 = *(char **)(piVar11 + 2);
          uVar17 = 1;
        }
        local_118 = *(char **)(piVar11 + 8);
        pcStack_120 = *(char **)(piVar11 + 10);
      }
      else {
        pcVar15 = *(char **)(local_d0 + 0x40);
        if (pcVar15 <= unaff_R14) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(unaff_R14,pcVar15,&PTR_s_C__Users_burne__cargo_registry_s_180243118);
        }
        lVar10 = (longlong)unaff_R14 * 0x48 + *(longlong *)(local_d0 + 0x38);
        uVar17 = 2;
        if ((cVar16 == '\x01') && (unaff_R14 == local_138)) {
          cVar16 = '\x02';
          unaff_R14 = local_138;
        }
        else if (*(int *)(lVar10 + 0x10) == 1) {
          unaff_R14 = *(char **)(lVar10 + 0x18);
          uVar17 = 1;
        }
        local_118 = *(char **)(lVar10 + 0x28);
        pcStack_120 = *(char **)(lVar10 + 0x30);
      }
      if (pcStack_120 != (char *)0x0) {
        if (&DAT_00000007 < pcStack_120) {
          if (pcStack_120 < (char *)0x20) {
            pcVar15 = (char *)0x0;
            uVar19 = 0;
LAB_18011aef1:
            pcVar14 = (char *)((ulonglong)pcStack_120 & 0xfffffffffffffff8);
            pcVar18 = local_118 + (longlong)pcVar14;
            auVar23 = ZEXT416(uVar19);
            do {
              uVar1 = *(undefined8 *)(local_118 + (longlong)pcVar15);
              bVar34 = (char)uVar1 + 0x81;
              cVar37 = (char)((ulonglong)uVar1 >> 8);
              bVar36 = cVar37 + 0x81;
              cVar39 = (char)((ulonglong)uVar1 >> 0x10);
              bVar38 = cVar39 + 0x81;
              cVar41 = (char)((ulonglong)uVar1 >> 0x18);
              bVar40 = cVar41 + 0x81;
              cVar43 = (char)((ulonglong)uVar1 >> 0x20);
              bVar42 = cVar43 + 0x81;
              cVar45 = (char)((ulonglong)uVar1 >> 0x28);
              bVar44 = cVar45 + 0x81;
              cVar47 = (char)((ulonglong)uVar1 >> 0x30);
              cVar2 = (char)((ulonglong)uVar1 >> 0x38);
              bVar46 = cVar47 + 0x81;
              bVar48 = cVar2 + 0x81;
              auVar50[0] = -((byte)((bVar34 < 0xa1) * -0x5f | (bVar34 >= 0xa1) * bVar34) == bVar34);
              auVar50[1] = -((byte)((bVar36 < 0xa1) * -0x5f | (bVar36 >= 0xa1) * bVar36) == bVar36);
              auVar50[2] = -((byte)((bVar38 < 0xa1) * -0x5f | (bVar38 >= 0xa1) * bVar38) == bVar38);
              auVar50[3] = -((byte)((bVar40 < 0xa1) * -0x5f | (bVar40 >= 0xa1) * bVar40) == bVar40);
              auVar50[4] = -((byte)((bVar42 < 0xa1) * -0x5f | (bVar42 >= 0xa1) * bVar42) == bVar42);
              auVar50[5] = -((byte)((bVar44 < 0xa1) * -0x5f | (bVar44 >= 0xa1) * bVar44) == bVar44);
              auVar50[6] = -((byte)((bVar46 < 0xa1) * -0x5f | (bVar46 >= 0xa1) * bVar46) == bVar46);
              auVar50[7] = -((byte)((bVar48 < 0xa1) * -0x5f | (bVar48 >= 0xa1) * bVar48) == bVar48);
              auVar50[8] = 0xff;
              auVar50[9] = 0xff;
              auVar50[10] = 0xff;
              auVar50[0xb] = 0xff;
              auVar50[0xc] = 0xff;
              auVar50[0xd] = 0xff;
              auVar50[0xe] = 0xff;
              auVar50[0xf] = 0xff;
              auVar25[0] = -((char)uVar1 == '\t');
              auVar25[1] = -(cVar37 == '\t');
              auVar25[2] = -(cVar39 == '\t');
              auVar25[3] = -(cVar41 == '\t');
              auVar25[4] = -(cVar43 == '\t');
              auVar25[5] = -(cVar45 == '\t');
              auVar25[6] = -(cVar47 == '\t');
              auVar25[7] = -(cVar2 == '\t');
              auVar25[8] = 0xff;
              auVar25[9] = 0xff;
              auVar25[10] = 0xff;
              auVar25[0xb] = 0xff;
              auVar25[0xc] = 0xff;
              auVar25[0xd] = 0xff;
              auVar25[0xe] = 0xff;
              auVar25[0xf] = 0xff;
              auVar25 = auVar25 | auVar50;
              auVar33._0_14_ = auVar25._0_14_;
              auVar33[0xe] = auVar25[7];
              auVar33[0xf] = auVar25[7];
              auVar32._14_2_ = auVar33._14_2_;
              auVar32._0_13_ = auVar25._0_13_;
              auVar32[0xd] = auVar25[6];
              auVar31._13_3_ = auVar32._13_3_;
              auVar31._0_12_ = auVar25._0_12_;
              auVar31[0xc] = auVar25[6];
              auVar30._12_4_ = auVar31._12_4_;
              auVar30._0_11_ = auVar25._0_11_;
              auVar30[0xb] = auVar25[5];
              auVar29._11_5_ = auVar30._11_5_;
              auVar29._0_10_ = auVar25._0_10_;
              auVar29[10] = auVar25[5];
              auVar28._10_6_ = auVar29._10_6_;
              auVar28._0_9_ = auVar25._0_9_;
              auVar28[9] = auVar25[4];
              auVar27._9_7_ = auVar28._9_7_;
              auVar27._0_8_ = auVar25._0_8_;
              auVar27[8] = auVar25[4];
              auVar26._8_8_ = auVar27._8_8_;
              auVar26[7] = auVar25[3];
              auVar26[6] = auVar25[3];
              auVar26[5] = auVar25[2];
              auVar26[4] = auVar25[2];
              auVar26[3] = auVar25[1];
              auVar26[2] = auVar25[1];
              auVar26[0] = auVar25[0];
              auVar26[1] = auVar26[0];
              auVar24._8_4_ = 0xffffffff;
              auVar24._0_8_ = 0xffffffffffffffff;
              auVar24._12_4_ = 0xffffffff;
              auVar23 = auVar23 | auVar26 ^ auVar24;
              pcVar15 = pcVar15 + 8;
            } while (pcVar14 != pcVar15);
            auVar23 = psllw(auVar23,7);
            uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1);
            uVar4 = (ushort)(SUB161(auVar23 >> 0x17,0) & 1);
            uVar5 = (ushort)(SUB161(auVar23 >> 0x27,0) & 1);
            uVar6 = (ushort)(SUB161(auVar23 >> 0x37,0) & 1);
            bVar34 = SUB161(auVar23 >> 0x47,0) & 1;
            uVar7 = (ushort)(SUB161(auVar23 >> 0x57,0) & 1);
            uVar8 = (ushort)(SUB161(auVar23 >> 0x67,0) & 1);
            uVar9 = (ushort)(SUB161(auVar23 >> 0x77,0) & 1);
            pcVar15 = (char *)(ulonglong)
                              (ushort)(uVar3 | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                       uVar4 << 2 | (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                       uVar5 << 4 | (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                       uVar6 << 6 | (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                       (ushort)bVar34 << 8 |
                                       (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 | uVar7 << 10 |
                                       (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb | uVar8 << 0xc
                                       | (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                       uVar9 << 0xe | (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
            bVar22 = ((((((uVar3 != 0 || uVar4 != 0) || uVar5 != 0) || uVar6 != 0) || bVar34 != 0)
                      || uVar7 != 0) || uVar8 != 0) || uVar9 != 0;
            if (pcStack_120 != pcVar14) goto LAB_18011af70;
          }
          else {
            pcVar15 = (char *)((ulonglong)pcStack_120 & 0xffffffffffffffe0);
            auVar23 = (undefined1  [16])0x0;
            pcVar18 = (char *)0x0;
            auVar24 = (undefined1  [16])0x0;
            do {
              pcVar14 = local_118 + (longlong)pcVar18;
              pcVar20 = local_118 + 0x10 + (longlong)pcVar18;
              bVar34 = *pcVar14 + 0x81;
              bVar36 = pcVar14[1] + 0x81;
              bVar38 = pcVar14[2] + 0x81;
              bVar40 = pcVar14[3] + 0x81;
              bVar42 = pcVar14[4] + 0x81;
              bVar44 = pcVar14[5] + 0x81;
              bVar46 = pcVar14[6] + 0x81;
              bVar48 = pcVar14[7] + 0x81;
              bVar52 = pcVar14[8] + 0x81;
              bVar53 = pcVar14[9] + 0x81;
              bVar54 = pcVar14[10] + 0x81;
              bVar55 = pcVar14[0xb] + 0x81;
              bVar56 = pcVar14[0xc] + 0x81;
              bVar57 = pcVar14[0xd] + 0x81;
              bVar58 = pcVar14[0xe] + 0x81;
              bVar59 = pcVar14[0xf] + 0x81;
              bVar60 = *pcVar20 + 0x81;
              bVar61 = pcVar20[1] + 0x81;
              bVar62 = pcVar20[2] + 0x81;
              bVar63 = pcVar20[3] + 0x81;
              bVar64 = pcVar20[4] + 0x81;
              bVar65 = pcVar20[5] + 0x81;
              bVar66 = pcVar20[6] + 0x81;
              bVar67 = pcVar20[7] + 0x81;
              bVar68 = pcVar20[8] + 0x81;
              bVar69 = pcVar20[9] + 0x81;
              bVar70 = pcVar20[10] + 0x81;
              bVar71 = pcVar20[0xb] + 0x81;
              bVar72 = pcVar20[0xc] + 0x81;
              bVar73 = pcVar20[0xd] + 0x81;
              bVar74 = pcVar20[0xe] + 0x81;
              bVar75 = pcVar20[0xf] + 0x81;
              auVar76[0] = -((byte)((0xa0 < bVar34) * -0x60 | (0xa0 >= bVar34) * bVar34) == bVar34);
              auVar76[1] = -((byte)((0xa0 < bVar36) * -0x60 | (0xa0 >= bVar36) * bVar36) == bVar36);
              auVar76[2] = -((byte)((0xa0 < bVar38) * -0x60 | (0xa0 >= bVar38) * bVar38) == bVar38);
              auVar76[3] = -((byte)((0xa0 < bVar40) * -0x60 | (0xa0 >= bVar40) * bVar40) == bVar40);
              auVar76[4] = -((byte)((0xa0 < bVar42) * -0x60 | (0xa0 >= bVar42) * bVar42) == bVar42);
              auVar76[5] = -((byte)((0xa0 < bVar44) * -0x60 | (0xa0 >= bVar44) * bVar44) == bVar44);
              auVar76[6] = -((byte)((0xa0 < bVar46) * -0x60 | (0xa0 >= bVar46) * bVar46) == bVar46);
              auVar76[7] = -((byte)((0xa0 < bVar48) * -0x60 | (0xa0 >= bVar48) * bVar48) == bVar48);
              auVar76[8] = -((byte)((0xa0 < bVar52) * -0x60 | (0xa0 >= bVar52) * bVar52) == bVar52);
              auVar76[9] = -((byte)((0xa0 < bVar53) * -0x60 | (0xa0 >= bVar53) * bVar53) == bVar53);
              auVar76[10] = -((byte)((0xa0 < bVar54) * -0x60 | (0xa0 >= bVar54) * bVar54) == bVar54)
              ;
              auVar76[0xb] = -((byte)((0xa0 < bVar55) * -0x60 | (0xa0 >= bVar55) * bVar55) == bVar55
                              );
              auVar76[0xc] = -((byte)((0xa0 < bVar56) * -0x60 | (0xa0 >= bVar56) * bVar56) == bVar56
                              );
              auVar76[0xd] = -((byte)((0xa0 < bVar57) * -0x60 | (0xa0 >= bVar57) * bVar57) == bVar57
                              );
              auVar76[0xe] = -((byte)((0xa0 < bVar58) * -0x60 | (0xa0 >= bVar58) * bVar58) == bVar58
                              );
              auVar76[0xf] = -((byte)((0xa0 < bVar59) * -0x60 | (0xa0 >= bVar59) * bVar59) == bVar59
                              );
              auVar51[0] = -((byte)((0xa0 < bVar60) * -0x60 | (0xa0 >= bVar60) * bVar60) == bVar60);
              auVar51[1] = -((byte)((0xa0 < bVar61) * -0x60 | (0xa0 >= bVar61) * bVar61) == bVar61);
              auVar51[2] = -((byte)((0xa0 < bVar62) * -0x60 | (0xa0 >= bVar62) * bVar62) == bVar62);
              auVar51[3] = -((byte)((0xa0 < bVar63) * -0x60 | (0xa0 >= bVar63) * bVar63) == bVar63);
              auVar51[4] = -((byte)((0xa0 < bVar64) * -0x60 | (0xa0 >= bVar64) * bVar64) == bVar64);
              auVar51[5] = -((byte)((0xa0 < bVar65) * -0x60 | (0xa0 >= bVar65) * bVar65) == bVar65);
              auVar51[6] = -((byte)((0xa0 < bVar66) * -0x60 | (0xa0 >= bVar66) * bVar66) == bVar66);
              auVar51[7] = -((byte)((0xa0 < bVar67) * -0x60 | (0xa0 >= bVar67) * bVar67) == bVar67);
              auVar51[8] = -((byte)((0xa0 < bVar68) * -0x60 | (0xa0 >= bVar68) * bVar68) == bVar68);
              auVar51[9] = -((byte)((0xa0 < bVar69) * -0x60 | (0xa0 >= bVar69) * bVar69) == bVar69);
              auVar51[10] = -((byte)((0xa0 < bVar70) * -0x60 | (0xa0 >= bVar70) * bVar70) == bVar70)
              ;
              auVar51[0xb] = -((byte)((0xa0 < bVar71) * -0x60 | (0xa0 >= bVar71) * bVar71) == bVar71
                              );
              auVar51[0xc] = -((byte)((0xa0 < bVar72) * -0x60 | (0xa0 >= bVar72) * bVar72) == bVar72
                              );
              auVar51[0xd] = -((byte)((0xa0 < bVar73) * -0x60 | (0xa0 >= bVar73) * bVar73) == bVar73
                              );
              auVar51[0xe] = -((byte)((0xa0 < bVar74) * -0x60 | (0xa0 >= bVar74) * bVar74) == bVar74
                              );
              auVar51[0xf] = -((byte)((0xa0 < bVar75) * -0x60 | (0xa0 >= bVar75) * bVar75) == bVar75
                              );
              auVar35[0] = -(*pcVar14 == '\t');
              auVar35[1] = -(pcVar14[1] == '\t');
              auVar35[2] = -(pcVar14[2] == '\t');
              auVar35[3] = -(pcVar14[3] == '\t');
              auVar35[4] = -(pcVar14[4] == '\t');
              auVar35[5] = -(pcVar14[5] == '\t');
              auVar35[6] = -(pcVar14[6] == '\t');
              auVar35[7] = -(pcVar14[7] == '\t');
              auVar35[8] = -(pcVar14[8] == '\t');
              auVar35[9] = -(pcVar14[9] == '\t');
              auVar35[10] = -(pcVar14[10] == '\t');
              auVar35[0xb] = -(pcVar14[0xb] == '\t');
              auVar35[0xc] = -(pcVar14[0xc] == '\t');
              auVar35[0xd] = -(pcVar14[0xd] == '\t');
              auVar35[0xe] = -(pcVar14[0xe] == '\t');
              auVar35[0xf] = -(pcVar14[0xf] == '\t');
              auVar23 = auVar23 | ~auVar35 & auVar76;
              auVar49[0] = -(*pcVar20 == '\t');
              auVar49[1] = -(pcVar20[1] == '\t');
              auVar49[2] = -(pcVar20[2] == '\t');
              auVar49[3] = -(pcVar20[3] == '\t');
              auVar49[4] = -(pcVar20[4] == '\t');
              auVar49[5] = -(pcVar20[5] == '\t');
              auVar49[6] = -(pcVar20[6] == '\t');
              auVar49[7] = -(pcVar20[7] == '\t');
              auVar49[8] = -(pcVar20[8] == '\t');
              auVar49[9] = -(pcVar20[9] == '\t');
              auVar49[10] = -(pcVar20[10] == '\t');
              auVar49[0xb] = -(pcVar20[0xb] == '\t');
              auVar49[0xc] = -(pcVar20[0xc] == '\t');
              auVar49[0xd] = -(pcVar20[0xd] == '\t');
              auVar49[0xe] = -(pcVar20[0xe] == '\t');
              auVar49[0xf] = -(pcVar20[0xf] == '\t');
              auVar24 = auVar24 | ~auVar49 & auVar51;
              pcVar18 = pcVar18 + 0x20;
            } while (pcVar15 != pcVar18);
            auVar23 = psllw(auVar24 | auVar23,7);
            bVar22 = (((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 ||
                                  (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                                 (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                                (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                               (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                              (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                             (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                            (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0';
            uVar19 = (uint)bVar22;
            if (pcStack_120 != pcVar15) {
              if (((ulonglong)pcStack_120 & 0x18) == 0) {
                pcVar18 = pcVar15 + (longlong)local_118;
                goto LAB_18011af70;
              }
              goto LAB_18011aef1;
            }
          }
        }
        else {
          bVar22 = false;
          pcVar18 = local_118;
LAB_18011af70:
          pcVar15 = local_118 + (longlong)pcStack_120;
          do {
            cVar2 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            bVar22 = (bool)(bVar22 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
          } while (pcVar18 != pcVar15);
        }
        if (bVar22) {
          return 0;
        }
      }
      local_128 = 0;
      local_108 = 0;
      local_f8 = 0x2c0000002c;
      local_f0 = 1;
      local_e8 = 1;
      pcStack_110 = pcStack_120;
      local_100 = pcStack_120;
      lVar10 = FUN_1801199f0(&local_128);
      if (lVar10 != 0) {
        bVar22 = lVar12 == 0;
        do {
          lVar12 = FUN_180110f50(lVar10);
          if (pcVar15 == (char *)0x0) goto LAB_18011b09b;
          pcVar20 = (char *)0x0;
          pcVar14 = (char *)0x0;
          pcVar18 = pcVar15;
          while (pcVar15 != pcVar20) {
            if ((9 < (byte)(pcVar20[lVar12] - 0x30U)) ||
               (auVar23._8_8_ = 0, auVar23._0_8_ = pcVar14, uVar13 = SUB168(auVar23 * ZEXT816(10),0)
               , SUB168(auVar23 * ZEXT816(10),8) != 0)) goto LAB_18011b09b;
            pcVar18 = (char *)(ulonglong)(byte)(pcVar20[lVar12] - 0x30U);
            pcVar20 = pcVar20 + 1;
            pcVar14 = pcVar18 + uVar13;
            if (CARRY8(uVar13,(ulonglong)pcVar18)) goto LAB_18011b09b;
          }
          if (bVar22) {
            local_130 = pcVar14;
          }
          else if (local_130 != pcVar14) goto LAB_18011b09b;
          lVar10 = FUN_1801199f0(&local_128);
          bVar22 = false;
          pcVar15 = pcVar18;
        } while (lVar10 != 0);
        lVar12 = 1;
      }
    } while (uVar17 != 2);
  }
  else {
LAB_18011b09b:
    lVar12 = 0;
  }
  return lVar12;
}


