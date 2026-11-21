/* FUN_1801d1430 @ 1801d1430 */

bool FUN_1801d1430(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  undefined1 auVar1 [32];
  int iVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  
  auVar1 = *param_1;
  auVar3 = vpcmpeqb_avx2(auVar1,*(undefined1 (*) [32])(param_3 - 0x20));
  uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  if (uVar9 != 0) {
    iVar2 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    return true;
  }
  pauVar11 = (undefined1 (*) [32])(param_3 & 0xffffffffffffffe0);
  if (param_2 + 4 <= pauVar11 && 0x7f < param_3 - (longlong)param_2) {
    lVar10 = (param_3 - ((uint)param_3 & 0x1f)) + -0x21;
    do {
      lVar12 = lVar10;
      auVar3 = vpcmpeqb_avx2(auVar1,*(undefined1 (*) [32])(lVar12 + -0x5f));
      auVar4 = vpcmpeqb_avx2(auVar1,*(undefined1 (*) [32])(lVar12 + -0x3f));
      auVar5 = vpcmpeqb_avx2(auVar1,*(undefined1 (*) [32])(lVar12 + -0x1f));
      auVar6 = vpcmpeqb_avx2(auVar1,*(undefined1 (*) [32])(lVar12 + 1));
      auVar7 = vpor_avx2(auVar3,auVar4);
      auVar8 = vpor_avx2(auVar5,auVar6);
      auVar7 = vpor_avx2(auVar8,auVar7);
      if ((((((((((((((((((((((((((((((((SUB321(auVar7 >> 7,0) & 1) != 0 ||
                                       (SUB321(auVar7 >> 0xf,0) & 1) != 0) ||
                                      (SUB321(auVar7 >> 0x17,0) & 1) != 0) ||
                                     (SUB321(auVar7 >> 0x1f,0) & 1) != 0) ||
                                    (SUB321(auVar7 >> 0x27,0) & 1) != 0) ||
                                   (SUB321(auVar7 >> 0x2f,0) & 1) != 0) ||
                                  (SUB321(auVar7 >> 0x37,0) & 1) != 0) ||
                                 (SUB321(auVar7 >> 0x3f,0) & 1) != 0) ||
                                (SUB321(auVar7 >> 0x47,0) & 1) != 0) ||
                               (SUB321(auVar7 >> 0x4f,0) & 1) != 0) ||
                              (SUB321(auVar7 >> 0x57,0) & 1) != 0) ||
                             (SUB321(auVar7 >> 0x5f,0) & 1) != 0) ||
                            (SUB321(auVar7 >> 0x67,0) & 1) != 0) ||
                           (SUB321(auVar7 >> 0x6f,0) & 1) != 0) ||
                          (SUB321(auVar7 >> 0x77,0) & 1) != 0) || SUB321(auVar7 >> 0x7f,0) != '\0')
                        || (SUB321(auVar7 >> 0x87,0) & 1) != 0) ||
                       (SUB321(auVar7 >> 0x8f,0) & 1) != 0) || (SUB321(auVar7 >> 0x97,0) & 1) != 0)
                     || (SUB321(auVar7 >> 0x9f,0) & 1) != 0) || (SUB321(auVar7 >> 0xa7,0) & 1) != 0)
                   || (SUB321(auVar7 >> 0xaf,0) & 1) != 0) || (SUB321(auVar7 >> 0xb7,0) & 1) != 0)
                 || SUB321(auVar7 >> 0xbf,0) != '\0') || (SUB321(auVar7 >> 199,0) & 1) != 0) ||
               (SUB321(auVar7 >> 0xcf,0) & 1) != 0) || (SUB321(auVar7 >> 0xd7,0) & 1) != 0) ||
             (SUB321(auVar7 >> 0xdf,0) & 1) != 0) || (SUB321(auVar7 >> 0xe7,0) & 1) != 0) ||
           (SUB321(auVar7 >> 0xef,0) & 1) != 0) || (SUB321(auVar7 >> 0xf7,0) & 1) != 0) ||
          auVar7[0x1f] < '\0') {
        uVar9 = (uint)(SUB321(auVar6 >> 7,0) & 1) | (uint)(SUB321(auVar6 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar6 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar6 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar6 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar6 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar6 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar6 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar6 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar6 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar6 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar6 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar6 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar6 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar6 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar6 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar6 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar6 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar6 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar6 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar6 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar6 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar6 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar6 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar6 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar6 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar6 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar6 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar6 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar6 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar6 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar6[0x1f] >> 7) << 0x1f;
        if (uVar9 != 0) {
          iVar2 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          return true;
        }
        uVar9 = (uint)(SUB321(auVar5 >> 7,0) & 1) | (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1 |
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
                (uint)SUB321(auVar5 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar5 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar5 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar5 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar5 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar5 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar5 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar5 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f;
        if (uVar9 != 0) {
          iVar2 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          return true;
        }
        uVar9 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
        if (uVar9 == 0) {
          uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
          iVar2 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          return true;
        }
        iVar2 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        return true;
      }
      lVar10 = lVar12 + -0x80;
    } while (param_2 + 4 <= (undefined1 (*) [32])(lVar12 + -0x5f));
    pauVar11 = (undefined1 (*) [32])(lVar12 + -0x5f);
  }
  do {
    if (pauVar11 < param_2 + 1) {
      if (pauVar11 <= param_2) {
        return false;
      }
      auVar1 = vpcmpeqb_avx2(auVar1,*param_2);
      uVar9 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f
      ;
      iVar2 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      return uVar9 != 0;
    }
    auVar3 = vpcmpeqb_avx2(auVar1,pauVar11[-1]);
    pauVar11 = pauVar11 + -1;
    uVar9 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
  } while (uVar9 == 0);
  iVar2 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  return true;
}


