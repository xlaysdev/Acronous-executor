/* FUN_1800f6ec0 @ 1800f6ec0 */

void FUN_1800f6ec0(ulonglong *param_1,void *param_2,ulonglong param_3)

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
  void *_Dst;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
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
  
  if ((longlong)param_3 < 0) {
    uVar29 = 0;
LAB_1800f6ee2:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar29,param_3);
  }
  if (param_3 == 0) {
    _Dst = (void *)0x1;
    memcpy((void *)0x1,param_2,0);
  }
  else {
    FUN_180027490();
    uVar29 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(param_3,1);
    if (_Dst == (void *)0x0) goto LAB_1800f6ee2;
    memcpy(_Dst,param_2,param_3);
    if (param_3 < 8) {
      uVar27 = 0;
    }
    else {
      if (param_3 < 0x20) {
        uVar28 = 0;
LAB_1800f6fe6:
        uVar27 = param_3 & 0x7ffffffffffffff8;
        do {
          uVar3 = *(ulonglong *)((longlong)_Dst + uVar28);
          bVar30 = (char)uVar3 + 0xbf;
          bVar31 = (char)(uVar3 >> 8) + 0xbf;
          bVar32 = (char)(uVar3 >> 0x10) + 0xbf;
          bVar33 = (char)(uVar3 >> 0x18) + 0xbf;
          bVar34 = (char)(uVar3 >> 0x20) + 0xbf;
          bVar35 = (char)(uVar3 >> 0x28) + 0xbf;
          bVar36 = (char)(uVar3 >> 0x30) + 0xbf;
          bVar37 = (char)(uVar3 >> 0x38) + 0xbf;
          *(ulonglong *)((longlong)_Dst + uVar28) =
               ~CONCAT17(-((byte)((bVar37 < 0x1a) * '\x1a' | (bVar37 >= 0x1a) * bVar37) == bVar37),
                         CONCAT16(-((byte)((bVar36 < 0x1a) * '\x1a' | (bVar36 >= 0x1a) * bVar36) ==
                                   bVar36),CONCAT15(-((byte)((bVar35 < 0x1a) * '\x1a' |
                                                            (bVar35 >= 0x1a) * bVar35) == bVar35),
                                                    CONCAT14(-((byte)((bVar34 < 0x1a) * '\x1a' |
                                                                     (bVar34 >= 0x1a) * bVar34) ==
                                                              bVar34),CONCAT13(-((byte)((bVar33 < 
                                                  0x1a) * '\x1a' | (bVar33 >= 0x1a) * bVar33) ==
                                                  bVar33),CONCAT12(-((byte)((bVar32 < 0x1a) * '\x1a'
                                                                           | (bVar32 >= 0x1a) *
                                                                             bVar32) == bVar32),
                                                                   CONCAT11(-((byte)((bVar31 < 0x1a)
                                                                                     * '\x1a' |
                                                                                    (bVar31 >= 0x1a)
                                                                                    * bVar31) ==
                                                                             bVar31),-((byte)((
                                                  bVar30 < 0x1a) * '\x1a' |
                                                  (bVar30 >= 0x1a) * bVar30) == bVar30)))))))) &
               0x2020202020202020 | uVar3;
          uVar28 = uVar28 + 8;
          if (uVar27 == uVar28) goto LAB_1800f7059;
        } while( true );
      }
      uVar27 = param_3 & 0x7fffffffffffffe0;
      uVar28 = 0;
      do {
        pbVar1 = (byte *)((longlong)_Dst + uVar28);
        bVar30 = pbVar1[1];
        bVar31 = pbVar1[2];
        bVar32 = pbVar1[3];
        bVar33 = pbVar1[4];
        bVar34 = pbVar1[5];
        bVar35 = pbVar1[6];
        bVar36 = pbVar1[7];
        bVar37 = pbVar1[8];
        bVar4 = pbVar1[9];
        bVar5 = pbVar1[10];
        bVar6 = pbVar1[0xb];
        bVar7 = pbVar1[0xc];
        bVar8 = pbVar1[0xd];
        bVar9 = pbVar1[0xe];
        bVar10 = pbVar1[0xf];
        pbVar2 = (byte *)((longlong)_Dst + uVar28 + 0x10);
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
        bVar38 = *pbVar1 + 0xbf;
        bVar39 = bVar30 + 0xbf;
        bVar40 = bVar31 + 0xbf;
        bVar41 = bVar32 + 0xbf;
        bVar42 = bVar33 + 0xbf;
        bVar43 = bVar34 + 0xbf;
        bVar44 = bVar35 + 0xbf;
        bVar45 = bVar36 + 0xbf;
        bVar46 = bVar37 + 0xbf;
        bVar47 = bVar4 + 0xbf;
        bVar48 = bVar5 + 0xbf;
        bVar49 = bVar6 + 0xbf;
        bVar50 = bVar7 + 0xbf;
        bVar51 = bVar8 + 0xbf;
        bVar52 = bVar9 + 0xbf;
        bVar53 = bVar10 + 0xbf;
        bVar54 = bVar11 + 0xbf;
        bVar55 = bVar12 + 0xbf;
        bVar56 = bVar13 + 0xbf;
        bVar57 = bVar14 + 0xbf;
        bVar58 = bVar15 + 0xbf;
        bVar59 = bVar16 + 0xbf;
        bVar60 = bVar17 + 0xbf;
        bVar61 = bVar18 + 0xbf;
        bVar62 = bVar19 + 0xbf;
        bVar63 = bVar20 + 0xbf;
        bVar64 = bVar21 + 0xbf;
        bVar65 = bVar22 + 0xbf;
        bVar66 = bVar23 + 0xbf;
        bVar67 = bVar24 + 0xbf;
        bVar68 = bVar25 + 0xbf;
        bVar69 = bVar26 + 0xbf;
        pbVar2 = (byte *)((longlong)_Dst + uVar28);
        *pbVar2 = -((byte)((0x19 < bVar38) * '\x19' | (0x19 >= bVar38) * bVar38) == bVar38) & 0x20U
                  | *pbVar1;
        pbVar2[1] = -((byte)((0x19 < bVar39) * '\x19' | (0x19 >= bVar39) * bVar39) == bVar39) &
                    0x20U | bVar30;
        pbVar2[2] = -((byte)((0x19 < bVar40) * '\x19' | (0x19 >= bVar40) * bVar40) == bVar40) &
                    0x20U | bVar31;
        pbVar2[3] = -((byte)((0x19 < bVar41) * '\x19' | (0x19 >= bVar41) * bVar41) == bVar41) &
                    0x20U | bVar32;
        pbVar2[4] = -((byte)((0x19 < bVar42) * '\x19' | (0x19 >= bVar42) * bVar42) == bVar42) &
                    0x20U | bVar33;
        pbVar2[5] = -((byte)((0x19 < bVar43) * '\x19' | (0x19 >= bVar43) * bVar43) == bVar43) &
                    0x20U | bVar34;
        pbVar2[6] = -((byte)((0x19 < bVar44) * '\x19' | (0x19 >= bVar44) * bVar44) == bVar44) &
                    0x20U | bVar35;
        pbVar2[7] = -((byte)((0x19 < bVar45) * '\x19' | (0x19 >= bVar45) * bVar45) == bVar45) &
                    0x20U | bVar36;
        pbVar2[8] = -((byte)((0x19 < bVar46) * '\x19' | (0x19 >= bVar46) * bVar46) == bVar46) &
                    0x20U | bVar37;
        pbVar2[9] = -((byte)((0x19 < bVar47) * '\x19' | (0x19 >= bVar47) * bVar47) == bVar47) &
                    0x20U | bVar4;
        pbVar2[10] = -((byte)((0x19 < bVar48) * '\x19' | (0x19 >= bVar48) * bVar48) == bVar48) &
                     0x20U | bVar5;
        pbVar2[0xb] = -((byte)((0x19 < bVar49) * '\x19' | (0x19 >= bVar49) * bVar49) == bVar49) &
                      0x20U | bVar6;
        pbVar2[0xc] = -((byte)((0x19 < bVar50) * '\x19' | (0x19 >= bVar50) * bVar50) == bVar50) &
                      0x20U | bVar7;
        pbVar2[0xd] = -((byte)((0x19 < bVar51) * '\x19' | (0x19 >= bVar51) * bVar51) == bVar51) &
                      0x20U | bVar8;
        pbVar2[0xe] = -((byte)((0x19 < bVar52) * '\x19' | (0x19 >= bVar52) * bVar52) == bVar52) &
                      0x20U | bVar9;
        pbVar2[0xf] = -((byte)((0x19 < bVar53) * '\x19' | (0x19 >= bVar53) * bVar53) == bVar53) &
                      0x20U | bVar10;
        pbVar1 = (byte *)((longlong)_Dst + uVar28 + 0x10);
        *pbVar1 = -((byte)((0x19 < bVar54) * '\x19' | (0x19 >= bVar54) * bVar54) == bVar54) & 0x20U
                  | bVar11;
        pbVar1[1] = -((byte)((0x19 < bVar55) * '\x19' | (0x19 >= bVar55) * bVar55) == bVar55) &
                    0x20U | bVar12;
        pbVar1[2] = -((byte)((0x19 < bVar56) * '\x19' | (0x19 >= bVar56) * bVar56) == bVar56) &
                    0x20U | bVar13;
        pbVar1[3] = -((byte)((0x19 < bVar57) * '\x19' | (0x19 >= bVar57) * bVar57) == bVar57) &
                    0x20U | bVar14;
        pbVar1[4] = -((byte)((0x19 < bVar58) * '\x19' | (0x19 >= bVar58) * bVar58) == bVar58) &
                    0x20U | bVar15;
        pbVar1[5] = -((byte)((0x19 < bVar59) * '\x19' | (0x19 >= bVar59) * bVar59) == bVar59) &
                    0x20U | bVar16;
        pbVar1[6] = -((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60) &
                    0x20U | bVar17;
        pbVar1[7] = -((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61) &
                    0x20U | bVar18;
        pbVar1[8] = -((byte)((0x19 < bVar62) * '\x19' | (0x19 >= bVar62) * bVar62) == bVar62) &
                    0x20U | bVar19;
        pbVar1[9] = -((byte)((0x19 < bVar63) * '\x19' | (0x19 >= bVar63) * bVar63) == bVar63) &
                    0x20U | bVar20;
        pbVar1[10] = -((byte)((0x19 < bVar64) * '\x19' | (0x19 >= bVar64) * bVar64) == bVar64) &
                     0x20U | bVar21;
        pbVar1[0xb] = -((byte)((0x19 < bVar65) * '\x19' | (0x19 >= bVar65) * bVar65) == bVar65) &
                      0x20U | bVar22;
        pbVar1[0xc] = -((byte)((0x19 < bVar66) * '\x19' | (0x19 >= bVar66) * bVar66) == bVar66) &
                      0x20U | bVar23;
        pbVar1[0xd] = -((byte)((0x19 < bVar67) * '\x19' | (0x19 >= bVar67) * bVar67) == bVar67) &
                      0x20U | bVar24;
        pbVar1[0xe] = -((byte)((0x19 < bVar68) * '\x19' | (0x19 >= bVar68) * bVar68) == bVar68) &
                      0x20U | bVar25;
        pbVar1[0xf] = -((byte)((0x19 < bVar69) * '\x19' | (0x19 >= bVar69) * bVar69) == bVar69) &
                      0x20U | bVar26;
        uVar28 = uVar28 + 0x20;
      } while (uVar27 != uVar28);
      if (param_3 == uVar27) goto LAB_1800f705e;
      uVar28 = uVar27;
      if ((param_3 & 0x18) != 0) goto LAB_1800f6fe6;
    }
    do {
      *(byte *)((longlong)_Dst + uVar27) =
           ((byte)(*(byte *)((longlong)_Dst + uVar27) + 0xbf) < 0x1a) << 5 |
           *(byte *)((longlong)_Dst + uVar27);
      uVar27 = uVar27 + 1;
LAB_1800f7059:
    } while (param_3 != uVar27);
  }
LAB_1800f705e:
  *param_1 = param_3;
  param_1[1] = (ulonglong)_Dst;
  param_1[2] = param_3;
  return;
}


