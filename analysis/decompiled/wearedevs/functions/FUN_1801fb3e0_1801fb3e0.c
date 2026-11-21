/* FUN_1801fb3e0 @ 1801fb3e0 */

undefined8
FUN_1801fb3e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  char cVar4;
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
  byte bVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  size_t _Size;
  ulonglong uVar38;
  uint uVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined1 (*local_70) [16];
  
  uVar23 = param_1[3];
  uVar31 = param_2 + uVar23;
  if (CARRY8(param_2,uVar23)) goto LAB_1801fb505;
  uVar26 = param_1[1];
  uVar28 = uVar26 + 1;
  uVar36 = (uVar28 & 0xfffffffffffffff8) - (uVar28 >> 3);
  if (uVar26 < 8) {
    uVar36 = uVar26;
  }
  if (uVar31 <= uVar36 >> 1) {
    if (uVar28 == 0) {
      uVar31 = 0;
    }
    else {
      pauVar41 = (undefined1 (*) [16])*param_1;
      uVar23 = ((uVar28 >> 4) + 1) - (ulonglong)((uVar28 & 0xf) == 0);
      if (uVar23 == 1) {
        lVar35 = 0;
      }
      else {
        uVar31 = uVar23 & 0x1ffffffffffffffe;
        lVar25 = 0;
        do {
          pcVar1 = *pauVar41 + lVar25;
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
          pbVar2 = *pauVar41 + lVar25;
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
          lVar35 = lVar25 + 0x20;
          pcVar1 = pauVar41[1] + lVar25;
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
          pbVar2 = pauVar41[1] + lVar25;
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
          uVar31 = uVar31 - 2;
          lVar25 = lVar35;
        } while (uVar31 != 0);
      }
      if ((uVar23 & 1) != 0) {
        pcVar1 = *pauVar41 + lVar35;
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
        pbVar2 = *pauVar41 + lVar35;
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
      uVar23 = uVar28;
      _Size = 0x10;
      if (uVar28 < 0x10) {
        uVar23 = 0x10;
        _Size = uVar28;
      }
      memmove(*pauVar41 + uVar23,pauVar41,_Size);
      uVar23 = 1;
      uVar31 = 0;
      do {
        uVar26 = uVar23;
        pauVar34 = pauVar41;
        if (SBORROW1('\0',(*pauVar41)[uVar31])) {
          pauVar40 = pauVar41 + uVar31 * -2 + -2;
          pauVar33 = pauVar41;
          while( true ) {
            uVar38 = FUN_180180360(param_3,pauVar33 + uVar31 * -2 + -2);
            uVar23 = param_1[1];
            uVar29 = uVar23 & uVar38;
            auVar3 = *(undefined1 (*) [16])(*pauVar33 + uVar29);
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
            uVar39 = (uint)uVar5;
            uVar36 = uVar29;
            if (uVar5 == 0) {
              lVar25 = 0x10;
              do {
                uVar36 = uVar36 + lVar25 & uVar23;
                auVar3 = *(undefined1 (*) [16])(*pauVar33 + uVar36);
                lVar25 = lVar25 + 0x10;
                uVar39 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
              } while (uVar39 == 0);
            }
            uVar30 = 0;
            for (; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
              uVar30 = uVar30 + 1;
            }
            uVar36 = uVar30 + uVar36 & uVar23;
            if (-1 < (char)(*pauVar33)[uVar36]) {
              auVar3 = *pauVar33;
              uVar39 = 0;
              for (uVar30 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                  (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
                uVar39 = uVar39 + 1;
              }
              uVar36 = (ulonglong)uVar39;
            }
            bVar22 = (byte)(uVar38 >> 0x38);
            if (((uVar36 - uVar29 ^ uVar31 - uVar29) & uVar23) < 0x10) {
              bVar22 = bVar22 >> 1;
              (*pauVar33)[uVar31] = bVar22;
              pauVar34 = (undefined1 (*) [16])*param_1;
              pauVar34[1][uVar23 & uVar31 - 0x10] = bVar22;
              goto LAB_1801fb885;
            }
            pauVar32 = pauVar33 + uVar36 * -2 + -2;
            cVar4 = (*pauVar33)[uVar36];
            bVar22 = bVar22 >> 1;
            (*pauVar33)[uVar36] = bVar22;
            pauVar34 = (undefined1 (*) [16])*param_1;
            pauVar34[1][uVar36 - 0x10 & uVar23] = bVar22;
            if (cVar4 == -1) break;
            uVar24 = *(undefined8 *)*pauVar40;
            *(undefined8 *)*pauVar40 = *(undefined8 *)*pauVar32;
            *(undefined8 *)*pauVar32 = uVar24;
            uVar24 = *(undefined8 *)(pauVar41[uVar31 * -2 + -2] + 8);
            *(undefined8 *)(pauVar41[uVar31 * -2 + -2] + 8) =
                 *(undefined8 *)(pauVar33[uVar36 * -2 + -2] + 8);
            *(undefined8 *)(pauVar33[uVar36 * -2 + -2] + 8) = uVar24;
            uVar24 = *(undefined8 *)pauVar41[uVar31 * -2 + -1];
            *(undefined8 *)pauVar41[uVar31 * -2 + -1] = *(undefined8 *)pauVar33[uVar36 * -2 + -1];
            *(undefined8 *)pauVar33[uVar36 * -2 + -1] = uVar24;
            uVar24 = *(undefined8 *)(pauVar41[uVar31 * -2 + -1] + 8);
            *(undefined8 *)(pauVar41[uVar31 * -2 + -1] + 8) =
                 *(undefined8 *)(pauVar33[uVar36 * -2 + -1] + 8);
            *(undefined8 *)(pauVar33[uVar36 * -2 + -1] + 8) = uVar24;
            pauVar33 = (undefined1 (*) [16])*param_1;
          }
          uVar23 = param_1[1];
          (*pauVar34)[uVar31] = 0xff;
          pauVar34[1][uVar31 - 0x10 & uVar23] = 0xff;
          uVar24 = *(undefined8 *)*pauVar40;
          uVar20 = *(undefined8 *)(pauVar41[uVar31 * -2 + -2] + 8);
          uVar21 = *(undefined8 *)(pauVar41[uVar31 * -2 + -1] + 8);
          *(undefined8 *)pauVar33[uVar36 * -2 + -1] = *(undefined8 *)pauVar41[uVar31 * -2 + -1];
          *(undefined8 *)(pauVar33[uVar36 * -2 + -1] + 8) = uVar21;
          *(undefined8 *)*pauVar32 = uVar24;
          *(undefined8 *)(pauVar33[uVar36 * -2 + -2] + 8) = uVar20;
        }
LAB_1801fb885:
        uVar23 = uVar26 + (uVar26 < uVar28);
        pauVar41 = pauVar34;
        uVar31 = uVar26;
      } while (uVar26 < uVar28);
      uVar28 = param_1[1];
      uVar23 = param_1[3];
      uVar31 = (uVar28 + 1 & 0xfffffffffffffff8) - (uVar28 + 1 >> 3);
      if (uVar28 < 8) {
        uVar31 = uVar28;
      }
    }
    param_1[2] = uVar31 - uVar23;
    return 0x8000000000000001;
  }
  uVar28 = uVar36 + 1;
  if (uVar36 + 1 <= uVar31) {
    uVar28 = uVar31;
  }
  if (uVar28 < 0xf) {
    uVar31 = 4;
    if (3 < uVar28) {
      uVar31 = (ulonglong)((uint)uVar28 & 8) + 8;
    }
  }
  else {
    if (uVar28 >> 0x3d != 0) goto LAB_1801fb505;
    uVar31 = (uVar28 * 8) / 7 - 1;
    lVar25 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar31 = 0xffffffffffffffff >> (~(byte)lVar25 & 0x3f);
    if (0x7fffffffffffffe < uVar31) goto LAB_1801fb505;
    uVar31 = uVar31 + 1;
  }
  uVar36 = uVar31 * 0x20;
  uVar28 = uVar31 + 0x10;
  uVar38 = uVar28 + uVar36;
  if (uVar38 < 0x7ffffffffffffff1 && !CARRY8(uVar28,uVar36)) {
    FUN_180027490();
    uVar24 = 0;
    lVar25 = thunk_FUN_1801d32d0(uVar38,0x10);
    if (lVar25 == 0) {
      uVar24 = FUN_1801ec3f0((char)param_4,0x10,uVar38);
      return uVar24;
    }
    pauVar41 = (undefined1 (*) [16])(lVar25 + uVar36);
    memset(pauVar41,(int)CONCAT71((int7)((ulonglong)uVar24 >> 8),0xff),uVar28);
    uVar28 = uVar31 - 1;
    uVar31 = (uVar31 & 0xfffffffffffffff8) - (uVar31 >> 3);
    if (uVar28 < 8) {
      uVar31 = uVar28;
    }
    if (uVar23 == 0) {
      local_70 = (undefined1 (*) [16])*param_1;
    }
    else {
      local_70 = (undefined1 (*) [16])*param_1;
      auVar3 = *local_70;
      uVar39 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
      lVar25 = 0;
      uVar36 = uVar23;
      pauVar34 = local_70;
      do {
        if ((short)uVar39 == 0) {
          do {
            auVar3 = pauVar34[1];
            pauVar34 = pauVar34 + 1;
            lVar25 = lVar25 + 0x10;
            uVar39 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar39 == 0xffff);
          uVar39 = ~uVar39;
        }
        uVar30 = 0;
        for (uVar27 = uVar39; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar30 = uVar30 + 1;
        }
        lVar35 = (ulonglong)uVar30 + lVar25;
        uVar38 = FUN_180180360(param_3,local_70 + lVar35 * -2 + -2);
        uVar29 = uVar38 & uVar28;
        auVar3 = *(undefined1 (*) [16])(*pauVar41 + uVar29);
        uVar5 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
        uVar30 = (uint)uVar5;
        if (uVar5 == 0) {
          lVar37 = 0x10;
          do {
            uVar29 = uVar29 + lVar37 & uVar28;
            auVar3 = *(undefined1 (*) [16])(*pauVar41 + uVar29);
            lVar37 = lVar37 + 0x10;
            uVar30 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar30 == 0);
        }
        uVar27 = 0;
        for (; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        uVar29 = uVar27 + uVar29 & uVar28;
        if (-1 < (char)(*pauVar41)[uVar29]) {
          auVar3 = *pauVar41;
          uVar30 = 0;
          for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf); (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x80000000) {
            uVar30 = uVar30 + 1;
          }
          uVar29 = (ulonglong)uVar30;
        }
        uVar39 = uVar39 - 1 & uVar39;
        uVar36 = uVar36 - 1;
        bVar22 = (byte)(uVar38 >> 0x39);
        (*pauVar41)[uVar29] = bVar22;
        pauVar41[1][uVar29 - 0x10 & uVar28] = bVar22;
        uVar24 = *(undefined8 *)local_70[lVar35 * -2 + -1];
        uVar20 = *(undefined8 *)(local_70[lVar35 * -2 + -1] + 8);
        pauVar41[uVar29 * -2 + -2] = local_70[lVar35 * -2 + -2];
        *(undefined8 *)pauVar41[uVar29 * -2 + -1] = uVar24;
        *(undefined8 *)(pauVar41[uVar29 * -2 + -1] + 8) = uVar20;
      } while (uVar36 != 0);
    }
    *param_1 = pauVar41;
    param_1[1] = uVar28;
    param_1[2] = uVar31 - uVar23;
    if (uVar26 == 0) {
      return 0x8000000000000001;
    }
    lVar25 = uVar26 * 0x20 + 0x20;
    lVar35 = uVar26 + lVar25 + 0x11;
    if (lVar35 == 0) {
      return 0x8000000000000001;
    }
    thunk_FUN_1801d3330((longlong)local_70 - lVar25,lVar35,0x10);
    return 0x8000000000000001;
  }
LAB_1801fb505:
  uVar24 = FUN_1801ec3c0(param_4);
  return uVar24;
}


