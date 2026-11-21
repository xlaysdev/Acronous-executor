/* FUN_1801fa460 @ 1801fa460 */

undefined8
FUN_1801fa460(longlong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
             undefined1 param_5)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined8 *_Src;
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
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  longlong lVar23;
  byte bVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  ulonglong uVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong local_58;
  
  uVar31 = param_1[3];
  uVar27 = param_2 + uVar31;
  if (CARRY8(param_2,uVar31)) goto LAB_1801fa5a5;
  uVar38 = param_1[1];
  uVar35 = uVar38 + 1;
  uVar25 = (uVar35 & 0xfffffffffffffff8) - (uVar35 >> 3);
  if (uVar38 < 8) {
    uVar25 = uVar38;
  }
  if (uVar25 >> 1 < uVar27) {
    uVar31 = uVar25 + 1;
    if (uVar25 + 1 <= uVar27) {
      uVar31 = uVar27;
    }
    if (0xe < uVar31) {
      if (uVar31 >> 0x3d == 0) {
        uVar31 = (uVar31 * 8) / 7 - 1;
        lVar23 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar31 = 0xffffffffffffffff >> (~(byte)lVar23 & 0x3f);
        if (uVar31 < 0x1ffffffffffffffe) {
          uVar27 = uVar31 + 1;
          goto LAB_1801fa578;
        }
      }
LAB_1801fa5a5:
      uVar22 = FUN_180161a30(param_5);
      goto LAB_1801fa9d0;
    }
    uVar27 = 4;
    if (3 < uVar31) {
      uVar27 = (ulonglong)((uint)uVar31 & 8) + 8;
    }
LAB_1801fa578:
    uVar35 = uVar27 * 8 + 0xf & 0xfffffffffffffff0;
    uVar31 = uVar27 + 0x10;
    uVar38 = uVar35 + uVar31;
    if (!(uVar38 < 0x7ffffffffffffff1 && !CARRY8(uVar35,uVar31))) goto LAB_1801fa5a5;
    FUN_180027490();
    uVar22 = 0;
    lVar23 = thunk_FUN_1801d32d0(uVar38,0x10);
    if (lVar23 == 0) {
      uVar22 = FUN_180161a60(param_5,0x10,uVar38);
      return uVar22;
    }
    pauVar29 = (undefined1 (*) [16])(lVar23 + uVar35);
    memset(pauVar29,(int)CONCAT71((int7)((ulonglong)uVar22 >> 8),0xff),uVar31);
    uVar31 = uVar27 - 1;
    uVar27 = (uVar27 & 0xfffffffffffffff8) - (uVar27 >> 3);
    if (uVar31 < 8) {
      uVar27 = uVar31;
    }
    lVar23 = param_1[3];
    if (lVar23 == 0) {
      pauVar26 = (undefined1 (*) [16])*param_1;
    }
    else {
      pauVar26 = (undefined1 (*) [16])*param_1;
      auVar3 = *pauVar26;
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
      lVar28 = lVar23;
      pauVar33 = pauVar26;
      do {
        if ((short)uVar37 == 0) {
          do {
            auVar3 = pauVar33[1];
            pauVar33 = pauVar33 + 1;
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
        uVar21 = 0;
        for (uVar34 = uVar37; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        uVar35 = *(ulonglong *)((longlong)pauVar26 + ((ulonglong)uVar21 + lVar32) * -8 + -8);
        if (param_4 <= uVar35) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar35,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18025c148);
        }
        uVar35 = *(ulonglong *)(param_3 + uVar35 * 0x10);
        uVar38 = uVar35 & uVar31;
        auVar3 = *(undefined1 (*) [16])(*pauVar29 + uVar38);
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
        uVar34 = (uint)uVar5;
        if (uVar5 == 0) {
          local_58 = 0x10;
          do {
            uVar38 = uVar38 + local_58 & uVar31;
            auVar3 = *(undefined1 (*) [16])(*pauVar29 + uVar38);
            local_58 = local_58 + 0x10;
            uVar34 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar34 == 0);
        }
        uVar20 = 0;
        for (; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        uVar38 = uVar20 + uVar38 & uVar31;
        if (-1 < (char)(*pauVar29)[uVar38]) {
          auVar3 = *pauVar29;
          uVar34 = 0;
          for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf); (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x80000000) {
            uVar34 = uVar34 + 1;
          }
          uVar38 = (ulonglong)uVar34;
        }
        uVar37 = uVar37 - 1 & uVar37;
        lVar28 = lVar28 + -1;
        bVar24 = (byte)(uVar35 >> 0x39);
        (*pauVar29)[uVar38] = bVar24;
        pauVar29[1][uVar38 - 0x10 & uVar31] = bVar24;
        *(undefined8 *)((longlong)pauVar29 + uVar38 * -8 + -8) =
             *(undefined8 *)((longlong)pauVar26 + ((ulonglong)uVar21 + lVar32) * -8 + -8);
      } while (lVar28 != 0);
    }
    *param_1 = (longlong)pauVar29;
    lVar28 = param_1[1];
    param_1[1] = uVar31;
    param_1[2] = uVar27 - lVar23;
    param_1[3] = lVar23;
    if (lVar28 != 0) {
      uVar31 = lVar28 * 8 + 0x17U & 0xfffffffffffffff0;
      thunk_FUN_1801d3330((longlong)pauVar26 - uVar31,lVar28 + uVar31 + 0x11,0x10);
    }
  }
  else {
    _Src = (undefined8 *)*param_1;
    if (uVar35 == 0) {
LAB_1801fa7e8:
      memmove(_Src + 2,_Src,uVar35);
      if (uVar35 != 0) goto LAB_1801fa811;
    }
    else {
      uVar27 = ((uVar35 >> 4) + 1) - (ulonglong)((uVar35 & 0xf) == 0);
      if (uVar27 == 1) {
        lVar28 = 0;
      }
      else {
        uVar38 = uVar27 & 0x1ffffffffffffffe;
        lVar23 = 0;
        do {
          pcVar1 = (char *)((longlong)_Src + lVar23);
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
          pbVar2 = (byte *)((longlong)_Src + lVar23);
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
          lVar28 = lVar23 + 0x20;
          pcVar1 = (char *)((longlong)_Src + lVar23 + 0x10);
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
          pbVar2 = (byte *)((longlong)_Src + lVar23 + 0x10);
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
          uVar38 = uVar38 - 2;
          lVar23 = lVar28;
        } while (uVar38 != 0);
      }
      if ((uVar27 & 1) != 0) {
        pcVar1 = (char *)((longlong)_Src + lVar28);
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
        pbVar2 = (byte *)((longlong)_Src + lVar28);
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
      if (uVar35 < 0x10) goto LAB_1801fa7e8;
      uVar22 = _Src[1];
      *(undefined8 *)((longlong)_Src + uVar35) = *_Src;
      ((undefined8 *)((longlong)_Src + uVar35))[1] = uVar22;
LAB_1801fa811:
      uVar31 = 1;
      uVar27 = 0;
      do {
        uVar38 = uVar31;
        pauVar29 = (undefined1 (*) [16])*param_1;
        if (SBORROW1('\0',(*pauVar29)[uVar27])) {
          uVar31 = *(ulonglong *)((longlong)pauVar29 + uVar27 * -8 + -8);
          if (param_4 <= uVar31) {
LAB_1801faa41:
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar31,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18025c148);
          }
          lVar23 = ~uVar27 * 8;
          pauVar26 = pauVar29;
          while( true ) {
            uVar31 = *(ulonglong *)(param_3 + uVar31 * 0x10);
            uVar25 = param_1[1];
            uVar36 = uVar25 & uVar31;
            auVar3 = *(undefined1 (*) [16])(*pauVar26 + uVar36);
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
            uVar30 = uVar36;
            if (uVar5 == 0) {
              lVar28 = 0x10;
              do {
                uVar30 = uVar30 + lVar28 & uVar25;
                auVar3 = *(undefined1 (*) [16])(*pauVar26 + uVar30);
                lVar28 = lVar28 + 0x10;
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
            uVar21 = 0;
            for (; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
              uVar21 = uVar21 + 1;
            }
            uVar30 = uVar21 + uVar30 & uVar25;
            if (-1 < (char)(*pauVar26)[uVar30]) {
              auVar3 = *pauVar26;
              uVar37 = 0;
              for (uVar21 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                  (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
                uVar37 = uVar37 + 1;
              }
              uVar30 = (ulonglong)uVar37;
            }
            bVar24 = (byte)(uVar31 >> 0x38);
            if (((uVar30 - uVar36 ^ uVar27 - uVar36) & uVar25) < 0x10) {
              bVar24 = bVar24 >> 1;
              (*pauVar26)[uVar27] = bVar24;
              *(byte *)(*param_1 + 0x10 + (uVar25 & uVar27 - 0x10)) = bVar24;
              goto LAB_1801fa929;
            }
            lVar28 = ~uVar30 * 8;
            cVar4 = (*pauVar26)[uVar30];
            bVar24 = bVar24 >> 1;
            (*pauVar26)[uVar30] = bVar24;
            *(byte *)(*param_1 + 0x10 + (uVar30 - 0x10 & uVar25)) = bVar24;
            if (cVar4 == -1) break;
            uVar22 = *(undefined8 *)(*pauVar29 + lVar23);
            *(undefined8 *)(*pauVar29 + lVar23) = *(undefined8 *)(*pauVar26 + lVar28);
            *(undefined8 *)(*pauVar26 + lVar28) = uVar22;
            pauVar26 = (undefined1 (*) [16])*param_1;
            uVar31 = *(ulonglong *)((longlong)pauVar26 + uVar27 * -8 + -8);
            if (param_4 <= uVar31) goto LAB_1801faa41;
          }
          uVar31 = param_1[1];
          *(undefined1 *)(*param_1 + uVar27) = 0xff;
          *(undefined1 *)(*param_1 + 0x10 + (uVar27 - 0x10 & uVar31)) = 0xff;
          *(undefined8 *)(*pauVar26 + lVar28) = *(undefined8 *)(*pauVar29 + lVar23);
        }
LAB_1801fa929:
        uVar31 = uVar38 + (uVar38 < uVar35);
        uVar27 = uVar38;
      } while (uVar38 < uVar35);
      uVar31 = param_1[3];
    }
    uVar27 = param_1[1];
    uVar35 = (uVar27 + 1 & 0xfffffffffffffff8) - (uVar27 + 1 >> 3);
    if (uVar27 < 8) {
      uVar35 = uVar27;
    }
    param_1[2] = uVar35 - uVar31;
  }
  uVar22 = 0x8000000000000001;
LAB_1801fa9d0:
  return uVar22;
}


