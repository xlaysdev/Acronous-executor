/* FUN_1801b18c0 @ 1801b18c0 */

longlong * FUN_1801b18c0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
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
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  byte *pbVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  byte bVar48;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  uVar3 = param_2[2];
  if (uVar3 == 0) goto LAB_1801b1aa9;
  pbVar4 = (byte *)param_2[1];
  if (uVar3 < 8) {
    bVar35 = false;
    pbVar34 = pbVar4;
LAB_1801b1a5b:
    do {
      bVar2 = *pbVar34;
      pbVar34 = pbVar34 + 1;
      bVar35 = (bool)(bVar35 | (bVar2 != 9 && (bVar2 == 0x7f || bVar2 < 0x20)));
    } while (pbVar34 != pbVar4 + uVar3);
  }
  else if (uVar3 < 0x20) {
    uVar32 = 0;
    bVar35 = false;
LAB_1801b19ce:
    uVar33 = uVar3 & 0xfffffffffffffff8;
    pbVar34 = pbVar4 + uVar33;
    auVar36 = ZEXT116(bVar35);
    auVar37._8_4_ = 0xffffffff;
    auVar37._0_8_ = 0xffffffffffffffff;
    auVar37._12_4_ = 0xffffffff;
    do {
      uVar1 = *(undefined8 *)(pbVar4 + uVar32);
      bVar48 = (byte)uVar1;
      bVar51 = (byte)((ulonglong)uVar1 >> 8);
      bVar52 = (byte)((ulonglong)uVar1 >> 0x10);
      bVar53 = (byte)((ulonglong)uVar1 >> 0x18);
      bVar54 = (byte)((ulonglong)uVar1 >> 0x20);
      bVar55 = (byte)((ulonglong)uVar1 >> 0x28);
      bVar56 = (byte)((ulonglong)uVar1 >> 0x30);
      bVar2 = (byte)((ulonglong)uVar1 >> 0x38);
      auVar50[0] = -((byte)((bVar48 < (byte)' ') * ' ' | (bVar48 >= (byte)' ') * bVar48) == bVar48);
      auVar50[1] = -((byte)((bVar51 < (byte)' ') * ' ' | (bVar51 >= (byte)' ') * bVar51) == bVar51);
      auVar50[2] = -((byte)((bVar52 < (byte)' ') * ' ' | (bVar52 >= (byte)' ') * bVar52) == bVar52);
      auVar50[3] = -((byte)((bVar53 < (byte)' ') * ' ' | (bVar53 >= (byte)' ') * bVar53) == bVar53);
      auVar50[4] = -((byte)((bVar54 < (byte)' ') * ' ' | (bVar54 >= (byte)' ') * bVar54) == bVar54);
      auVar50[5] = -((byte)((bVar55 < (byte)' ') * ' ' | (bVar55 >= (byte)' ') * bVar55) == bVar55);
      auVar50[6] = -((byte)((bVar56 < (byte)' ') * ' ' | (bVar56 >= (byte)' ') * bVar56) == bVar56);
      auVar50[7] = -((byte)((bVar2 < (byte)' ') * ' ' | (bVar2 >= (byte)' ') * bVar2) == bVar2);
      auVar50[8] = 0xff;
      auVar50[9] = 0xff;
      auVar50[10] = 0xff;
      auVar50[0xb] = 0xff;
      auVar50[0xc] = 0xff;
      auVar50[0xd] = 0xff;
      auVar50[0xe] = 0xff;
      auVar50[0xf] = 0xff;
      auVar59[0] = -(bVar48 == 0x7f);
      auVar59[1] = -(bVar51 == 0x7f);
      auVar59[2] = -(bVar52 == 0x7f);
      auVar59[3] = -(bVar53 == 0x7f);
      auVar59[4] = -(bVar54 == 0x7f);
      auVar59[5] = -(bVar55 == 0x7f);
      auVar59[6] = -(bVar56 == 0x7f);
      auVar59[7] = -(bVar2 == 0x7f);
      auVar59[8] = 0xff;
      auVar59[9] = 0xff;
      auVar59[10] = 0xff;
      auVar59[0xb] = 0xff;
      auVar59[0xc] = 0xff;
      auVar59[0xd] = 0xff;
      auVar59[0xe] = 0xff;
      auVar59[0xf] = 0xff;
      auVar38[0] = -(bVar48 == '\t');
      auVar38[1] = -(bVar51 == '\t');
      auVar38[2] = -(bVar52 == '\t');
      auVar38[3] = -(bVar53 == '\t');
      auVar38[4] = -(bVar54 == '\t');
      auVar38[5] = -(bVar55 == '\t');
      auVar38[6] = -(bVar56 == '\t');
      auVar38[7] = -(bVar2 == '\t');
      auVar38[8] = 0xff;
      auVar38[9] = 0xff;
      auVar38[10] = 0xff;
      auVar38[0xb] = 0xff;
      auVar38[0xc] = 0xff;
      auVar38[0xd] = 0xff;
      auVar38[0xe] = 0xff;
      auVar38[0xf] = 0xff;
      auVar39 = ~auVar38 & (auVar59 | auVar50 ^ auVar37);
      auVar47._0_14_ = auVar39._0_14_;
      auVar47[0xe] = auVar39[7];
      auVar47[0xf] = auVar39[7];
      auVar46._14_2_ = auVar47._14_2_;
      auVar46._0_13_ = auVar39._0_13_;
      auVar46[0xd] = auVar39[6];
      auVar45._13_3_ = auVar46._13_3_;
      auVar45._0_12_ = auVar39._0_12_;
      auVar45[0xc] = auVar39[6];
      auVar44._12_4_ = auVar45._12_4_;
      auVar44._0_11_ = auVar39._0_11_;
      auVar44[0xb] = auVar39[5];
      auVar43._11_5_ = auVar44._11_5_;
      auVar43._0_10_ = auVar39._0_10_;
      auVar43[10] = auVar39[5];
      auVar42._10_6_ = auVar43._10_6_;
      auVar42._0_9_ = auVar39._0_9_;
      auVar42[9] = auVar39[4];
      auVar41._9_7_ = auVar42._9_7_;
      auVar41._0_8_ = auVar39._0_8_;
      auVar41[8] = auVar39[4];
      auVar40._8_8_ = auVar41._8_8_;
      auVar40[7] = auVar39[3];
      auVar40[6] = auVar39[3];
      auVar40[5] = auVar39[2];
      auVar40[4] = auVar39[2];
      auVar40[3] = auVar39[1];
      auVar40[2] = auVar39[1];
      auVar40[0] = auVar39[0];
      auVar40[1] = auVar40[0];
      auVar36 = auVar36 | auVar40;
      uVar32 = uVar32 + 8;
    } while (uVar33 != uVar32);
    auVar36 = psllw(auVar36,7);
    bVar35 = (((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0;
    if (uVar3 != uVar33) goto LAB_1801b1a5b;
  }
  else {
    uVar32 = uVar3 & 0xffffffffffffffe0;
    auVar36 = (undefined1  [16])0x0;
    uVar33 = 0;
    auVar37 = (undefined1  [16])0x0;
    do {
      pbVar34 = pbVar4 + uVar33;
      bVar2 = *pbVar34;
      bVar48 = pbVar34[1];
      bVar51 = pbVar34[2];
      bVar52 = pbVar34[3];
      bVar53 = pbVar34[4];
      bVar54 = pbVar34[5];
      bVar55 = pbVar34[6];
      bVar56 = pbVar34[7];
      bVar5 = pbVar34[8];
      bVar6 = pbVar34[9];
      bVar7 = pbVar34[10];
      bVar8 = pbVar34[0xb];
      bVar9 = pbVar34[0xc];
      bVar10 = pbVar34[0xd];
      bVar11 = pbVar34[0xe];
      bVar12 = pbVar34[0xf];
      pbVar34 = pbVar4 + uVar33 + 0x10;
      bVar13 = *pbVar34;
      bVar14 = pbVar34[1];
      bVar15 = pbVar34[2];
      bVar16 = pbVar34[3];
      bVar17 = pbVar34[4];
      bVar18 = pbVar34[5];
      bVar19 = pbVar34[6];
      bVar20 = pbVar34[7];
      bVar21 = pbVar34[8];
      bVar22 = pbVar34[9];
      bVar23 = pbVar34[10];
      bVar24 = pbVar34[0xb];
      bVar25 = pbVar34[0xc];
      bVar26 = pbVar34[0xd];
      bVar27 = pbVar34[0xe];
      bVar28 = pbVar34[0xf];
      auVar57[0] = -((byte)((0x1f < bVar2) * '\x1f' | (0x1f >= bVar2) * bVar2) == bVar2);
      auVar57[1] = -((byte)((0x1f < bVar48) * '\x1f' | (0x1f >= bVar48) * bVar48) == bVar48);
      auVar57[2] = -((byte)((0x1f < bVar51) * '\x1f' | (0x1f >= bVar51) * bVar51) == bVar51);
      auVar57[3] = -((byte)((0x1f < bVar52) * '\x1f' | (0x1f >= bVar52) * bVar52) == bVar52);
      auVar57[4] = -((byte)((0x1f < bVar53) * '\x1f' | (0x1f >= bVar53) * bVar53) == bVar53);
      auVar57[5] = -((byte)((0x1f < bVar54) * '\x1f' | (0x1f >= bVar54) * bVar54) == bVar54);
      auVar57[6] = -((byte)((0x1f < bVar55) * '\x1f' | (0x1f >= bVar55) * bVar55) == bVar55);
      auVar57[7] = -((byte)((0x1f < bVar56) * '\x1f' | (0x1f >= bVar56) * bVar56) == bVar56);
      auVar57[8] = -((byte)((0x1f < bVar5) * '\x1f' | (0x1f >= bVar5) * bVar5) == bVar5);
      auVar57[9] = -((byte)((0x1f < bVar6) * '\x1f' | (0x1f >= bVar6) * bVar6) == bVar6);
      auVar57[10] = -((byte)((0x1f < bVar7) * '\x1f' | (0x1f >= bVar7) * bVar7) == bVar7);
      auVar57[0xb] = -((byte)((0x1f < bVar8) * '\x1f' | (0x1f >= bVar8) * bVar8) == bVar8);
      auVar57[0xc] = -((byte)((0x1f < bVar9) * '\x1f' | (0x1f >= bVar9) * bVar9) == bVar9);
      auVar57[0xd] = -((byte)((0x1f < bVar10) * '\x1f' | (0x1f >= bVar10) * bVar10) == bVar10);
      auVar57[0xe] = -((byte)((0x1f < bVar11) * '\x1f' | (0x1f >= bVar11) * bVar11) == bVar11);
      auVar57[0xf] = -((byte)((0x1f < bVar12) * '\x1f' | (0x1f >= bVar12) * bVar12) == bVar12);
      auVar60[0] = -((byte)((0x1f < bVar13) * '\x1f' | (0x1f >= bVar13) * bVar13) == bVar13);
      auVar60[1] = -((byte)((0x1f < bVar14) * '\x1f' | (0x1f >= bVar14) * bVar14) == bVar14);
      auVar60[2] = -((byte)((0x1f < bVar15) * '\x1f' | (0x1f >= bVar15) * bVar15) == bVar15);
      auVar60[3] = -((byte)((0x1f < bVar16) * '\x1f' | (0x1f >= bVar16) * bVar16) == bVar16);
      auVar60[4] = -((byte)((0x1f < bVar17) * '\x1f' | (0x1f >= bVar17) * bVar17) == bVar17);
      auVar60[5] = -((byte)((0x1f < bVar18) * '\x1f' | (0x1f >= bVar18) * bVar18) == bVar18);
      auVar60[6] = -((byte)((0x1f < bVar19) * '\x1f' | (0x1f >= bVar19) * bVar19) == bVar19);
      auVar60[7] = -((byte)((0x1f < bVar20) * '\x1f' | (0x1f >= bVar20) * bVar20) == bVar20);
      auVar60[8] = -((byte)((0x1f < bVar21) * '\x1f' | (0x1f >= bVar21) * bVar21) == bVar21);
      auVar60[9] = -((byte)((0x1f < bVar22) * '\x1f' | (0x1f >= bVar22) * bVar22) == bVar22);
      auVar60[10] = -((byte)((0x1f < bVar23) * '\x1f' | (0x1f >= bVar23) * bVar23) == bVar23);
      auVar60[0xb] = -((byte)((0x1f < bVar24) * '\x1f' | (0x1f >= bVar24) * bVar24) == bVar24);
      auVar60[0xc] = -((byte)((0x1f < bVar25) * '\x1f' | (0x1f >= bVar25) * bVar25) == bVar25);
      auVar60[0xd] = -((byte)((0x1f < bVar26) * '\x1f' | (0x1f >= bVar26) * bVar26) == bVar26);
      auVar60[0xe] = -((byte)((0x1f < bVar27) * '\x1f' | (0x1f >= bVar27) * bVar27) == bVar27);
      auVar60[0xf] = -((byte)((0x1f < bVar28) * '\x1f' | (0x1f >= bVar28) * bVar28) == bVar28);
      auVar61[0] = -(bVar2 == 0x7f);
      auVar61[1] = -(bVar48 == 0x7f);
      auVar61[2] = -(bVar51 == 0x7f);
      auVar61[3] = -(bVar52 == 0x7f);
      auVar61[4] = -(bVar53 == 0x7f);
      auVar61[5] = -(bVar54 == 0x7f);
      auVar61[6] = -(bVar55 == 0x7f);
      auVar61[7] = -(bVar56 == 0x7f);
      auVar61[8] = -(bVar5 == 0x7f);
      auVar61[9] = -(bVar6 == 0x7f);
      auVar61[10] = -(bVar7 == 0x7f);
      auVar61[0xb] = -(bVar8 == 0x7f);
      auVar61[0xc] = -(bVar9 == 0x7f);
      auVar61[0xd] = -(bVar10 == 0x7f);
      auVar61[0xe] = -(bVar11 == 0x7f);
      auVar61[0xf] = -(bVar12 == 0x7f);
      auVar58[0] = -(bVar13 == 0x7f);
      auVar58[1] = -(bVar14 == 0x7f);
      auVar58[2] = -(bVar15 == 0x7f);
      auVar58[3] = -(bVar16 == 0x7f);
      auVar58[4] = -(bVar17 == 0x7f);
      auVar58[5] = -(bVar18 == 0x7f);
      auVar58[6] = -(bVar19 == 0x7f);
      auVar58[7] = -(bVar20 == 0x7f);
      auVar58[8] = -(bVar21 == 0x7f);
      auVar58[9] = -(bVar22 == 0x7f);
      auVar58[10] = -(bVar23 == 0x7f);
      auVar58[0xb] = -(bVar24 == 0x7f);
      auVar58[0xc] = -(bVar25 == 0x7f);
      auVar58[0xd] = -(bVar26 == 0x7f);
      auVar58[0xe] = -(bVar27 == 0x7f);
      auVar58[0xf] = -(bVar28 == 0x7f);
      auVar39[0] = -(bVar2 == 9);
      auVar39[1] = -(bVar48 == 9);
      auVar39[2] = -(bVar51 == 9);
      auVar39[3] = -(bVar52 == 9);
      auVar39[4] = -(bVar53 == 9);
      auVar39[5] = -(bVar54 == 9);
      auVar39[6] = -(bVar55 == 9);
      auVar39[7] = -(bVar56 == 9);
      auVar39[8] = -(bVar5 == 9);
      auVar39[9] = -(bVar6 == 9);
      auVar39[10] = -(bVar7 == 9);
      auVar39[0xb] = -(bVar8 == 9);
      auVar39[0xc] = -(bVar9 == 9);
      auVar39[0xd] = -(bVar10 == 9);
      auVar39[0xe] = -(bVar11 == 9);
      auVar39[0xf] = -(bVar12 == 9);
      auVar36 = auVar36 | ~auVar39 & (auVar61 | auVar57);
      auVar49[0] = -(bVar13 == 9);
      auVar49[1] = -(bVar14 == 9);
      auVar49[2] = -(bVar15 == 9);
      auVar49[3] = -(bVar16 == 9);
      auVar49[4] = -(bVar17 == 9);
      auVar49[5] = -(bVar18 == 9);
      auVar49[6] = -(bVar19 == 9);
      auVar49[7] = -(bVar20 == 9);
      auVar49[8] = -(bVar21 == 9);
      auVar49[9] = -(bVar22 == 9);
      auVar49[10] = -(bVar23 == 9);
      auVar49[0xb] = -(bVar24 == 9);
      auVar49[0xc] = -(bVar25 == 9);
      auVar49[0xd] = -(bVar26 == 9);
      auVar49[0xe] = -(bVar27 == 9);
      auVar49[0xf] = -(bVar28 == 9);
      auVar37 = auVar37 | ~auVar49 & (auVar58 | auVar60);
      uVar33 = uVar33 + 0x20;
    } while (uVar32 != uVar33);
    auVar36 = psllw(auVar37 | auVar36,7);
    bVar35 = (((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0)
                         || (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
             auVar36[0xf] < '\0';
    if (uVar3 != uVar32) {
      if ((uVar3 & 0x18) == 0) {
        pbVar34 = pbVar4 + uVar32;
        goto LAB_1801b1a5b;
      }
      goto LAB_1801b19ce;
    }
  }
  if (bVar35) {
    *(undefined1 *)(param_1 + 4) = 2;
    (**(code **)(*param_2 + 0x20))(param_2[3],pbVar4);
    return param_1;
  }
LAB_1801b1aa9:
  lVar29 = *param_2;
  lVar30 = param_2[1];
  lVar31 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar31;
  *param_1 = lVar29;
  param_1[1] = lVar30;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}


