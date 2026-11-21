/* FUN_1801f6d20 @ 1801f6d20 */

undefined8 FUN_1801f6d20(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  void *_Src;
  undefined1 auVar4 [16];
  ushort uVar5;
  char cVar6;
  char cVar7;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte bVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  size_t _Size;
  ulonglong uVar36;
  uint uVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  longlong *plVar42;
  undefined8 uVar43;
  undefined1 (*pauVar44) [16];
  ulonglong uVar45;
  undefined8 uVar46;
  
  uVar24 = param_1[3];
  uVar31 = param_2 + uVar24;
  if (!CARRY8(param_2,uVar24)) {
    uVar39 = param_1[1];
    uVar45 = uVar39 + 1;
    uVar27 = (uVar45 & 0xfffffffffffffff8) - (uVar45 >> 3);
    if (uVar39 < 8) {
      uVar27 = uVar39;
    }
    if (uVar31 <= uVar27 >> 1) {
      if (uVar45 == 0) {
        uVar31 = 0;
      }
      else {
        _Src = (void *)*param_1;
        uVar24 = ((uVar45 >> 4) + 1) - (ulonglong)((uVar45 & 0xf) == 0);
        if (uVar24 == 1) {
          lVar34 = 0;
        }
        else {
          uVar31 = uVar24 & 0x1ffffffffffffffe;
          lVar26 = 0;
          do {
            pcVar1 = (char *)((longlong)_Src + lVar26);
            cVar3 = pcVar1[1];
            cVar6 = pcVar1[2];
            cVar7 = pcVar1[3];
            cVar8 = pcVar1[4];
            cVar9 = pcVar1[5];
            cVar10 = pcVar1[6];
            cVar11 = pcVar1[7];
            cVar12 = pcVar1[8];
            cVar13 = pcVar1[9];
            cVar14 = pcVar1[10];
            cVar15 = pcVar1[0xb];
            cVar16 = pcVar1[0xc];
            cVar17 = pcVar1[0xd];
            cVar18 = pcVar1[0xe];
            cVar19 = pcVar1[0xf];
            pbVar2 = (byte *)((longlong)_Src + lVar26);
            *pbVar2 = -(*pcVar1 < '\0') | 0x80;
            pbVar2[1] = -(cVar3 < '\0') | 0x80;
            pbVar2[2] = -(cVar6 < '\0') | 0x80;
            pbVar2[3] = -(cVar7 < '\0') | 0x80;
            pbVar2[4] = -(cVar8 < '\0') | 0x80;
            pbVar2[5] = -(cVar9 < '\0') | 0x80;
            pbVar2[6] = -(cVar10 < '\0') | 0x80;
            pbVar2[7] = -(cVar11 < '\0') | 0x80;
            pbVar2[8] = -(cVar12 < '\0') | 0x80;
            pbVar2[9] = -(cVar13 < SUB161((undefined1  [16])0x0,9)) | 0x80;
            pbVar2[10] = -(cVar14 < SUB161((undefined1  [16])0x0,10)) | 0x80;
            pbVar2[0xb] = -(cVar15 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
            pbVar2[0xc] = -(cVar16 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
            pbVar2[0xd] = -(cVar17 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
            pbVar2[0xe] = -(cVar18 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
            pbVar2[0xf] = -(cVar19 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
            lVar34 = lVar26 + 0x20;
            pcVar1 = (char *)((longlong)_Src + lVar26 + 0x10);
            cVar3 = pcVar1[1];
            cVar6 = pcVar1[2];
            cVar7 = pcVar1[3];
            cVar8 = pcVar1[4];
            cVar9 = pcVar1[5];
            cVar10 = pcVar1[6];
            cVar11 = pcVar1[7];
            cVar12 = pcVar1[8];
            cVar13 = pcVar1[9];
            cVar14 = pcVar1[10];
            cVar15 = pcVar1[0xb];
            cVar16 = pcVar1[0xc];
            cVar17 = pcVar1[0xd];
            cVar18 = pcVar1[0xe];
            cVar19 = pcVar1[0xf];
            pbVar2 = (byte *)((longlong)_Src + lVar26 + 0x10);
            *pbVar2 = -(*pcVar1 < '\0') | 0x80;
            pbVar2[1] = -(cVar3 < '\0') | 0x80;
            pbVar2[2] = -(cVar6 < '\0') | 0x80;
            pbVar2[3] = -(cVar7 < '\0') | 0x80;
            pbVar2[4] = -(cVar8 < '\0') | 0x80;
            pbVar2[5] = -(cVar9 < '\0') | 0x80;
            pbVar2[6] = -(cVar10 < '\0') | 0x80;
            pbVar2[7] = -(cVar11 < '\0') | 0x80;
            pbVar2[8] = -(cVar12 < '\0') | 0x80;
            pbVar2[9] = -(cVar13 < SUB161((undefined1  [16])0x0,9)) | 0x80;
            pbVar2[10] = -(cVar14 < SUB161((undefined1  [16])0x0,10)) | 0x80;
            pbVar2[0xb] = -(cVar15 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
            pbVar2[0xc] = -(cVar16 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
            pbVar2[0xd] = -(cVar17 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
            pbVar2[0xe] = -(cVar18 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
            pbVar2[0xf] = -(cVar19 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
            uVar31 = uVar31 - 2;
            lVar26 = lVar34;
          } while (uVar31 != 0);
        }
        if ((uVar24 & 1) != 0) {
          pcVar1 = (char *)((longlong)_Src + lVar34);
          cVar3 = pcVar1[1];
          cVar6 = pcVar1[2];
          cVar7 = pcVar1[3];
          cVar8 = pcVar1[4];
          cVar9 = pcVar1[5];
          cVar10 = pcVar1[6];
          cVar11 = pcVar1[7];
          cVar12 = pcVar1[8];
          cVar13 = pcVar1[9];
          cVar14 = pcVar1[10];
          cVar15 = pcVar1[0xb];
          cVar16 = pcVar1[0xc];
          cVar17 = pcVar1[0xd];
          cVar18 = pcVar1[0xe];
          cVar19 = pcVar1[0xf];
          pbVar2 = (byte *)((longlong)_Src + lVar34);
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar3 < '\0') | 0x80;
          pbVar2[2] = -(cVar6 < '\0') | 0x80;
          pbVar2[3] = -(cVar7 < '\0') | 0x80;
          pbVar2[4] = -(cVar8 < '\0') | 0x80;
          pbVar2[5] = -(cVar9 < '\0') | 0x80;
          pbVar2[6] = -(cVar10 < '\0') | 0x80;
          pbVar2[7] = -(cVar11 < '\0') | 0x80;
          pbVar2[8] = -(cVar12 < '\0') | 0x80;
          pbVar2[9] = -(cVar13 < SUB161((undefined1  [16])0x0,9)) | 0x80;
          pbVar2[10] = -(cVar14 < SUB161((undefined1  [16])0x0,10)) | 0x80;
          pbVar2[0xb] = -(cVar15 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
          pbVar2[0xc] = -(cVar16 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
          pbVar2[0xd] = -(cVar17 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
          pbVar2[0xe] = -(cVar18 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
          pbVar2[0xf] = -(cVar19 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
        }
        uVar24 = 0x10;
        if (0x10 < uVar45) {
          uVar24 = uVar45;
        }
        _Size = 0x10;
        if (uVar45 < 0x10) {
          _Size = uVar45;
        }
        memmove((void *)(uVar24 + (longlong)_Src),_Src,_Size);
        uVar24 = 1;
        uVar31 = 0;
        do {
          uVar39 = uVar24;
          lVar26 = *param_1;
          if (SBORROW1('\0',*(char *)(lVar26 + uVar31))) {
            puVar38 = (undefined8 *)(~uVar31 * 0x30 + lVar26);
            while( true ) {
              uVar29 = FUN_1800c93e0(param_3,lVar26 + uVar31 * -0x30 + -0x30);
              pauVar41 = (undefined1 (*) [16])*param_1;
              uVar24 = param_1[1];
              uVar36 = uVar24 & uVar29;
              auVar4 = *(undefined1 (*) [16])(*pauVar41 + uVar36);
              uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
              uVar33 = (uint)uVar5;
              uVar27 = uVar36;
              if (uVar5 == 0) {
                lVar26 = 0x10;
                do {
                  uVar27 = uVar27 + lVar26 & uVar24;
                  auVar4 = *(undefined1 (*) [16])(*pauVar41 + uVar27);
                  lVar26 = lVar26 + 0x10;
                  uVar33 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
                } while (uVar33 == 0);
              }
              uVar37 = 0;
              for (; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                uVar37 = uVar37 + 1;
              }
              uVar27 = uVar37 + uVar27 & uVar24;
              if (-1 < (char)(*pauVar41)[uVar27]) {
                auVar4 = *pauVar41;
                uVar33 = 0;
                for (uVar37 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
                    (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
                  uVar33 = uVar33 + 1;
                }
                uVar27 = (ulonglong)uVar33;
              }
              bVar23 = (byte)(uVar29 >> 0x38);
              if (((uVar27 - uVar36 ^ uVar31 - uVar36) & uVar24) < 0x10) {
                bVar23 = bVar23 >> 1;
                (*pauVar41)[uVar31] = bVar23;
                *(byte *)(*param_1 + 0x10 + (uVar24 & uVar31 - 0x10)) = bVar23;
                goto LAB_1801f7255;
              }
              pauVar44 = pauVar41 + ~uVar27 * 3;
              cVar3 = (*pauVar41)[uVar27];
              bVar23 = bVar23 >> 1;
              (*pauVar41)[uVar27] = bVar23;
              *(byte *)(*param_1 + 0x10 + (uVar27 - 0x10 & uVar24)) = bVar23;
              if (cVar3 == -1) break;
              uVar25 = *puVar38;
              *puVar38 = *(undefined8 *)*pauVar44;
              *(undefined8 *)*pauVar44 = uVar25;
              uVar25 = puVar38[1];
              puVar38[1] = *(undefined8 *)(*pauVar44 + 8);
              *(undefined8 *)(*pauVar44 + 8) = uVar25;
              uVar25 = puVar38[2];
              puVar38[2] = *(undefined8 *)pauVar44[1];
              *(undefined8 *)pauVar44[1] = uVar25;
              uVar25 = puVar38[3];
              puVar38[3] = *(undefined8 *)(pauVar44[1] + 8);
              *(undefined8 *)(pauVar44[1] + 8) = uVar25;
              uVar25 = puVar38[4];
              puVar38[4] = *(undefined8 *)pauVar44[2];
              *(undefined8 *)pauVar44[2] = uVar25;
              uVar25 = puVar38[5];
              puVar38[5] = *(undefined8 *)(pauVar44[2] + 8);
              *(undefined8 *)(pauVar44[2] + 8) = uVar25;
              lVar26 = *param_1;
            }
            uVar24 = param_1[1];
            *(undefined1 *)(*param_1 + uVar31) = 0xff;
            *(undefined1 *)(*param_1 + 0x10 + (uVar31 - 0x10 & uVar24)) = 0xff;
            uVar25 = *puVar38;
            uVar43 = puVar38[1];
            uVar46 = puVar38[2];
            uVar20 = puVar38[3];
            uVar21 = puVar38[5];
            *(undefined8 *)pauVar44[2] = puVar38[4];
            *(undefined8 *)(pauVar44[2] + 8) = uVar21;
            *(undefined8 *)pauVar44[1] = uVar46;
            *(undefined8 *)(pauVar44[1] + 8) = uVar20;
            *(undefined8 *)*pauVar44 = uVar25;
            *(undefined8 *)(*pauVar44 + 8) = uVar43;
          }
LAB_1801f7255:
          uVar24 = uVar39 + (uVar39 < uVar45);
          uVar31 = uVar39;
        } while (uVar39 < uVar45);
        uVar45 = param_1[1];
        uVar24 = param_1[3];
        uVar31 = (uVar45 + 1 & 0xfffffffffffffff8) - (uVar45 + 1 >> 3);
        if (uVar45 < 8) {
          uVar31 = uVar45;
        }
      }
      param_1[2] = uVar31 - uVar24;
      return 0x8000000000000001;
    }
    uVar24 = uVar27 + 1;
    if (uVar27 + 1 <= uVar31) {
      uVar24 = uVar31;
    }
    if (uVar24 < 0xf) {
      uVar31 = 4;
      if (3 < uVar24) {
        uVar31 = (ulonglong)((uint)uVar24 & 8) + 8;
      }
    }
    else {
      if (uVar24 >> 0x3d != 0) goto LAB_1801f6e48;
      uVar24 = (uVar24 * 8) / 7 - 1;
      lVar26 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar31 = (0xffffffffffffffffU >> (~(byte)lVar26 & 0x3f)) + 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar31;
    uVar24 = SUB168(auVar4 * ZEXT816(0x30),0);
    if (SUB168(auVar4 * ZEXT816(0x30),8) == 0) {
      uVar45 = uVar31 + 0x10;
      uVar39 = uVar24 + uVar45;
      if (uVar39 < 0x7ffffffffffffff1 && !CARRY8(uVar24,uVar45)) {
        FUN_180027490();
        uVar25 = 0;
        lVar26 = thunk_FUN_1801d32d0(uVar39,0x10);
        if (lVar26 == 0) {
          uVar25 = FUN_1801ec3f0((char)param_4,0x10,uVar39);
          return uVar25;
        }
        plVar42 = param_1 + 4;
        pauVar41 = (undefined1 (*) [16])(lVar26 + uVar24);
        uVar24 = uVar31 - 1;
        uVar31 = (uVar31 & 0xfffffffffffffff8) - (uVar31 >> 3);
        if (uVar24 < 8) {
          uVar31 = uVar24;
        }
        memset(pauVar41,(int)CONCAT71((int7)((ulonglong)uVar25 >> 8),0xff),uVar45);
        uVar25 = 0x30;
        uVar43 = 0x10;
        uVar46 = 0;
        lVar26 = param_1[3];
        pauVar44 = pauVar41;
        uVar45 = uVar24;
        uVar39 = uVar31;
        if (lVar26 == 0) {
          lVar26 = 0;
        }
        else {
          pauVar40 = (undefined1 (*) [16])*param_1;
          auVar4 = *pauVar40;
          uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
          lVar34 = 0;
          do {
            if ((short)uVar33 == 0) {
              do {
                auVar4 = pauVar40[1];
                pauVar40 = pauVar40 + 1;
                lVar34 = lVar34 + 0x10;
                uVar33 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
              } while (uVar33 == 0xffff);
              uVar33 = ~uVar33;
            }
            uVar37 = 0;
            for (uVar30 = uVar33; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
              uVar37 = uVar37 + 1;
            }
            uVar27 = FUN_1800c93e0(param_3,*param_1 + ((ulonglong)uVar37 + lVar34) * -0x30 + -0x30);
            uVar29 = uVar27 & uVar24;
            auVar4 = *(undefined1 (*) [16])(*pauVar41 + uVar29);
            uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
            uVar30 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar32 = 0x10;
              do {
                uVar29 = uVar29 + lVar32 & uVar24;
                auVar4 = *(undefined1 (*) [16])(*pauVar41 + uVar29);
                lVar32 = lVar32 + 0x10;
                uVar30 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
              } while (uVar30 == 0);
            }
            uVar28 = 0;
            for (; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            uVar29 = uVar28 + uVar29 & uVar24;
            if (-1 < (char)(*pauVar41)[uVar29]) {
              auVar4 = *pauVar41;
              uVar30 = 0;
              for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
                  (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
                uVar30 = uVar30 + 1;
              }
              uVar29 = (ulonglong)uVar30;
            }
            uVar33 = uVar33 - 1 & uVar33;
            lVar26 = lVar26 + -1;
            bVar23 = (byte)(uVar27 >> 0x39);
            (*pauVar41)[uVar29] = bVar23;
            pauVar41[1][uVar29 - 0x10 & uVar24] = bVar23;
            lVar32 = *param_1;
            lVar35 = ~((ulonglong)uVar37 + lVar34) * 0x30;
            uVar29 = ~uVar29;
            auVar4 = *(undefined1 (*) [16])(lVar32 + lVar35);
            puVar38 = (undefined8 *)(lVar32 + 0x10 + lVar35);
            uVar20 = *puVar38;
            uVar21 = puVar38[1];
            puVar38 = (undefined8 *)(lVar32 + 0x20 + lVar35);
            uVar22 = puVar38[1];
            *(undefined8 *)pauVar41[uVar29 * 3 + 2] = *puVar38;
            *(undefined8 *)(pauVar41[uVar29 * 3 + 2] + 8) = uVar22;
            *(undefined8 *)pauVar41[uVar29 * 3 + 1] = uVar20;
            *(undefined8 *)(pauVar41[uVar29 * 3 + 1] + 8) = uVar21;
            pauVar41[uVar29 * 3] = auVar4;
          } while (lVar26 != 0);
          lVar26 = param_1[3];
        }
        lVar34 = *param_1;
        lVar32 = param_1[1];
        *param_1 = (longlong)pauVar41;
        param_1[1] = uVar24;
        param_1[2] = uVar31 - lVar26;
        param_1[3] = lVar26;
        if (lVar32 == 0) {
          return 0x8000000000000001;
        }
        lVar26 = lVar32 * 0x30 + 0x30;
        lVar32 = lVar32 + lVar26 + 0x11;
        if (lVar32 == 0) {
          return 0x8000000000000001;
        }
        thunk_FUN_1801d3330(lVar34 - lVar26,lVar32,0x10,uVar24,plVar42,uVar25,uVar43,pauVar44,uVar45
                            ,uVar39,uVar46);
        return 0x8000000000000001;
      }
    }
  }
LAB_1801f6e48:
  uVar25 = FUN_1801ec3c0(param_4);
  return uVar25;
}


