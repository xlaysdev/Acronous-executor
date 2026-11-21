/* FUN_18012d030 @ 18012d030 */

void FUN_18012d030(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar26 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  pauVar3 = *(undefined1 (**) [16])(param_1 + 0x10);
  while (0xf < (ulonglong)((longlong)pauVar1 - (longlong)pauVar3)) {
    auVar8 = lddqu(in_XMM3,*pauVar3);
    bVar10 = auVar8[0];
    bVar11 = auVar8[1];
    bVar12 = auVar8[2];
    bVar13 = auVar8[3];
    bVar14 = auVar8[4];
    bVar15 = auVar8[5];
    bVar16 = auVar8[6];
    bVar17 = auVar8[7];
    bVar18 = auVar8[8];
    bVar19 = auVar8[9];
    bVar20 = auVar8[10];
    bVar21 = auVar8[0xb];
    bVar22 = auVar8[0xc];
    bVar23 = auVar8[0xd];
    bVar24 = auVar8[0xe];
    bVar25 = auVar8[0xf];
    auVar26[0] = -(bVar10 == 9);
    auVar26[1] = -(bVar11 == 9);
    auVar26[2] = -(bVar12 == 9);
    auVar26[3] = -(bVar13 == 9);
    auVar26[4] = -(bVar14 == 9);
    auVar26[5] = -(bVar15 == 9);
    auVar26[6] = -(bVar16 == 9);
    auVar26[7] = -(bVar17 == 9);
    auVar26[8] = -(bVar18 == 9);
    auVar26[9] = -(bVar19 == 9);
    auVar26[10] = -(bVar20 == 9);
    auVar26[0xb] = -(bVar21 == 9);
    auVar26[0xc] = -(bVar22 == 9);
    auVar26[0xd] = -(bVar23 == 9);
    auVar26[0xe] = -(bVar24 == 9);
    auVar26[0xf] = -(bVar25 == 9);
    auVar8[1] = -((byte)((bVar11 < 0x20) * ' ' | (bVar11 >= 0x20) * bVar11) == bVar11);
    auVar8[0] = -((byte)((bVar10 < 0x20) * ' ' | (bVar10 >= 0x20) * bVar10) == bVar10);
    auVar8[2] = -((byte)((bVar12 < 0x20) * ' ' | (bVar12 >= 0x20) * bVar12) == bVar12);
    auVar8[3] = -((byte)((bVar13 < 0x20) * ' ' | (bVar13 >= 0x20) * bVar13) == bVar13);
    auVar8[4] = -((byte)((bVar14 < 0x20) * ' ' | (bVar14 >= 0x20) * bVar14) == bVar14);
    auVar8[5] = -((byte)((bVar15 < 0x20) * ' ' | (bVar15 >= 0x20) * bVar15) == bVar15);
    auVar8[6] = -((byte)((bVar16 < 0x20) * ' ' | (bVar16 >= 0x20) * bVar16) == bVar16);
    auVar8[7] = -((byte)((bVar17 < 0x20) * ' ' | (bVar17 >= 0x20) * bVar17) == bVar17);
    auVar8[8] = -((byte)((bVar18 < 0x20) * ' ' | (bVar18 >= 0x20) * bVar18) == bVar18);
    auVar8[9] = -((byte)((bVar19 < 0x20) * ' ' | (bVar19 >= 0x20) * bVar19) == bVar19);
    auVar8[10] = -((byte)((bVar20 < 0x20) * ' ' | (bVar20 >= 0x20) * bVar20) == bVar20);
    auVar8[0xb] = -((byte)((bVar21 < 0x20) * ' ' | (bVar21 >= 0x20) * bVar21) == bVar21);
    auVar8[0xc] = -((byte)((bVar22 < 0x20) * ' ' | (bVar22 >= 0x20) * bVar22) == bVar22);
    auVar8[0xd] = -((byte)((bVar23 < 0x20) * ' ' | (bVar23 >= 0x20) * bVar23) == bVar23);
    auVar8[0xe] = -((byte)((bVar24 < 0x20) * ' ' | (bVar24 >= 0x20) * bVar24) == bVar24);
    auVar8[0xf] = -((byte)((bVar25 < 0x20) * ' ' | (bVar25 >= 0x20) * bVar25) == bVar25);
    auVar9[0] = -('~' < (char)bVar10);
    auVar9[1] = -('~' < (char)bVar11);
    auVar9[2] = -('~' < (char)bVar12);
    auVar9[3] = -('~' < (char)bVar13);
    auVar9[4] = -('~' < (char)bVar14);
    auVar9[5] = -('~' < (char)bVar15);
    auVar9[6] = -('~' < (char)bVar16);
    auVar9[7] = -('~' < (char)bVar17);
    auVar9[8] = -('~' < (char)bVar18);
    auVar9[9] = -('~' < (char)bVar19);
    auVar9[10] = -('~' < (char)bVar20);
    auVar9[0xb] = -('~' < (char)bVar21);
    auVar9[0xc] = -('~' < (char)bVar22);
    auVar9[0xd] = -('~' < (char)bVar23);
    auVar9[0xe] = -('~' < (char)bVar24);
    auVar9[0xf] = -('~' < (char)bVar25);
    in_XMM3 = ~auVar9 & (auVar26 | auVar8);
    uVar6 = (uint)(ushort)((ushort)(SUB161(in_XMM3 >> 7,0) & 1) |
                           (ushort)(SUB161(in_XMM3 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(in_XMM3 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(in_XMM3 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(in_XMM3 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(in_XMM3 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(in_XMM3 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(in_XMM3 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(in_XMM3 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(in_XMM3 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(in_XMM3 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(in_XMM3 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(in_XMM3 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(in_XMM3 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(in_XMM3 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(in_XMM3[0xf] >> 7) << 0xf);
    uVar2 = 0;
    for (uVar7 = ~uVar6; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    pauVar3 = (undefined1 (*) [16])(*pauVar3 + uVar2);
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar3;
    if (uVar6 != 0xffff) {
      return;
    }
  }
  do {
    if ((ulonglong)((longlong)pauVar1 - (longlong)pauVar3) < 8) {
LAB_18012d1a9:
      if (pauVar1 <= pauVar3) {
        return;
      }
      if ((&DAT_180243210)[(byte)(*pauVar3)[0]] != '\x01') {
        return;
      }
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 1);
    }
    else {
      uVar5 = *(ulonglong *)*pauVar3;
      uVar5 = ((uVar5 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar5 + 0xdfdfdfdfdfdfdfe0) &
              ~uVar5;
      if ((uVar5 & 0x8080808080808080) != 0) {
        if ((char)uVar5 < '\0') {
          lVar4 = 0;
        }
        else {
          lVar4 = 1;
          if (-1 < (short)uVar5) {
            lVar4 = 2;
            if (((((uVar5 & 0x800000) == 0) && (lVar4 = 3, -1 < (int)uVar5)) &&
                (lVar4 = 4, (uVar5 >> 0x27 & 1) == 0)) && (lVar4 = 5, (uVar5 >> 0x2f & 1) == 0)) {
              lVar4 = 7 - (ulonglong)((uVar5 >> 0x37 & 1) != 0);
            }
          }
        }
        pauVar3 = (undefined1 (*) [16])(*pauVar3 + lVar4);
        *(undefined1 (**) [16])(param_1 + 0x10) = pauVar3;
        goto LAB_18012d1a9;
      }
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 8);
    }
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar3;
  } while( true );
}


