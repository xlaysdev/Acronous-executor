/* FUN_1801fd690 @ 1801fd690 */

ulonglong FUN_1801fd690(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
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
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  byte bVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  uint uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  undefined1 (*_Dst) [16];
  uint uVar51;
  ulonglong uVar52;
  uint uVar53;
  undefined1 (*pauVar54) [16];
  undefined1 (*pauVar55) [16];
  longlong lVar56;
  undefined1 (*pauVar57) [16];
  longlong lVar58;
  uint uVar59;
  size_t _Size;
  undefined1 (*_Src) [16];
  bool bVar60;
  undefined1 (*local_98) [16];
  undefined1 (*local_60) [16];
  ulonglong local_58;
  longlong local_50;
  
  uVar46 = param_1[3];
  uVar52 = param_2 + uVar46;
  if (CARRY8(param_2,uVar46)) {
    uVar52 = FUN_1801ec3c0(param_4);
  }
  else {
    uVar5 = param_1[1];
    uVar45 = uVar5 + 1;
    uVar49 = (uVar45 & 0xfffffffffffffff8) - (uVar45 >> 3);
    if (uVar5 < 8) {
      uVar49 = uVar5;
    }
    if (uVar49 >> 1 < uVar52) {
      uVar45 = uVar49 + 1;
      if (uVar49 + 1 <= uVar52) {
        uVar45 = uVar52;
      }
      FUN_1801c13c0(&local_60,0x160,uVar45);
      uVar52 = local_58;
      if (local_60 != (undefined1 (*) [16])0x0) {
        if (uVar46 == 0) {
          local_98 = (undefined1 (*) [16])*param_1;
        }
        else {
          local_98 = (undefined1 (*) [16])*param_1;
          auVar3 = *local_98;
          uVar53 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          lVar56 = 0;
          pauVar54 = local_98;
          uVar52 = uVar46;
          do {
            if ((short)uVar53 == 0) {
              do {
                auVar3 = pauVar54[1];
                pauVar54 = pauVar54 + 1;
                lVar56 = lVar56 + 0x10;
                uVar53 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
              } while (uVar53 == 0xffff);
              uVar53 = ~uVar53;
            }
            uVar59 = 0;
            for (uVar51 = uVar53; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
              uVar59 = uVar59 + 1;
            }
            uVar45 = FUN_1801bb830(param_3,local_98 + ((ulonglong)uVar59 + lVar56) * -0x16 + -0x16);
            uVar49 = uVar45 & local_58;
            auVar3 = *(undefined1 (*) [16])(*local_60 + uVar49);
            uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
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
            uVar51 = (uint)uVar7;
            if (uVar7 == 0) {
              lVar58 = 0x10;
              do {
                uVar49 = uVar49 + lVar58 & local_58;
                auVar3 = *(undefined1 (*) [16])(*local_60 + uVar49);
                lVar58 = lVar58 + 0x10;
                uVar51 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
              } while (uVar51 == 0);
            }
            uVar48 = 0;
            for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x80000000) {
              uVar48 = uVar48 + 1;
            }
            uVar49 = uVar48 + uVar49 & local_58;
            if (-1 < (char)(*local_60)[uVar49]) {
              auVar3 = *local_60;
              uVar51 = 0;
              for (uVar48 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                  (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              uVar49 = (ulonglong)uVar51;
            }
            uVar53 = uVar53 - 1 & uVar53;
            uVar52 = uVar52 - 1;
            bVar44 = (byte)(uVar45 >> 0x39);
            (*local_60)[uVar49] = bVar44;
            local_60[1][uVar49 - 0x10 & local_58] = bVar44;
            memcpy(local_60 + ~uVar49 * 0x16,local_98 + ~((ulonglong)uVar59 + lVar56) * 0x16,0x160);
          } while (uVar52 != 0);
        }
        *param_1 = local_60;
        param_1[1] = local_58;
        param_1[2] = local_50 - uVar46;
        uVar52 = 0x8000000000000001;
        if (uVar5 != 0) {
          lVar56 = uVar5 * 0x160 + 0x160;
          lVar58 = uVar5 + lVar56 + 0x11;
          if (lVar58 != 0) {
            thunk_FUN_1801d3330((longlong)local_98 - lVar56,lVar58,0x10);
          }
        }
      }
    }
    else {
      if (uVar45 == 0) {
        uVar52 = 0;
      }
      else {
        pauVar54 = (undefined1 (*) [16])*param_1;
        uVar46 = ((uVar45 >> 4) + 1) - (ulonglong)((uVar45 & 0xf) == 0);
        if (uVar46 == 1) {
          lVar58 = 0;
        }
        else {
          uVar52 = uVar46 & 0x1ffffffffffffffe;
          lVar56 = 0;
          do {
            pcVar1 = *pauVar54 + lVar56;
            cVar4 = pcVar1[1];
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
            pbVar2 = *pauVar54 + lVar56;
            *pbVar2 = -(*pcVar1 < '\0') | 0x80;
            pbVar2[1] = -(cVar4 < '\0') | 0x80;
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
            lVar58 = lVar56 + 0x20;
            pcVar1 = pauVar54[1] + lVar56;
            cVar4 = pcVar1[1];
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
            pbVar2 = pauVar54[1] + lVar56;
            *pbVar2 = -(*pcVar1 < '\0') | 0x80;
            pbVar2[1] = -(cVar4 < '\0') | 0x80;
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
            uVar52 = uVar52 - 2;
            lVar56 = lVar58;
          } while (uVar52 != 0);
        }
        if ((uVar46 & 1) != 0) {
          pcVar1 = *pauVar54 + lVar58;
          cVar4 = pcVar1[1];
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
          pbVar2 = *pauVar54 + lVar58;
          *pbVar2 = -(*pcVar1 < '\0') | 0x80;
          pbVar2[1] = -(cVar4 < '\0') | 0x80;
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
        uVar46 = 0x10;
        if (0x10 < uVar45) {
          uVar46 = uVar45;
        }
        _Size = 0x10;
        if (uVar45 < 0x10) {
          _Size = uVar45;
        }
        memmove(*pauVar54 + uVar46,pauVar54,_Size);
        lVar56 = 0;
        uVar52 = 0;
        uVar46 = 1;
        do {
          if (SBORROW1('\0',(*pauVar54)[uVar52])) {
            _Src = pauVar54 + ~uVar52 * 0x16;
            pauVar57 = pauVar54;
            while( true ) {
              uVar47 = FUN_1801bb830(param_3,pauVar57 + uVar52 * -0x16 + -0x16);
              uVar5 = param_1[1];
              uVar50 = uVar5 & uVar47;
              auVar3 = *(undefined1 (*) [16])(*pauVar57 + uVar50);
              uVar7 = (ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
              uVar53 = (uint)uVar7;
              uVar49 = uVar50;
              if (uVar7 == 0) {
                lVar58 = 0x10;
                do {
                  uVar49 = uVar49 + lVar58 & uVar5;
                  auVar3 = *(undefined1 (*) [16])(*pauVar57 + uVar49);
                  lVar58 = lVar58 + 0x10;
                  uVar53 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                } while (uVar53 == 0);
              }
              uVar59 = 0;
              for (; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x80000000) {
                uVar59 = uVar59 + 1;
              }
              uVar49 = uVar59 + uVar49 & uVar5;
              if (-1 < (char)(*pauVar57)[uVar49]) {
                auVar3 = *pauVar57;
                uVar53 = 0;
                for (uVar59 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                    (uVar59 & 1) == 0; uVar59 = uVar59 >> 1 | 0x80000000) {
                  uVar53 = uVar53 + 1;
                }
                uVar49 = (ulonglong)uVar53;
              }
              bVar44 = (byte)(uVar47 >> 0x38);
              if (((uVar49 - uVar50 ^ uVar52 - uVar50) & uVar5) < 0x10) {
                bVar44 = bVar44 >> 1;
                (*pauVar57)[uVar52] = bVar44;
                pauVar55 = (undefined1 (*) [16])*param_1;
                pauVar55[1][uVar5 & uVar52 - 0x10] = bVar44;
                goto LAB_1801fdd47;
              }
              _Dst = pauVar57 + ~uVar49 * 0x16;
              cVar4 = (*pauVar57)[uVar49];
              bVar44 = bVar44 >> 1;
              (*pauVar57)[uVar49] = bVar44;
              pauVar55 = (undefined1 (*) [16])*param_1;
              pauVar55[1][uVar49 - 0x10 & uVar5] = bVar44;
              if (cVar4 == -1) break;
              pauVar57 = pauVar57 + uVar49 * -0x16;
              if ((_Src < pauVar57) && (_Dst < pauVar54 + uVar52 * -0x16)) {
                lVar58 = -0x2c;
                do {
                  uVar6 = *(undefined8 *)(*pauVar54 + lVar58 * 8 + lVar56);
                  *(undefined8 *)(*pauVar54 + lVar58 * 8 + lVar56) =
                       *(undefined8 *)(*pauVar57 + lVar58 * 8);
                  *(undefined8 *)(*pauVar57 + lVar58 * 8) = uVar6;
                  uVar6 = *(undefined8 *)(*pauVar54 + lVar58 * 8 + lVar56 + 8);
                  *(undefined8 *)(*pauVar54 + lVar58 * 8 + lVar56 + 8) =
                       *(undefined8 *)(*pauVar57 + lVar58 * 8 + 8);
                  *(undefined8 *)(*pauVar57 + lVar58 * 8 + 8) = uVar6;
                  lVar58 = lVar58 + 2;
                } while (lVar58 != 0);
              }
              else {
                uVar6 = *(undefined8 *)*_Src;
                uVar38 = *(undefined8 *)(*_Src + 8);
                uVar39 = *(undefined8 *)_Src[1];
                uVar40 = *(undefined8 *)(_Src[1] + 8);
                uVar41 = *(undefined8 *)(*_Dst + 8);
                uVar42 = *(undefined8 *)_Dst[1];
                uVar43 = *(undefined8 *)(_Dst[1] + 8);
                *(undefined8 *)*_Src = *(undefined8 *)*_Dst;
                *(undefined8 *)(*_Src + 8) = uVar41;
                *(undefined8 *)_Src[1] = uVar42;
                *(undefined8 *)(_Src[1] + 8) = uVar43;
                *(undefined8 *)*_Dst = uVar6;
                *(undefined8 *)(*_Dst + 8) = uVar38;
                *(undefined8 *)_Dst[1] = uVar39;
                *(undefined8 *)(_Dst[1] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[2];
                uVar38 = *(undefined8 *)(_Src[2] + 8);
                uVar39 = *(undefined8 *)_Src[3];
                uVar40 = *(undefined8 *)(_Src[3] + 8);
                uVar41 = *(undefined8 *)(_Dst[2] + 8);
                uVar42 = *(undefined8 *)_Dst[3];
                uVar43 = *(undefined8 *)(_Dst[3] + 8);
                *(undefined8 *)_Src[2] = *(undefined8 *)_Dst[2];
                *(undefined8 *)(_Src[2] + 8) = uVar41;
                *(undefined8 *)_Src[3] = uVar42;
                *(undefined8 *)(_Src[3] + 8) = uVar43;
                *(undefined8 *)_Dst[2] = uVar6;
                *(undefined8 *)(_Dst[2] + 8) = uVar38;
                *(undefined8 *)_Dst[3] = uVar39;
                *(undefined8 *)(_Dst[3] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[4];
                uVar38 = *(undefined8 *)(_Src[4] + 8);
                uVar39 = *(undefined8 *)_Src[5];
                uVar40 = *(undefined8 *)(_Src[5] + 8);
                uVar41 = *(undefined8 *)(_Dst[4] + 8);
                uVar42 = *(undefined8 *)_Dst[5];
                uVar43 = *(undefined8 *)(_Dst[5] + 8);
                *(undefined8 *)_Src[4] = *(undefined8 *)_Dst[4];
                *(undefined8 *)(_Src[4] + 8) = uVar41;
                *(undefined8 *)_Src[5] = uVar42;
                *(undefined8 *)(_Src[5] + 8) = uVar43;
                *(undefined8 *)_Dst[4] = uVar6;
                *(undefined8 *)(_Dst[4] + 8) = uVar38;
                *(undefined8 *)_Dst[5] = uVar39;
                *(undefined8 *)(_Dst[5] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[6];
                uVar38 = *(undefined8 *)(_Src[6] + 8);
                uVar39 = *(undefined8 *)_Src[7];
                uVar40 = *(undefined8 *)(_Src[7] + 8);
                uVar41 = *(undefined8 *)(_Dst[6] + 8);
                uVar42 = *(undefined8 *)_Dst[7];
                uVar43 = *(undefined8 *)(_Dst[7] + 8);
                *(undefined8 *)_Src[6] = *(undefined8 *)_Dst[6];
                *(undefined8 *)(_Src[6] + 8) = uVar41;
                *(undefined8 *)_Src[7] = uVar42;
                *(undefined8 *)(_Src[7] + 8) = uVar43;
                *(undefined8 *)_Dst[6] = uVar6;
                *(undefined8 *)(_Dst[6] + 8) = uVar38;
                *(undefined8 *)_Dst[7] = uVar39;
                *(undefined8 *)(_Dst[7] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[8];
                uVar38 = *(undefined8 *)(_Src[8] + 8);
                uVar39 = *(undefined8 *)_Src[9];
                uVar40 = *(undefined8 *)(_Src[9] + 8);
                uVar41 = *(undefined8 *)(_Dst[8] + 8);
                uVar42 = *(undefined8 *)_Dst[9];
                uVar43 = *(undefined8 *)(_Dst[9] + 8);
                *(undefined8 *)_Src[8] = *(undefined8 *)_Dst[8];
                *(undefined8 *)(_Src[8] + 8) = uVar41;
                *(undefined8 *)_Src[9] = uVar42;
                *(undefined8 *)(_Src[9] + 8) = uVar43;
                *(undefined8 *)_Dst[8] = uVar6;
                *(undefined8 *)(_Dst[8] + 8) = uVar38;
                *(undefined8 *)_Dst[9] = uVar39;
                *(undefined8 *)(_Dst[9] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[10];
                uVar38 = *(undefined8 *)(_Src[10] + 8);
                uVar39 = *(undefined8 *)_Src[0xb];
                uVar40 = *(undefined8 *)(_Src[0xb] + 8);
                uVar41 = *(undefined8 *)(_Dst[10] + 8);
                uVar42 = *(undefined8 *)_Dst[0xb];
                uVar43 = *(undefined8 *)(_Dst[0xb] + 8);
                *(undefined8 *)_Src[10] = *(undefined8 *)_Dst[10];
                *(undefined8 *)(_Src[10] + 8) = uVar41;
                *(undefined8 *)_Src[0xb] = uVar42;
                *(undefined8 *)(_Src[0xb] + 8) = uVar43;
                *(undefined8 *)_Dst[10] = uVar6;
                *(undefined8 *)(_Dst[10] + 8) = uVar38;
                *(undefined8 *)_Dst[0xb] = uVar39;
                *(undefined8 *)(_Dst[0xb] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[0xc];
                uVar38 = *(undefined8 *)(_Src[0xc] + 8);
                uVar39 = *(undefined8 *)_Src[0xd];
                uVar40 = *(undefined8 *)(_Src[0xd] + 8);
                uVar41 = *(undefined8 *)(_Dst[0xc] + 8);
                uVar42 = *(undefined8 *)_Dst[0xd];
                uVar43 = *(undefined8 *)(_Dst[0xd] + 8);
                *(undefined8 *)_Src[0xc] = *(undefined8 *)_Dst[0xc];
                *(undefined8 *)(_Src[0xc] + 8) = uVar41;
                *(undefined8 *)_Src[0xd] = uVar42;
                *(undefined8 *)(_Src[0xd] + 8) = uVar43;
                *(undefined8 *)_Dst[0xc] = uVar6;
                *(undefined8 *)(_Dst[0xc] + 8) = uVar38;
                *(undefined8 *)_Dst[0xd] = uVar39;
                *(undefined8 *)(_Dst[0xd] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[0xe];
                uVar38 = *(undefined8 *)(_Src[0xe] + 8);
                uVar39 = *(undefined8 *)_Src[0xf];
                uVar40 = *(undefined8 *)(_Src[0xf] + 8);
                uVar41 = *(undefined8 *)(_Dst[0xe] + 8);
                uVar42 = *(undefined8 *)_Dst[0xf];
                uVar43 = *(undefined8 *)(_Dst[0xf] + 8);
                *(undefined8 *)_Src[0xe] = *(undefined8 *)_Dst[0xe];
                *(undefined8 *)(_Src[0xe] + 8) = uVar41;
                *(undefined8 *)_Src[0xf] = uVar42;
                *(undefined8 *)(_Src[0xf] + 8) = uVar43;
                *(undefined8 *)_Dst[0xe] = uVar6;
                *(undefined8 *)(_Dst[0xe] + 8) = uVar38;
                *(undefined8 *)_Dst[0xf] = uVar39;
                *(undefined8 *)(_Dst[0xf] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[0x10];
                uVar38 = *(undefined8 *)(_Src[0x10] + 8);
                uVar39 = *(undefined8 *)_Src[0x11];
                uVar40 = *(undefined8 *)(_Src[0x11] + 8);
                uVar41 = *(undefined8 *)(_Dst[0x10] + 8);
                uVar42 = *(undefined8 *)_Dst[0x11];
                uVar43 = *(undefined8 *)(_Dst[0x11] + 8);
                *(undefined8 *)_Src[0x10] = *(undefined8 *)_Dst[0x10];
                *(undefined8 *)(_Src[0x10] + 8) = uVar41;
                *(undefined8 *)_Src[0x11] = uVar42;
                *(undefined8 *)(_Src[0x11] + 8) = uVar43;
                *(undefined8 *)_Dst[0x10] = uVar6;
                *(undefined8 *)(_Dst[0x10] + 8) = uVar38;
                *(undefined8 *)_Dst[0x11] = uVar39;
                *(undefined8 *)(_Dst[0x11] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[0x12];
                uVar38 = *(undefined8 *)(_Src[0x12] + 8);
                uVar39 = *(undefined8 *)_Src[0x13];
                uVar40 = *(undefined8 *)(_Src[0x13] + 8);
                uVar41 = *(undefined8 *)(_Dst[0x12] + 8);
                uVar42 = *(undefined8 *)_Dst[0x13];
                uVar43 = *(undefined8 *)(_Dst[0x13] + 8);
                *(undefined8 *)_Src[0x12] = *(undefined8 *)_Dst[0x12];
                *(undefined8 *)(_Src[0x12] + 8) = uVar41;
                *(undefined8 *)_Src[0x13] = uVar42;
                *(undefined8 *)(_Src[0x13] + 8) = uVar43;
                *(undefined8 *)_Dst[0x12] = uVar6;
                *(undefined8 *)(_Dst[0x12] + 8) = uVar38;
                *(undefined8 *)_Dst[0x13] = uVar39;
                *(undefined8 *)(_Dst[0x13] + 8) = uVar40;
                uVar6 = *(undefined8 *)_Src[0x14];
                uVar38 = *(undefined8 *)(_Src[0x14] + 8);
                uVar22 = _Src[0x15][0];
                uVar23 = _Src[0x15][1];
                uVar24 = _Src[0x15][2];
                uVar25 = _Src[0x15][3];
                uVar26 = _Src[0x15][4];
                uVar27 = _Src[0x15][5];
                uVar28 = _Src[0x15][6];
                uVar29 = _Src[0x15][7];
                uVar30 = _Src[0x15][8];
                uVar31 = _Src[0x15][9];
                uVar32 = _Src[0x15][10];
                uVar33 = _Src[0x15][0xb];
                uVar34 = _Src[0x15][0xc];
                uVar35 = _Src[0x15][0xd];
                uVar36 = _Src[0x15][0xe];
                uVar37 = _Src[0x15][0xf];
                uVar39 = *(undefined8 *)(_Dst[0x14] + 8);
                uVar40 = *(undefined8 *)_Dst[0x15];
                uVar41 = *(undefined8 *)(_Dst[0x15] + 8);
                *(undefined8 *)_Src[0x14] = *(undefined8 *)_Dst[0x14];
                *(undefined8 *)(_Src[0x14] + 8) = uVar39;
                *(undefined8 *)_Src[0x15] = uVar40;
                *(undefined8 *)(_Src[0x15] + 8) = uVar41;
                *(undefined8 *)_Dst[0x14] = uVar6;
                *(undefined8 *)(_Dst[0x14] + 8) = uVar38;
                _Dst[0x15][0] = uVar22;
                _Dst[0x15][1] = uVar23;
                _Dst[0x15][2] = uVar24;
                _Dst[0x15][3] = uVar25;
                _Dst[0x15][4] = uVar26;
                _Dst[0x15][5] = uVar27;
                _Dst[0x15][6] = uVar28;
                _Dst[0x15][7] = uVar29;
                _Dst[0x15][8] = uVar30;
                _Dst[0x15][9] = uVar31;
                _Dst[0x15][10] = uVar32;
                _Dst[0x15][0xb] = uVar33;
                _Dst[0x15][0xc] = uVar34;
                _Dst[0x15][0xd] = uVar35;
                _Dst[0x15][0xe] = uVar36;
                _Dst[0x15][0xf] = uVar37;
              }
              pauVar57 = (undefined1 (*) [16])*param_1;
            }
            uVar5 = param_1[1];
            (*pauVar55)[uVar52] = 0xff;
            pauVar55[1][uVar52 - 0x10 & uVar5] = 0xff;
            memcpy(_Dst,_Src,0x160);
LAB_1801fdd47:
            pauVar54 = pauVar55;
          }
          uVar52 = uVar52 + 1;
          lVar56 = lVar56 + -0x160;
          bVar60 = uVar46 < uVar45;
          uVar46 = uVar46 + (uVar46 < uVar45);
        } while (bVar60);
        uVar45 = param_1[1];
        uVar46 = param_1[3];
        uVar52 = (uVar45 + 1 & 0xfffffffffffffff8) - (uVar45 + 1 >> 3);
        if (uVar45 < 8) {
          uVar52 = uVar45;
        }
      }
      param_1[2] = uVar52 - uVar46;
      uVar52 = 0x8000000000000001;
    }
  }
  return uVar52;
}


