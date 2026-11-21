/* FUN_1801f1e40 @ 1801f1e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801f1e40(ulonglong param_1,ulonglong param_2)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  longlong lVar21;
  undefined1 auVar20 [16];
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar43;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  longlong lVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  uVar16 = param_1 + 7 & 0xfffffffffffffff8;
  uVar15 = uVar16 - param_1;
  uVar14 = param_2 - uVar15;
  if ((param_2 < uVar15) || (uVar14 < 8)) {
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      if (3 < param_2) {
        uVar15 = param_2 & 0xfffffffffffffffc;
        lVar9 = 0;
        lVar21 = 0;
        uVar14 = 0;
        lVar22 = 0;
        lVar23 = 0;
        do {
          uVar1 = *(undefined2 *)(param_1 + 2 + uVar14);
          auVar62[0] = -(-0x41 < (char)*(undefined2 *)(param_1 + uVar14));
          cVar43 = -(-0x41 < (char)((ushort)*(undefined2 *)(param_1 + uVar14) >> 8));
          auVar41._9_7_ = 0;
          auVar41._0_9_ = SUB169(ZEXT816(0),7);
          auVar32._10_6_ = 0;
          auVar32._0_10_ = SUB1610(auVar41 << 0x38,6);
          auVar33._11_5_ = 0;
          auVar33._0_11_ = SUB1611(auVar32 << 0x30,5);
          auVar62._4_12_ = SUB1612(auVar33 << 0x28,4);
          auVar62[3] = cVar43;
          auVar62[2] = cVar43;
          auVar62[1] = auVar62[0];
          auVar33 = pshuflw(auVar62,auVar62,0xd4);
          auVar34._12_4_ = auVar33._12_4_;
          auVar34._0_8_ = auVar33._0_8_;
          auVar34._8_4_ = auVar33._4_4_;
          auVar34 = auVar34 & _DAT_18025f330;
          lVar9 = lVar9 + auVar34._0_8_;
          lVar21 = lVar21 + auVar34._8_8_;
          auVar44[0] = -(-0x41 < (char)uVar1);
          cVar43 = -(-0x41 < (char)((ushort)uVar1 >> 8));
          auVar59._9_7_ = 0;
          auVar59._0_9_ = SUB169(ZEXT816(0),7);
          auVar56._10_6_ = 0;
          auVar56._0_10_ = SUB1610(auVar59 << 0x38,6);
          auVar48._11_5_ = 0;
          auVar48._0_11_ = SUB1611(auVar56 << 0x30,5);
          auVar44._4_12_ = SUB1612(auVar48 << 0x28,4);
          auVar44[3] = cVar43;
          auVar44[2] = cVar43;
          auVar44[1] = auVar44[0];
          auVar33 = pshuflw(auVar34,auVar44,0xd4);
          auVar35._12_4_ = auVar33._12_4_;
          auVar35._0_8_ = auVar33._0_8_;
          auVar35._8_4_ = auVar33._4_4_;
          lVar22 = lVar22 + SUB168(auVar35 & _DAT_18025f330,0);
          lVar23 = lVar23 + SUB168(auVar35 & _DAT_18025f330,8);
          uVar14 = uVar14 + 4;
        } while (uVar15 != uVar14);
        lVar9 = lVar23 + lVar21 + lVar22 + lVar9;
        goto LAB_1801f2427;
      }
      uVar15 = 0;
      lVar9 = 0;
      do {
        lVar9 = lVar9 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar15));
        uVar15 = uVar15 + 1;
LAB_1801f2427:
      } while (param_2 != uVar15);
    }
  }
  else {
    uVar8 = (uint)uVar14 & 7;
    if (uVar16 == param_1) {
      lVar9 = 0;
    }
    else {
      if (3 < uVar15) {
        uVar17 = (ulonglong)((uint)uVar15 & 4);
        lVar9 = 0;
        lVar21 = 0;
        uVar16 = 0;
        lVar22 = 0;
        lVar23 = 0;
        do {
          uVar1 = *(undefined2 *)(param_1 + 2 + uVar16);
          auVar36[0] = -(-0x41 < (char)*(undefined2 *)(param_1 + uVar16));
          cVar43 = -(-0x41 < (char)((ushort)*(undefined2 *)(param_1 + uVar16) >> 8));
          auVar4._9_7_ = 0;
          auVar4._0_9_ = SUB169(ZEXT816(0),7);
          auVar3._10_6_ = 0;
          auVar3._0_10_ = SUB1610(auVar4 << 0x38,6);
          auVar2._11_5_ = 0;
          auVar2._0_11_ = SUB1611(auVar3 << 0x30,5);
          auVar36._4_12_ = SUB1612(auVar2 << 0x28,4);
          auVar36[3] = cVar43;
          auVar36[2] = cVar43;
          auVar36[1] = auVar36[0];
          auVar33 = pshuflw(auVar36,auVar36,0xd4);
          auVar37._12_4_ = auVar33._12_4_;
          auVar37._0_8_ = auVar33._0_8_;
          auVar37._8_4_ = auVar33._4_4_;
          auVar37 = auVar37 & _DAT_18025f330;
          lVar9 = lVar9 + auVar37._0_8_;
          lVar21 = lVar21 + auVar37._8_8_;
          auVar45[0] = -(-0x41 < (char)uVar1);
          cVar43 = -(-0x41 < (char)((ushort)uVar1 >> 8));
          auVar7._9_7_ = 0;
          auVar7._0_9_ = SUB169(ZEXT816(0),7);
          auVar6._10_6_ = 0;
          auVar6._0_10_ = SUB1610(auVar7 << 0x38,6);
          auVar5._11_5_ = 0;
          auVar5._0_11_ = SUB1611(auVar6 << 0x30,5);
          auVar45._4_12_ = SUB1612(auVar5 << 0x28,4);
          auVar45[3] = cVar43;
          auVar45[2] = cVar43;
          auVar45[1] = auVar45[0];
          auVar33 = pshuflw(auVar37,auVar45,0xd4);
          auVar38._12_4_ = auVar33._12_4_;
          auVar38._0_8_ = auVar33._0_8_;
          auVar38._8_4_ = auVar33._4_4_;
          lVar22 = lVar22 + SUB168(auVar38 & _DAT_18025f330,0);
          lVar23 = lVar23 + SUB168(auVar38 & _DAT_18025f330,8);
          uVar16 = uVar16 + 4;
        } while (uVar17 != uVar16);
        lVar9 = lVar23 + lVar21 + lVar22 + lVar9;
        goto LAB_1801f2008;
      }
      uVar17 = 0;
      lVar9 = 0;
      do {
        lVar9 = lVar9 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar17));
        uVar17 = uVar17 + 1;
LAB_1801f2008:
      } while (uVar15 != uVar17);
    }
    pauVar11 = (undefined1 (*) [16])(param_1 + uVar15);
    if ((uVar14 & 7) == 0) {
      uVar15 = 0;
    }
    else {
      uVar16 = uVar14 & 0x7ffffffffffffff8;
      uVar15 = (ulonglong)(-0x41 < (char)(*pauVar11)[uVar16]);
      if (((((uVar8 != 1) && (uVar15 = uVar15 + (-0x41 < (char)(*pauVar11)[uVar16 + 1]), uVar8 != 2)
            ) && (uVar15 = uVar15 + (-0x41 < (char)(*pauVar11)[uVar16 + 2]), uVar8 != 3)) &&
          ((uVar15 = uVar15 + (-0x41 < (char)(*pauVar11)[uVar16 + 3]), uVar8 != 4 &&
           (uVar15 = uVar15 + (-0x41 < (char)(*pauVar11)[uVar16 + 4]), uVar8 != 5)))) &&
         (uVar15 = uVar15 + (-0x41 < (char)(*pauVar11)[uVar16 + 5]), uVar8 != 6)) {
        uVar15 = uVar15 + (-0x41 < (char)(*pauVar11)[uVar16 + 6]);
      }
    }
    lVar9 = uVar15 + lVar9;
    uVar14 = uVar14 >> 3;
    auVar20._8_4_ = 0xffffffff;
    auVar20._0_8_ = 0xffffffffffffffff;
    auVar20._12_4_ = 0xffffffff;
    do {
      pauVar12 = pauVar11;
      if (uVar14 == 0) {
        return lVar9;
      }
      uVar15 = 0xc0;
      if (uVar14 < 0xc0) {
        uVar15 = uVar14;
      }
      uVar8 = (uint)uVar15;
      uVar10 = uVar8 * 8;
      if ((uVar10 & 0x7e0) == 0) {
        uVar16 = 0;
      }
      else {
        pauVar11 = pauVar12 + 2;
        uVar16 = (ulonglong)uVar10 - 0x20;
        if (uVar16 < 0x60) {
          uVar16 = 0;
          pauVar18 = pauVar12;
        }
        else {
          uVar19 = (uVar16 >> 5) + 1;
          uVar17 = uVar19 & 0xfffffffffffffffc;
          pauVar11 = pauVar11 + uVar17 * 2;
          pauVar18 = pauVar12 + uVar17 * 2;
          pauVar13 = pauVar12 + 4;
          lVar21 = 0;
          lVar22 = 0;
          lVar23 = 0;
          lVar52 = 0;
          uVar16 = uVar17;
          do {
            auVar28._8_8_ = *(ulonglong *)pauVar13[-2];
            auVar28._0_8_ = *(ulonglong *)pauVar13[-4];
            auVar53._0_8_ = SUB168(auVar28 ^ auVar20,0) >> 7;
            auVar53._8_8_ = SUB168(auVar28 ^ auVar20,8) >> 7;
            auVar29._0_8_ = *(ulonglong *)pauVar13[-4] >> 6;
            auVar29._8_8_ = *(ulonglong *)pauVar13[-2] >> 6;
            auVar32 = (auVar29 | auVar53) & _DAT_18020d5a0;
            auVar24._8_8_ = *(ulonglong *)(pauVar13[-2] + 8);
            auVar24._0_8_ = *(ulonglong *)(pauVar13[-4] + 8);
            auVar46._8_8_ = *(ulonglong *)pauVar13[-1];
            auVar46._0_8_ = *(ulonglong *)pauVar13[-3];
            auVar39._8_8_ = *(ulonglong *)(pauVar13[-1] + 8);
            auVar39._0_8_ = *(ulonglong *)(pauVar13[-3] + 8);
            auVar57._8_8_ = *(ulonglong *)pauVar13[2];
            auVar57._0_8_ = *(ulonglong *)*pauVar13;
            auVar65._0_8_ = SUB168(auVar57 ^ auVar20,0) >> 7;
            auVar65._8_8_ = SUB168(auVar57 ^ auVar20,8) >> 7;
            auVar58._0_8_ = *(ulonglong *)*pauVar13 >> 6;
            auVar58._8_8_ = *(ulonglong *)pauVar13[2] >> 6;
            auVar59 = (auVar58 | auVar65) & _DAT_18020d5a0;
            auVar60._8_8_ = *(ulonglong *)(pauVar13[2] + 8);
            auVar60._0_8_ = *(ulonglong *)(*pauVar13 + 8);
            auVar54._8_8_ = *(ulonglong *)pauVar13[3];
            auVar54._0_8_ = *(ulonglong *)pauVar13[1];
            auVar50._8_8_ = *(ulonglong *)(pauVar13[3] + 8);
            auVar50._0_8_ = *(ulonglong *)(pauVar13[1] + 8);
            auVar63._0_8_ = SUB168(auVar24 ^ auVar20,0) >> 7;
            auVar63._8_8_ = SUB168(auVar24 ^ auVar20,8) >> 7;
            auVar66._0_8_ = SUB168(auVar60 ^ auVar20,0) >> 7;
            auVar66._8_8_ = SUB168(auVar60 ^ auVar20,8) >> 7;
            auVar25._0_8_ = *(ulonglong *)(pauVar13[-4] + 8) >> 6;
            auVar25._8_8_ = *(ulonglong *)(pauVar13[-2] + 8) >> 6;
            auVar61._0_8_ = *(ulonglong *)(*pauVar13 + 8) >> 6;
            auVar61._8_8_ = *(ulonglong *)(pauVar13[2] + 8) >> 6;
            auVar33 = (auVar25 | auVar63) & _DAT_18020d5a0;
            auVar62 = (auVar61 | auVar66) & _DAT_18020d5a0;
            auVar64._0_8_ = SUB168(auVar46 ^ auVar20,0) >> 7;
            auVar64._8_8_ = SUB168(auVar46 ^ auVar20,8) >> 7;
            auVar67._0_8_ = SUB168(auVar54 ^ auVar20,0) >> 7;
            auVar67._8_8_ = SUB168(auVar54 ^ auVar20,8) >> 7;
            auVar47._0_8_ = *(ulonglong *)pauVar13[-3] >> 6;
            auVar47._8_8_ = *(ulonglong *)pauVar13[-1] >> 6;
            auVar55._0_8_ = *(ulonglong *)pauVar13[1] >> 6;
            auVar55._8_8_ = *(ulonglong *)pauVar13[3] >> 6;
            auVar48 = (auVar47 | auVar64) & _DAT_18020d5a0;
            auVar56 = (auVar55 | auVar67) & _DAT_18020d5a0;
            auVar26._0_8_ = SUB168(auVar39 ^ auVar20,0) >> 7;
            auVar26._8_8_ = SUB168(auVar39 ^ auVar20,8) >> 7;
            auVar30._0_8_ = SUB168(auVar50 ^ auVar20,0) >> 7;
            auVar30._8_8_ = SUB168(auVar50 ^ auVar20,8) >> 7;
            auVar40._0_8_ = *(ulonglong *)(pauVar13[-3] + 8) >> 6;
            auVar40._8_8_ = *(ulonglong *)(pauVar13[-1] + 8) >> 6;
            auVar51._0_8_ = *(ulonglong *)(pauVar13[1] + 8) >> 6;
            auVar51._8_8_ = *(ulonglong *)(pauVar13[3] + 8) >> 6;
            auVar41 = (auVar40 | auVar26) & _DAT_18020d5a0;
            lVar21 = auVar41._0_8_ + auVar48._0_8_ + auVar33._0_8_ + auVar32._0_8_ + lVar21;
            lVar22 = auVar41._8_8_ + auVar48._8_8_ + auVar33._8_8_ + auVar32._8_8_ + lVar22;
            auVar33 = (auVar51 | auVar30) & _DAT_18020d5a0;
            lVar23 = auVar33._0_8_ + auVar56._0_8_ + auVar62._0_8_ + auVar59._0_8_ + lVar23;
            lVar52 = auVar33._8_8_ + auVar56._8_8_ + auVar62._8_8_ + auVar59._8_8_ + lVar52;
            pauVar13 = pauVar13 + 8;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
          uVar16 = lVar52 + lVar22 + lVar23 + lVar21;
          if (uVar19 == uVar17) goto LAB_1801f20e2;
        }
        do {
          pauVar13 = pauVar11;
          auVar33 = *pauVar18;
          auVar32 = pauVar18[1];
          auVar49._0_8_ = SUB168(auVar32 ^ auVar20,0) >> 7;
          auVar49._8_8_ = SUB168(auVar32 ^ auVar20,8) >> 7;
          auVar42._0_8_ = SUB168(auVar33 ^ auVar20,0) >> 7;
          auVar42._8_8_ = SUB168(auVar33 ^ auVar20,8) >> 7;
          auVar31._0_8_ = auVar32._0_8_ >> 6;
          auVar31._8_8_ = auVar32._8_8_ >> 6;
          auVar27._0_8_ = auVar33._0_8_ >> 6;
          auVar27._8_8_ = auVar33._8_8_ >> 6;
          auVar32 = (auVar31 | auVar49) & _DAT_18020d5a0;
          auVar33 = (auVar27 | auVar42) & _DAT_18020d5a0;
          uVar16 = uVar16 + auVar33._8_8_ + auVar32._8_8_ + auVar33._0_8_ + auVar32._0_8_;
          pauVar11 = pauVar13 + 2;
          pauVar18 = pauVar13;
        } while (pauVar13 != (undefined1 (*) [16])(*pauVar12 + (uVar10 & 0x7e0)));
      }
LAB_1801f20e2:
      uVar14 = uVar14 - uVar15;
      lVar9 = (((uVar16 >> 8 & 0xff00ff00ff00ff) + (uVar16 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar9;
      pauVar11 = (undefined1 (*) [16])(*pauVar12 + uVar10);
    } while ((uVar15 & 3) == 0);
    uVar15 = (ulonglong)(uVar8 & 0xfc);
    uVar14 = (*(ulonglong *)(*pauVar12 + uVar15 * 8) >> 6 |
             ~*(ulonglong *)(*pauVar12 + uVar15 * 8) >> 7) & 0x101010101010101;
    if (((uVar8 & 3) != 1) &&
       (uVar14 = uVar14 + ((*(ulonglong *)(*pauVar12 + uVar15 * 8 + 8) >> 6 |
                           ~*(ulonglong *)(*pauVar12 + uVar15 * 8 + 8) >> 7) & 0x101010101010101),
       (uVar8 & 3) != 2)) {
      uVar14 = uVar14 + ((*(ulonglong *)(pauVar12[1] + uVar15 * 8) >> 6 |
                         ~*(ulonglong *)(pauVar12[1] + uVar15 * 8) >> 7) & 0x101010101010101);
    }
    lVar9 = (((uVar14 >> 8 & 0x700ff00ff00ff) + (uVar14 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar9;
  }
  return lVar9;
}


