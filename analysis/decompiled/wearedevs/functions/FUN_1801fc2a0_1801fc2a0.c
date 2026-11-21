/* FUN_1801fc2a0 @ 1801fc2a0 */

undefined8
FUN_1801fc2a0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  char cVar4;
  ulonglong uVar5;
  ushort uVar6;
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
  char cVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  ulonglong uVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  size_t _Size;
  undefined1 (*pauVar33) [16];
  byte bVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  ulonglong uVar39;
  bool bVar40;
  longlong local_50;
  
  uVar23 = param_1[3];
  uVar28 = param_2 + uVar23;
  if (CARRY8(param_2,uVar23)) goto LAB_1801fc3c0;
  uVar5 = param_1[1];
  uVar26 = uVar5 + 1;
  uVar36 = (uVar26 & 0xfffffffffffffff8) - (uVar26 >> 3);
  if (uVar5 < 8) {
    uVar36 = uVar5;
  }
  if (uVar28 <= uVar36 >> 1) {
    if (uVar26 == 0) {
      uVar28 = 0;
    }
    else {
      pauVar29 = (undefined1 (*) [16])*param_1;
      uVar23 = ((uVar26 >> 4) + 1) - (ulonglong)((uVar26 & 0xf) == 0);
      if (uVar23 == 1) {
        lVar37 = 0;
      }
      else {
        uVar28 = uVar23 & 0x1ffffffffffffffe;
        lVar25 = 0;
        do {
          pcVar1 = *pauVar29 + lVar25;
          cVar4 = pcVar1[1];
          cVar7 = pcVar1[2];
          cVar8 = pcVar1[3];
          cVar9 = pcVar1[4];
          cVar10 = pcVar1[5];
          cVar11 = pcVar1[6];
          cVar12 = pcVar1[7];
          cVar13 = pcVar1[8];
          cVar14 = pcVar1[9];
          cVar15 = pcVar1[10];
          cVar16 = pcVar1[0xb];
          cVar17 = pcVar1[0xc];
          cVar18 = pcVar1[0xd];
          cVar19 = pcVar1[0xe];
          cVar20 = pcVar1[0xf];
          pbVar2 = *pauVar29 + lVar25;
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar4 < '\0') | 0x80;
          pbVar2[2] = -(cVar7 < '\0') | 0x80;
          pbVar2[3] = -(cVar8 < '\0') | 0x80;
          pbVar2[4] = -(cVar9 < '\0') | 0x80;
          pbVar2[5] = -(cVar10 < '\0') | 0x80;
          pbVar2[6] = -(cVar11 < '\0') | 0x80;
          pbVar2[7] = -(cVar12 < '\0') | 0x80;
          pbVar2[8] = -(cVar13 < '\0') | 0x80;
          pbVar2[9] = -(cVar14 < SUB161((undefined1  [16])0x0,9)) | 0x80;
          pbVar2[10] = -(cVar15 < SUB161((undefined1  [16])0x0,10)) | 0x80;
          pbVar2[0xb] = -(cVar16 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
          pbVar2[0xc] = -(cVar17 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
          pbVar2[0xd] = -(cVar18 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
          pbVar2[0xe] = -(cVar19 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
          pbVar2[0xf] = -(cVar20 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
          lVar37 = lVar25 + 0x20;
          pcVar1 = pauVar29[1] + lVar25;
          cVar4 = pcVar1[1];
          cVar7 = pcVar1[2];
          cVar8 = pcVar1[3];
          cVar9 = pcVar1[4];
          cVar10 = pcVar1[5];
          cVar11 = pcVar1[6];
          cVar12 = pcVar1[7];
          cVar13 = pcVar1[8];
          cVar14 = pcVar1[9];
          cVar15 = pcVar1[10];
          cVar16 = pcVar1[0xb];
          cVar17 = pcVar1[0xc];
          cVar18 = pcVar1[0xd];
          cVar19 = pcVar1[0xe];
          cVar20 = pcVar1[0xf];
          pbVar2 = pauVar29[1] + lVar25;
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar4 < '\0') | 0x80;
          pbVar2[2] = -(cVar7 < '\0') | 0x80;
          pbVar2[3] = -(cVar8 < '\0') | 0x80;
          pbVar2[4] = -(cVar9 < '\0') | 0x80;
          pbVar2[5] = -(cVar10 < '\0') | 0x80;
          pbVar2[6] = -(cVar11 < '\0') | 0x80;
          pbVar2[7] = -(cVar12 < '\0') | 0x80;
          pbVar2[8] = -(cVar13 < '\0') | 0x80;
          pbVar2[9] = -(cVar14 < SUB161((undefined1  [16])0x0,9)) | 0x80;
          pbVar2[10] = -(cVar15 < SUB161((undefined1  [16])0x0,10)) | 0x80;
          pbVar2[0xb] = -(cVar16 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
          pbVar2[0xc] = -(cVar17 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
          pbVar2[0xd] = -(cVar18 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
          pbVar2[0xe] = -(cVar19 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
          pbVar2[0xf] = -(cVar20 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
          uVar28 = uVar28 - 2;
          lVar25 = lVar37;
        } while (uVar28 != 0);
      }
      if ((uVar23 & 1) != 0) {
        pcVar1 = *pauVar29 + lVar37;
        cVar4 = pcVar1[1];
        cVar7 = pcVar1[2];
        cVar8 = pcVar1[3];
        cVar9 = pcVar1[4];
        cVar10 = pcVar1[5];
        cVar11 = pcVar1[6];
        cVar12 = pcVar1[7];
        cVar13 = pcVar1[8];
        cVar14 = pcVar1[9];
        cVar15 = pcVar1[10];
        cVar16 = pcVar1[0xb];
        cVar17 = pcVar1[0xc];
        cVar18 = pcVar1[0xd];
        cVar19 = pcVar1[0xe];
        cVar20 = pcVar1[0xf];
        pbVar2 = *pauVar29 + lVar37;
        *pbVar2 = -(*pcVar1 < '\0') | 0x80;
        pbVar2[1] = -(cVar4 < '\0') | 0x80;
        pbVar2[2] = -(cVar7 < '\0') | 0x80;
        pbVar2[3] = -(cVar8 < '\0') | 0x80;
        pbVar2[4] = -(cVar9 < '\0') | 0x80;
        pbVar2[5] = -(cVar10 < '\0') | 0x80;
        pbVar2[6] = -(cVar11 < '\0') | 0x80;
        pbVar2[7] = -(cVar12 < '\0') | 0x80;
        pbVar2[8] = -(cVar13 < '\0') | 0x80;
        pbVar2[9] = -(cVar14 < SUB161((undefined1  [16])0x0,9)) | 0x80;
        pbVar2[10] = -(cVar15 < SUB161((undefined1  [16])0x0,10)) | 0x80;
        pbVar2[0xb] = -(cVar16 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
        pbVar2[0xc] = -(cVar17 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
        pbVar2[0xd] = -(cVar18 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
        pbVar2[0xe] = -(cVar19 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
        pbVar2[0xf] = -(cVar20 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
      }
      uVar23 = uVar26;
      _Size = 0x10;
      if (uVar26 < 0x10) {
        uVar23 = 0x10;
        _Size = uVar26;
      }
      memmove(*pauVar29 + uVar23,pauVar29,_Size);
      uVar23 = 0;
      uVar28 = 1;
      do {
        pauVar27 = pauVar29;
        if (SBORROW1('\0',(*pauVar29)[uVar23])) {
          pauVar33 = pauVar29 + uVar23 * -2 + -2;
          pauVar32 = pauVar29;
          while( true ) {
            uVar5 = param_1[1];
            uVar39 = uVar5 & *(ulonglong *)(pauVar32[uVar23 * -2 + -2] + 8);
            auVar3 = *(undefined1 (*) [16])(*pauVar32 + uVar39);
            uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
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
            uVar35 = (uint)uVar6;
            uVar36 = uVar39;
            if (uVar6 == 0) {
              lVar25 = 0x10;
              do {
                uVar36 = uVar36 + lVar25 & uVar5;
                auVar3 = *(undefined1 (*) [16])(*pauVar32 + uVar36);
                lVar25 = lVar25 + 0x10;
                uVar35 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
              } while (uVar35 == 0);
            }
            uVar31 = 0;
            for (; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            uVar36 = uVar31 + uVar36 & uVar5;
            if (-1 < (char)(*pauVar32)[uVar36]) {
              auVar3 = *pauVar32;
              uVar35 = 0;
              for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                  (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar36 = (ulonglong)uVar35;
            }
            bVar34 = (byte)(*(ulonglong *)(pauVar32[uVar23 * -2 + -2] + 8) >> 0x38);
            if (((uVar36 - uVar39 ^ uVar23 - uVar39) & uVar5) < 0x10) {
              bVar34 = bVar34 >> 1;
              (*pauVar32)[uVar23] = bVar34;
              pauVar27 = (undefined1 (*) [16])*param_1;
              pauVar27[1][uVar5 & uVar23 - 0x10] = bVar34;
              goto LAB_1801fc727;
            }
            pauVar38 = pauVar32 + uVar36 * -2 + -2;
            cVar4 = (*pauVar32)[uVar36];
            bVar34 = bVar34 >> 1;
            (*pauVar32)[uVar36] = bVar34;
            pauVar27 = (undefined1 (*) [16])*param_1;
            pauVar27[1][uVar36 - 0x10 & uVar5] = bVar34;
            if (cVar4 == -1) break;
            uVar24 = *(undefined8 *)*pauVar33;
            *(undefined8 *)*pauVar33 = *(undefined8 *)*pauVar38;
            *(undefined8 *)*pauVar38 = uVar24;
            uVar24 = *(undefined8 *)(pauVar29[uVar23 * -2 + -2] + 8);
            *(undefined8 *)(pauVar29[uVar23 * -2 + -2] + 8) =
                 *(undefined8 *)(pauVar32[uVar36 * -2 + -2] + 8);
            *(undefined8 *)(pauVar32[uVar36 * -2 + -2] + 8) = uVar24;
            uVar24 = *(undefined8 *)pauVar29[uVar23 * -2 + -1];
            *(undefined8 *)pauVar29[uVar23 * -2 + -1] = *(undefined8 *)pauVar32[uVar36 * -2 + -1];
            *(undefined8 *)pauVar32[uVar36 * -2 + -1] = uVar24;
            uVar24 = *(undefined8 *)(pauVar29[uVar23 * -2 + -1] + 8);
            *(undefined8 *)(pauVar29[uVar23 * -2 + -1] + 8) =
                 *(undefined8 *)(pauVar32[uVar36 * -2 + -1] + 8);
            *(undefined8 *)(pauVar32[uVar36 * -2 + -1] + 8) = uVar24;
            pauVar32 = (undefined1 (*) [16])*param_1;
          }
          uVar5 = param_1[1];
          (*pauVar27)[uVar23] = 0xff;
          pauVar27[1][uVar23 - 0x10 & uVar5] = 0xff;
          uVar24 = *(undefined8 *)*pauVar33;
          uVar21 = *(undefined8 *)(pauVar29[uVar23 * -2 + -2] + 8);
          uVar22 = *(undefined8 *)(pauVar29[uVar23 * -2 + -1] + 8);
          *(undefined8 *)pauVar32[uVar36 * -2 + -1] = *(undefined8 *)pauVar29[uVar23 * -2 + -1];
          *(undefined8 *)(pauVar32[uVar36 * -2 + -1] + 8) = uVar22;
          *(undefined8 *)*pauVar38 = uVar24;
          *(undefined8 *)(pauVar32[uVar36 * -2 + -2] + 8) = uVar21;
        }
LAB_1801fc727:
        bVar40 = uVar28 < uVar26;
        uVar23 = uVar28;
        pauVar29 = pauVar27;
        uVar28 = uVar28 + (uVar28 < uVar26);
      } while (bVar40);
      uVar26 = param_1[1];
      uVar23 = param_1[3];
      uVar28 = (uVar26 + 1 & 0xfffffffffffffff8) - (uVar26 + 1 >> 3);
      if (uVar26 < 8) {
        uVar28 = uVar26;
      }
    }
    param_1[2] = uVar28 - uVar23;
    return 0x8000000000000001;
  }
  uVar26 = uVar36 + 1;
  if (uVar36 + 1 <= uVar28) {
    uVar26 = uVar28;
  }
  if (uVar26 < 0xf) {
    uVar28 = 4;
    if (3 < uVar26) {
      uVar28 = (ulonglong)((uint)uVar26 & 8) + 8;
    }
  }
  else {
    if (uVar26 >> 0x3d != 0) goto LAB_1801fc3c0;
    uVar28 = (uVar26 * 8) / 7 - 1;
    lVar25 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar28 = 0xffffffffffffffff >> (~(byte)lVar25 & 0x3f);
    if (0x7fffffffffffffe < uVar28) goto LAB_1801fc3c0;
    uVar28 = uVar28 + 1;
  }
  uVar36 = uVar28 * 0x20;
  uVar26 = uVar28 + 0x10;
  uVar39 = uVar26 + uVar36;
  if (uVar39 < 0x7ffffffffffffff1 && !CARRY8(uVar26,uVar36)) {
    FUN_180027490();
    uVar24 = 0;
    lVar25 = thunk_FUN_1801d32d0(uVar39,0x10);
    if (lVar25 == 0) {
      uVar24 = FUN_1801ec3f0(param_4,0x10,uVar39);
      return uVar24;
    }
    pauVar29 = (undefined1 (*) [16])(lVar25 + uVar36);
    memset(pauVar29,(int)CONCAT71((int7)((ulonglong)uVar24 >> 8),0xff),uVar26);
    uVar26 = uVar28 - 1;
    uVar28 = (uVar28 & 0xfffffffffffffff8) - (uVar28 >> 3);
    if (uVar26 < 8) {
      uVar28 = uVar26;
    }
    if (uVar23 == 0) {
      pauVar27 = (undefined1 (*) [16])*param_1;
    }
    else {
      pauVar27 = (undefined1 (*) [16])*param_1;
      auVar3 = *pauVar27;
      uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
      pauVar32 = pauVar27;
      uVar36 = uVar23;
      do {
        if ((short)uVar35 == 0) {
          do {
            auVar3 = pauVar32[1];
            pauVar32 = pauVar32 + 1;
            lVar25 = lVar25 + 0x10;
            uVar35 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar35 == 0xffff);
          uVar35 = ~uVar35;
        }
        uVar31 = 0;
        for (uVar30 = uVar35; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        lVar37 = (ulonglong)uVar31 + lVar25;
        uVar39 = *(ulonglong *)(pauVar27[lVar37 * -2 + -2] + 8) & uVar26;
        auVar3 = *(undefined1 (*) [16])(*pauVar29 + uVar39);
        uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
        uVar31 = (uint)uVar6;
        if (uVar6 == 0) {
          local_50 = 0x10;
          do {
            uVar39 = uVar39 + local_50 & uVar26;
            auVar3 = *(undefined1 (*) [16])(*pauVar29 + uVar39);
            local_50 = local_50 + 0x10;
            uVar31 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar31 == 0);
        }
        uVar30 = 0;
        for (; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
          uVar30 = uVar30 + 1;
        }
        uVar39 = uVar30 + uVar39 & uVar26;
        if (-1 < (char)(*pauVar29)[uVar39]) {
          auVar3 = *pauVar29;
          uVar31 = 0;
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
                                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf); (uVar30 & 1) == 0;
              uVar30 = uVar30 >> 1 | 0x80000000) {
            uVar31 = uVar31 + 1;
          }
          uVar39 = (ulonglong)uVar31;
        }
        uVar35 = uVar35 - 1 & uVar35;
        uVar36 = uVar36 - 1;
        bVar34 = (byte)(*(ulonglong *)(pauVar27[lVar37 * -2 + -2] + 8) >> 0x39);
        (*pauVar29)[uVar39] = bVar34;
        pauVar29[1][uVar39 - 0x10 & uVar26] = bVar34;
        uVar24 = *(undefined8 *)(pauVar27[lVar37 * -2 + -2] + 8);
        uVar21 = *(undefined8 *)pauVar27[lVar37 * -2 + -1];
        uVar22 = *(undefined8 *)(pauVar27[lVar37 * -2 + -1] + 8);
        *(undefined8 *)pauVar29[uVar39 * -2 + -2] = *(undefined8 *)pauVar27[lVar37 * -2 + -2];
        *(undefined8 *)(pauVar29[uVar39 * -2 + -2] + 8) = uVar24;
        *(undefined8 *)pauVar29[uVar39 * -2 + -1] = uVar21;
        *(undefined8 *)(pauVar29[uVar39 * -2 + -1] + 8) = uVar22;
      } while (uVar36 != 0);
    }
    *param_1 = pauVar29;
    param_1[1] = uVar26;
    param_1[2] = uVar28 - uVar23;
    if (uVar5 == 0) {
      return 0x8000000000000001;
    }
    lVar25 = uVar5 * 0x20 + 0x20;
    lVar37 = uVar5 + lVar25 + 0x11;
    if (lVar37 == 0) {
      return 0x8000000000000001;
    }
    thunk_FUN_1801d3330((longlong)pauVar27 - lVar25,lVar37,0x10);
    return 0x8000000000000001;
  }
LAB_1801fc3c0:
  uVar24 = FUN_1801ec3c0(param_4);
  return uVar24;
}


