/* FUN_1800274f0 @ 1800274f0 */

ulonglong FUN_1800274f0(char *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
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
  char cVar100;
  char cVar101;
  char cVar102;
  int iVar103;
  undefined8 uVar104;
  char *pcVar105;
  char *pcVar106;
  uint uVar107;
  uint uVar108;
  undefined7 uVar111;
  ulonglong uVar109;
  longlong lVar110;
  longlong lVar112;
  longlong lVar113;
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
  void *local_130;
  char *local_128;
  char *local_120;
  undefined8 local_118;
  ulonglong local_110;
  char *local_108;
  char *local_f8;
  longlong local_e8;
  char *local_e0;
  longlong local_d8;
  char *local_d0;
  
  uVar111 = (undefined7)((ulonglong)param_1 >> 8);
  if (param_2 < param_4) {
    cVar120 = *param_1;
    lVar110 = param_2 - 1;
    cVar128 = param_1[param_2 - 1];
    lVar1 = lVar110;
    if (cVar128 == cVar120) {
      cVar128 = param_1[param_2 - 2];
      if (cVar128 == cVar120) {
        cVar128 = param_1[param_2 - 3];
        if (cVar128 == cVar120) {
          lVar1 = param_2 - 4;
          cVar128 = param_1[lVar1];
          if (cVar128 == cVar120) {
            FUN_1801f2540(&local_130,param_3,param_4,param_1,param_2);
            if ((int)local_130 == 1) {
              pcVar106 = local_d0 + -1;
              if (local_f8 == (char *)0xffffffffffffffff) {
                pcVar105 = local_108 + (longlong)pcVar106;
                if (pcVar105 < local_e0) {
LAB_180027a33:
                  pcVar2 = local_d0;
                  if ((local_110 >> ((ulonglong)(byte)pcVar105[local_e8] & 0x3f) & 1) == 0)
                  goto LAB_180027a1d;
                  lVar110 = 0;
                  pcVar105 = local_108;
                  do {
                    if (local_d0 <= local_128 + lVar110) {
                      if (local_128 + -1 < local_d0) {
                        param_1 = local_108 + -1;
                        pcVar105 = local_128;
                        goto LAB_180027a8d;
                      }
                      uVar109 = CONCAT71((int7)((ulonglong)lVar110 >> 8),1);
                      if (local_128 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_180201d02(local_128 + -1,local_d0,
                                      &PTR_s_C__Users_burne__rustup_toolchain_1802052a0);
                      }
                      goto LAB_180027abd;
                    }
                    if (local_e0 <= local_128 + (longlong)pcVar105) {
                      pcVar106 = local_108 + (longlong)local_128;
                      if (local_108 + (longlong)local_128 < local_e0) {
                        pcVar106 = local_e0;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_180201d02(pcVar106,local_e0,
                                    &PTR_s_C__Users_burne__rustup_toolchain_1802052d0);
                    }
                    lVar1 = lVar110 + local_d8;
                    lVar110 = lVar110 + 1;
                    pcVar3 = local_128 + local_e8 + (longlong)pcVar105;
                    pcVar2 = pcVar105 + 1;
                    pcVar105 = pcVar105 + 1;
                  } while (local_128[lVar1] == *pcVar3);
                  goto LAB_180027a20;
                }
              }
              else {
                pcVar105 = local_108 + (longlong)pcVar106;
                if (pcVar105 < local_e0) {
LAB_18002762e:
                  if ((local_110 >> ((ulonglong)(byte)pcVar105[local_e8] & 0x3f) & 1) == 0) {
                    local_108 = local_108 + (longlong)local_d0;
                  }
                  else {
                    pcVar105 = local_128;
                    if (local_128 < local_f8) {
                      pcVar105 = local_f8;
                    }
                    param_1 = pcVar105;
                    do {
                      if (local_d0 <= param_1) {
                        pcVar105 = local_128;
                        goto LAB_180027695;
                      }
                      if (local_e0 <= local_108 + (longlong)param_1) {
                        pcVar106 = pcVar105 + (longlong)local_108;
                        if (pcVar105 + (longlong)local_108 < local_e0) {
                          pcVar106 = local_e0;
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_180201d02(pcVar106,local_e0,
                                      &PTR_s_C__Users_burne__rustup_toolchain_1802052d0);
                      }
                      pcVar2 = param_1 + 1;
                      pcVar3 = param_1 + local_d8;
                      pcVar4 = local_108 + local_e8 + (longlong)param_1;
                      param_1 = pcVar2;
                    } while (*pcVar3 == *pcVar4);
                    local_108 = pcVar2 + ((longlong)local_108 - (longlong)local_128);
                  }
                  local_f8 = (char *)0x0;
                  goto LAB_180027681;
                }
              }
            }
            else if (local_118._2_1_ == '\0') {
              if (local_128 != (char *)0x0) {
                if (local_128 < local_e0) {
                  if (local_128[local_e8] < -0x40) goto LAB_180027be3;
                }
                else if (local_128 != local_e0) goto LAB_180027be3;
              }
              if (local_128 == local_e0) {
                uVar109 = (ulonglong)local_118 & 0xff;
              }
              else {
                bVar5 = local_128[local_e8];
                uVar107 = (uint)bVar5;
                if ((char)bVar5 < '\0') {
                  if (bVar5 < 0xe0) {
                    uVar107 = (uVar107 & 0x1f) << 6 | (byte)local_128[local_e8 + 1] & 0x3f;
                  }
                  else {
                    uVar108 = (byte)local_128[local_e8 + 2] & 0x3f |
                              ((byte)local_128[local_e8 + 1] & 0x3f) << 6;
                    if (bVar5 < 0xf0) {
                      uVar107 = (uVar107 & 0x1f) << 0xc | uVar108;
                    }
                    else {
                      uVar107 = (uVar107 & 7) << 0x12 |
                                (byte)local_128[local_e8 + 3] & 0x3f | uVar108 << 6;
                    }
                  }
                }
                uVar109 = CONCAT71(uVar111,1);
                if (((ulonglong)local_118 & 1) == 0) {
                  lVar110 = 1;
                  if ((0x7f < uVar107) && (lVar110 = 2, 0x7ff < uVar107)) {
                    lVar110 = 4 - (ulonglong)(uVar107 < 0x10000);
                  }
                  local_128 = local_128 + lVar110;
                  if (local_128 != (char *)0x0) {
                    if (local_128 < local_e0) {
                      if (local_128[local_e8] < -0x40) goto LAB_180027be3;
                    }
                    else if (local_128 != local_e0) {
LAB_180027be3:
                    /* WARNING: Subroutine does not return */
                      FUN_1802018d0(local_e8,local_e0,local_128,local_e0,
                                    &PTR_s_C__Users_burne__rustup_toolchain_180205560);
                    }
                  }
                }
              }
              goto LAB_180027abd;
            }
            goto LAB_180027721;
          }
        }
        else {
          lVar1 = param_2 - 3;
        }
      }
      else {
        lVar1 = param_2 - 2;
      }
    }
    if (param_2 + 0xf <= param_4) {
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
      local_120 = param_1 + 1;
      local_130 = param_3;
      local_128 = (char *)param_4;
      local_118 = (char *)lVar110;
      if (param_2 + 0x3f < param_4) {
        lVar112 = 0;
        do {
          pcVar106 = (char *)((longlong)param_3 + lVar112);
          pcVar105 = (char *)((longlong)param_3 + lVar112 + 0x10);
          cVar7 = *pcVar105;
          cVar8 = pcVar105[1];
          cVar9 = pcVar105[2];
          cVar10 = pcVar105[3];
          cVar11 = pcVar105[4];
          cVar12 = pcVar105[5];
          cVar13 = pcVar105[6];
          cVar14 = pcVar105[7];
          cVar15 = pcVar105[8];
          cVar16 = pcVar105[9];
          cVar17 = pcVar105[10];
          cVar18 = pcVar105[0xb];
          cVar19 = pcVar105[0xc];
          cVar20 = pcVar105[0xd];
          cVar21 = pcVar105[0xe];
          cVar22 = pcVar105[0xf];
          pcVar105 = (char *)((longlong)param_3 + lVar112 + 0x20);
          cVar23 = *pcVar105;
          cVar24 = pcVar105[1];
          cVar25 = pcVar105[2];
          cVar26 = pcVar105[3];
          cVar27 = pcVar105[4];
          cVar28 = pcVar105[5];
          cVar29 = pcVar105[6];
          cVar30 = pcVar105[7];
          cVar31 = pcVar105[8];
          cVar32 = pcVar105[9];
          cVar33 = pcVar105[10];
          cVar34 = pcVar105[0xb];
          cVar35 = pcVar105[0xc];
          cVar36 = pcVar105[0xd];
          cVar37 = pcVar105[0xe];
          cVar38 = pcVar105[0xf];
          pcVar105 = (char *)((longlong)param_3 + lVar112 + 0x30);
          cVar39 = *pcVar105;
          cVar40 = pcVar105[1];
          cVar41 = pcVar105[2];
          cVar42 = pcVar105[3];
          cVar43 = pcVar105[4];
          cVar44 = pcVar105[5];
          cVar45 = pcVar105[6];
          cVar46 = pcVar105[7];
          cVar47 = pcVar105[8];
          cVar48 = pcVar105[9];
          cVar49 = pcVar105[10];
          cVar50 = pcVar105[0xb];
          cVar51 = pcVar105[0xc];
          cVar52 = pcVar105[0xd];
          cVar53 = pcVar105[0xe];
          cVar54 = pcVar105[0xf];
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
          pcVar106 = (char *)((longlong)param_3 + lVar112 + lVar1);
          pcVar105 = (char *)((longlong)param_3 + lVar112 + lVar1 + 0x10);
          cVar55 = *pcVar105;
          cVar56 = pcVar105[1];
          cVar57 = pcVar105[2];
          cVar58 = pcVar105[3];
          cVar59 = pcVar105[4];
          cVar60 = pcVar105[5];
          cVar61 = pcVar105[6];
          cVar62 = pcVar105[7];
          cVar63 = pcVar105[8];
          cVar64 = pcVar105[9];
          cVar65 = pcVar105[10];
          cVar66 = pcVar105[0xb];
          cVar67 = pcVar105[0xc];
          cVar68 = pcVar105[0xd];
          cVar69 = pcVar105[0xe];
          cVar70 = pcVar105[0xf];
          pcVar105 = (char *)((longlong)param_3 + lVar112 + lVar1 + 0x20);
          cVar71 = *pcVar105;
          cVar72 = pcVar105[1];
          cVar73 = pcVar105[2];
          cVar74 = pcVar105[3];
          cVar75 = pcVar105[4];
          cVar76 = pcVar105[5];
          cVar77 = pcVar105[6];
          cVar78 = pcVar105[7];
          cVar79 = pcVar105[8];
          cVar80 = pcVar105[9];
          cVar81 = pcVar105[10];
          cVar82 = pcVar105[0xb];
          cVar83 = pcVar105[0xc];
          cVar84 = pcVar105[0xd];
          cVar85 = pcVar105[0xe];
          cVar86 = pcVar105[0xf];
          pcVar105 = (char *)((longlong)param_3 + lVar112 + lVar1 + 0x30);
          cVar87 = *pcVar105;
          cVar88 = pcVar105[1];
          cVar89 = pcVar105[2];
          cVar90 = pcVar105[3];
          cVar91 = pcVar105[4];
          cVar92 = pcVar105[5];
          cVar93 = pcVar105[6];
          cVar94 = pcVar105[7];
          cVar95 = pcVar105[8];
          cVar96 = pcVar105[9];
          cVar97 = pcVar105[10];
          cVar98 = pcVar105[0xb];
          cVar99 = pcVar105[0xc];
          cVar100 = pcVar105[0xd];
          cVar101 = pcVar105[0xe];
          cVar102 = pcVar105[0xf];
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
          uVar6 = (ushort)(SUB161(auVar117 >> 7,0) & 1) |
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
          if (uVar6 == 0) {
            uVar109 = 0;
          }
          else {
            uVar107 = FUN_1801f6860(&local_130,lVar112,uVar6,0);
            uVar109 = (ulonglong)uVar107;
          }
          auVar140[0] = -(cVar7 == cVar120);
          auVar140[1] = -(cVar8 == cVar121);
          auVar140[2] = -(cVar9 == cVar122);
          auVar140[3] = -(cVar10 == cVar123);
          auVar140[4] = -(cVar11 == cVar124);
          auVar140[5] = -(cVar12 == cVar125);
          auVar140[6] = -(cVar13 == cVar126);
          auVar140[7] = -(cVar14 == cVar127);
          auVar140[8] = -(cVar15 == cVar120);
          auVar140[9] = -(cVar16 == cVar121);
          auVar140[10] = -(cVar17 == cVar122);
          auVar140[0xb] = -(cVar18 == cVar123);
          auVar140[0xc] = -(cVar19 == cVar124);
          auVar140[0xd] = -(cVar20 == cVar125);
          auVar140[0xe] = -(cVar21 == cVar126);
          auVar140[0xf] = -(cVar22 == cVar127);
          auVar141[0] = -(cVar55 == cVar128);
          auVar141[1] = -(cVar56 == cVar129);
          auVar141[2] = -(cVar57 == cVar130);
          auVar141[3] = -(cVar58 == cVar131);
          auVar141[4] = -(cVar59 == cVar132);
          auVar141[5] = -(cVar60 == cVar133);
          auVar141[6] = -(cVar61 == cVar134);
          auVar141[7] = -(cVar62 == cVar135);
          auVar141[8] = -(cVar63 == cVar128);
          auVar141[9] = -(cVar64 == cVar129);
          auVar141[10] = -(cVar65 == cVar130);
          auVar141[0xb] = -(cVar66 == cVar131);
          auVar141[0xc] = -(cVar67 == cVar132);
          auVar141[0xd] = -(cVar68 == cVar133);
          auVar141[0xe] = -(cVar69 == cVar134);
          auVar141[0xf] = -(cVar70 == cVar135);
          auVar141 = auVar141 & auVar140;
          uVar6 = (ushort)(SUB161(auVar141 >> 7,0) & 1) |
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
          if (uVar6 != 0) {
            uVar104 = FUN_1801f6860(&local_130,lVar112 + 0x10,uVar6,uVar109);
            uVar109 = CONCAT71((int7)((ulonglong)uVar104 >> 8),(byte)uVar104 | (byte)uVar109) &
                      0xffffffff;
          }
          auVar138[0] = -(cVar23 == cVar120);
          auVar138[1] = -(cVar24 == cVar121);
          auVar138[2] = -(cVar25 == cVar122);
          auVar138[3] = -(cVar26 == cVar123);
          auVar138[4] = -(cVar27 == cVar124);
          auVar138[5] = -(cVar28 == cVar125);
          auVar138[6] = -(cVar29 == cVar126);
          auVar138[7] = -(cVar30 == cVar127);
          auVar138[8] = -(cVar31 == cVar120);
          auVar138[9] = -(cVar32 == cVar121);
          auVar138[10] = -(cVar33 == cVar122);
          auVar138[0xb] = -(cVar34 == cVar123);
          auVar138[0xc] = -(cVar35 == cVar124);
          auVar138[0xd] = -(cVar36 == cVar125);
          auVar138[0xe] = -(cVar37 == cVar126);
          auVar138[0xf] = -(cVar38 == cVar127);
          auVar139[0] = -(cVar71 == cVar128);
          auVar139[1] = -(cVar72 == cVar129);
          auVar139[2] = -(cVar73 == cVar130);
          auVar139[3] = -(cVar74 == cVar131);
          auVar139[4] = -(cVar75 == cVar132);
          auVar139[5] = -(cVar76 == cVar133);
          auVar139[6] = -(cVar77 == cVar134);
          auVar139[7] = -(cVar78 == cVar135);
          auVar139[8] = -(cVar79 == cVar128);
          auVar139[9] = -(cVar80 == cVar129);
          auVar139[10] = -(cVar81 == cVar130);
          auVar139[0xb] = -(cVar82 == cVar131);
          auVar139[0xc] = -(cVar83 == cVar132);
          auVar139[0xd] = -(cVar84 == cVar133);
          auVar139[0xe] = -(cVar85 == cVar134);
          auVar139[0xf] = -(cVar86 == cVar135);
          auVar139 = auVar139 & auVar138;
          uVar6 = (ushort)(SUB161(auVar139 >> 7,0) & 1) |
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
          if (uVar6 != 0) {
            uVar104 = FUN_1801f6860(&local_130,lVar112 + 0x20,uVar6,uVar109);
            uVar109 = CONCAT71((int7)((ulonglong)uVar104 >> 8),(byte)uVar104 | (byte)uVar109) &
                      0xffffffff;
          }
          auVar136[0] = -(cVar39 == cVar120);
          auVar136[1] = -(cVar40 == cVar121);
          auVar136[2] = -(cVar41 == cVar122);
          auVar136[3] = -(cVar42 == cVar123);
          auVar136[4] = -(cVar43 == cVar124);
          auVar136[5] = -(cVar44 == cVar125);
          auVar136[6] = -(cVar45 == cVar126);
          auVar136[7] = -(cVar46 == cVar127);
          auVar136[8] = -(cVar47 == cVar120);
          auVar136[9] = -(cVar48 == cVar121);
          auVar136[10] = -(cVar49 == cVar122);
          auVar136[0xb] = -(cVar50 == cVar123);
          auVar136[0xc] = -(cVar51 == cVar124);
          auVar136[0xd] = -(cVar52 == cVar125);
          auVar136[0xe] = -(cVar53 == cVar126);
          auVar136[0xf] = -(cVar54 == cVar127);
          auVar137[0] = -(cVar87 == cVar128);
          auVar137[1] = -(cVar88 == cVar129);
          auVar137[2] = -(cVar89 == cVar130);
          auVar137[3] = -(cVar90 == cVar131);
          auVar137[4] = -(cVar91 == cVar132);
          auVar137[5] = -(cVar92 == cVar133);
          auVar137[6] = -(cVar93 == cVar134);
          auVar137[7] = -(cVar94 == cVar135);
          auVar137[8] = -(cVar95 == cVar128);
          auVar137[9] = -(cVar96 == cVar129);
          auVar137[10] = -(cVar97 == cVar130);
          auVar137[0xb] = -(cVar98 == cVar131);
          auVar137[0xc] = -(cVar99 == cVar132);
          auVar137[0xd] = -(cVar100 == cVar133);
          auVar137[0xe] = -(cVar101 == cVar134);
          auVar137[0xf] = -(cVar102 == cVar135);
          auVar137 = auVar137 & auVar136;
          uVar6 = (ushort)(SUB161(auVar137 >> 7,0) & 1) |
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
          if (uVar6 != 0) {
            uVar104 = FUN_1801f6860(&local_130,lVar112 + 0x30,uVar6,uVar109);
            uVar109 = CONCAT71((int7)((ulonglong)uVar104 >> 8),(byte)uVar104 | (byte)uVar109) &
                      0xffffffff;
          }
          lVar113 = lVar112 + 0x40;
          if (param_4 <= lVar112 + param_2 + 0x7f) break;
          lVar113 = lVar112 + 0x40;
          lVar112 = lVar113;
        } while ((char)uVar109 == '\0');
      }
      else {
        uVar109 = 0;
        lVar113 = 0;
      }
      if ((param_2 + 0xf + lVar113 < param_4) && ((char)uVar109 == '\0')) {
        do {
          pcVar106 = (char *)((longlong)param_3 + lVar113);
          pcVar105 = (char *)((longlong)param_3 + lVar113 + lVar1);
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
          auVar118[0] = -(*pcVar105 == cVar128);
          auVar118[1] = -(pcVar105[1] == cVar129);
          auVar118[2] = -(pcVar105[2] == cVar130);
          auVar118[3] = -(pcVar105[3] == cVar131);
          auVar118[4] = -(pcVar105[4] == cVar132);
          auVar118[5] = -(pcVar105[5] == cVar133);
          auVar118[6] = -(pcVar105[6] == cVar134);
          auVar118[7] = -(pcVar105[7] == cVar135);
          auVar118[8] = -(pcVar105[8] == cVar128);
          auVar118[9] = -(pcVar105[9] == cVar129);
          auVar118[10] = -(pcVar105[10] == cVar130);
          auVar118[0xb] = -(pcVar105[0xb] == cVar131);
          auVar118[0xc] = -(pcVar105[0xc] == cVar132);
          auVar118[0xd] = -(pcVar105[0xd] == cVar133);
          auVar118[0xe] = -(pcVar105[0xe] == cVar134);
          auVar118[0xf] = -(pcVar105[0xf] == cVar135);
          auVar118 = auVar118 & auVar115;
          uVar6 = (ushort)(SUB161(auVar118 >> 7,0) & 1) |
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
          if (uVar6 == 0) {
            uVar109 = 0;
          }
          else {
            uVar107 = FUN_1801f6860(&local_130,lVar113,uVar6,0);
            uVar109 = (ulonglong)uVar107;
          }
        } while ((param_2 + 0x1f + lVar113 < param_4) &&
                (lVar113 = lVar113 + 0x10, (char)uVar109 == '\0'));
      }
      lVar110 = param_4 - lVar110;
      pcVar105 = (char *)((longlong)param_3 + lVar110 + -0x10);
      pcVar106 = (char *)((longlong)param_3 + lVar1 + lVar110 + -0x10);
      auVar116[0] = -(*pcVar105 == cVar120);
      auVar116[1] = -(pcVar105[1] == cVar121);
      auVar116[2] = -(pcVar105[2] == cVar122);
      auVar116[3] = -(pcVar105[3] == cVar123);
      auVar116[4] = -(pcVar105[4] == cVar124);
      auVar116[5] = -(pcVar105[5] == cVar125);
      auVar116[6] = -(pcVar105[6] == cVar126);
      auVar116[7] = -(pcVar105[7] == cVar127);
      auVar116[8] = -(pcVar105[8] == cVar120);
      auVar116[9] = -(pcVar105[9] == cVar121);
      auVar116[10] = -(pcVar105[10] == cVar122);
      auVar116[0xb] = -(pcVar105[0xb] == cVar123);
      auVar116[0xc] = -(pcVar105[0xc] == cVar124);
      auVar116[0xd] = -(pcVar105[0xd] == cVar125);
      auVar116[0xe] = -(pcVar105[0xe] == cVar126);
      auVar116[0xf] = -(pcVar105[0xf] == cVar127);
      auVar119[0] = -(*pcVar106 == cVar128);
      auVar119[1] = -(pcVar106[1] == cVar129);
      auVar119[2] = -(pcVar106[2] == cVar130);
      auVar119[3] = -(pcVar106[3] == cVar131);
      auVar119[4] = -(pcVar106[4] == cVar132);
      auVar119[5] = -(pcVar106[5] == cVar133);
      auVar119[6] = -(pcVar106[6] == cVar134);
      auVar119[7] = -(pcVar106[7] == cVar135);
      auVar119[8] = -(pcVar106[8] == cVar128);
      auVar119[9] = -(pcVar106[9] == cVar129);
      auVar119[10] = -(pcVar106[10] == cVar130);
      auVar119[0xb] = -(pcVar106[0xb] == cVar131);
      auVar119[0xc] = -(pcVar106[0xc] == cVar132);
      auVar119[0xd] = -(pcVar106[0xd] == cVar133);
      auVar119[0xe] = -(pcVar106[0xe] == cVar134);
      auVar119[0xf] = -(pcVar106[0xf] == cVar135);
      auVar119 = auVar119 & auVar116;
      uVar6 = (ushort)(SUB161(auVar119 >> 7,0) & 1) | (ushort)(SUB161(auVar119 >> 0xf,0) & 1) << 1 |
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
      if (uVar6 != 0) {
        uVar104 = FUN_1801f6860(&local_130,lVar110 + -0x10,uVar6,uVar109);
        uVar109 = CONCAT71((int7)((ulonglong)uVar104 >> 8),(byte)uVar104 | (byte)uVar109) &
                  0xffffffff;
      }
      goto LAB_180027abd;
    }
    do {
      iVar103 = memcmp(param_3,param_1,param_2);
      if (iVar103 == 0) goto LAB_180027aba;
      param_3 = (void *)((longlong)param_3 + 1);
      param_4 = param_4 - 1;
    } while (param_2 <= param_4);
  }
  else if (param_2 == param_4) {
    iVar103 = memcmp(param_1,param_3,param_2);
    uVar109 = CONCAT71(uVar111,iVar103 == 0);
    goto LAB_180027abd;
  }
LAB_180027721:
  uVar109 = 0;
LAB_180027abd:
  return uVar109 & 0xffffff01;
  while( true ) {
    if (local_e0 <= param_1 + (longlong)pcVar105) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_108 + (longlong)pcVar105 + -1,local_e0,
                    &PTR_s_C__Users_burne__rustup_toolchain_1802052b8);
    }
    pcVar2 = pcVar105 + local_d8 + -1;
    pcVar3 = local_108 + local_e8 + -1 + (longlong)pcVar105;
    pcVar105 = pcVar105 + -1;
    if (*pcVar2 != *pcVar3) break;
LAB_180027a8d:
    if (pcVar105 == (char *)0x0) goto LAB_180027aba;
  }
  pcVar2 = local_118;
LAB_180027a1d:
  pcVar2 = local_108 + (longlong)pcVar2;
LAB_180027a20:
  local_108 = pcVar2;
  pcVar105 = pcVar106 + (longlong)local_108;
  uVar109 = 0;
  if (local_e0 <= pcVar105) goto LAB_180027abd;
  goto LAB_180027a33;
  while( true ) {
    pcVar105 = pcVar105 + -1;
    if (local_d0 <= pcVar105) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar105,local_d0,&PTR_s_C__Users_burne__rustup_toolchain_1802052a0);
    }
    pcVar2 = pcVar105 + (longlong)local_108;
    if (local_e0 <= pcVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar2,local_e0,&PTR_s_C__Users_burne__rustup_toolchain_1802052b8);
    }
    if (pcVar105[local_d8] != pcVar2[local_e8]) break;
LAB_180027695:
    if (pcVar105 <= local_f8) goto LAB_180027aba;
  }
  local_108 = local_108 + (longlong)local_118;
  local_f8 = local_d0 + -(longlong)local_118;
LAB_180027681:
  pcVar105 = local_108 + (longlong)pcVar106;
  uVar109 = 0;
  if (local_e0 <= pcVar105) goto LAB_180027abd;
  goto LAB_18002762e;
LAB_180027aba:
  uVar109 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_180027abd;
}


