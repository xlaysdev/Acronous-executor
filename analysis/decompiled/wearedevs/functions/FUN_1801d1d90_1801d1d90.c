/* FUN_1801d1d90 @ 1801d1d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801d1d90(char param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 (*pauVar35) [32];
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined1 (*pauVar40) [32];
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar46;
  longlong lVar47;
  undefined1 auVar44 [32];
  longlong lVar48;
  undefined1 auVar45 [64];
  undefined1 auVar49 [16];
  longlong lVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  longlong lVar55;
  longlong lVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  longlong lVar66;
  longlong lVar71;
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  longlong lVar72;
  longlong lVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  longlong lVar76;
  longlong lVar77;
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  
  if (param_3 <= param_2) {
    return 0;
  }
  auVar75[1] = param_1;
  auVar75[0] = param_1;
  auVar75[2] = param_1;
  auVar75[3] = param_1;
  auVar75[4] = param_1;
  auVar75[5] = param_1;
  auVar75[6] = param_1;
  auVar75[7] = param_1;
  auVar75[8] = param_1;
  auVar75[9] = param_1;
  auVar75[10] = param_1;
  auVar75[0xb] = param_1;
  auVar75[0xc] = param_1;
  auVar75[0xd] = param_1;
  auVar75[0xe] = param_1;
  auVar75[0xf] = param_1;
  auVar44[0x10] = param_1;
  auVar44._0_16_ = auVar75;
  auVar44[0x11] = param_1;
  auVar44[0x12] = param_1;
  auVar44[0x13] = param_1;
  auVar44[0x14] = param_1;
  auVar44[0x15] = param_1;
  auVar44[0x16] = param_1;
  auVar44[0x17] = param_1;
  auVar44[0x18] = param_1;
  auVar44[0x19] = param_1;
  auVar44[0x1a] = param_1;
  auVar44[0x1b] = param_1;
  auVar44[0x1c] = param_1;
  auVar44[0x1d] = param_1;
  auVar44[0x1e] = param_1;
  auVar44[0x1f] = param_1;
  uVar42 = (longlong)param_3 - (longlong)param_2;
  if (uVar42 < 0x20) {
    if (uVar42 < 0x10) {
      if (uVar42 < 4) {
        lVar37 = 0;
        pauVar40 = param_2;
      }
      else {
        uVar43 = (ulonglong)((uint)uVar42 & 0xc);
        pauVar40 = (undefined1 (*) [32])(*param_2 + uVar43);
        auVar49[1] = param_1;
        auVar49[0] = param_1;
        auVar49[2] = param_1;
        auVar49[3] = param_1;
        auVar49[4] = param_1;
        auVar49[5] = param_1;
        auVar49[6] = param_1;
        auVar49[7] = param_1;
        auVar49[8] = param_1;
        auVar49[9] = param_1;
        auVar49[10] = param_1;
        auVar49[0xb] = param_1;
        auVar49[0xc] = param_1;
        auVar49[0xd] = param_1;
        auVar49[0xe] = param_1;
        auVar49[0xf] = param_1;
        auVar45 = ZEXT1664((undefined1  [16])0x0);
        uVar36 = 0;
        auVar61._8_8_ = 1;
        auVar61._0_8_ = 1;
        auVar61._16_8_ = 1;
        auVar61._24_8_ = 1;
        do {
          auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar36)),auVar49);
          auVar44 = vpmovzxbq_avx2(auVar75);
          auVar44 = vpand_avx2(auVar44,auVar61);
          auVar3._0_8_ = auVar45._0_8_ + auVar44._0_8_;
          auVar3._8_8_ = auVar45._8_8_ + auVar44._8_8_;
          auVar11._16_8_ = auVar45._16_8_ + auVar44._16_8_;
          auVar11._0_16_ = auVar3;
          auVar11._24_8_ = auVar45._24_8_ + auVar44._24_8_;
          auVar45 = ZEXT3264(auVar11);
          uVar36 = uVar36 + 4;
        } while (uVar43 != uVar36);
        auVar75 = vpaddq_avx(auVar3,auVar11._16_16_);
        auVar57 = vpshufd_avx(auVar75,0xee);
        auVar75 = vpaddq_avx(auVar75,auVar57);
        lVar37 = auVar75._0_8_;
        if (uVar42 == uVar43) {
          return lVar37;
        }
      }
      do {
        lVar37 = lVar37 + (ulonglong)((*pauVar40)[0] == param_1);
        pauVar40 = (undefined1 (*) [32])(*pauVar40 + 1);
      } while (pauVar40 != param_3);
      return lVar37;
    }
    pauVar40 = (undefined1 (*) [32])(((ulonglong)param_2 & 0xfffffffffffffff0) + 0x10);
    pauVar35 = (undefined1 (*) [32])(*param_2 + 1);
    if ((undefined1 (*) [32])(*param_2 + 1) < pauVar40) {
      pauVar35 = pauVar40;
    }
    uVar42 = (longlong)pauVar35 - (longlong)param_2;
    if (uVar42 < 4) {
      uVar41 = 0;
LAB_1801d1e3b:
      pauVar35 = param_2;
LAB_1801d22d0:
      do {
        uVar41 = uVar41 + ((*pauVar35)[0] == param_1);
        pauVar35 = (undefined1 (*) [32])(*pauVar35 + 1);
      } while (pauVar35 < pauVar40);
    }
    else if (uVar42 < 0x10) {
      uVar43 = 0;
      uVar41 = 0;
LAB_1801d226d:
      uVar36 = uVar42 & 0xfffffffffffffffc;
      pauVar35 = (undefined1 (*) [32])(*param_2 + uVar36);
      auVar45 = ZEXT864(uVar41);
      auVar60[1] = param_1;
      auVar60[0] = param_1;
      auVar60[2] = param_1;
      auVar60[3] = param_1;
      auVar60[4] = param_1;
      auVar60[5] = param_1;
      auVar60[6] = param_1;
      auVar60[7] = param_1;
      auVar60[8] = param_1;
      auVar60[9] = param_1;
      auVar60[10] = param_1;
      auVar60[0xb] = param_1;
      auVar60[0xc] = param_1;
      auVar60[0xd] = param_1;
      auVar60[0xe] = param_1;
      auVar60[0xf] = param_1;
      auVar70._8_8_ = 1;
      auVar70._0_8_ = 1;
      auVar70._16_8_ = 1;
      auVar70._24_8_ = 1;
      do {
        auVar57 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar43)),auVar60);
        auVar44 = vpmovzxbq_avx2(auVar57);
        auVar44 = vpand_avx2(auVar44,auVar70);
        auVar6._0_8_ = auVar45._0_8_ + auVar44._0_8_;
        auVar6._8_8_ = auVar45._8_8_ + auVar44._8_8_;
        auVar14._16_8_ = auVar45._16_8_ + auVar44._16_8_;
        auVar14._0_16_ = auVar6;
        auVar14._24_8_ = auVar45._24_8_ + auVar44._24_8_;
        auVar45 = ZEXT3264(auVar14);
        uVar43 = uVar43 + 4;
      } while (uVar36 != uVar43);
      auVar57 = vpaddq_avx(auVar6,auVar14._16_16_);
      auVar74 = vpshufd_avx(auVar57,0xee);
      auVar57 = vpaddq_avx(auVar57,auVar74);
      uVar41 = auVar57._0_8_;
      if (uVar42 != uVar36) goto LAB_1801d22d0;
    }
    else {
      uVar43 = uVar42 & 0xfffffffffffffff0;
      auVar59[1] = param_1;
      auVar59[0] = param_1;
      auVar59[2] = param_1;
      auVar59[3] = param_1;
      auVar59[4] = param_1;
      auVar59[5] = param_1;
      auVar59[6] = param_1;
      auVar59[7] = param_1;
      auVar59[8] = param_1;
      auVar59[9] = param_1;
      auVar59[10] = param_1;
      auVar59[0xb] = param_1;
      auVar59[0xc] = param_1;
      auVar59[0xd] = param_1;
      auVar59[0xe] = param_1;
      auVar59[0xf] = param_1;
      lVar37 = 0;
      lVar54 = 0;
      lVar55 = 0;
      lVar56 = 0;
      auVar69._8_8_ = 1;
      auVar69._0_8_ = 1;
      auVar69._16_8_ = 1;
      auVar69._24_8_ = 1;
      uVar36 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      lVar66 = 0;
      lVar46 = 0;
      lVar78 = 0;
      lVar76 = 0;
      lVar73 = 0;
      lVar71 = 0;
      lVar47 = 0;
      lVar79 = 0;
      do {
        auVar57 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar36)),auVar59);
        auVar44 = vpmovzxbq_avx2(auVar57);
        auVar44 = vpand_avx2(auVar44,auVar69);
        lVar37 = lVar37 + auVar44._0_8_;
        lVar54 = lVar54 + auVar44._8_8_;
        lVar55 = lVar55 + auVar44._16_8_;
        lVar56 = lVar56 + auVar44._24_8_;
        auVar57 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar36 + 4)),auVar59);
        auVar44 = vpmovzxbq_avx2(auVar57);
        auVar44 = vpand_avx2(auVar44,auVar69);
        lVar48 = auVar45._0_8_ + auVar44._0_8_;
        lVar72 = auVar45._8_8_ + auVar44._8_8_;
        lVar77 = auVar45._16_8_ + auVar44._16_8_;
        lVar80 = auVar45._24_8_ + auVar44._24_8_;
        auVar45 = ZEXT3264(CONCAT824(lVar80,CONCAT816(lVar77,CONCAT88(lVar72,lVar48))));
        auVar57 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar36 + 8)),auVar59);
        auVar44 = vpmovzxbq_avx2(auVar57);
        auVar44 = vpand_avx2(auVar44,auVar69);
        lVar66 = lVar66 + auVar44._0_8_;
        lVar46 = lVar46 + auVar44._8_8_;
        lVar78 = lVar78 + auVar44._16_8_;
        lVar76 = lVar76 + auVar44._24_8_;
        auVar57 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar36 + 0xc)),auVar59);
        auVar44 = vpmovzxbq_avx2(auVar57);
        auVar44 = vpand_avx2(auVar44,auVar69);
        lVar73 = lVar73 + auVar44._0_8_;
        lVar71 = lVar71 + auVar44._8_8_;
        lVar47 = lVar47 + auVar44._16_8_;
        lVar79 = lVar79 + auVar44._24_8_;
        uVar36 = uVar36 + 0x10;
      } while (uVar43 != uVar36);
      auVar5._0_8_ = lVar73 + lVar66 + lVar48 + lVar37;
      auVar5._8_8_ = lVar71 + lVar46 + lVar72 + lVar54;
      auVar13._16_8_ = lVar47 + lVar78 + lVar77 + lVar55;
      auVar13._0_16_ = auVar5;
      auVar13._24_8_ = lVar79 + lVar76 + lVar80 + lVar56;
      auVar57 = vpaddq_avx(auVar5,auVar13._16_16_);
      auVar74 = vpshufd_avx(auVar57,0xee);
      auVar57 = vpaddq_avx(auVar57,auVar74);
      uVar41 = auVar57._0_8_;
      if (uVar42 != uVar43) {
        if ((uVar42 & 0xc) == 0) {
          param_2 = (undefined1 (*) [32])(*param_2 + uVar43);
          goto LAB_1801d1e3b;
        }
        goto LAB_1801d226d;
      }
    }
    for (; pauVar40 <= (undefined1 (*) [32])(param_3[-1] + 0x10);
        pauVar40 = (undefined1 (*) [32])(*pauVar40 + 0x10)) {
      auVar57 = vpcmpeqb_avx(auVar75,*(undefined1 (*) [16])*pauVar40);
      uVar2 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar57[0xf] >> 7) << 0xf;
      uVar38 = (uint)uVar2 - (uVar2 >> 1 & 0x5555);
      uVar38 = (uVar38 >> 2 & 0x3333) + (uVar38 & 0x3333);
      uVar38 = (uVar38 >> 4) + uVar38 & 0xf0f;
      uVar41 = uVar41 + ((uVar38 >> 8) + uVar38 & 0xff);
    }
    if (pauVar40 < param_3) {
      uVar42 = (longlong)param_3 - (longlong)pauVar40;
      if (uVar42 < 4) {
        uVar36 = 0;
        pauVar35 = pauVar40;
      }
      else {
        if (uVar42 < 0x10) {
          uVar43 = 0;
          uVar36 = 0;
        }
        else {
          uVar43 = uVar42 & 0xfffffffffffffff0;
          auVar52[1] = param_1;
          auVar52[0] = param_1;
          auVar52[2] = param_1;
          auVar52[3] = param_1;
          auVar52[4] = param_1;
          auVar52[5] = param_1;
          auVar52[6] = param_1;
          auVar52[7] = param_1;
          auVar52[8] = param_1;
          auVar52[9] = param_1;
          auVar52[10] = param_1;
          auVar52[0xb] = param_1;
          auVar52[0xc] = param_1;
          auVar52[0xd] = param_1;
          auVar52[0xe] = param_1;
          auVar52[0xf] = param_1;
          lVar37 = 0;
          lVar46 = 0;
          lVar47 = 0;
          lVar48 = 0;
          auVar64._8_8_ = 1;
          auVar64._0_8_ = 1;
          auVar64._16_8_ = 1;
          auVar64._24_8_ = 1;
          uVar36 = 0;
          lVar66 = 0;
          lVar71 = 0;
          lVar56 = 0;
          lVar72 = 0;
          lVar73 = 0;
          lVar55 = 0;
          lVar76 = 0;
          lVar77 = 0;
          lVar54 = 0;
          lVar78 = 0;
          lVar79 = 0;
          lVar80 = 0;
          do {
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36)),auVar52);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar64);
            lVar37 = lVar37 + auVar44._0_8_;
            lVar46 = lVar46 + auVar44._8_8_;
            lVar47 = lVar47 + auVar44._16_8_;
            lVar48 = lVar48 + auVar44._24_8_;
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36 + 4)),auVar52);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar64);
            lVar66 = lVar66 + auVar44._0_8_;
            lVar71 = lVar71 + auVar44._8_8_;
            lVar56 = lVar56 + auVar44._16_8_;
            lVar72 = lVar72 + auVar44._24_8_;
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36 + 8)),auVar52);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar64);
            lVar73 = lVar73 + auVar44._0_8_;
            lVar55 = lVar55 + auVar44._8_8_;
            lVar76 = lVar76 + auVar44._16_8_;
            lVar77 = lVar77 + auVar44._24_8_;
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36 + 0xc)),auVar52);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar64);
            lVar54 = lVar54 + auVar44._0_8_;
            lVar78 = lVar78 + auVar44._8_8_;
            lVar79 = lVar79 + auVar44._16_8_;
            lVar80 = lVar80 + auVar44._24_8_;
            uVar36 = uVar36 + 0x10;
          } while (uVar43 != uVar36);
          auVar9._0_8_ = lVar54 + lVar73 + lVar66 + lVar37;
          auVar9._8_8_ = lVar78 + lVar55 + lVar71 + lVar46;
          auVar17._16_8_ = lVar79 + lVar76 + lVar56 + lVar47;
          auVar17._0_16_ = auVar9;
          auVar17._24_8_ = lVar80 + lVar77 + lVar72 + lVar48;
          auVar75 = vpaddq_avx(auVar9,auVar17._16_16_);
          auVar57 = vpshufd_avx(auVar75,0xee);
          auVar75 = vpaddq_avx(auVar75,auVar57);
          uVar36 = auVar75._0_8_;
          if (uVar42 == uVar43) goto LAB_1801d2642;
          if ((uVar42 & 0xc) == 0) {
            pauVar35 = (undefined1 (*) [32])(*pauVar40 + uVar43);
            goto LAB_1801d2630;
          }
        }
        uVar39 = uVar42 & 0xfffffffffffffffc;
        pauVar35 = (undefined1 (*) [32])(*pauVar40 + uVar39);
        auVar45 = ZEXT864(uVar36);
        auVar53[1] = param_1;
        auVar53[0] = param_1;
        auVar53[2] = param_1;
        auVar53[3] = param_1;
        auVar53[4] = param_1;
        auVar53[5] = param_1;
        auVar53[6] = param_1;
        auVar53[7] = param_1;
        auVar53[8] = param_1;
        auVar53[9] = param_1;
        auVar53[10] = param_1;
        auVar53[0xb] = param_1;
        auVar53[0xc] = param_1;
        auVar53[0xd] = param_1;
        auVar53[0xe] = param_1;
        auVar53[0xf] = param_1;
        auVar65._8_8_ = 1;
        auVar65._0_8_ = 1;
        auVar65._16_8_ = 1;
        auVar65._24_8_ = 1;
        do {
          auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar43)),auVar53);
          auVar44 = vpmovzxbq_avx2(auVar75);
          auVar44 = vpand_avx2(auVar44,auVar65);
          auVar10._0_8_ = auVar45._0_8_ + auVar44._0_8_;
          auVar10._8_8_ = auVar45._8_8_ + auVar44._8_8_;
          auVar18._16_8_ = auVar45._16_8_ + auVar44._16_8_;
          auVar18._0_16_ = auVar10;
          auVar18._24_8_ = auVar45._24_8_ + auVar44._24_8_;
          auVar45 = ZEXT3264(auVar18);
          uVar43 = uVar43 + 4;
        } while (uVar39 != uVar43);
        auVar75 = vpaddq_avx(auVar10,auVar18._16_16_);
        auVar57 = vpshufd_avx(auVar75,0xee);
        auVar75 = vpaddq_avx(auVar75,auVar57);
        uVar36 = auVar75._0_8_;
        if (uVar42 == uVar39) goto LAB_1801d2642;
      }
LAB_1801d2630:
      do {
        uVar36 = uVar36 + ((*pauVar35)[0] == param_1);
        pauVar35 = (undefined1 (*) [32])(*pauVar35 + 1);
      } while (pauVar35 != param_3);
      goto LAB_1801d2642;
    }
  }
  else {
    pauVar40 = (undefined1 (*) [32])(((ulonglong)param_2 & 0xffffffffffffffe0) + 0x20);
    pauVar35 = (undefined1 (*) [32])(*param_2 + 1);
    if ((undefined1 (*) [32])(*param_2 + 1) < pauVar40) {
      pauVar35 = pauVar40;
    }
    uVar36 = (longlong)pauVar35 - (longlong)param_2;
    if (uVar36 < 4) {
      uVar41 = 0;
LAB_1801d1e0d:
      pauVar35 = param_2;
LAB_1801d2020:
      do {
        uVar41 = uVar41 + ((*pauVar35)[0] == param_1);
        pauVar35 = (undefined1 (*) [32])(*pauVar35 + 1);
      } while (pauVar35 < pauVar40);
    }
    else if (uVar36 < 0x10) {
      uVar43 = 0;
      uVar41 = 0;
LAB_1801d1fbd:
      uVar39 = uVar36 & 0xfffffffffffffffc;
      pauVar35 = (undefined1 (*) [32])(*param_2 + uVar39);
      auVar45 = ZEXT864(uVar41);
      auVar58[1] = param_1;
      auVar58[0] = param_1;
      auVar58[2] = param_1;
      auVar58[3] = param_1;
      auVar58[4] = param_1;
      auVar58[5] = param_1;
      auVar58[6] = param_1;
      auVar58[7] = param_1;
      auVar58[8] = param_1;
      auVar58[9] = param_1;
      auVar58[10] = param_1;
      auVar58[0xb] = param_1;
      auVar58[0xc] = param_1;
      auVar58[0xd] = param_1;
      auVar58[0xe] = param_1;
      auVar58[0xf] = param_1;
      auVar68._8_8_ = 1;
      auVar68._0_8_ = 1;
      auVar68._16_8_ = 1;
      auVar68._24_8_ = 1;
      do {
        auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar43)),auVar58);
        auVar67 = vpmovzxbq_avx2(auVar75);
        auVar67 = vpand_avx2(auVar67,auVar68);
        auVar4._0_8_ = auVar45._0_8_ + auVar67._0_8_;
        auVar4._8_8_ = auVar45._8_8_ + auVar67._8_8_;
        auVar12._16_8_ = auVar45._16_8_ + auVar67._16_8_;
        auVar12._0_16_ = auVar4;
        auVar12._24_8_ = auVar45._24_8_ + auVar67._24_8_;
        auVar45 = ZEXT3264(auVar12);
        uVar43 = uVar43 + 4;
      } while (uVar39 != uVar43);
      auVar75 = vpaddq_avx(auVar4,auVar12._16_16_);
      auVar57 = vpshufd_avx(auVar75,0xee);
      auVar75 = vpaddq_avx(auVar75,auVar57);
      uVar41 = auVar75._0_8_;
      if (uVar36 != uVar39) goto LAB_1801d2020;
    }
    else {
      uVar43 = uVar36 & 0xfffffffffffffff0;
      auVar57[1] = param_1;
      auVar57[0] = param_1;
      auVar57[2] = param_1;
      auVar57[3] = param_1;
      auVar57[4] = param_1;
      auVar57[5] = param_1;
      auVar57[6] = param_1;
      auVar57[7] = param_1;
      auVar57[8] = param_1;
      auVar57[9] = param_1;
      auVar57[10] = param_1;
      auVar57[0xb] = param_1;
      auVar57[0xc] = param_1;
      auVar57[0xd] = param_1;
      auVar57[0xe] = param_1;
      auVar57[0xf] = param_1;
      lVar37 = 0;
      lVar54 = 0;
      lVar55 = 0;
      lVar56 = 0;
      auVar67._8_8_ = 1;
      auVar67._0_8_ = 1;
      auVar67._16_8_ = 1;
      auVar67._24_8_ = 1;
      uVar41 = 0;
      auVar45 = ZEXT1664((undefined1  [16])0x0);
      lVar66 = 0;
      lVar46 = 0;
      lVar78 = 0;
      lVar76 = 0;
      lVar73 = 0;
      lVar71 = 0;
      lVar47 = 0;
      lVar79 = 0;
      do {
        auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar41)),auVar57);
        auVar19 = vpmovzxbq_avx2(auVar75);
        auVar19 = vpand_avx2(auVar19,auVar67);
        lVar37 = lVar37 + auVar19._0_8_;
        lVar54 = lVar54 + auVar19._8_8_;
        lVar55 = lVar55 + auVar19._16_8_;
        lVar56 = lVar56 + auVar19._24_8_;
        auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar41 + 4)),auVar57);
        auVar19 = vpmovzxbq_avx2(auVar75);
        auVar19 = vpand_avx2(auVar19,auVar67);
        lVar48 = auVar45._0_8_ + auVar19._0_8_;
        lVar72 = auVar45._8_8_ + auVar19._8_8_;
        lVar77 = auVar45._16_8_ + auVar19._16_8_;
        lVar80 = auVar45._24_8_ + auVar19._24_8_;
        auVar45 = ZEXT3264(CONCAT824(lVar80,CONCAT816(lVar77,CONCAT88(lVar72,lVar48))));
        auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar41 + 8)),auVar57);
        auVar19 = vpmovzxbq_avx2(auVar75);
        auVar19 = vpand_avx2(auVar19,auVar67);
        lVar66 = lVar66 + auVar19._0_8_;
        lVar46 = lVar46 + auVar19._8_8_;
        lVar78 = lVar78 + auVar19._16_8_;
        lVar76 = lVar76 + auVar19._24_8_;
        auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*param_2 + uVar41 + 0xc)),auVar57);
        auVar19 = vpmovzxbq_avx2(auVar75);
        auVar19 = vpand_avx2(auVar19,auVar67);
        lVar73 = lVar73 + auVar19._0_8_;
        lVar71 = lVar71 + auVar19._8_8_;
        lVar47 = lVar47 + auVar19._16_8_;
        lVar79 = lVar79 + auVar19._24_8_;
        uVar41 = uVar41 + 0x10;
      } while (uVar43 != uVar41);
      auVar74._0_8_ = lVar73 + lVar66 + lVar48 + lVar37;
      auVar74._8_8_ = lVar71 + lVar46 + lVar72 + lVar54;
      auVar19._16_8_ = lVar47 + lVar78 + lVar77 + lVar55;
      auVar19._0_16_ = auVar74;
      auVar19._24_8_ = lVar79 + lVar76 + lVar80 + lVar56;
      auVar75 = vpaddq_avx(auVar74,auVar19._16_16_);
      auVar57 = vpshufd_avx(auVar75,0xee);
      auVar75 = vpaddq_avx(auVar75,auVar57);
      uVar41 = auVar75._0_8_;
      if (uVar36 != uVar43) {
        if ((uVar36 & 0xc) == 0) {
          param_2 = (undefined1 (*) [32])(*param_2 + uVar43);
          goto LAB_1801d1e0d;
        }
        goto LAB_1801d1fbd;
      }
    }
    if (pauVar40 <= param_3 + -4 && 0x7f < uVar42) {
      do {
        auVar67 = vpcmpeqb_avx2(auVar44,*pauVar40);
        vpcmpeqb_avx2(auVar44,pauVar40[1]);
        vpcmpeqb_avx2(auVar44,pauVar40[2]);
        vpcmpeqb_avx2(auVar44,pauVar40[3]);
        auVar74 = ZEXT416((uint)(SUB321(auVar67 >> 7,0) & 1) |
                          (uint)(SUB321(auVar67 >> 0xf,0) & 1) << 1 |
                          (uint)(SUB321(auVar67 >> 0x17,0) & 1) << 2 |
                          (uint)(SUB321(auVar67 >> 0x1f,0) & 1) << 3 |
                          (uint)(SUB321(auVar67 >> 0x27,0) & 1) << 4 |
                          (uint)(SUB321(auVar67 >> 0x2f,0) & 1) << 5 |
                          (uint)(SUB321(auVar67 >> 0x37,0) & 1) << 6 |
                          (uint)(SUB321(auVar67 >> 0x3f,0) & 1) << 7 |
                          (uint)(SUB321(auVar67 >> 0x47,0) & 1) << 8 |
                          (uint)(SUB321(auVar67 >> 0x4f,0) & 1) << 9 |
                          (uint)(SUB321(auVar67 >> 0x57,0) & 1) << 10 |
                          (uint)(SUB321(auVar67 >> 0x5f,0) & 1) << 0xb |
                          (uint)(SUB321(auVar67 >> 0x67,0) & 1) << 0xc |
                          (uint)(SUB321(auVar67 >> 0x6f,0) & 1) << 0xd |
                          (uint)(SUB321(auVar67 >> 0x77,0) & 1) << 0xe |
                          (uint)SUB321(auVar67 >> 0x7f,0) << 0xf |
                          (uint)(SUB321(auVar67 >> 0x87,0) & 1) << 0x10 |
                          (uint)(SUB321(auVar67 >> 0x8f,0) & 1) << 0x11 |
                          (uint)(SUB321(auVar67 >> 0x97,0) & 1) << 0x12 |
                          (uint)(SUB321(auVar67 >> 0x9f,0) & 1) << 0x13 |
                          (uint)(SUB321(auVar67 >> 0xa7,0) & 1) << 0x14 |
                          (uint)(SUB321(auVar67 >> 0xaf,0) & 1) << 0x15 |
                          (uint)(SUB321(auVar67 >> 0xb7,0) & 1) << 0x16 |
                          (uint)SUB321(auVar67 >> 0xbf,0) << 0x17 |
                          (uint)(SUB321(auVar67 >> 199,0) & 1) << 0x18 |
                          (uint)(SUB321(auVar67 >> 0xcf,0) & 1) << 0x19 |
                          (uint)(SUB321(auVar67 >> 0xd7,0) & 1) << 0x1a |
                          (uint)(SUB321(auVar67 >> 0xdf,0) & 1) << 0x1b |
                          (uint)(SUB321(auVar67 >> 0xe7,0) & 1) << 0x1c |
                          (uint)(SUB321(auVar67 >> 0xef,0) & 1) << 0x1d |
                          (uint)(SUB321(auVar67 >> 0xf7,0) & 1) << 0x1e |
                          (uint)(byte)(auVar67[0x1f] >> 7) << 0x1f);
        auVar75 = vpand_avx(auVar74,_DAT_18028a3b0);
        auVar57 = vpshufb_avx(_DAT_18028a3c0,auVar75);
        auVar75 = vpsrlw_avx(auVar74,4);
        auVar75 = vpand_avx(auVar75,_DAT_18028a3b0);
        auVar75 = vpshufb_avx(_DAT_18028a3c0,auVar75);
        auVar1[0] = auVar75[0] + auVar57[0];
        auVar1[1] = auVar75[1] + auVar57[1];
        auVar1[2] = auVar75[2] + auVar57[2];
        auVar1[3] = auVar75[3] + auVar57[3];
        auVar1[4] = auVar75[4] + auVar57[4];
        auVar1[5] = auVar75[5] + auVar57[5];
        auVar1[6] = auVar75[6] + auVar57[6];
        auVar1[7] = auVar75[7] + auVar57[7];
        auVar1[8] = auVar75[8] + auVar57[8];
        auVar1[9] = auVar75[9] + auVar57[9];
        auVar1[10] = auVar75[10] + auVar57[10];
        auVar1[0xb] = auVar75[0xb] + auVar57[0xb];
        auVar1[0xc] = auVar75[0xc] + auVar57[0xc];
        auVar1[0xd] = auVar75[0xd] + auVar57[0xd];
        auVar1[0xe] = auVar75[0xe] + auVar57[0xe];
        auVar1[0xf] = auVar75[0xf] + auVar57[0xf];
        auVar75 = vpunpckhdq_avx(auVar1,(undefined1  [16])0x0);
        auVar57 = vpsadbw_avx(auVar75,(undefined1  [16])0x0);
        auVar75 = vpmovzxdq_avx(auVar1);
        auVar75 = vpsadbw_avx(auVar75,(undefined1  [16])0x0);
        auVar75 = vpackuswb_avx(auVar75,auVar57);
        auVar75 = vpackusdw_avx(auVar75,auVar75);
        auVar75 = vpackuswb_avx(auVar75,auVar75);
        auVar75 = vpblendd_avx2((undefined1  [16])0x0,auVar75,1);
        auVar75 = vpsadbw_avx(auVar75,(undefined1  [16])0x0);
        uVar41 = uVar41 + auVar75._0_8_;
        pauVar40 = pauVar40 + 4;
      } while (pauVar40 <= param_3 + -4);
    }
    for (; pauVar40 <= param_3 + -1; pauVar40 = pauVar40 + 1) {
      auVar67 = vpcmpeqb_avx2(auVar44,*pauVar40);
      uVar38 = (uint)(SUB321(auVar67 >> 0xf,0) & 1) << 1;
      uVar20 = (uint)(SUB321(auVar67 >> 0x1f,0) & 1) << 3;
      uVar21 = (uint)(SUB321(auVar67 >> 0x2f,0) & 1) << 5;
      uVar22 = (uint)(SUB321(auVar67 >> 0x3f,0) & 1) << 7;
      uVar23 = (uint)(SUB321(auVar67 >> 0x4f,0) & 1) << 9;
      uVar24 = (uint)(SUB321(auVar67 >> 0x5f,0) & 1) << 0xb;
      uVar25 = (uint)(SUB321(auVar67 >> 0x6f,0) & 1) << 0xd;
      uVar26 = (uint)SUB321(auVar67 >> 0x7f,0) << 0xf;
      uVar27 = (uint)(SUB321(auVar67 >> 0x8f,0) & 1) << 0x11;
      uVar28 = (uint)(SUB321(auVar67 >> 0x9f,0) & 1) << 0x13;
      uVar29 = (uint)(SUB321(auVar67 >> 0xaf,0) & 1) << 0x15;
      uVar30 = (uint)SUB321(auVar67 >> 0xbf,0) << 0x17;
      uVar31 = (uint)(SUB321(auVar67 >> 0xcf,0) & 1) << 0x19;
      uVar32 = (uint)(SUB321(auVar67 >> 0xdf,0) & 1) << 0x1b;
      uVar33 = (uint)(SUB321(auVar67 >> 0xef,0) & 1) << 0x1d;
      uVar34 = (uint)(byte)(auVar67[0x1f] >> 7) << 0x1f;
      uVar38 = (SUB321(auVar67 >> 7,0) & 1 | uVar38 | (uint)(SUB321(auVar67 >> 0x17,0) & 1) << 2 |
                uVar20 | (uint)(SUB321(auVar67 >> 0x27,0) & 1) << 4 | uVar21 |
                (uint)(SUB321(auVar67 >> 0x37,0) & 1) << 6 | uVar22 |
                (uint)(SUB321(auVar67 >> 0x47,0) & 1) << 8 | uVar23 |
                (uint)(SUB321(auVar67 >> 0x57,0) & 1) << 10 | uVar24 |
                (uint)(SUB321(auVar67 >> 0x67,0) & 1) << 0xc | uVar25 |
                (uint)(SUB321(auVar67 >> 0x77,0) & 1) << 0xe | uVar26 |
                (uint)(SUB321(auVar67 >> 0x87,0) & 1) << 0x10 | uVar27 |
                (uint)(SUB321(auVar67 >> 0x97,0) & 1) << 0x12 | uVar28 |
                (uint)(SUB321(auVar67 >> 0xa7,0) & 1) << 0x14 | uVar29 |
                (uint)(SUB321(auVar67 >> 0xb7,0) & 1) << 0x16 | uVar30 |
                (uint)(SUB321(auVar67 >> 199,0) & 1) << 0x18 | uVar31 |
                (uint)(SUB321(auVar67 >> 0xd7,0) & 1) << 0x1a | uVar32 |
                (uint)(SUB321(auVar67 >> 0xe7,0) & 1) << 0x1c | uVar33 |
                (uint)(SUB321(auVar67 >> 0xf7,0) & 1) << 0x1e | uVar34) -
               ((uVar38 | uVar20 | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 |
                 uVar28 | uVar29 | uVar30 | uVar31 | uVar32 | uVar33 | uVar34) >> 1);
      uVar38 = (uVar38 >> 2 & 0x33333333) + (uVar38 & 0x33333333);
      uVar41 = uVar41 + (((uVar38 >> 4) + uVar38 & 0xf0f0f0f) * 0x1010101 >> 0x18);
    }
    if (pauVar40 < param_3) {
      uVar42 = (longlong)param_3 - (longlong)pauVar40;
      if (uVar42 < 4) {
        uVar36 = 0;
        pauVar35 = pauVar40;
      }
      else {
        if (uVar42 < 0x10) {
          uVar43 = 0;
          uVar36 = 0;
        }
        else {
          uVar43 = uVar42 & 0xfffffffffffffff0;
          auVar50[1] = param_1;
          auVar50[0] = param_1;
          auVar50[2] = param_1;
          auVar50[3] = param_1;
          auVar50[4] = param_1;
          auVar50[5] = param_1;
          auVar50[6] = param_1;
          auVar50[7] = param_1;
          auVar50[8] = param_1;
          auVar50[9] = param_1;
          auVar50[10] = param_1;
          auVar50[0xb] = param_1;
          auVar50[0xc] = param_1;
          auVar50[0xd] = param_1;
          auVar50[0xe] = param_1;
          auVar50[0xf] = param_1;
          lVar37 = 0;
          lVar46 = 0;
          lVar47 = 0;
          lVar48 = 0;
          auVar62._8_8_ = 1;
          auVar62._0_8_ = 1;
          auVar62._16_8_ = 1;
          auVar62._24_8_ = 1;
          uVar36 = 0;
          lVar66 = 0;
          lVar71 = 0;
          lVar56 = 0;
          lVar72 = 0;
          lVar73 = 0;
          lVar55 = 0;
          lVar76 = 0;
          lVar77 = 0;
          lVar54 = 0;
          lVar78 = 0;
          lVar79 = 0;
          lVar80 = 0;
          do {
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36)),auVar50);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar62);
            lVar37 = lVar37 + auVar44._0_8_;
            lVar46 = lVar46 + auVar44._8_8_;
            lVar47 = lVar47 + auVar44._16_8_;
            lVar48 = lVar48 + auVar44._24_8_;
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36 + 4)),auVar50);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar62);
            lVar66 = lVar66 + auVar44._0_8_;
            lVar71 = lVar71 + auVar44._8_8_;
            lVar56 = lVar56 + auVar44._16_8_;
            lVar72 = lVar72 + auVar44._24_8_;
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36 + 8)),auVar50);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar62);
            lVar73 = lVar73 + auVar44._0_8_;
            lVar55 = lVar55 + auVar44._8_8_;
            lVar76 = lVar76 + auVar44._16_8_;
            lVar77 = lVar77 + auVar44._24_8_;
            auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar36 + 0xc)),auVar50);
            auVar44 = vpmovzxbq_avx2(auVar75);
            auVar44 = vpand_avx2(auVar44,auVar62);
            lVar54 = lVar54 + auVar44._0_8_;
            lVar78 = lVar78 + auVar44._8_8_;
            lVar79 = lVar79 + auVar44._16_8_;
            lVar80 = lVar80 + auVar44._24_8_;
            uVar36 = uVar36 + 0x10;
          } while (uVar43 != uVar36);
          auVar7._0_8_ = lVar54 + lVar73 + lVar66 + lVar37;
          auVar7._8_8_ = lVar78 + lVar55 + lVar71 + lVar46;
          auVar15._16_8_ = lVar79 + lVar76 + lVar56 + lVar47;
          auVar15._0_16_ = auVar7;
          auVar15._24_8_ = lVar80 + lVar77 + lVar72 + lVar48;
          auVar75 = vpaddq_avx(auVar7,auVar15._16_16_);
          auVar57 = vpshufd_avx(auVar75,0xee);
          auVar75 = vpaddq_avx(auVar75,auVar57);
          uVar36 = auVar75._0_8_;
          if (uVar42 == uVar43) goto LAB_1801d2642;
          if ((uVar42 & 0xc) == 0) {
            pauVar35 = (undefined1 (*) [32])(*pauVar40 + uVar43);
            goto LAB_1801d2610;
          }
        }
        uVar39 = uVar42 & 0xfffffffffffffffc;
        pauVar35 = (undefined1 (*) [32])(*pauVar40 + uVar39);
        auVar45 = ZEXT864(uVar36);
        auVar51[1] = param_1;
        auVar51[0] = param_1;
        auVar51[2] = param_1;
        auVar51[3] = param_1;
        auVar51[4] = param_1;
        auVar51[5] = param_1;
        auVar51[6] = param_1;
        auVar51[7] = param_1;
        auVar51[8] = param_1;
        auVar51[9] = param_1;
        auVar51[10] = param_1;
        auVar51[0xb] = param_1;
        auVar51[0xc] = param_1;
        auVar51[0xd] = param_1;
        auVar51[0xe] = param_1;
        auVar51[0xf] = param_1;
        auVar63._8_8_ = 1;
        auVar63._0_8_ = 1;
        auVar63._16_8_ = 1;
        auVar63._24_8_ = 1;
        do {
          auVar75 = vpcmpeqb_avx(ZEXT416(*(uint *)(*pauVar40 + uVar43)),auVar51);
          auVar44 = vpmovzxbq_avx2(auVar75);
          auVar44 = vpand_avx2(auVar44,auVar63);
          auVar8._0_8_ = auVar45._0_8_ + auVar44._0_8_;
          auVar8._8_8_ = auVar45._8_8_ + auVar44._8_8_;
          auVar16._16_8_ = auVar45._16_8_ + auVar44._16_8_;
          auVar16._0_16_ = auVar8;
          auVar16._24_8_ = auVar45._24_8_ + auVar44._24_8_;
          auVar45 = ZEXT3264(auVar16);
          uVar43 = uVar43 + 4;
        } while (uVar39 != uVar43);
        auVar75 = vpaddq_avx(auVar8,auVar16._16_16_);
        auVar57 = vpshufd_avx(auVar75,0xee);
        auVar75 = vpaddq_avx(auVar75,auVar57);
        uVar36 = auVar75._0_8_;
        if (uVar42 == uVar39) goto LAB_1801d2642;
      }
LAB_1801d2610:
      do {
        uVar36 = uVar36 + ((*pauVar35)[0] == param_1);
        pauVar35 = (undefined1 (*) [32])(*pauVar35 + 1);
      } while (pauVar35 != param_3);
      goto LAB_1801d2642;
    }
  }
  uVar36 = 0;
LAB_1801d2642:
  return uVar36 + uVar41;
}


