/* FUN_1801cf4f0 @ 1801cf4f0 */

undefined8
FUN_1801cf4f0(undefined1 (*param_1) [32],ulonglong param_2,ulonglong param_3,int *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ushort uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int *piVar16;
  uint uVar17;
  short *psVar18;
  ulonglong uVar19;
  int *piVar20;
  short *psVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong local_68;
  undefined1 (*local_60) [32];
  code *local_58;
  ulonglong *local_50;
  code *local_48;
  
  uVar7 = *(ulonglong *)param_1[2];
  if (param_3 < uVar7) {
    uVar7 = *(ulonglong *)param_1[4];
    if (param_3 < uVar7) {
      local_60 = param_1 + 4;
      local_58 = FUN_1801ee720;
      local_50 = &local_68;
      local_48 = FUN_1801ee720;
      local_68 = param_3;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18028a110,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_18028a1d0);
    }
    param_3 = param_3 + param_2;
    uVar22 = param_3 - uVar7;
    uVar25 = (ulonglong)(byte)param_1[4][8];
    uVar19 = (ulonglong)(byte)param_1[4][9];
    auVar3 = *(undefined1 (*) [16])param_1[3];
    auVar4 = *(undefined1 (*) [16])(param_1[3] + 0x10);
    if (param_5 < 4) {
      if (param_5 < 2) {
        do {
          auVar8 = vpcmpeqb_avx(auVar3,*(undefined1 (*) [16])(param_2 + uVar25));
          auVar9 = vpcmpeqb_avx(auVar4,*(undefined1 (*) [16])(param_2 + uVar19));
          auVar8 = vpand_avx(auVar8,auVar9);
          uVar10 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
          if (uVar10 != 0) {
            uVar17 = (uint)uVar10;
            if (param_5 == 0) goto LAB_1801cf954;
            do {
              uVar13 = 0;
              for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                uVar13 = uVar13 + 1;
              }
              if (param_3 - (longlong)(param_2 + uVar13) < param_5) break;
              if ((char)*param_4 == *(char *)(param_2 + uVar13)) {
                return 1;
              }
              uVar17 = uVar17 - 1 & uVar17;
            } while (uVar17 != 0);
          }
          param_2 = param_2 + 0x10;
        } while (param_2 <= uVar22);
      }
      else {
        do {
          auVar8 = vpcmpeqb_avx(auVar3,*(undefined1 (*) [16])(param_2 + uVar25));
          auVar9 = vpcmpeqb_avx(auVar4,*(undefined1 (*) [16])(param_2 + uVar19));
          auVar8 = vpand_avx(auVar8,auVar9);
          uVar10 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
          if (uVar10 != 0) {
            uVar17 = (uint)uVar10;
            if (param_5 == 2) {
              do {
                uVar13 = 0;
                for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                  uVar13 = uVar13 + 1;
                }
                if (param_3 - (longlong)(param_2 + uVar13) < 2) break;
                if ((short)*param_4 == *(short *)(param_2 + uVar13)) {
                  return 1;
                }
                uVar17 = uVar17 - 1 & uVar17;
              } while (uVar17 != 0);
            }
            else {
              do {
                uVar13 = 0;
                for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                  uVar13 = uVar13 + 1;
                }
                psVar21 = (short *)(param_2 + uVar13);
                if (param_3 - (longlong)psVar21 < param_5) break;
                if (((short)*param_4 == *psVar21) &&
                   (*(char *)((longlong)param_4 + 2) == (char)psVar21[1])) {
                  return 1;
                }
                uVar17 = uVar17 - 1 & uVar17;
              } while (uVar17 != 0);
            }
          }
          param_2 = param_2 + 0x10;
        } while (param_2 <= uVar22);
      }
    }
    else {
      do {
        auVar8 = vpcmpeqb_avx(auVar3,*(undefined1 (*) [16])(param_2 + uVar25));
        auVar9 = vpcmpeqb_avx(auVar4,*(undefined1 (*) [16])(param_2 + uVar19));
        auVar8 = vpand_avx(auVar8,auVar9);
        uVar10 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
        if (uVar10 != 0) {
          uVar17 = (uint)uVar10;
          do {
            uVar13 = 0;
            for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar13 = uVar13 + 1;
            }
            lVar1 = param_2 + uVar13;
            if (param_3 - lVar1 < param_5) break;
            lVar26 = 0;
            lVar24 = 0;
            do {
              lVar23 = lVar24;
              if (*(int *)((longlong)param_4 + lVar23) != *(int *)(lVar1 + lVar23))
              goto LAB_1801cf5a0;
              lVar24 = lVar23 + 4;
              lVar2 = param_5 + lVar26;
              lVar26 = lVar26 + -4;
            } while (3 < lVar2 - 4U);
            uVar27 = lVar26 + param_5;
            psVar21 = (short *)((longlong)param_4 + lVar24);
            psVar18 = (short *)(lVar1 + lVar24);
            if (uVar27 < 2) {
LAB_1801cf624:
              if (uVar27 == 0) {
                return 1;
              }
              if ((char)*psVar21 == (char)*psVar18) {
                return 1;
              }
            }
            else if (*psVar21 == *psVar18) {
              psVar21 = (short *)((longlong)param_4 + lVar23 + 6);
              psVar18 = (short *)(lVar1 + lVar24 + 2);
              uVar27 = (param_5 - lVar24) - 2;
              goto LAB_1801cf624;
            }
LAB_1801cf5a0:
            uVar17 = uVar17 - 1 & uVar17;
          } while (uVar17 != 0);
        }
        param_2 = param_2 + 0x10;
      } while (param_2 <= uVar22);
    }
    if ((param_2 < param_3) && (param_5 <= param_3 - param_2)) {
      auVar3 = vpcmpeqb_avx(auVar3,*(undefined1 (*) [16])(uVar22 + uVar25));
      auVar4 = vpcmpeqb_avx(auVar4,*(undefined1 (*) [16])(uVar22 + uVar19));
      bVar15 = (char)param_2 - (char)uVar22;
      auVar3 = vpand_avx(auVar3,auVar4);
      uVar17 = (uint)((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) >> (bVar15 & 0x1f)) <<
               (bVar15 & 0x1f);
      if (uVar17 != 0) {
        do {
          uVar13 = 0;
          for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          if (uVar7 - uVar13 < param_5) {
            return 0;
          }
          piVar16 = (int *)(uVar22 + uVar13);
          piVar20 = param_4;
          for (uVar25 = param_5; 3 < uVar25; uVar25 = uVar25 - 4) {
            if (*piVar20 != *piVar16) goto LAB_1801cfabe;
            piVar20 = piVar20 + 1;
            piVar16 = piVar16 + 1;
          }
          if (uVar25 < 2) {
LAB_1801cfb22:
            if (uVar25 == 0) {
              return 1;
            }
            if ((char)*piVar20 == (char)*piVar16) {
              return 1;
            }
          }
          else if ((short)*piVar20 == (short)*piVar16) {
            piVar20 = (int *)((longlong)piVar20 + 2);
            piVar16 = (int *)((longlong)piVar16 + 2);
            uVar25 = uVar25 - 2;
            goto LAB_1801cfb22;
          }
LAB_1801cfabe:
          uVar17 = uVar17 - 1 & uVar17;
          if (uVar17 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  else {
    param_3 = param_3 + param_2;
    uVar22 = param_3 - uVar7;
    uVar25 = (ulonglong)(byte)param_1[2][8];
    uVar19 = (ulonglong)(byte)param_1[2][9];
    auVar5 = *param_1;
    auVar6 = param_1[1];
    if (param_5 < 4) {
      if (param_5 < 2) {
        if (param_5 == 0) {
          do {
            auVar11 = vpcmpeqb_avx2(auVar5,*(undefined1 (*) [32])(param_2 + uVar25));
            auVar12 = vpcmpeqb_avx2(auVar6,*(undefined1 (*) [32])(param_2 + uVar19));
            auVar11 = vpand_avx2(auVar11,auVar12);
            uVar17 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1
                     | (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                     (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
                     (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                     (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
                     (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                     (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
                     (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                     (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
                     (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                     (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                     (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                     (uint)SUB321(auVar11 >> 0x7f,0) << 0xf |
                     (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                     (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
                     (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                     (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
                     (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                     (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
                     (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                     (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
                     (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
                     (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
                     (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
                     (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
                     (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
                     (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
                     (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
                     (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f;
            if (uVar17 != 0) {
LAB_1801cf954:
              for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
              }
              return 1;
            }
            param_2 = param_2 + 0x20;
          } while (param_2 <= uVar22);
        }
        else {
          do {
            auVar11 = vpcmpeqb_avx2(auVar5,*(undefined1 (*) [32])(param_2 + uVar25));
            auVar12 = vpcmpeqb_avx2(auVar6,*(undefined1 (*) [32])(param_2 + uVar19));
            auVar11 = vpand_avx2(auVar11,auVar12);
            for (uVar17 = (uint)(SUB321(auVar11 >> 7,0) & 1) |
                          (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
                          (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                          (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
                          (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                          (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
                          (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                          (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
                          (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                          (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
                          (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                          (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
                          (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                          (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
                          (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                          (uint)SUB321(auVar11 >> 0x7f,0) << 0xf |
                          (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                          (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
                          (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                          (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
                          (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                          (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
                          (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                          (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
                          (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
                          (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
                          (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
                          (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
                          (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
                          (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
                          (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
                          (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f; uVar17 != 0;
                uVar17 = uVar17 - 1 & uVar17) {
              uVar13 = 0;
              for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                uVar13 = uVar13 + 1;
              }
              if (param_3 - (longlong)(param_2 + uVar13) < param_5) break;
              if ((char)*param_4 == *(char *)(param_2 + uVar13)) {
                return 1;
              }
            }
            param_2 = param_2 + 0x20;
          } while (param_2 <= uVar22);
        }
      }
      else if (param_5 == 2) {
        do {
          auVar11 = vpcmpeqb_avx2(auVar5,*(undefined1 (*) [32])(param_2 + uVar25));
          auVar12 = vpcmpeqb_avx2(auVar6,*(undefined1 (*) [32])(param_2 + uVar19));
          auVar11 = vpand_avx2(auVar11,auVar12);
          for (uVar17 = (uint)(SUB321(auVar11 >> 7,0) & 1) |
                        (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
                        (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                        (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
                        (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                        (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
                        (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                        (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
                        (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                        (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
                        (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                        (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
                        (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                        (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
                        (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                        (uint)SUB321(auVar11 >> 0x7f,0) << 0xf |
                        (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                        (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
                        (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                        (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
                        (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                        (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
                        (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                        (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
                        (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
                        (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
                        (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
                        (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
                        (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
                        (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
                        (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
                        (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f; uVar17 != 0;
              uVar17 = uVar17 - 1 & uVar17) {
            uVar13 = 0;
            for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar13 = uVar13 + 1;
            }
            if (param_3 - (longlong)(param_2 + uVar13) < 2) break;
            if ((short)*param_4 == *(short *)(param_2 + uVar13)) {
              return 1;
            }
          }
          param_2 = param_2 + 0x20;
        } while (param_2 <= uVar22);
      }
      else {
        do {
          auVar11 = vpcmpeqb_avx2(auVar5,*(undefined1 (*) [32])(param_2 + uVar25));
          auVar12 = vpcmpeqb_avx2(auVar6,*(undefined1 (*) [32])(param_2 + uVar19));
          auVar11 = vpand_avx2(auVar11,auVar12);
          for (uVar17 = (uint)(SUB321(auVar11 >> 7,0) & 1) |
                        (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
                        (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                        (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
                        (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                        (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
                        (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                        (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
                        (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                        (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
                        (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                        (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
                        (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                        (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
                        (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                        (uint)SUB321(auVar11 >> 0x7f,0) << 0xf |
                        (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                        (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
                        (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                        (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
                        (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                        (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
                        (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                        (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
                        (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
                        (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
                        (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
                        (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
                        (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
                        (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
                        (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
                        (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f; uVar17 != 0;
              uVar17 = uVar17 - 1 & uVar17) {
            uVar13 = 0;
            for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar13 = uVar13 + 1;
            }
            psVar21 = (short *)(param_2 + uVar13);
            if (param_3 - (longlong)psVar21 < param_5) break;
            if (((short)*param_4 == *psVar21) &&
               (*(char *)((longlong)param_4 + 2) == (char)psVar21[1])) {
              return 1;
            }
          }
          param_2 = param_2 + 0x20;
        } while (param_2 <= uVar22);
      }
    }
    else {
      do {
        auVar11 = vpcmpeqb_avx2(auVar5,*(undefined1 (*) [32])(param_2 + uVar25));
        auVar12 = vpcmpeqb_avx2(auVar6,*(undefined1 (*) [32])(param_2 + uVar19));
        auVar11 = vpand_avx2(auVar11,auVar12);
        for (uVar17 = (uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1
                      | (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                      (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
                      (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                      (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
                      (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                      (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
                      (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                      (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
                      (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                      (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
                      (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                      (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
                      (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                      (uint)SUB321(auVar11 >> 0x7f,0) << 0xf |
                      (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                      (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
                      (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                      (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
                      (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                      (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
                      (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                      (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
                      (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
                      (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
                      (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
                      (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
                      (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
                      (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
                      (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
                      (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f; uVar17 != 0;
            uVar17 = uVar17 - 1 & uVar17) {
          uVar13 = 0;
          for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          lVar1 = param_2 + uVar13;
          if (param_3 - lVar1 < param_5) break;
          lVar26 = 0;
          lVar24 = 0;
          do {
            lVar23 = lVar24;
            if (*(int *)((longlong)param_4 + lVar23) != *(int *)(lVar1 + lVar23))
            goto LAB_1801cf750;
            lVar24 = lVar23 + 4;
            lVar2 = param_5 + lVar26;
            lVar26 = lVar26 + -4;
          } while (3 < lVar2 - 4U);
          uVar27 = lVar26 + param_5;
          psVar21 = (short *)((longlong)param_4 + lVar24);
          psVar18 = (short *)(lVar1 + lVar24);
          if (uVar27 < 2) {
LAB_1801cf7d4:
            if (uVar27 == 0) {
              return 1;
            }
            if ((char)*psVar21 == (char)*psVar18) {
              return 1;
            }
          }
          else if (*psVar21 == *psVar18) {
            psVar21 = (short *)((longlong)param_4 + lVar23 + 6);
            psVar18 = (short *)(lVar1 + lVar24 + 2);
            uVar27 = (param_5 - lVar24) - 2;
            goto LAB_1801cf7d4;
          }
LAB_1801cf750:
        }
        param_2 = param_2 + 0x20;
      } while (param_2 <= uVar22);
    }
    if ((param_2 < param_3) && (param_5 <= param_3 - param_2)) {
      auVar5 = vpcmpeqb_avx2(auVar5,*(undefined1 (*) [32])(uVar22 + uVar25));
      auVar6 = vpcmpeqb_avx2(auVar6,*(undefined1 (*) [32])(uVar22 + uVar19));
      bVar15 = (char)param_2 - (char)uVar22;
      auVar5 = vpand_avx2(auVar5,auVar6);
      uVar17 = (((uint)(SUB321(auVar5 >> 7,0) & 1) | (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar5 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar5 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar5 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar5 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar5 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar5 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar5 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar5 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar5 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar5 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar5 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar5 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar5 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar5 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar5 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar5 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f) >> (bVar15 & 0x1f)) << (bVar15 & 0x1f);
      if (uVar17 != 0) {
        do {
          uVar13 = 0;
          for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          if (uVar7 - uVar13 < param_5) {
            return 0;
          }
          piVar16 = (int *)(uVar22 + uVar13);
          piVar20 = param_4;
          for (uVar25 = param_5; 3 < uVar25; uVar25 = uVar25 - 4) {
            if (*piVar20 != *piVar16) goto LAB_1801cfa0c;
            piVar20 = piVar20 + 1;
            piVar16 = piVar16 + 1;
          }
          if (uVar25 < 2) {
LAB_1801cfa72:
            if (uVar25 == 0) {
              return 1;
            }
            if ((char)*piVar20 == (char)*piVar16) {
              return 1;
            }
          }
          else if ((short)*piVar20 == (short)*piVar16) {
            piVar20 = (int *)((longlong)piVar20 + 2);
            piVar16 = (int *)((longlong)piVar16 + 2);
            uVar25 = uVar25 - 2;
            goto LAB_1801cfa72;
          }
LAB_1801cfa0c:
          uVar17 = uVar17 - 1 & uVar17;
          if (uVar17 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}


