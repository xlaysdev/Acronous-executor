/* FUN_1801d1280 @ 1801d1280 */

bool FUN_1801d1280(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  uint uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  bool bVar11;
  
  auVar1 = *param_1;
  auVar2 = vpcmpeqb_avx2(auVar1,*param_2);
  uVar8 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
  if (uVar8 != 0) {
LAB_1801d1299:
    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    }
    return true;
  }
  pauVar10 = (undefined1 (*) [32])(((ulonglong)param_2 & 0xffffffffffffffe0) + 0x20);
  if (pauVar10 <= param_3 + -4 && 0x7f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
    pauVar9 = (undefined1 (*) [32])((longlong)param_2 + (0x40 - (ulonglong)((uint)param_2 & 0x1f)));
    do {
      pauVar10 = pauVar9;
      auVar2 = vpcmpeqb_avx2(auVar1,pauVar10[-1]);
      auVar3 = vpcmpeqb_avx2(auVar1,*pauVar10);
      auVar4 = vpcmpeqb_avx2(auVar1,pauVar10[1]);
      auVar5 = vpcmpeqb_avx2(auVar1,pauVar10[2]);
      auVar6 = vpor_avx2(auVar2,auVar3);
      auVar7 = vpor_avx2(auVar4,auVar5);
      auVar6 = vpor_avx2(auVar7,auVar6);
      if ((((((((((((((((((((((((((((((((SUB321(auVar6 >> 7,0) & 1) != 0 ||
                                       (SUB321(auVar6 >> 0xf,0) & 1) != 0) ||
                                      (SUB321(auVar6 >> 0x17,0) & 1) != 0) ||
                                     (SUB321(auVar6 >> 0x1f,0) & 1) != 0) ||
                                    (SUB321(auVar6 >> 0x27,0) & 1) != 0) ||
                                   (SUB321(auVar6 >> 0x2f,0) & 1) != 0) ||
                                  (SUB321(auVar6 >> 0x37,0) & 1) != 0) ||
                                 (SUB321(auVar6 >> 0x3f,0) & 1) != 0) ||
                                (SUB321(auVar6 >> 0x47,0) & 1) != 0) ||
                               (SUB321(auVar6 >> 0x4f,0) & 1) != 0) ||
                              (SUB321(auVar6 >> 0x57,0) & 1) != 0) ||
                             (SUB321(auVar6 >> 0x5f,0) & 1) != 0) ||
                            (SUB321(auVar6 >> 0x67,0) & 1) != 0) ||
                           (SUB321(auVar6 >> 0x6f,0) & 1) != 0) ||
                          (SUB321(auVar6 >> 0x77,0) & 1) != 0) || SUB321(auVar6 >> 0x7f,0) != '\0')
                        || (SUB321(auVar6 >> 0x87,0) & 1) != 0) ||
                       (SUB321(auVar6 >> 0x8f,0) & 1) != 0) || (SUB321(auVar6 >> 0x97,0) & 1) != 0)
                     || (SUB321(auVar6 >> 0x9f,0) & 1) != 0) || (SUB321(auVar6 >> 0xa7,0) & 1) != 0)
                   || (SUB321(auVar6 >> 0xaf,0) & 1) != 0) || (SUB321(auVar6 >> 0xb7,0) & 1) != 0)
                 || SUB321(auVar6 >> 0xbf,0) != '\0') || (SUB321(auVar6 >> 199,0) & 1) != 0) ||
               (SUB321(auVar6 >> 0xcf,0) & 1) != 0) || (SUB321(auVar6 >> 0xd7,0) & 1) != 0) ||
             (SUB321(auVar6 >> 0xdf,0) & 1) != 0) || (SUB321(auVar6 >> 0xe7,0) & 1) != 0) ||
           (SUB321(auVar6 >> 0xef,0) & 1) != 0) || (SUB321(auVar6 >> 0xf7,0) & 1) != 0) ||
          auVar6[0x1f] < '\0') {
        uVar8 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
        if (uVar8 != 0) {
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          }
          return true;
        }
        uVar8 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
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
                (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar8 == 0) {
          uVar8 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
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
                  (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                  (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
          if (uVar8 != 0) {
            for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            }
            return true;
          }
          for (uVar8 = (uint)(SUB321(auVar5 >> 7,0) & 1) | (uint)(SUB321(auVar5 >> 0xf,0) & 1) << 1
                       | (uint)(SUB321(auVar5 >> 0x17,0) & 1) << 2 |
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
                       (uint)(SUB321(auVar5 >> 0x77,0) & 1) << 0xe |
                       (uint)SUB321(auVar5 >> 0x7f,0) << 0xf |
                       (uint)(SUB321(auVar5 >> 0x87,0) & 1) << 0x10 |
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
                       (uint)(byte)(auVar5[0x1f] >> 7) << 0x1f; (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
          }
          return true;
        }
        goto LAB_1801d1299;
      }
      pauVar9 = pauVar10 + 4;
    } while (pauVar10 + 3 <= param_3 + -4);
    pauVar10 = pauVar10 + 3;
  }
  for (; pauVar10 <= param_3 + -1; pauVar10 = pauVar10 + 1) {
    auVar2 = vpcmpeqb_avx2(auVar1,*pauVar10);
    uVar8 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
    if (uVar8 != 0) {
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      }
      return true;
    }
  }
  if (param_3 <= pauVar10) {
    return false;
  }
  auVar1 = vpcmpeqb_avx2(auVar1,param_3[-1]);
  uVar8 = (uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
          (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
          (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
          (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
          (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
          (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
          (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc | (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd
          | (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
          (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
          (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
          (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
          (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
          (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
          (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
          (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
          (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 | (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19
          | (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
          (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
          (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
          (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
          (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f;
  bVar11 = uVar8 != 0;
  for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
  }
  return bVar11;
}


