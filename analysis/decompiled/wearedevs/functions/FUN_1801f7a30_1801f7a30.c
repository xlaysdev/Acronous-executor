/* FUN_1801f7a30 @ 1801f7a30 */

undefined8 FUN_1801f7a30(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  void *_Src;
  undefined1 auVar6 [16];
  ushort uVar7;
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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  byte bVar28;
  undefined8 uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  size_t _Size;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  
  uVar31 = param_1[3];
  uVar35 = param_2 + uVar31;
  if (!CARRY8(param_2,uVar31)) {
    uVar43 = param_1[1];
    uVar42 = uVar43 + 1;
    uVar41 = (uVar42 & 0xfffffffffffffff8) - (uVar42 >> 3);
    if (uVar43 < 8) {
      uVar41 = uVar43;
    }
    if (uVar35 <= uVar41 >> 1) {
      if (uVar42 == 0) {
        uVar35 = 0;
      }
      else {
        _Src = (void *)*param_1;
        uVar31 = ((uVar42 >> 4) + 1) - (ulonglong)((uVar42 & 0xf) == 0);
        if (uVar31 == 1) {
          lVar37 = 0;
        }
        else {
          uVar35 = uVar31 & 0x1ffffffffffffffe;
          lVar30 = 0;
          do {
            pcVar1 = (char *)((longlong)_Src + lVar30);
            cVar5 = pcVar1[1];
            cVar8 = pcVar1[2];
            cVar9 = pcVar1[3];
            cVar10 = pcVar1[4];
            cVar11 = pcVar1[5];
            cVar12 = pcVar1[6];
            cVar13 = pcVar1[7];
            cVar14 = pcVar1[8];
            cVar15 = pcVar1[9];
            cVar16 = pcVar1[10];
            cVar17 = pcVar1[0xb];
            cVar18 = pcVar1[0xc];
            cVar19 = pcVar1[0xd];
            cVar20 = pcVar1[0xe];
            cVar21 = pcVar1[0xf];
            pbVar2 = (byte *)((longlong)_Src + lVar30);
            *pbVar2 = -(*pcVar1 < '\0') | 0x80;
            pbVar2[1] = -(cVar5 < '\0') | 0x80;
            pbVar2[2] = -(cVar8 < '\0') | 0x80;
            pbVar2[3] = -(cVar9 < '\0') | 0x80;
            pbVar2[4] = -(cVar10 < '\0') | 0x80;
            pbVar2[5] = -(cVar11 < '\0') | 0x80;
            pbVar2[6] = -(cVar12 < '\0') | 0x80;
            pbVar2[7] = -(cVar13 < '\0') | 0x80;
            pbVar2[8] = -(cVar14 < '\0') | 0x80;
            pbVar2[9] = -(cVar15 < SUB161((undefined1  [16])0x0,9)) | 0x80;
            pbVar2[10] = -(cVar16 < SUB161((undefined1  [16])0x0,10)) | 0x80;
            pbVar2[0xb] = -(cVar17 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
            pbVar2[0xc] = -(cVar18 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
            pbVar2[0xd] = -(cVar19 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
            pbVar2[0xe] = -(cVar20 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
            pbVar2[0xf] = -(cVar21 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
            lVar37 = lVar30 + 0x20;
            pcVar1 = (char *)((longlong)_Src + lVar30 + 0x10);
            cVar5 = pcVar1[1];
            cVar8 = pcVar1[2];
            cVar9 = pcVar1[3];
            cVar10 = pcVar1[4];
            cVar11 = pcVar1[5];
            cVar12 = pcVar1[6];
            cVar13 = pcVar1[7];
            cVar14 = pcVar1[8];
            cVar15 = pcVar1[9];
            cVar16 = pcVar1[10];
            cVar17 = pcVar1[0xb];
            cVar18 = pcVar1[0xc];
            cVar19 = pcVar1[0xd];
            cVar20 = pcVar1[0xe];
            cVar21 = pcVar1[0xf];
            pbVar2 = (byte *)((longlong)_Src + lVar30 + 0x10);
            *pbVar2 = -(*pcVar1 < '\0') | 0x80;
            pbVar2[1] = -(cVar5 < '\0') | 0x80;
            pbVar2[2] = -(cVar8 < '\0') | 0x80;
            pbVar2[3] = -(cVar9 < '\0') | 0x80;
            pbVar2[4] = -(cVar10 < '\0') | 0x80;
            pbVar2[5] = -(cVar11 < '\0') | 0x80;
            pbVar2[6] = -(cVar12 < '\0') | 0x80;
            pbVar2[7] = -(cVar13 < '\0') | 0x80;
            pbVar2[8] = -(cVar14 < '\0') | 0x80;
            pbVar2[9] = -(cVar15 < SUB161((undefined1  [16])0x0,9)) | 0x80;
            pbVar2[10] = -(cVar16 < SUB161((undefined1  [16])0x0,10)) | 0x80;
            pbVar2[0xb] = -(cVar17 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
            pbVar2[0xc] = -(cVar18 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
            pbVar2[0xd] = -(cVar19 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
            pbVar2[0xe] = -(cVar20 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
            pbVar2[0xf] = -(cVar21 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
            uVar35 = uVar35 - 2;
            lVar30 = lVar37;
          } while (uVar35 != 0);
        }
        if ((uVar31 & 1) != 0) {
          pcVar1 = (char *)((longlong)_Src + lVar37);
          cVar5 = pcVar1[1];
          cVar8 = pcVar1[2];
          cVar9 = pcVar1[3];
          cVar10 = pcVar1[4];
          cVar11 = pcVar1[5];
          cVar12 = pcVar1[6];
          cVar13 = pcVar1[7];
          cVar14 = pcVar1[8];
          cVar15 = pcVar1[9];
          cVar16 = pcVar1[10];
          cVar17 = pcVar1[0xb];
          cVar18 = pcVar1[0xc];
          cVar19 = pcVar1[0xd];
          cVar20 = pcVar1[0xe];
          cVar21 = pcVar1[0xf];
          pbVar2 = (byte *)((longlong)_Src + lVar37);
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar5 < '\0') | 0x80;
          pbVar2[2] = -(cVar8 < '\0') | 0x80;
          pbVar2[3] = -(cVar9 < '\0') | 0x80;
          pbVar2[4] = -(cVar10 < '\0') | 0x80;
          pbVar2[5] = -(cVar11 < '\0') | 0x80;
          pbVar2[6] = -(cVar12 < '\0') | 0x80;
          pbVar2[7] = -(cVar13 < '\0') | 0x80;
          pbVar2[8] = -(cVar14 < '\0') | 0x80;
          pbVar2[9] = -(cVar15 < SUB161((undefined1  [16])0x0,9)) | 0x80;
          pbVar2[10] = -(cVar16 < SUB161((undefined1  [16])0x0,10)) | 0x80;
          pbVar2[0xb] = -(cVar17 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
          pbVar2[0xc] = -(cVar18 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
          pbVar2[0xd] = -(cVar19 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
          pbVar2[0xe] = -(cVar20 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
          pbVar2[0xf] = -(cVar21 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
        }
        uVar31 = 0x10;
        if (0x10 < uVar42) {
          uVar31 = uVar42;
        }
        _Size = 0x10;
        if (uVar42 < 0x10) {
          _Size = uVar42;
        }
        memmove((void *)(uVar31 + (longlong)_Src),_Src,_Size);
        uVar31 = 1;
        uVar35 = 0;
        do {
          uVar43 = uVar31;
          lVar30 = *param_1;
          if (SBORROW1('\0',*(char *)(lVar30 + uVar35))) {
            puVar3 = (undefined8 *)(lVar30 + ~uVar35 * 0x48);
            while( true ) {
              uVar32 = FUN_1800c93e0(param_3,lVar30 + uVar35 * -0x48 + -0x48);
              pauVar45 = (undefined1 (*) [16])*param_1;
              uVar31 = param_1[1];
              uVar39 = uVar31 & uVar32;
              auVar6 = *(undefined1 (*) [16])(*pauVar45 + uVar39);
              uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
              uVar36 = (uint)uVar7;
              uVar41 = uVar39;
              if (uVar7 == 0) {
                lVar30 = 0x10;
                do {
                  uVar41 = uVar41 + lVar30 & uVar31;
                  auVar6 = *(undefined1 (*) [16])(*pauVar45 + uVar41);
                  lVar30 = lVar30 + 0x10;
                  uVar36 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
                } while (uVar36 == 0);
              }
              uVar40 = 0;
              for (; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
                uVar40 = uVar40 + 1;
              }
              uVar41 = uVar40 + uVar41 & uVar31;
              if (-1 < (char)(*pauVar45)[uVar41]) {
                auVar6 = *pauVar45;
                uVar36 = 0;
                for (uVar40 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
                    (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
                  uVar36 = uVar36 + 1;
                }
                uVar41 = (ulonglong)uVar36;
              }
              bVar28 = (byte)(uVar32 >> 0x38);
              if (((uVar41 - uVar39 ^ uVar35 - uVar39) & uVar31) < 0x10) {
                bVar28 = bVar28 >> 1;
                (*pauVar45)[uVar35] = bVar28;
                *(byte *)(*param_1 + 0x10 + (uVar31 & uVar35 - 0x10)) = bVar28;
                goto LAB_1801f7f97;
              }
              puVar4 = (undefined8 *)((longlong)pauVar45 + ~uVar41 * 0x48);
              cVar5 = (*pauVar45)[uVar41];
              bVar28 = bVar28 >> 1;
              (*pauVar45)[uVar41] = bVar28;
              *(byte *)(*param_1 + 0x10 + (uVar41 - 0x10 & uVar31)) = bVar28;
              if (cVar5 == -1) break;
              uVar29 = *puVar3;
              *puVar3 = *puVar4;
              *puVar4 = uVar29;
              uVar29 = puVar3[1];
              puVar3[1] = puVar4[1];
              puVar4[1] = uVar29;
              uVar29 = puVar3[2];
              puVar3[2] = puVar4[2];
              puVar4[2] = uVar29;
              uVar29 = puVar3[3];
              puVar3[3] = puVar4[3];
              puVar4[3] = uVar29;
              uVar29 = puVar3[4];
              puVar3[4] = puVar4[4];
              puVar4[4] = uVar29;
              uVar29 = puVar3[5];
              puVar3[5] = puVar4[5];
              puVar4[5] = uVar29;
              uVar29 = puVar3[6];
              puVar3[6] = puVar4[6];
              puVar4[6] = uVar29;
              uVar29 = puVar3[7];
              puVar3[7] = puVar4[7];
              puVar4[7] = uVar29;
              uVar29 = puVar3[8];
              puVar3[8] = puVar4[8];
              puVar4[8] = uVar29;
              lVar30 = *param_1;
            }
            uVar31 = param_1[1];
            *(undefined1 *)(*param_1 + uVar35) = 0xff;
            *(undefined1 *)(*param_1 + 0x10 + (uVar35 - 0x10 & uVar31)) = 0xff;
            puVar4[8] = puVar3[8];
            uVar29 = *puVar3;
            uVar22 = puVar3[1];
            uVar23 = puVar3[2];
            uVar24 = puVar3[3];
            uVar25 = puVar3[4];
            uVar26 = puVar3[5];
            uVar27 = puVar3[7];
            puVar4[6] = puVar3[6];
            puVar4[7] = uVar27;
            puVar4[4] = uVar25;
            puVar4[5] = uVar26;
            puVar4[2] = uVar23;
            puVar4[3] = uVar24;
            *puVar4 = uVar29;
            puVar4[1] = uVar22;
          }
LAB_1801f7f97:
          uVar31 = uVar43 + (uVar43 < uVar42);
          uVar35 = uVar43;
        } while (uVar43 < uVar42);
        uVar42 = param_1[1];
        uVar31 = param_1[3];
        uVar35 = (uVar42 + 1 & 0xfffffffffffffff8) - (uVar42 + 1 >> 3);
        if (uVar42 < 8) {
          uVar35 = uVar42;
        }
      }
      param_1[2] = uVar35 - uVar31;
      return 0x8000000000000001;
    }
    uVar31 = uVar41 + 1;
    if (uVar41 + 1 <= uVar35) {
      uVar31 = uVar35;
    }
    if (uVar31 < 0xf) {
      uVar35 = 4;
      if (3 < uVar31) {
        uVar35 = (ulonglong)((uint)uVar31 & 8) + 8;
      }
    }
    else {
      if (uVar31 >> 0x3d != 0) goto LAB_1801f7b60;
      uVar31 = (uVar31 * 8) / 7 - 1;
      lVar30 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      uVar35 = (0xffffffffffffffffU >> (~(byte)lVar30 & 0x3f)) + 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar35;
    if (SUB168(auVar6 * ZEXT816(0x48),8) == 0) {
      uVar42 = SUB168(auVar6 * ZEXT816(0x48),0) + 0xfU & 0xfffffffffffffff0;
      uVar31 = uVar35 + 0x10;
      uVar43 = uVar42 + uVar31;
      if (uVar43 < 0x7ffffffffffffff1 && !CARRY8(uVar42,uVar31)) {
        FUN_180027490();
        uVar29 = 0;
        lVar30 = thunk_FUN_1801d32d0(uVar43,0x10);
        if (lVar30 == 0) {
          uVar29 = FUN_1801ec3f0((char)param_4,0x10,uVar43);
          return uVar29;
        }
        pauVar45 = (undefined1 (*) [16])(lVar30 + uVar42);
        uVar42 = uVar35 - 1;
        uVar35 = (uVar35 & 0xfffffffffffffff8) - (uVar35 >> 3);
        if (uVar42 < 8) {
          uVar35 = uVar42;
        }
        memset(pauVar45,(int)CONCAT71((int7)((ulonglong)uVar29 >> 8),0xff),uVar31);
        lVar30 = param_1[3];
        if (lVar30 == 0) {
          lVar30 = 0;
        }
        else {
          pauVar44 = (undefined1 (*) [16])*param_1;
          auVar6 = *pauVar44;
          uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
          lVar37 = 0;
          do {
            if ((short)uVar36 == 0) {
              do {
                auVar6 = pauVar44[1];
                pauVar44 = pauVar44 + 1;
                lVar37 = lVar37 + 0x10;
                uVar36 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
              } while (uVar36 == 0xffff);
              uVar36 = ~uVar36;
            }
            uVar40 = 0;
            for (uVar34 = uVar36; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
              uVar40 = uVar40 + 1;
            }
            uVar31 = FUN_1800c93e0(param_3,*param_1 + ((ulonglong)uVar40 + lVar37) * -0x48 + -0x48);
            uVar43 = uVar31 & uVar42;
            auVar6 = *(undefined1 (*) [16])(*pauVar45 + uVar43);
            uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
            uVar34 = (uint)uVar7;
            if (uVar7 == 0) {
              lVar38 = 0x10;
              do {
                uVar43 = uVar43 + lVar38 & uVar42;
                auVar6 = *(undefined1 (*) [16])(*pauVar45 + uVar43);
                lVar38 = lVar38 + 0x10;
                uVar34 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
              } while (uVar34 == 0);
            }
            uVar33 = 0;
            for (; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
              uVar33 = uVar33 + 1;
            }
            uVar43 = uVar33 + uVar43 & uVar42;
            if (-1 < (char)(*pauVar45)[uVar43]) {
              auVar6 = *pauVar45;
              uVar34 = 0;
              for (uVar33 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
                  (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                uVar34 = uVar34 + 1;
              }
              uVar43 = (ulonglong)uVar34;
            }
            uVar36 = uVar36 - 1 & uVar36;
            lVar30 = lVar30 + -1;
            bVar28 = (byte)(uVar31 >> 0x39);
            (*pauVar45)[uVar43] = bVar28;
            pauVar45[1][uVar43 - 0x10 & uVar42] = bVar28;
            lVar38 = *param_1;
            uVar31 = ~((ulonglong)uVar40 + lVar37);
            uVar43 = ~uVar43;
            *(undefined8 *)((longlong)pauVar45 + uVar43 * 0x48 + 0x40) =
                 *(undefined8 *)(lVar38 + 0x40 + uVar31 * 0x48);
            auVar6 = *(undefined1 (*) [16])(lVar38 + uVar31 * 0x48);
            puVar3 = (undefined8 *)(lVar38 + 0x10 + uVar31 * 0x48);
            uVar29 = *puVar3;
            uVar22 = puVar3[1];
            puVar3 = (undefined8 *)(lVar38 + 0x20 + uVar31 * 0x48);
            uVar23 = *puVar3;
            uVar24 = puVar3[1];
            puVar3 = (undefined8 *)(lVar38 + 0x30 + uVar31 * 0x48);
            uVar25 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)pauVar45 + uVar43 * 0x48 + 0x30);
            *puVar4 = *puVar3;
            puVar4[1] = uVar25;
            puVar3 = (undefined8 *)((longlong)pauVar45 + uVar43 * 0x48 + 0x20);
            *puVar3 = uVar23;
            puVar3[1] = uVar24;
            puVar3 = (undefined8 *)((longlong)pauVar45 + uVar43 * 0x48 + 0x10);
            *puVar3 = uVar29;
            puVar3[1] = uVar22;
            *(undefined1 (*) [16])((longlong)pauVar45 + uVar43 * 0x48) = auVar6;
          } while (lVar30 != 0);
          lVar30 = param_1[3];
        }
        lVar37 = *param_1;
        lVar38 = param_1[1];
        *param_1 = (longlong)pauVar45;
        param_1[1] = uVar42;
        param_1[2] = uVar35 - lVar30;
        param_1[3] = lVar30;
        if (lVar38 == 0) {
          return 0x8000000000000001;
        }
        uVar31 = lVar38 * 0x48 + 0x57U & 0xfffffffffffffff0;
        lVar30 = lVar38 + uVar31 + 0x11;
        if (lVar30 == 0) {
          return 0x8000000000000001;
        }
        thunk_FUN_1801d3330(lVar37 - uVar31,lVar30,0x10);
        return 0x8000000000000001;
      }
    }
  }
LAB_1801f7b60:
  uVar29 = FUN_1801ec3c0(param_4);
  return uVar29;
}


