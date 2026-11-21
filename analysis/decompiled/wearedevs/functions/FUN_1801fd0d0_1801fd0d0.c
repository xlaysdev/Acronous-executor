/* FUN_1801fd0d0 @ 1801fd0d0 */

ulonglong FUN_1801fd0d0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  char cVar5;
  void *_Src;
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
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  size_t _Size;
  ulonglong uVar33;
  undefined1 (*pauVar34) [16];
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  undefined8 *puVar39;
  longlong lVar40;
  undefined1 (*local_b8) [16];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 (*local_80) [16];
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar25 = param_1[3];
  uVar30 = param_2 + uVar25;
  local_58 = param_3;
  if (CARRY8(param_2,uVar25)) {
    uVar25 = FUN_1801ec3c0(param_4);
  }
  else {
    uVar27 = param_1[1];
    uVar1 = uVar27 + 1;
    uVar36 = (uVar1 & 0xfffffffffffffff8) - (uVar1 >> 3);
    if (uVar27 < 8) {
      uVar36 = uVar27;
    }
    if (uVar36 >> 1 < uVar30) {
      uVar25 = uVar36 + 1;
      if (uVar36 + 1 <= uVar30) {
        uVar25 = uVar30;
      }
      FUN_1801c13c0(&local_b8,0x20,uVar25);
      if (local_b8 == (undefined1 (*) [16])0x0) {
        return local_b0;
      }
      local_98 = param_1 + 4;
      local_90 = (undefined1 *)0x20;
      local_88 = 0x10;
      local_80 = local_b8;
      local_78 = local_b0;
      local_70 = local_a8;
      local_68 = local_a0;
      lVar37 = param_1[3];
      if (lVar37 == 0) {
        lVar37 = 0;
      }
      else {
        local_60 = local_a8;
        pauVar38 = (undefined1 (*) [16])*param_1;
        auVar4 = *pauVar38;
        uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
        lVar40 = 0;
        local_50 = param_1;
        do {
          if ((short)uVar32 == 0) {
            do {
              auVar4 = pauVar38[1];
              pauVar38 = pauVar38 + 1;
              lVar40 = lVar40 + 0x10;
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
            } while (uVar32 == 0xffff);
            uVar32 = ~uVar32;
          }
          uVar35 = 0;
          for (uVar28 = uVar32; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
          uVar25 = FUN_1801bb6b0(local_58,*local_50 + ((ulonglong)uVar35 + lVar40) * -0x20 + -0x20);
          uVar30 = uVar25 & local_b0;
          auVar4 = *(undefined1 (*) [16])(*local_b8 + uVar30);
          uVar7 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
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
          uVar28 = (uint)uVar7;
          if (uVar7 == 0) {
            lVar31 = 0x10;
            do {
              uVar30 = uVar30 + lVar31 & local_b0;
              auVar4 = *(undefined1 (*) [16])(*local_b8 + uVar30);
              lVar31 = lVar31 + 0x10;
              uVar28 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
            } while (uVar28 == 0);
          }
          uVar29 = 0;
          for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar29 = uVar29 + 1;
          }
          uVar30 = uVar29 + uVar30 & local_b0;
          if (-1 < (char)(*local_b8)[uVar30]) {
            auVar4 = *local_b8;
            uVar28 = 0;
            for (uVar29 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
                                        (ushort)(byte)(auVar4[0xf] >> 7) << 0xf); (uVar29 & 1) == 0;
                uVar29 = uVar29 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            uVar30 = (ulonglong)uVar28;
          }
          uVar32 = uVar32 - 1 & uVar32;
          lVar37 = lVar37 + -1;
          bVar24 = (byte)(uVar25 >> 0x39);
          (*local_b8)[uVar30] = bVar24;
          local_b8[1][uVar30 - 0x10 & local_b0] = bVar24;
          lVar31 = ~((ulonglong)uVar35 + lVar40) * 0x20;
          auVar4 = *(undefined1 (*) [16])(*local_50 + lVar31);
          puVar39 = (undefined8 *)(*local_50 + 0x10 + lVar31);
          uVar6 = puVar39[1];
          *(undefined8 *)local_b8[~uVar30 * 2 + 1] = *puVar39;
          *(undefined8 *)(local_b8[~uVar30 * 2 + 1] + 8) = uVar6;
          local_b8[~uVar30 * 2] = auVar4;
        } while (lVar37 != 0);
        lVar37 = local_50[3];
        param_1 = local_50;
        local_a8 = local_60;
      }
      lVar40 = *param_1;
      lVar31 = param_1[1];
      *param_1 = (longlong)local_b8;
      param_1[1] = local_b0;
      param_1[2] = local_a8 - lVar37;
      param_1[3] = lVar37;
      if (lVar31 != 0) {
        lVar37 = lVar31 * 0x20 + 0x20;
        lVar31 = lVar31 + lVar37 + 0x11;
        if (lVar31 != 0) {
          thunk_FUN_1801d3330(lVar40 - lVar37,lVar31,0x10);
        }
      }
    }
    else {
      if (uVar1 == 0) {
        uVar30 = 0;
      }
      else {
        _Src = (void *)*param_1;
        uVar25 = ((uVar1 >> 4) + 1) - (ulonglong)((uVar1 & 0xf) == 0);
        if (uVar25 == 1) {
          lVar40 = 0;
        }
        else {
          uVar30 = uVar25 & 0x1ffffffffffffffe;
          lVar37 = 0;
          do {
            pcVar2 = (char *)((longlong)_Src + lVar37);
            cVar5 = pcVar2[1];
            cVar8 = pcVar2[2];
            cVar9 = pcVar2[3];
            cVar10 = pcVar2[4];
            cVar11 = pcVar2[5];
            cVar12 = pcVar2[6];
            cVar13 = pcVar2[7];
            cVar14 = pcVar2[8];
            cVar15 = pcVar2[9];
            cVar16 = pcVar2[10];
            cVar17 = pcVar2[0xb];
            cVar18 = pcVar2[0xc];
            cVar19 = pcVar2[0xd];
            cVar20 = pcVar2[0xe];
            cVar21 = pcVar2[0xf];
            pbVar3 = (byte *)((longlong)_Src + lVar37);
            *pbVar3 = -(*pcVar2 < '\0') | 0x80;
            pbVar3[1] = -(cVar5 < '\0') | 0x80;
            pbVar3[2] = -(cVar8 < '\0') | 0x80;
            pbVar3[3] = -(cVar9 < '\0') | 0x80;
            pbVar3[4] = -(cVar10 < '\0') | 0x80;
            pbVar3[5] = -(cVar11 < '\0') | 0x80;
            pbVar3[6] = -(cVar12 < '\0') | 0x80;
            pbVar3[7] = -(cVar13 < '\0') | 0x80;
            pbVar3[8] = -(cVar14 < '\0') | 0x80;
            pbVar3[9] = -(cVar15 < SUB161((undefined1  [16])0x0,9)) | 0x80;
            pbVar3[10] = -(cVar16 < SUB161((undefined1  [16])0x0,10)) | 0x80;
            pbVar3[0xb] = -(cVar17 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
            pbVar3[0xc] = -(cVar18 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
            pbVar3[0xd] = -(cVar19 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
            pbVar3[0xe] = -(cVar20 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
            pbVar3[0xf] = -(cVar21 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
            lVar40 = lVar37 + 0x20;
            pcVar2 = (char *)((longlong)_Src + lVar37 + 0x10);
            cVar5 = pcVar2[1];
            cVar8 = pcVar2[2];
            cVar9 = pcVar2[3];
            cVar10 = pcVar2[4];
            cVar11 = pcVar2[5];
            cVar12 = pcVar2[6];
            cVar13 = pcVar2[7];
            cVar14 = pcVar2[8];
            cVar15 = pcVar2[9];
            cVar16 = pcVar2[10];
            cVar17 = pcVar2[0xb];
            cVar18 = pcVar2[0xc];
            cVar19 = pcVar2[0xd];
            cVar20 = pcVar2[0xe];
            cVar21 = pcVar2[0xf];
            pbVar3 = (byte *)((longlong)_Src + lVar37 + 0x10);
            *pbVar3 = -(*pcVar2 < '\0') | 0x80;
            pbVar3[1] = -(cVar5 < '\0') | 0x80;
            pbVar3[2] = -(cVar8 < '\0') | 0x80;
            pbVar3[3] = -(cVar9 < '\0') | 0x80;
            pbVar3[4] = -(cVar10 < '\0') | 0x80;
            pbVar3[5] = -(cVar11 < '\0') | 0x80;
            pbVar3[6] = -(cVar12 < '\0') | 0x80;
            pbVar3[7] = -(cVar13 < '\0') | 0x80;
            pbVar3[8] = -(cVar14 < '\0') | 0x80;
            pbVar3[9] = -(cVar15 < SUB161((undefined1  [16])0x0,9)) | 0x80;
            pbVar3[10] = -(cVar16 < SUB161((undefined1  [16])0x0,10)) | 0x80;
            pbVar3[0xb] = -(cVar17 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
            pbVar3[0xc] = -(cVar18 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
            pbVar3[0xd] = -(cVar19 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
            pbVar3[0xe] = -(cVar20 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
            pbVar3[0xf] = -(cVar21 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
            uVar30 = uVar30 - 2;
            lVar37 = lVar40;
          } while (uVar30 != 0);
        }
        if ((uVar25 & 1) != 0) {
          pcVar2 = (char *)((longlong)_Src + lVar40);
          cVar5 = pcVar2[1];
          cVar8 = pcVar2[2];
          cVar9 = pcVar2[3];
          cVar10 = pcVar2[4];
          cVar11 = pcVar2[5];
          cVar12 = pcVar2[6];
          cVar13 = pcVar2[7];
          cVar14 = pcVar2[8];
          cVar15 = pcVar2[9];
          cVar16 = pcVar2[10];
          cVar17 = pcVar2[0xb];
          cVar18 = pcVar2[0xc];
          cVar19 = pcVar2[0xd];
          cVar20 = pcVar2[0xe];
          cVar21 = pcVar2[0xf];
          pbVar3 = (byte *)((longlong)_Src + lVar40);
          *pbVar3 = -(*pcVar2 < '\0') | 0x80;
          pbVar3[1] = -(cVar5 < '\0') | 0x80;
          pbVar3[2] = -(cVar8 < '\0') | 0x80;
          pbVar3[3] = -(cVar9 < '\0') | 0x80;
          pbVar3[4] = -(cVar10 < '\0') | 0x80;
          pbVar3[5] = -(cVar11 < '\0') | 0x80;
          pbVar3[6] = -(cVar12 < '\0') | 0x80;
          pbVar3[7] = -(cVar13 < '\0') | 0x80;
          pbVar3[8] = -(cVar14 < '\0') | 0x80;
          pbVar3[9] = -(cVar15 < SUB161((undefined1  [16])0x0,9)) | 0x80;
          pbVar3[10] = -(cVar16 < SUB161((undefined1  [16])0x0,10)) | 0x80;
          pbVar3[0xb] = -(cVar17 < SUB161((undefined1  [16])0x0,0xb)) | 0x80;
          pbVar3[0xc] = -(cVar18 < SUB161((undefined1  [16])0x0,0xc)) | 0x80;
          pbVar3[0xd] = -(cVar19 < SUB161((undefined1  [16])0x0,0xd)) | 0x80;
          pbVar3[0xe] = -(cVar20 < SUB161((undefined1  [16])0x0,0xe)) | 0x80;
          pbVar3[0xf] = -(cVar21 < SUB161((undefined1  [16])0x0,0xf)) | 0x80;
        }
        uVar25 = 0x10;
        if (0x10 < uVar1) {
          uVar25 = uVar1;
        }
        _Size = 0x10;
        if (uVar1 < 0x10) {
          _Size = uVar1;
        }
        memmove((void *)(uVar25 + (longlong)_Src),_Src,_Size);
        local_90 = &LAB_18000afb0;
        local_88 = 0x20;
        uVar25 = 1;
        uVar30 = 0;
        local_98 = param_1;
        do {
          uVar27 = uVar25;
          lVar37 = *param_1;
          if (SBORROW1('\0',*(char *)(lVar37 + uVar30))) {
            puVar39 = (undefined8 *)(~uVar30 * 0x20 + lVar37);
            while( true ) {
              uVar26 = FUN_1801bb6b0(local_58,lVar37 + uVar30 * -0x20 + -0x20);
              pauVar38 = (undefined1 (*) [16])*param_1;
              uVar25 = param_1[1];
              uVar33 = uVar25 & uVar26;
              auVar4 = *(undefined1 (*) [16])(*pauVar38 + uVar33);
              uVar7 = (ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
              uVar32 = (uint)uVar7;
              uVar36 = uVar33;
              if (uVar7 == 0) {
                lVar37 = 0x10;
                do {
                  uVar36 = uVar36 + lVar37 & uVar25;
                  auVar4 = *(undefined1 (*) [16])(*pauVar38 + uVar36);
                  lVar37 = lVar37 + 0x10;
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
              uVar35 = 0;
              for (; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              uVar36 = uVar35 + uVar36 & uVar25;
              if (-1 < (char)(*pauVar38)[uVar36]) {
                auVar4 = *pauVar38;
                uVar32 = 0;
                for (uVar35 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
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
                    (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
                  uVar32 = uVar32 + 1;
                }
                uVar36 = (ulonglong)uVar32;
              }
              bVar24 = (byte)(uVar26 >> 0x38);
              if (((uVar36 - uVar33 ^ uVar30 - uVar33) & uVar25) < 0x10) {
                bVar24 = bVar24 >> 1;
                (*pauVar38)[uVar30] = bVar24;
                *(byte *)(*param_1 + 0x10 + (uVar25 & uVar30 - 0x10)) = bVar24;
                goto LAB_1801fd4f7;
              }
              pauVar34 = pauVar38 + ~uVar36 * 2;
              cVar5 = (*pauVar38)[uVar36];
              bVar24 = bVar24 >> 1;
              (*pauVar38)[uVar36] = bVar24;
              *(byte *)(*param_1 + 0x10 + (uVar36 - 0x10 & uVar25)) = bVar24;
              if (cVar5 == -1) break;
              uVar6 = *puVar39;
              *puVar39 = *(undefined8 *)*pauVar34;
              *(undefined8 *)*pauVar34 = uVar6;
              uVar6 = puVar39[1];
              puVar39[1] = *(undefined8 *)(*pauVar34 + 8);
              *(undefined8 *)(*pauVar34 + 8) = uVar6;
              uVar6 = puVar39[2];
              puVar39[2] = *(undefined8 *)pauVar34[1];
              *(undefined8 *)pauVar34[1] = uVar6;
              uVar6 = puVar39[3];
              puVar39[3] = *(undefined8 *)(pauVar34[1] + 8);
              *(undefined8 *)(pauVar34[1] + 8) = uVar6;
              lVar37 = *param_1;
            }
            uVar25 = param_1[1];
            *(undefined1 *)(*param_1 + uVar30) = 0xff;
            *(undefined1 *)(*param_1 + 0x10 + (uVar30 - 0x10 & uVar25)) = 0xff;
            uVar6 = *puVar39;
            uVar22 = puVar39[1];
            uVar23 = puVar39[3];
            *(undefined8 *)pauVar34[1] = puVar39[2];
            *(undefined8 *)(pauVar34[1] + 8) = uVar23;
            *(undefined8 *)*pauVar34 = uVar6;
            *(undefined8 *)(*pauVar34 + 8) = uVar22;
          }
LAB_1801fd4f7:
          uVar25 = uVar27 + (uVar27 < uVar1);
          uVar30 = uVar27;
        } while (uVar27 < uVar1);
        uVar1 = param_1[1];
        uVar25 = param_1[3];
        uVar30 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
        if (uVar1 < 8) {
          uVar30 = uVar1;
        }
      }
      param_1[2] = uVar30 - uVar25;
    }
    uVar25 = 0x8000000000000001;
  }
  return uVar25;
}


