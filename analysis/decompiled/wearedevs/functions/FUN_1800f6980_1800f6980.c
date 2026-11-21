/* FUN_1800f6980 @ 1800f6980 */

undefined8 * FUN_1800f6980(undefined8 *param_1,short *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 *puVar27;
  void *_Dst;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  ulonglong unaff_R14;
  undefined8 uVar32;
  ulonglong unaff_R15;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  byte *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  short *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if ((param_3 == 3) && ((char)param_2[1] == '*' && *param_2 == 0x2f2a)) {
    param_1[10] = 1;
    param_1[8] = 3;
    param_1[9] = 0;
    param_1[6] = 0x100;
    param_1[7] = &UNK_180217470;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0x8000000000000002;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  local_c0 = (longlong)param_2 + param_3;
  uVar29 = 0;
  do {
    uVar28 = uVar29;
    if (param_3 == uVar28) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return param_1;
    }
    bVar33 = *(byte *)((longlong)param_2 + uVar28);
    uVar29 = uVar28 + 1;
  } while ((&DAT_180217260)[bVar33] != '\0');
  if (uVar29 == 1 || bVar33 != 0x2f) {
    *(undefined1 *)(param_1 + 1) = 3;
    *(byte *)((longlong)param_1 + 9) = bVar33;
    param_1[2] = uVar28;
    *param_1 = 2;
    return param_1;
  }
  local_78 = param_1;
  if (param_3 == uVar29) {
    uVar30 = 0;
  }
  else {
    uVar31 = uVar29;
    uVar32 = 0;
    pbVar1 = (byte *)((longlong)param_2 + uVar29);
    do {
      local_c8 = pbVar1 + 1;
      bVar33 = *pbVar1;
      if (bVar33 == 0x2b) {
        uVar30 = 1;
        uVar3 = uVar31;
        if (uVar31 <= uVar29) goto LAB_1800f6a50;
      }
      else {
        if ((bVar33 == 0x3b) && (uVar29 < uVar31)) {
          local_b8 = uVar31 + 1;
          FUN_1800f5b00(&local_108,param_2,param_3,&local_c8,uVar31);
          puVar27 = local_78;
          if (local_108 == 0x8000000000000003) {
            local_78[1] = local_100;
            local_78[2] = local_f8;
            *local_78 = 2;
            return local_78;
          }
          local_98 = local_f8;
          local_80 = (short *)local_100;
          local_90 = local_f0;
          local_88 = local_108;
          uVar29 = 1;
          if ((longlong)local_108 < 0) {
            uVar29 = local_108 ^ 0x8000000000000000;
          }
          if (uVar29 == 0) {
            FUN_1800f6ec0(local_b0,param_2,param_3);
          }
          else if (uVar29 == 1) {
            FUN_1800f6260(local_b0,param_2,param_3,local_f0,local_100,local_f8);
          }
          else {
            if (uVar31 < param_3) {
              if ((char)*pbVar1 < -0x40) {
LAB_1800f6d5b:
                    /* WARNING: Subroutine does not return */
                FUN_1802018d0(param_2,param_3,0,uVar31,
                              &PTR_s_C__Users_burne__cargo_registry_s_1802174d0);
              }
            }
            else if (uVar31 != param_3) goto LAB_1800f6d5b;
            FUN_1800f6ec0(local_b0,param_2,uVar31);
            local_78 = puVar27;
          }
          local_e0 = local_b0[0];
          uStack_df = local_b0._1_7_;
          uStack_d8 = (undefined1)uStack_a8;
          local_78[2] = local_88;
          local_78[3] = local_80;
          local_78[4] = local_98;
          local_78[5] = local_90;
          *local_78 = uVar32;
          local_78[1] = unaff_R14;
          *(undefined1 *)(local_78 + 6) = 1;
          *(ulonglong *)((longlong)local_78 + 0x31) = CONCAT17(local_e0,uStack_e7);
          *(ulonglong *)((longlong)local_78 + 0x39) = CONCAT17(uStack_d8,uStack_df);
          local_78[8] = uStack_a8;
          local_78[9] = local_a0;
          local_78[10] = uVar28;
          return local_78;
        }
LAB_1800f6a50:
        uVar30 = uVar32;
        uVar3 = unaff_R14;
        if ((&DAT_180217260)[bVar33] == '\0') {
          *(undefined1 *)(param_1 + 1) = 3;
          *(byte *)((longlong)param_1 + 9) = bVar33;
          param_1[2] = uVar31;
          *param_1 = 2;
          return param_1;
        }
      }
      unaff_R14 = uVar3;
      uVar31 = uVar31 + 1;
      uVar32 = uVar30;
      unaff_R15 = unaff_R14;
      pbVar1 = local_c8;
    } while (param_3 != uVar31);
  }
  if ((longlong)param_3 < 0) {
    uVar32 = 0;
LAB_1800f6af1:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar32,param_3);
  }
  local_80 = param_2;
  FUN_180027490();
  uVar32 = 1;
  _Dst = (void *)thunk_FUN_1801d32d0(param_3,1);
  if (_Dst == (void *)0x0) goto LAB_1800f6af1;
  memcpy(_Dst,local_80,param_3);
  if (param_3 < 8) {
    uVar31 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar29 = 0;
LAB_1800f6c6a:
      uVar31 = param_3 & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)((longlong)_Dst + uVar29);
        bVar33 = (char)uVar3 + 0xbf;
        bVar34 = (char)(uVar3 >> 8) + 0xbf;
        bVar35 = (char)(uVar3 >> 0x10) + 0xbf;
        bVar36 = (char)(uVar3 >> 0x18) + 0xbf;
        bVar37 = (char)(uVar3 >> 0x20) + 0xbf;
        bVar38 = (char)(uVar3 >> 0x28) + 0xbf;
        bVar39 = (char)(uVar3 >> 0x30) + 0xbf;
        bVar40 = (char)(uVar3 >> 0x38) + 0xbf;
        *(ulonglong *)((longlong)_Dst + uVar29) =
             ~CONCAT17(-((byte)((bVar40 < 0x1a) * '\x1a' | (bVar40 >= 0x1a) * bVar40) == bVar40),
                       CONCAT16(-((byte)((bVar39 < 0x1a) * '\x1a' | (bVar39 >= 0x1a) * bVar39) ==
                                 bVar39),CONCAT15(-((byte)((bVar38 < 0x1a) * '\x1a' |
                                                          (bVar38 >= 0x1a) * bVar38) == bVar38),
                                                  CONCAT14(-((byte)((bVar37 < 0x1a) * '\x1a' |
                                                                   (bVar37 >= 0x1a) * bVar37) ==
                                                            bVar37),CONCAT13(-((byte)((bVar36 < 0x1a
                                                                                      ) * '\x1a' |
                                                                                     (bVar36 >= 0x1a
                                                                                     ) * bVar36) ==
                                                                              bVar36),CONCAT12(-((
                                                  byte)((bVar35 < 0x1a) * '\x1a' |
                                                       (bVar35 >= 0x1a) * bVar35) == bVar35),
                                                  CONCAT11(-((byte)((bVar34 < 0x1a) * '\x1a' |
                                                                   (bVar34 >= 0x1a) * bVar34) ==
                                                            bVar34),-((byte)((bVar33 < 0x1a) *
                                                                             '\x1a' | (bVar33 >=
                                                                                      0x1a) * bVar33
                                                                            ) == bVar33)))))))) &
             0x2020202020202020 | uVar3;
        uVar29 = uVar29 + 8;
        if (uVar31 == uVar29) goto LAB_1800f6e1f;
      } while( true );
    }
    uVar31 = param_3 & 0x7fffffffffffffe0;
    uVar29 = 0;
    do {
      pbVar1 = (byte *)((longlong)_Dst + uVar29);
      bVar33 = pbVar1[1];
      bVar34 = pbVar1[2];
      bVar35 = pbVar1[3];
      bVar36 = pbVar1[4];
      bVar37 = pbVar1[5];
      bVar38 = pbVar1[6];
      bVar39 = pbVar1[7];
      bVar40 = pbVar1[8];
      bVar4 = pbVar1[9];
      bVar5 = pbVar1[10];
      bVar6 = pbVar1[0xb];
      bVar7 = pbVar1[0xc];
      bVar8 = pbVar1[0xd];
      bVar9 = pbVar1[0xe];
      bVar10 = pbVar1[0xf];
      pbVar2 = (byte *)((longlong)_Dst + uVar29 + 0x10);
      bVar11 = *pbVar2;
      bVar12 = pbVar2[1];
      bVar13 = pbVar2[2];
      bVar14 = pbVar2[3];
      bVar15 = pbVar2[4];
      bVar16 = pbVar2[5];
      bVar17 = pbVar2[6];
      bVar18 = pbVar2[7];
      bVar19 = pbVar2[8];
      bVar20 = pbVar2[9];
      bVar21 = pbVar2[10];
      bVar22 = pbVar2[0xb];
      bVar23 = pbVar2[0xc];
      bVar24 = pbVar2[0xd];
      bVar25 = pbVar2[0xe];
      bVar26 = pbVar2[0xf];
      bVar41 = *pbVar1 + 0xbf;
      bVar42 = bVar33 + 0xbf;
      bVar43 = bVar34 + 0xbf;
      bVar44 = bVar35 + 0xbf;
      bVar45 = bVar36 + 0xbf;
      bVar46 = bVar37 + 0xbf;
      bVar47 = bVar38 + 0xbf;
      bVar48 = bVar39 + 0xbf;
      bVar49 = bVar40 + 0xbf;
      bVar50 = bVar4 + 0xbf;
      bVar51 = bVar5 + 0xbf;
      bVar52 = bVar6 + 0xbf;
      bVar53 = bVar7 + 0xbf;
      bVar54 = bVar8 + 0xbf;
      bVar55 = bVar9 + 0xbf;
      bVar56 = bVar10 + 0xbf;
      bVar57 = bVar11 + 0xbf;
      bVar58 = bVar12 + 0xbf;
      bVar59 = bVar13 + 0xbf;
      bVar60 = bVar14 + 0xbf;
      bVar61 = bVar15 + 0xbf;
      bVar62 = bVar16 + 0xbf;
      bVar63 = bVar17 + 0xbf;
      bVar64 = bVar18 + 0xbf;
      bVar65 = bVar19 + 0xbf;
      bVar66 = bVar20 + 0xbf;
      bVar67 = bVar21 + 0xbf;
      bVar68 = bVar22 + 0xbf;
      bVar69 = bVar23 + 0xbf;
      bVar70 = bVar24 + 0xbf;
      bVar71 = bVar25 + 0xbf;
      bVar72 = bVar26 + 0xbf;
      pbVar2 = (byte *)((longlong)_Dst + uVar29);
      *pbVar2 = -((byte)((0x19 < bVar41) * '\x19' | (0x19 >= bVar41) * bVar41) == bVar41) & 0x20U |
                *pbVar1;
      pbVar2[1] = -((byte)((0x19 < bVar42) * '\x19' | (0x19 >= bVar42) * bVar42) == bVar42) & 0x20U
                  | bVar33;
      pbVar2[2] = -((byte)((0x19 < bVar43) * '\x19' | (0x19 >= bVar43) * bVar43) == bVar43) & 0x20U
                  | bVar34;
      pbVar2[3] = -((byte)((0x19 < bVar44) * '\x19' | (0x19 >= bVar44) * bVar44) == bVar44) & 0x20U
                  | bVar35;
      pbVar2[4] = -((byte)((0x19 < bVar45) * '\x19' | (0x19 >= bVar45) * bVar45) == bVar45) & 0x20U
                  | bVar36;
      pbVar2[5] = -((byte)((0x19 < bVar46) * '\x19' | (0x19 >= bVar46) * bVar46) == bVar46) & 0x20U
                  | bVar37;
      pbVar2[6] = -((byte)((0x19 < bVar47) * '\x19' | (0x19 >= bVar47) * bVar47) == bVar47) & 0x20U
                  | bVar38;
      pbVar2[7] = -((byte)((0x19 < bVar48) * '\x19' | (0x19 >= bVar48) * bVar48) == bVar48) & 0x20U
                  | bVar39;
      pbVar2[8] = -((byte)((0x19 < bVar49) * '\x19' | (0x19 >= bVar49) * bVar49) == bVar49) & 0x20U
                  | bVar40;
      pbVar2[9] = -((byte)((0x19 < bVar50) * '\x19' | (0x19 >= bVar50) * bVar50) == bVar50) & 0x20U
                  | bVar4;
      pbVar2[10] = -((byte)((0x19 < bVar51) * '\x19' | (0x19 >= bVar51) * bVar51) == bVar51) & 0x20U
                   | bVar5;
      pbVar2[0xb] = -((byte)((0x19 < bVar52) * '\x19' | (0x19 >= bVar52) * bVar52) == bVar52) &
                    0x20U | bVar6;
      pbVar2[0xc] = -((byte)((0x19 < bVar53) * '\x19' | (0x19 >= bVar53) * bVar53) == bVar53) &
                    0x20U | bVar7;
      pbVar2[0xd] = -((byte)((0x19 < bVar54) * '\x19' | (0x19 >= bVar54) * bVar54) == bVar54) &
                    0x20U | bVar8;
      pbVar2[0xe] = -((byte)((0x19 < bVar55) * '\x19' | (0x19 >= bVar55) * bVar55) == bVar55) &
                    0x20U | bVar9;
      pbVar2[0xf] = -((byte)((0x19 < bVar56) * '\x19' | (0x19 >= bVar56) * bVar56) == bVar56) &
                    0x20U | bVar10;
      pbVar1 = (byte *)((longlong)_Dst + uVar29 + 0x10);
      *pbVar1 = -((byte)((0x19 < bVar57) * '\x19' | (0x19 >= bVar57) * bVar57) == bVar57) & 0x20U |
                bVar11;
      pbVar1[1] = -((byte)((0x19 < bVar58) * '\x19' | (0x19 >= bVar58) * bVar58) == bVar58) & 0x20U
                  | bVar12;
      pbVar1[2] = -((byte)((0x19 < bVar59) * '\x19' | (0x19 >= bVar59) * bVar59) == bVar59) & 0x20U
                  | bVar13;
      pbVar1[3] = -((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60) & 0x20U
                  | bVar14;
      pbVar1[4] = -((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61) & 0x20U
                  | bVar15;
      pbVar1[5] = -((byte)((0x19 < bVar62) * '\x19' | (0x19 >= bVar62) * bVar62) == bVar62) & 0x20U
                  | bVar16;
      pbVar1[6] = -((byte)((0x19 < bVar63) * '\x19' | (0x19 >= bVar63) * bVar63) == bVar63) & 0x20U
                  | bVar17;
      pbVar1[7] = -((byte)((0x19 < bVar64) * '\x19' | (0x19 >= bVar64) * bVar64) == bVar64) & 0x20U
                  | bVar18;
      pbVar1[8] = -((byte)((0x19 < bVar65) * '\x19' | (0x19 >= bVar65) * bVar65) == bVar65) & 0x20U
                  | bVar19;
      pbVar1[9] = -((byte)((0x19 < bVar66) * '\x19' | (0x19 >= bVar66) * bVar66) == bVar66) & 0x20U
                  | bVar20;
      pbVar1[10] = -((byte)((0x19 < bVar67) * '\x19' | (0x19 >= bVar67) * bVar67) == bVar67) & 0x20U
                   | bVar21;
      pbVar1[0xb] = -((byte)((0x19 < bVar68) * '\x19' | (0x19 >= bVar68) * bVar68) == bVar68) &
                    0x20U | bVar22;
      pbVar1[0xc] = -((byte)((0x19 < bVar69) * '\x19' | (0x19 >= bVar69) * bVar69) == bVar69) &
                    0x20U | bVar23;
      pbVar1[0xd] = -((byte)((0x19 < bVar70) * '\x19' | (0x19 >= bVar70) * bVar70) == bVar70) &
                    0x20U | bVar24;
      pbVar1[0xe] = -((byte)((0x19 < bVar71) * '\x19' | (0x19 >= bVar71) * bVar71) == bVar71) &
                    0x20U | bVar25;
      pbVar1[0xf] = -((byte)((0x19 < bVar72) * '\x19' | (0x19 >= bVar72) * bVar72) == bVar72) &
                    0x20U | bVar26;
      uVar29 = uVar29 + 0x20;
    } while (uVar31 != uVar29);
    if (param_3 == uVar31) goto LAB_1800f6e24;
    uVar29 = uVar31;
    if ((param_3 & 0x18) != 0) goto LAB_1800f6c6a;
  }
  do {
    *(byte *)((longlong)_Dst + uVar31) =
         ((byte)(*(byte *)((longlong)_Dst + uVar31) + 0xbf) < 0x1a) << 5 |
         *(byte *)((longlong)_Dst + uVar31);
    uVar31 = uVar31 + 1;
LAB_1800f6e1f:
  } while (param_3 != uVar31);
LAB_1800f6e24:
  *local_78 = uVar30;
  local_78[1] = unaff_R15;
  local_78[2] = 0x8000000000000002;
  *(undefined1 *)(local_78 + 6) = 1;
  local_78[7] = param_3;
  local_78[8] = _Dst;
  local_78[9] = param_3;
  local_78[10] = uVar28;
  return local_78;
}


