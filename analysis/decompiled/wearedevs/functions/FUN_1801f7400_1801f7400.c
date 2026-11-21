/* FUN_1801f7400 @ 1801f7400 */

undefined8 FUN_1801f7400(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  char cVar4;
  void *_Src;
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
  byte bVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 (*pauVar30) [16];
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  size_t _Size;
  ulonglong uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulonglong uVar38;
  longlong *plVar39;
  undefined8 uVar40;
  undefined1 (*pauVar41) [16];
  undefined8 uVar42;
  
  uVar26 = param_1[3];
  uVar29 = param_2 + uVar26;
  if (CARRY8(param_2,uVar26)) goto LAB_1801f7537;
  uVar38 = param_1[1];
  uVar31 = uVar38 + 1;
  uVar23 = (uVar31 & 0xfffffffffffffff8) - (uVar31 >> 3);
  if (uVar38 < 8) {
    uVar23 = uVar38;
  }
  if (uVar23 >> 1 < uVar29) {
    uVar26 = uVar23 + 1;
    if (uVar23 + 1 <= uVar29) {
      uVar26 = uVar29;
    }
    if (uVar26 < 0xf) {
      uVar29 = 4;
      if (3 < uVar26) {
        uVar29 = (ulonglong)((uint)uVar26 & 8) + 8;
      }
LAB_1801f750a:
      uVar31 = uVar29 * 8 + 0xf & 0xfffffffffffffff0;
      uVar26 = uVar29 + 0x10;
      uVar38 = uVar31 + uVar26;
      if (uVar38 < 0x7ffffffffffffff1 && !CARRY8(uVar31,uVar26)) {
        FUN_180027490();
        uVar21 = 0;
        lVar22 = thunk_FUN_1801d32d0(uVar38,0x10);
        if (lVar22 == 0) {
          uVar21 = FUN_1801ec3f0(param_4,0x10,uVar38);
          return uVar21;
        }
        plVar39 = param_1 + 4;
        pauVar30 = (undefined1 (*) [16])(lVar22 + uVar31);
        uVar31 = uVar29 - 1;
        uVar29 = (uVar29 & 0xfffffffffffffff8) - (uVar29 >> 3);
        if (uVar31 < 8) {
          uVar29 = uVar31;
        }
        memset(pauVar30,(int)CONCAT71((int7)((ulonglong)uVar21 >> 8),0xff),uVar26);
        uVar21 = 8;
        uVar40 = 0x10;
        uVar42 = 0;
        lVar22 = param_1[3];
        pauVar41 = pauVar30;
        uVar26 = uVar31;
        uVar38 = uVar29;
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          pauVar36 = (undefined1 (*) [16])*param_1;
          auVar3 = *pauVar36;
          uVar37 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          lVar32 = 0;
          do {
            if ((short)uVar37 == 0) {
              do {
                auVar3 = pauVar36[1];
                pauVar36 = pauVar36 + 1;
                lVar32 = lVar32 + 0x10;
                uVar37 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              } while (uVar37 == 0xffff);
              uVar37 = ~uVar37;
            }
            uVar35 = 0;
            for (uVar28 = uVar37; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            uVar23 = FUN_1800c90a0(param_3,*param_1 + ((ulonglong)uVar35 + lVar32) * -8 + -8);
            uVar27 = uVar23 & uVar31;
            auVar3 = *(undefined1 (*) [16])(*pauVar30 + uVar27);
            uVar5 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
            uVar28 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar33 = 0x10;
              do {
                uVar27 = uVar27 + lVar33 & uVar31;
                auVar3 = *(undefined1 (*) [16])(*pauVar30 + uVar27);
                lVar33 = lVar33 + 0x10;
                uVar28 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              } while (uVar28 == 0);
            }
            uVar25 = 0;
            for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
              uVar25 = uVar25 + 1;
            }
            uVar27 = uVar25 + uVar27 & uVar31;
            if (-1 < (char)(*pauVar30)[uVar27]) {
              auVar3 = *pauVar30;
              uVar28 = 0;
              for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
                  (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
                uVar28 = uVar28 + 1;
              }
              uVar27 = (ulonglong)uVar28;
            }
            uVar37 = uVar37 - 1 & uVar37;
            lVar22 = lVar22 + -1;
            bVar20 = (byte)(uVar23 >> 0x39);
            (*pauVar30)[uVar27] = bVar20;
            pauVar30[1][uVar27 - 0x10 & uVar31] = bVar20;
            *(undefined8 *)(*pauVar30 + ~uVar27 * 8) =
                 *(undefined8 *)(*param_1 + ~((ulonglong)uVar35 + lVar32) * 8);
          } while (lVar22 != 0);
          lVar22 = param_1[3];
        }
        lVar32 = *param_1;
        lVar33 = param_1[1];
        *param_1 = (longlong)pauVar30;
        param_1[1] = uVar31;
        param_1[2] = uVar29 - lVar22;
        param_1[3] = lVar22;
        if (lVar33 != 0) {
          uVar29 = lVar33 * 8 + 0x17U & 0xfffffffffffffff0;
          lVar22 = lVar33 + uVar29 + 0x11;
          if (lVar22 != 0) {
            thunk_FUN_1801d3330(lVar32 - uVar29,lVar22,0x10,uVar31,plVar39,uVar21,uVar40,pauVar41,
                                uVar26,uVar38,uVar42);
          }
        }
        goto LAB_1801f7925;
      }
    }
    else if (uVar26 >> 0x3d == 0) {
      uVar26 = (uVar26 * 8) / 7 - 1;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar26 = 0xffffffffffffffff >> (~(byte)lVar22 & 0x3f);
      if (uVar26 < 0x1fffffffffffffff) {
        uVar29 = uVar26 + 1;
        goto LAB_1801f750a;
      }
    }
LAB_1801f7537:
    uVar21 = FUN_1801ec3c0(param_4);
  }
  else {
    if (uVar31 == 0) {
      uVar29 = 0;
    }
    else {
      _Src = (void *)*param_1;
      uVar26 = ((uVar31 >> 4) + 1) - (ulonglong)((uVar31 & 0xf) == 0);
      if (uVar26 == 1) {
        lVar32 = 0;
      }
      else {
        uVar29 = uVar26 & 0x1ffffffffffffffe;
        lVar22 = 0;
        do {
          pcVar1 = (char *)((longlong)_Src + lVar22);
          cVar4 = pcVar1[1];
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
          pbVar2 = (byte *)((longlong)_Src + lVar22);
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar4 < '\0') | 0x80;
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
          lVar32 = lVar22 + 0x20;
          pcVar1 = (char *)((longlong)_Src + lVar22 + 0x10);
          cVar4 = pcVar1[1];
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
          pbVar2 = (byte *)((longlong)_Src + lVar22 + 0x10);
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar4 < '\0') | 0x80;
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
          uVar29 = uVar29 - 2;
          lVar22 = lVar32;
        } while (uVar29 != 0);
      }
      if ((uVar26 & 1) != 0) {
        pcVar1 = (char *)((longlong)_Src + lVar32);
        cVar4 = pcVar1[1];
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
        pbVar2 = (byte *)((longlong)_Src + lVar32);
        *pbVar2 = -(*pcVar1 < '\0') | 0x80;
        pbVar2[1] = -(cVar4 < '\0') | 0x80;
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
      if (0x10 < uVar31) {
        uVar26 = uVar31;
      }
      _Size = 0x10;
      if (uVar31 < 0x10) {
        _Size = uVar31;
      }
      memmove((void *)(uVar26 + (longlong)_Src),_Src,_Size);
      uVar26 = 1;
      uVar29 = 0;
      do {
        uVar38 = uVar26;
        lVar22 = *param_1;
        if (SBORROW1('\0',*(char *)(lVar22 + uVar29))) {
          uVar26 = ~uVar29;
          lVar32 = lVar22;
          while( true ) {
            uVar24 = FUN_1800c90a0(param_3,lVar32 + uVar29 * -8 + -8);
            pauVar30 = (undefined1 (*) [16])*param_1;
            uVar23 = param_1[1];
            uVar34 = uVar23 & uVar24;
            auVar3 = *(undefined1 (*) [16])(*pauVar30 + uVar34);
            uVar5 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
            uVar37 = (uint)uVar5;
            uVar27 = uVar34;
            if (uVar5 == 0) {
              lVar32 = 0x10;
              do {
                uVar27 = uVar27 + lVar32 & uVar23;
                auVar3 = *(undefined1 (*) [16])(*pauVar30 + uVar27);
                lVar32 = lVar32 + 0x10;
                uVar37 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              } while (uVar37 == 0);
            }
            uVar35 = 0;
            for (; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
              uVar35 = uVar35 + 1;
            }
            uVar27 = uVar35 + uVar27 & uVar23;
            if (-1 < (char)(*pauVar30)[uVar27]) {
              auVar3 = *pauVar30;
              uVar37 = 0;
              for (uVar35 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
                  (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
                uVar37 = uVar37 + 1;
              }
              uVar27 = (ulonglong)uVar37;
            }
            bVar20 = (byte)(uVar24 >> 0x38);
            if (((uVar27 - uVar34 ^ uVar29 - uVar34) & uVar23) < 0x10) {
              bVar20 = bVar20 >> 1;
              (*pauVar30)[uVar29] = bVar20;
              *(byte *)(*param_1 + 0x10 + (uVar23 & uVar29 - 0x10)) = bVar20;
              goto LAB_1801f78a8;
            }
            uVar24 = ~uVar27;
            cVar4 = (*pauVar30)[uVar27];
            bVar20 = bVar20 >> 1;
            (*pauVar30)[uVar27] = bVar20;
            *(byte *)(*param_1 + 0x10 + (uVar27 - 0x10 & uVar23)) = bVar20;
            if (cVar4 == -1) break;
            uVar21 = *(undefined8 *)(lVar22 + uVar26 * 8);
            *(undefined8 *)(lVar22 + uVar26 * 8) = *(undefined8 *)(*pauVar30 + uVar24 * 8);
            *(undefined8 *)(*pauVar30 + uVar24 * 8) = uVar21;
            lVar32 = *param_1;
          }
          uVar23 = param_1[1];
          *(undefined1 *)(*param_1 + uVar29) = 0xff;
          *(undefined1 *)(*param_1 + 0x10 + (uVar29 - 0x10 & uVar23)) = 0xff;
          *(undefined8 *)(*pauVar30 + uVar24 * 8) = *(undefined8 *)(lVar22 + uVar26 * 8);
        }
LAB_1801f78a8:
        uVar26 = uVar38 + (uVar38 < uVar31);
        uVar29 = uVar38;
      } while (uVar38 < uVar31);
      uVar31 = param_1[1];
      uVar26 = param_1[3];
      uVar29 = (uVar31 + 1 & 0xfffffffffffffff8) - (uVar31 + 1 >> 3);
      if (uVar31 < 8) {
        uVar29 = uVar31;
      }
    }
    param_1[2] = uVar29 - uVar26;
LAB_1801f7925:
    uVar21 = 0x8000000000000001;
  }
  return uVar21;
}


