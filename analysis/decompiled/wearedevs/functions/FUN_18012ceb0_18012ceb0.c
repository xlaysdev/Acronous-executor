/* FUN_18012ceb0 @ 18012ceb0 */

void FUN_18012ceb0(longlong param_1)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  pauVar1 = *(undefined1 (**) [32])(param_1 + 8);
  pauVar7 = *(undefined1 (**) [32])(param_1 + 0x10);
  auVar11[8] = 0x20;
  auVar11._0_8_ = 0x2020202020202020;
  auVar11[9] = 0x20;
  auVar11[10] = 0x20;
  auVar11[0xb] = 0x20;
  auVar11[0xc] = 0x20;
  auVar11[0xd] = 0x20;
  auVar11[0xe] = 0x20;
  auVar11[0xf] = 0x20;
  auVar11[0x10] = 0x20;
  auVar11[0x11] = 0x20;
  auVar11[0x12] = 0x20;
  auVar11[0x13] = 0x20;
  auVar11[0x14] = 0x20;
  auVar11[0x15] = 0x20;
  auVar11[0x16] = 0x20;
  auVar11[0x17] = 0x20;
  auVar11[0x18] = 0x20;
  auVar11[0x19] = 0x20;
  auVar11[0x1a] = 0x20;
  auVar11[0x1b] = 0x20;
  auVar11[0x1c] = 0x20;
  auVar11[0x1d] = 0x20;
  auVar11[0x1e] = 0x20;
  auVar11[0x1f] = 0x20;
  auVar12[8] = 9;
  auVar12._0_8_ = 0x909090909090909;
  auVar12[9] = 9;
  auVar12[10] = 9;
  auVar12[0xb] = 9;
  auVar12[0xc] = 9;
  auVar12[0xd] = 9;
  auVar12[0xe] = 9;
  auVar12[0xf] = 9;
  auVar12[0x10] = 9;
  auVar12[0x11] = 9;
  auVar12[0x12] = 9;
  auVar12[0x13] = 9;
  auVar12[0x14] = 9;
  auVar12[0x15] = 9;
  auVar12[0x16] = 9;
  auVar12[0x17] = 9;
  auVar12[0x18] = 9;
  auVar12[0x19] = 9;
  auVar12[0x1a] = 9;
  auVar12[0x1b] = 9;
  auVar12[0x1c] = 9;
  auVar12[0x1d] = 9;
  auVar12[0x1e] = 9;
  auVar12[0x1f] = 9;
  auVar13[8] = 0x7e;
  auVar13._0_8_ = 0x7e7e7e7e7e7e7e7e;
  auVar13[9] = 0x7e;
  auVar13[10] = 0x7e;
  auVar13[0xb] = 0x7e;
  auVar13[0xc] = 0x7e;
  auVar13[0xd] = 0x7e;
  auVar13[0xe] = 0x7e;
  auVar13[0xf] = 0x7e;
  auVar13[0x10] = 0x7e;
  auVar13[0x11] = 0x7e;
  auVar13[0x12] = 0x7e;
  auVar13[0x13] = 0x7e;
  auVar13[0x14] = 0x7e;
  auVar13[0x15] = 0x7e;
  auVar13[0x16] = 0x7e;
  auVar13[0x17] = 0x7e;
  auVar13[0x18] = 0x7e;
  auVar13[0x19] = 0x7e;
  auVar13[0x1a] = 0x7e;
  auVar13[0x1b] = 0x7e;
  auVar13[0x1c] = 0x7e;
  auVar13[0x1d] = 0x7e;
  auVar13[0x1e] = 0x7e;
  auVar13[0x1f] = 0x7e;
  while (0x1f < (ulonglong)((longlong)pauVar1 - (longlong)pauVar7)) {
    auVar2 = vlddqu_avx(*pauVar7);
    auVar4 = vpmaxub_avx2(auVar2,auVar11);
    auVar4 = vpcmpeqb_avx2(auVar2,auVar4);
    auVar3 = vpcmpeqb_avx2(auVar2,auVar12);
    auVar4 = vpor_avx2(auVar3,auVar4);
    auVar2 = vpcmpgtb_avx2(auVar2,auVar13);
    auVar2 = vpandn_avx2(auVar2,auVar4);
    uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
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
    uVar6 = 0;
    for (uVar10 = ~uVar5; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    pauVar7 = (undefined1 (*) [32])(*pauVar7 + uVar6);
    *(undefined1 (**) [32])(param_1 + 0x10) = pauVar7;
    if (uVar5 != 0xffffffff) {
      return;
    }
  }
  do {
    if ((ulonglong)((longlong)pauVar1 - (longlong)pauVar7) < 8) {
LAB_18012d019:
      if (pauVar1 <= pauVar7) {
        return;
      }
      if ((&DAT_180243210)[(byte)(*pauVar7)[0]] != '\x01') {
        return;
      }
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + 1);
    }
    else {
      uVar9 = *(ulonglong *)*pauVar7;
      uVar9 = ((uVar9 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar9 + 0xdfdfdfdfdfdfdfe0) &
              ~uVar9;
      if ((uVar9 & 0x8080808080808080) != 0) {
        if ((char)uVar9 < '\0') {
          lVar8 = 0;
        }
        else {
          lVar8 = 1;
          if (-1 < (short)uVar9) {
            lVar8 = 2;
            if (((((uVar9 & 0x800000) == 0) && (lVar8 = 3, -1 < (int)uVar9)) &&
                (lVar8 = 4, (uVar9 >> 0x27 & 1) == 0)) && (lVar8 = 5, (uVar9 >> 0x2f & 1) == 0)) {
              lVar8 = 7 - (ulonglong)((uVar9 >> 0x37 & 1) != 0);
            }
          }
        }
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + lVar8);
        *(undefined1 (**) [32])(param_1 + 0x10) = pauVar7;
        goto LAB_18012d019;
      }
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + 8);
    }
    *(undefined1 (**) [32])(param_1 + 0x10) = pauVar7;
  } while( true );
}


