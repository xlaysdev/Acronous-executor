/* FUN_1801d2cf0 @ 1801d2cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1801d2cf0(ulonglong param_1,undefined1 *param_2)

{
  ushort *puVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ushort uVar16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [16];
  undefined1 auVar19 [14];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char cVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  undefined1 *_Src;
  uint uVar28;
  undefined2 *_Dst;
  undefined1 *puVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  bool bVar37;
  longlong lVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ushort uVar41;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ushort uVar50;
  undefined1 in_XMM2 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar31 = param_1 & 0xfffffffffffff;
  *param_2 = 0x2d;
  _Dst = (undefined2 *)(param_2 + -((longlong)param_1 >> 0x3f));
  uVar25 = param_1 >> 0x34 & 0x7ff;
  if (uVar25 == 0) {
    if (uVar31 == 0) {
      *_Dst = 0x2e30;
      *(undefined1 *)(_Dst + 1) = 0x30;
      return (undefined1 *)((longlong)_Dst + 3);
    }
    uVar35 = 0xfffffebc;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar31 << 5;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar31 << 5;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = SUB168(auVar39 * ZEXT816(0x46729e03dd9ed7b5),8);
    auVar42 = auVar42 * ZEXT816(0xfcf62c1dee382c42) + auVar21 >> 6;
    uVar25 = auVar42._0_8_;
    uVar31 = (ulonglong)(~(uint)param_1 & 1) + 0x3f3d8b077b8e0b10;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar25;
    lVar33 = 2;
    if (uVar25 != 0x4000000000000000) {
      lVar33 = SUB168(auVar6 * ZEXT816(10),8) +
               (ulonglong)(0x7ffffffffffffff9 < SUB168(auVar6 * ZEXT816(10),0));
    }
    if (uVar25 < uVar31) {
      lVar33 = 0;
    }
    if (CARRY8(uVar31,uVar25)) {
      lVar33 = 0;
    }
    uVar25 = lVar33 + (auVar42._8_8_ + (ulonglong)CARRY8(uVar25,uVar31)) * 10;
    if (uVar25 < 1000000000000000) {
      do {
        uVar25 = uVar25 * 10;
        uVar35 = uVar35 - 1;
      } while ((longlong)uVar25 < 1000000000000000);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar25;
    uVar31 = SUB168(auVar7 * ZEXT816(0x199999999999999a),8);
    uVar25 = uVar25 + uVar31 * -10;
    bVar37 = uVar25 != 0;
  }
  else {
    iVar26 = (int)uVar25 + -0x433;
    iVar34 = iVar26 * 0x4d105;
    if (uVar31 == 0) {
      uVar35 = iVar34 + -0x20000 >> 0x14;
      cVar22 = (char)(~uVar35 * 0x3526b >> 0x10) + (char)iVar26;
      uVar31 = (ulonglong)(uVar35 * -2 + 0x248);
      uVar25 = 0x10000000000000 << (cVar22 + 7U & 0x3f);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(&DAT_18028c180 + uVar31 * 8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar25;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar25;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *(ulonglong *)(&DAT_18028c188 + uVar31 * 8);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = SUB168(auVar9 * auVar15,8);
      auVar42 = auVar8 * auVar14 + auVar23 >> 6;
      uVar36 = auVar42._0_8_;
      uVar32 = *(ulonglong *)(&DAT_18028c180 + uVar31 * 8) >> (-cVar22 & 0x3fU);
      uVar31 = auVar42._8_8_ + (ulonglong)CARRY8(uVar32,uVar36);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar36;
      uVar28 = SUB164(auVar10 * ZEXT816(10),8) +
               (uint)(0x8000000000000000 < SUB168(auVar10 * ZEXT816(10),0));
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar36 - (uVar32 >> 1);
      uVar27 = SUB164(auVar11 * ZEXT816(10),8) + (uint)(SUB168(auVar11 * ZEXT816(10),0) != 0);
      if (uVar27 < uVar28) {
        uVar27 = uVar28;
      }
      uVar25 = (ulonglong)uVar27;
      bVar37 = CARRY8(uVar32,uVar36) || uVar36 < uVar32 >> 1;
    }
    else {
      uVar35 = iVar34 >> 0x14;
      lVar33 = (longlong)(int)(uVar35 * -2 + 0x248);
      uVar31 = uVar31 + 0x10000000000000 << ((&DAT_18028a5b0)[uVar25] & 0x3f);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar31;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(&DAT_18028c180 + lVar33 * 8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar31;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(&DAT_18028c188 + lVar33 * 8);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = SUB168(auVar4 * auVar13,8);
      auVar42 = auVar3 * auVar12 + auVar20 >> 6;
      uVar32 = auVar42._0_8_;
      uVar36 = (*(ulonglong *)(&DAT_18028c180 + lVar33 * 8) >> (7 - (&DAT_18028a5b0)[uVar25] & 0x3f)
               ) + (ulonglong)(~(uint)param_1 & 1);
      uVar31 = auVar42._8_8_ + (ulonglong)CARRY8(uVar36,uVar32);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar32;
      uVar25 = 2;
      if (uVar32 != 0x4000000000000000) {
        uVar25 = (ulonglong)
                 (byte)(SUB161(auVar5 * ZEXT816(10),8) +
                       (0x7ffffffffffffff9 < SUB168(auVar5 * ZEXT816(10),0)));
      }
      bVar37 = CARRY8(uVar36,uVar32) || uVar32 < uVar36;
    }
    bVar37 = (bool)(bVar37 ^ 1);
  }
  bVar2 = 999999999999999 < uVar31;
  uVar32 = (ulonglong)bVar2;
  uVar28 = uVar35 + bVar2 + 0xf;
  uVar36 = uVar31 / 100000000 & 0xffffffff;
  lVar33 = ((uVar31 % 100000000) / 10000) * 0xffffd8f0 + uVar31 % 100000000;
  lVar40 = (uVar36 * 0x68db8bb >> 0x28) * 0xffffd8f0 + uVar36;
  auVar38._4_4_ = (int)lVar40;
  auVar38._0_4_ = (int)((ulonglong)lVar40 >> 0x20);
  auVar38._8_4_ = (int)((ulonglong)lVar33 >> 0x20);
  auVar38._12_4_ = (int)lVar33;
  auVar42 = pmulhuw(_DAT_18028a540,auVar38);
  auVar53._0_12_ = in_XMM2._0_12_;
  auVar53._12_2_ = in_XMM2._6_2_;
  auVar53._14_2_ = auVar42._6_2_;
  auVar52._12_4_ = auVar53._12_4_;
  auVar52._0_10_ = in_XMM2._0_10_;
  auVar52._10_2_ = auVar42._4_2_;
  auVar51._10_6_ = auVar52._10_6_;
  auVar51._0_8_ = in_XMM2._0_8_;
  auVar51._8_2_ = in_XMM2._4_2_;
  auVar18._2_8_ = auVar51._8_8_;
  auVar18._0_2_ = auVar42._2_2_;
  auVar18._10_6_ = 0;
  auVar17._2_12_ = SUB1612(auVar18 << 0x30,4);
  auVar17._0_2_ = auVar42._0_2_;
  auVar19._2_12_ = auVar42._4_12_;
  auVar19._0_2_ = auVar42._8_2_;
  auVar43._0_4_ = (auVar19._0_4_ & 0xffff) >> 3;
  auVar43._4_4_ = (uint)(((ulonglong)auVar42._10_2_ << 0x30) >> 0x33);
  auVar43._8_4_ = (uint)(((uint6)auVar42._12_2_ << 0x20) >> 0x23);
  auVar43._12_4_ = (uint)(((uint6)auVar42._14_2_ << 0x20) >> 0x23);
  auVar54._0_4_ = auVar17._0_4_ >> 3;
  auVar54._4_4_ = SUB164(auVar18 << 0x30,4) >> 0x13;
  auVar54._8_4_ = auVar51._8_4_ >> 0x13;
  auVar54._12_4_ = auVar52._12_4_ >> 0x13;
  auVar42 = packssdw(auVar54,auVar43);
  auVar24._2_4_ = (uint)(ushort)((short)lVar40 + auVar42._4_2_ * -100) << 0x10;
  auVar24._0_2_ = (short)((ulonglong)lVar40 >> 0x20) + auVar42._0_2_ * -100;
  auVar24._6_4_ = (uint)(ushort)((short)((ulonglong)lVar33 >> 0x20) + auVar42._8_2_ * -100) << 0x10;
  auVar24._10_4_ = (uint)(ushort)((short)lVar33 + auVar42._12_2_ * -100) << 0x10;
  auVar24._14_2_ = 0;
  auVar42 = auVar24 << 0x10 | auVar42;
  auVar39 = pmulhuw(auVar42,_DAT_18028a550);
  auVar42 = psllw(auVar42,8);
  uVar41 = auVar42._0_2_ + auVar39._0_2_ * -0x9ff;
  uVar44 = auVar42._2_2_ + auVar39._2_2_ * -0x9ff;
  uVar45 = auVar42._4_2_ + auVar39._4_2_ * -0x9ff;
  uVar46 = auVar42._6_2_ + auVar39._6_2_ * -0x9ff;
  uVar47 = auVar42._8_2_ + auVar39._8_2_ * -0x9ff;
  uVar48 = auVar42._10_2_ + auVar39._10_2_ * -0x9ff;
  uVar49 = auVar42._12_2_ + auVar39._12_2_ * -0x9ff;
  uVar50 = auVar42._14_2_ + auVar39._14_2_ * -0x9ff;
  auVar55[0] = -('\0' < (char)uVar41);
  auVar55[1] = -('\0' < (char)(uVar41 >> 8));
  auVar55[2] = -('\0' < (char)uVar44);
  auVar55[3] = -('\0' < (char)(uVar44 >> 8));
  auVar55[4] = -('\0' < (char)uVar45);
  auVar55[5] = -('\0' < (char)(uVar45 >> 8));
  auVar55[6] = -('\0' < (char)uVar46);
  auVar55[7] = -('\0' < (char)(uVar46 >> 8));
  auVar55[8] = -('\0' < (char)uVar47);
  auVar55[9] = -('\0' < (char)(uVar47 >> 8));
  auVar55[10] = -('\0' < (char)uVar48);
  auVar55[0xb] = -('\0' < (char)(uVar48 >> 8));
  auVar55[0xc] = -('\0' < (char)uVar49);
  auVar55[0xd] = -('\0' < (char)(uVar49 >> 8));
  auVar55[0xe] = -('\0' < (char)uVar50);
  auVar55[0xf] = -('\0' < (char)(uVar50 >> 8));
  uVar16 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
  uVar27 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> uVar27 == 0; uVar27 = uVar27 - 1) {
    }
  }
  puVar1 = (ushort *)((longlong)_Dst + uVar32);
  *puVar1 = uVar41 | 0x3030;
  puVar1[1] = uVar44 | 0x3030;
  puVar1[2] = uVar45 | 0x3030;
  puVar1[3] = uVar46 | 0x3030;
  puVar1[4] = uVar47 | 0x3030;
  puVar1[5] = uVar48 | 0x3030;
  puVar1[6] = uVar49 | 0x3030;
  puVar1[7] = uVar50 | 0x3030;
  uVar31 = 0x11;
  if (!bVar37) {
    uVar31 = (ulonglong)((uVar27 ^ 0xffffffe0) + 0x21);
  }
  *(char *)((longlong)_Dst + uVar32 + 0x10) = (char)uVar25 + '0';
  lVar33 = uVar31 + uVar32;
  uVar25 = lVar33 - 1;
  if (uVar35 + bVar2 + 0x14 < 0x15) {
    _Src = (undefined1 *)((longlong)_Dst + 1);
    if ((int)uVar28 < (int)lVar33 + -2) {
      if ((int)uVar28 < 0) {
        puVar29 = (undefined1 *)((longlong)_Dst + (ulonglong)(1 - uVar28));
        memmove(puVar29,_Src,uVar25);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)_Src >> 8),0x30),(ulonglong)(1 - uVar28));
        *(undefined1 *)((longlong)_Dst + 1) = 0x2e;
        puVar29 = puVar29 + uVar25;
      }
      else {
        memmove(_Dst,_Src,(ulonglong)uVar28 + 1);
        *(undefined1 *)((longlong)_Dst + (ulonglong)uVar28 + 1) = 0x2e;
        puVar29 = (undefined1 *)((longlong)_Dst + uVar31 + uVar32);
      }
    }
    else {
      memmove(_Dst,_Src,uVar25);
      lVar33 = (longlong)(int)uVar28;
      memset((undefined1 *)((longlong)_Dst + uVar25),
             (int)CONCAT71((int7)((ulonglong)_Src >> 8),0x30),(lVar33 + 3) - uVar25);
      *(undefined1 *)((longlong)_Dst + lVar33 + 1) = 0x2e;
      puVar29 = (undefined1 *)((longlong)_Dst + lVar33 + 3);
    }
  }
  else {
    *(undefined1 *)_Dst = *(undefined1 *)((longlong)_Dst + 1);
    *(undefined1 *)((longlong)_Dst + 1) = 0x2e;
    puVar30 = (undefined4 *)((longlong)_Dst + (lVar33 - (ulonglong)(uVar25 < 2)));
    uVar25 = *(ulonglong *)(&DAT_18028b7d0 + (longlong)(int)uVar28 * 8);
    *puVar30 = (int)uVar25;
    *(char *)(puVar30 + 1) = (char)(uVar25 >> 0x20);
    puVar29 = (undefined1 *)((longlong)puVar30 + (uVar25 >> 0x30));
  }
                    /* WARNING: Read-only address (ram,0x00018028a540) is written */
                    /* WARNING: Read-only address (ram,0x00018028a550) is written */
  return puVar29;
}


