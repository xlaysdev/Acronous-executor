/* FUN_1801f8150 @ 1801f8150 */

undefined8 FUN_1801f8150(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

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
  undefined8 uVar23;
  undefined8 uVar24;
  byte bVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  size_t _Size;
  ulonglong uVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  undefined1 (*pauVar43) [16];
  longlong *plVar44;
  undefined8 uVar45;
  undefined1 (*pauVar46) [16];
  ulonglong uVar47;
  undefined8 uVar48;
  
  uVar26 = param_1[3];
  uVar33 = param_2 + uVar26;
  if (!CARRY8(param_2,uVar26)) {
    uVar40 = param_1[1];
    uVar47 = uVar40 + 1;
    uVar29 = (uVar47 & 0xfffffffffffffff8) - (uVar47 >> 3);
    if (uVar40 < 8) {
      uVar29 = uVar40;
    }
    if (uVar33 <= uVar29 >> 1) {
      if (uVar47 == 0) {
        uVar33 = 0;
      }
      else {
        _Src = (void *)*param_1;
        uVar26 = ((uVar47 >> 4) + 1) - (ulonglong)((uVar47 & 0xf) == 0);
        if (uVar26 == 1) {
          lVar36 = 0;
        }
        else {
          uVar33 = uVar26 & 0x1ffffffffffffffe;
          lVar28 = 0;
          do {
            pcVar1 = (char *)((longlong)_Src + lVar28);
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
            pbVar2 = (byte *)((longlong)_Src + lVar28);
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
            lVar36 = lVar28 + 0x20;
            pcVar1 = (char *)((longlong)_Src + lVar28 + 0x10);
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
            pbVar2 = (byte *)((longlong)_Src + lVar28 + 0x10);
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
            uVar33 = uVar33 - 2;
            lVar28 = lVar36;
          } while (uVar33 != 0);
        }
        if ((uVar26 & 1) != 0) {
          pcVar1 = (char *)((longlong)_Src + lVar36);
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
          pbVar2 = (byte *)((longlong)_Src + lVar36);
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
        uVar26 = 0x10;
        if (0x10 < uVar47) {
          uVar26 = uVar47;
        }
        _Size = 0x10;
        if (uVar47 < 0x10) {
          _Size = uVar47;
        }
        memmove((void *)(uVar26 + (longlong)_Src),_Src,_Size);
        uVar26 = 1;
        uVar33 = 0;
        do {
          uVar40 = uVar26;
          lVar28 = *param_1;
          if (SBORROW1('\0',*(char *)(lVar28 + uVar33))) {
            puVar42 = (undefined8 *)(~uVar33 * 0x50 + lVar28);
            while( true ) {
              uVar31 = FUN_1800c93e0(param_3,lVar28 + uVar33 * -0x50 + -0x50);
              pauVar43 = (undefined1 (*) [16])*param_1;
              uVar26 = param_1[1];
              uVar38 = uVar26 & uVar31;
              auVar4 = *(undefined1 (*) [16])(*pauVar43 + uVar38);
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
              uVar35 = (uint)uVar5;
              uVar29 = uVar38;
              if (uVar5 == 0) {
                lVar28 = 0x10;
                do {
                  uVar29 = uVar29 + lVar28 & uVar26;
                  auVar4 = *(undefined1 (*) [16])(*pauVar43 + uVar29);
                  lVar28 = lVar28 + 0x10;
                  uVar35 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
                } while (uVar35 == 0);
              }
              uVar39 = 0;
              for (; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
                uVar39 = uVar39 + 1;
              }
              uVar29 = uVar39 + uVar29 & uVar26;
              if (-1 < (char)(*pauVar43)[uVar29]) {
                auVar4 = *pauVar43;
                uVar35 = 0;
                for (uVar39 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
                    (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                  uVar35 = uVar35 + 1;
                }
                uVar29 = (ulonglong)uVar35;
              }
              bVar25 = (byte)(uVar31 >> 0x38);
              if (((uVar29 - uVar38 ^ uVar33 - uVar38) & uVar26) < 0x10) {
                bVar25 = bVar25 >> 1;
                (*pauVar43)[uVar33] = bVar25;
                *(byte *)(*param_1 + 0x10 + (uVar26 & uVar33 - 0x10)) = bVar25;
                goto LAB_1801f86c7;
              }
              pauVar46 = pauVar43 + ~uVar29 * 5;
              cVar3 = (*pauVar43)[uVar29];
              bVar25 = bVar25 >> 1;
              (*pauVar43)[uVar29] = bVar25;
              *(byte *)(*param_1 + 0x10 + (uVar29 - 0x10 & uVar26)) = bVar25;
              if (cVar3 == -1) break;
              uVar27 = *puVar42;
              *puVar42 = *(undefined8 *)*pauVar46;
              *(undefined8 *)*pauVar46 = uVar27;
              uVar27 = puVar42[1];
              puVar42[1] = *(undefined8 *)(*pauVar46 + 8);
              *(undefined8 *)(*pauVar46 + 8) = uVar27;
              uVar27 = puVar42[2];
              puVar42[2] = *(undefined8 *)pauVar46[1];
              *(undefined8 *)pauVar46[1] = uVar27;
              uVar27 = puVar42[3];
              puVar42[3] = *(undefined8 *)(pauVar46[1] + 8);
              *(undefined8 *)(pauVar46[1] + 8) = uVar27;
              uVar27 = puVar42[4];
              puVar42[4] = *(undefined8 *)pauVar46[2];
              *(undefined8 *)pauVar46[2] = uVar27;
              uVar27 = puVar42[5];
              puVar42[5] = *(undefined8 *)(pauVar46[2] + 8);
              *(undefined8 *)(pauVar46[2] + 8) = uVar27;
              uVar27 = puVar42[6];
              puVar42[6] = *(undefined8 *)pauVar46[3];
              *(undefined8 *)pauVar46[3] = uVar27;
              uVar27 = puVar42[7];
              puVar42[7] = *(undefined8 *)(pauVar46[3] + 8);
              *(undefined8 *)(pauVar46[3] + 8) = uVar27;
              uVar27 = puVar42[8];
              puVar42[8] = *(undefined8 *)pauVar46[4];
              *(undefined8 *)pauVar46[4] = uVar27;
              uVar27 = puVar42[9];
              puVar42[9] = *(undefined8 *)(pauVar46[4] + 8);
              *(undefined8 *)(pauVar46[4] + 8) = uVar27;
              lVar28 = *param_1;
            }
            uVar26 = param_1[1];
            *(undefined1 *)(*param_1 + uVar33) = 0xff;
            *(undefined1 *)(*param_1 + 0x10 + (uVar33 - 0x10 & uVar26)) = 0xff;
            uVar27 = puVar42[9];
            *(undefined8 *)pauVar46[4] = puVar42[8];
            *(undefined8 *)(pauVar46[4] + 8) = uVar27;
            uVar27 = *puVar42;
            uVar45 = puVar42[1];
            uVar48 = puVar42[2];
            uVar20 = puVar42[3];
            uVar21 = puVar42[4];
            uVar22 = puVar42[5];
            uVar23 = puVar42[7];
            *(undefined8 *)pauVar46[3] = puVar42[6];
            *(undefined8 *)(pauVar46[3] + 8) = uVar23;
            *(undefined8 *)pauVar46[2] = uVar21;
            *(undefined8 *)(pauVar46[2] + 8) = uVar22;
            *(undefined8 *)pauVar46[1] = uVar48;
            *(undefined8 *)(pauVar46[1] + 8) = uVar20;
            *(undefined8 *)*pauVar46 = uVar27;
            *(undefined8 *)(*pauVar46 + 8) = uVar45;
          }
LAB_1801f86c7:
          uVar26 = uVar40 + (uVar40 < uVar47);
          uVar33 = uVar40;
        } while (uVar40 < uVar47);
        uVar47 = param_1[1];
        uVar26 = param_1[3];
        uVar33 = (uVar47 + 1 & 0xfffffffffffffff8) - (uVar47 + 1 >> 3);
        if (uVar47 < 8) {
          uVar33 = uVar47;
        }
      }
      param_1[2] = uVar33 - uVar26;
      return 0x8000000000000001;
    }
    uVar26 = uVar29 + 1;
    if (uVar29 + 1 <= uVar33) {
      uVar26 = uVar33;
    }
    if (uVar26 < 0xf) {
      uVar33 = 4;
      if (3 < uVar26) {
        uVar33 = (ulonglong)((uint)uVar26 & 8) + 8;
      }
    }
    else {
      if (uVar26 >> 0x3d != 0) goto LAB_1801f8278;
      uVar26 = (uVar26 * 8) / 7 - 1;
      lVar28 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar33 = (0xffffffffffffffffU >> (~(byte)lVar28 & 0x3f)) + 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar33;
    uVar26 = SUB168(auVar4 * ZEXT816(0x50),0);
    if (SUB168(auVar4 * ZEXT816(0x50),8) == 0) {
      uVar47 = uVar33 + 0x10;
      uVar40 = uVar26 + uVar47;
      if (uVar40 < 0x7ffffffffffffff1 && !CARRY8(uVar26,uVar47)) {
        FUN_180027490();
        uVar27 = 0;
        lVar28 = thunk_FUN_1801d32d0(uVar40,0x10);
        if (lVar28 == 0) {
          uVar27 = FUN_1801ec3f0((char)param_4,0x10,uVar40);
          return uVar27;
        }
        plVar44 = param_1 + 4;
        pauVar43 = (undefined1 (*) [16])(lVar28 + uVar26);
        uVar26 = uVar33 - 1;
        uVar33 = (uVar33 & 0xfffffffffffffff8) - (uVar33 >> 3);
        if (uVar26 < 8) {
          uVar33 = uVar26;
        }
        memset(pauVar43,(int)CONCAT71((int7)((ulonglong)uVar27 >> 8),0xff),uVar47);
        uVar27 = 0x50;
        uVar45 = 0x10;
        uVar48 = 0;
        lVar28 = param_1[3];
        pauVar46 = pauVar43;
        uVar47 = uVar26;
        uVar40 = uVar33;
        if (lVar28 == 0) {
          lVar28 = 0;
        }
        else {
          pauVar41 = (undefined1 (*) [16])*param_1;
          auVar4 = *pauVar41;
          uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
          lVar36 = 0;
          do {
            if ((short)uVar35 == 0) {
              do {
                auVar4 = pauVar41[1];
                pauVar41 = pauVar41 + 1;
                lVar36 = lVar36 + 0x10;
                uVar35 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
              } while (uVar35 == 0xffff);
              uVar35 = ~uVar35;
            }
            uVar39 = 0;
            for (uVar32 = uVar35; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              uVar39 = uVar39 + 1;
            }
            uVar29 = FUN_1800c93e0(param_3,*param_1 + ((ulonglong)uVar39 + lVar36) * -0x50 + -0x50);
            uVar31 = uVar29 & uVar26;
            auVar4 = *(undefined1 (*) [16])(*pauVar43 + uVar31);
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
            uVar32 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar34 = 0x10;
              do {
                uVar31 = uVar31 + lVar34 & uVar26;
                auVar4 = *(undefined1 (*) [16])(*pauVar43 + uVar31);
                lVar34 = lVar34 + 0x10;
                uVar32 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
              } while (uVar32 == 0);
            }
            uVar30 = 0;
            for (; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              uVar30 = uVar30 + 1;
            }
            uVar31 = uVar30 + uVar31 & uVar26;
            if (-1 < (char)(*pauVar43)[uVar31]) {
              auVar4 = *pauVar43;
              uVar32 = 0;
              for (uVar30 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
                  (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
                uVar32 = uVar32 + 1;
              }
              uVar31 = (ulonglong)uVar32;
            }
            uVar35 = uVar35 - 1 & uVar35;
            lVar28 = lVar28 + -1;
            bVar25 = (byte)(uVar29 >> 0x39);
            (*pauVar43)[uVar31] = bVar25;
            pauVar43[1][uVar31 - 0x10 & uVar26] = bVar25;
            lVar34 = *param_1;
            lVar37 = ~((ulonglong)uVar39 + lVar36) * 0x50;
            uVar31 = ~uVar31;
            puVar42 = (undefined8 *)(lVar34 + 0x40 + lVar37);
            uVar20 = puVar42[1];
            *(undefined8 *)pauVar43[uVar31 * 5 + 4] = *puVar42;
            *(undefined8 *)(pauVar43[uVar31 * 5 + 4] + 8) = uVar20;
            auVar4 = *(undefined1 (*) [16])(lVar34 + lVar37);
            puVar42 = (undefined8 *)(lVar34 + 0x10 + lVar37);
            uVar20 = *puVar42;
            uVar21 = puVar42[1];
            puVar42 = (undefined8 *)(lVar34 + 0x20 + lVar37);
            uVar22 = *puVar42;
            uVar23 = puVar42[1];
            puVar42 = (undefined8 *)(lVar34 + 0x30 + lVar37);
            uVar24 = puVar42[1];
            *(undefined8 *)pauVar43[uVar31 * 5 + 3] = *puVar42;
            *(undefined8 *)(pauVar43[uVar31 * 5 + 3] + 8) = uVar24;
            *(undefined8 *)pauVar43[uVar31 * 5 + 2] = uVar22;
            *(undefined8 *)(pauVar43[uVar31 * 5 + 2] + 8) = uVar23;
            *(undefined8 *)pauVar43[uVar31 * 5 + 1] = uVar20;
            *(undefined8 *)(pauVar43[uVar31 * 5 + 1] + 8) = uVar21;
            pauVar43[uVar31 * 5] = auVar4;
          } while (lVar28 != 0);
          lVar28 = param_1[3];
        }
        lVar36 = *param_1;
        lVar34 = param_1[1];
        *param_1 = (longlong)pauVar43;
        param_1[1] = uVar26;
        param_1[2] = uVar33 - lVar28;
        param_1[3] = lVar28;
        if (lVar34 == 0) {
          return 0x8000000000000001;
        }
        lVar28 = lVar34 * 0x50 + 0x50;
        lVar34 = lVar34 + lVar28 + 0x11;
        if (lVar34 == 0) {
          return 0x8000000000000001;
        }
        thunk_FUN_1801d3330(lVar36 - lVar28,lVar34,0x10,uVar26,plVar44,uVar27,uVar45,pauVar46,uVar47
                            ,uVar40,uVar48);
        return 0x8000000000000001;
      }
    }
  }
LAB_1801f8278:
  uVar27 = FUN_1801ec3c0(param_4);
  return uVar27;
}


