/* FUN_1800f6260 @ 1800f6260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f6260(ulonglong *param_1,void *param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong *param_5,longlong param_6)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  void *_Dst;
  ulonglong uVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
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
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  
  if ((longlong)param_3 < 0) {
    uVar26 = 0;
LAB_1800f62a9:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar26,param_3);
  }
  if (param_3 == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar26 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(param_3,1);
    if (_Dst == (void *)0x0) goto LAB_1800f62a9;
  }
  memcpy(_Dst,param_2,param_3);
  if (param_4 != 0) {
    if (param_4 < param_3) {
      if (*(char *)((longlong)_Dst + param_4) < -0x40) goto LAB_1800f630d;
    }
    else if (param_4 != param_3) {
LAB_1800f630d:
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(_Dst,param_3,0,param_4,&PTR_s_C__Users_burne__cargo_registry_s_180217410,_Dst,
                    param_3);
    }
    if (param_4 < 8) {
      uVar23 = 0;
    }
    else {
      if (param_4 < 0x20) {
        uVar25 = 0;
LAB_1800f63da:
        uVar23 = param_4 & 0xfffffffffffffff8;
        do {
          uVar27 = *(ulonglong *)((longlong)_Dst + uVar25);
          bVar46 = (char)uVar27 + 0xbf;
          bVar47 = (char)(uVar27 >> 8) + 0xbf;
          bVar48 = (char)(uVar27 >> 0x10) + 0xbf;
          bVar49 = (char)(uVar27 >> 0x18) + 0xbf;
          bVar50 = (char)(uVar27 >> 0x20) + 0xbf;
          bVar51 = (char)(uVar27 >> 0x28) + 0xbf;
          bVar52 = (char)(uVar27 >> 0x30) + 0xbf;
          bVar53 = (char)(uVar27 >> 0x38) + 0xbf;
          *(ulonglong *)((longlong)_Dst + uVar25) =
               ~CONCAT17(-((byte)((bVar53 < 0x1a) * '\x1a' | (bVar53 >= 0x1a) * bVar53) == bVar53),
                         CONCAT16(-((byte)((bVar52 < 0x1a) * '\x1a' | (bVar52 >= 0x1a) * bVar52) ==
                                   bVar52),CONCAT15(-((byte)((bVar51 < 0x1a) * '\x1a' |
                                                            (bVar51 >= 0x1a) * bVar51) == bVar51),
                                                    CONCAT14(-((byte)((bVar50 < 0x1a) * '\x1a' |
                                                                     (bVar50 >= 0x1a) * bVar50) ==
                                                              bVar50),CONCAT13(-((byte)((bVar49 < 
                                                  0x1a) * '\x1a' | (bVar49 >= 0x1a) * bVar49) ==
                                                  bVar49),CONCAT12(-((byte)((bVar48 < 0x1a) * '\x1a'
                                                                           | (bVar48 >= 0x1a) *
                                                                             bVar48) == bVar48),
                                                                   CONCAT11(-((byte)((bVar47 < 0x1a)
                                                                                     * '\x1a' |
                                                                                    (bVar47 >= 0x1a)
                                                                                    * bVar47) ==
                                                                             bVar47),-((byte)((
                                                  bVar46 < 0x1a) * '\x1a' |
                                                  (bVar46 >= 0x1a) * bVar46) == bVar46)))))))) &
               0x2020202020202020 | uVar27;
          uVar25 = uVar25 + 8;
          if (uVar23 == uVar25) goto LAB_1800f644d;
        } while( true );
      }
      uVar23 = param_4 & 0xffffffffffffffe0;
      uVar25 = 0;
      do {
        pbVar2 = (byte *)((longlong)_Dst + uVar25);
        bVar46 = pbVar2[1];
        bVar47 = pbVar2[2];
        bVar48 = pbVar2[3];
        bVar49 = pbVar2[4];
        bVar50 = pbVar2[5];
        bVar51 = pbVar2[6];
        bVar52 = pbVar2[7];
        bVar53 = pbVar2[8];
        bVar62 = pbVar2[9];
        bVar63 = pbVar2[10];
        bVar64 = pbVar2[0xb];
        bVar65 = pbVar2[0xc];
        bVar66 = pbVar2[0xd];
        bVar67 = pbVar2[0xe];
        bVar68 = pbVar2[0xf];
        pbVar3 = (byte *)((longlong)_Dst + uVar25 + 0x10);
        bVar69 = *pbVar3;
        bVar5 = pbVar3[1];
        bVar6 = pbVar3[2];
        bVar7 = pbVar3[3];
        bVar8 = pbVar3[4];
        bVar9 = pbVar3[5];
        bVar10 = pbVar3[6];
        bVar11 = pbVar3[7];
        bVar12 = pbVar3[8];
        bVar13 = pbVar3[9];
        bVar14 = pbVar3[10];
        bVar15 = pbVar3[0xb];
        bVar16 = pbVar3[0xc];
        bVar17 = pbVar3[0xd];
        bVar18 = pbVar3[0xe];
        bVar19 = pbVar3[0xf];
        bVar54 = *pbVar2 + 0xbf;
        bVar55 = bVar46 + 0xbf;
        bVar56 = bVar47 + 0xbf;
        bVar57 = bVar48 + 0xbf;
        bVar58 = bVar49 + 0xbf;
        bVar59 = bVar50 + 0xbf;
        bVar60 = bVar51 + 0xbf;
        bVar61 = bVar52 + 0xbf;
        bVar70 = bVar53 + 0xbf;
        bVar71 = bVar62 + 0xbf;
        bVar72 = bVar63 + 0xbf;
        bVar73 = bVar64 + 0xbf;
        bVar74 = bVar65 + 0xbf;
        bVar75 = bVar66 + 0xbf;
        bVar76 = bVar67 + 0xbf;
        bVar77 = bVar68 + 0xbf;
        bVar78 = bVar69 + 0xbf;
        bVar79 = bVar5 + 0xbf;
        bVar80 = bVar6 + 0xbf;
        bVar81 = bVar7 + 0xbf;
        bVar82 = bVar8 + 0xbf;
        bVar83 = bVar9 + 0xbf;
        bVar84 = bVar10 + 0xbf;
        bVar85 = bVar11 + 0xbf;
        bVar86 = bVar12 + 0xbf;
        bVar87 = bVar13 + 0xbf;
        bVar88 = bVar14 + 0xbf;
        bVar89 = bVar15 + 0xbf;
        bVar90 = bVar16 + 0xbf;
        bVar91 = bVar17 + 0xbf;
        bVar92 = bVar18 + 0xbf;
        bVar93 = bVar19 + 0xbf;
        pbVar3 = (byte *)((longlong)_Dst + uVar25);
        *pbVar3 = -((byte)((0x19 < bVar54) * '\x19' | (0x19 >= bVar54) * bVar54) == bVar54) & 0x20U
                  | *pbVar2;
        pbVar3[1] = -((byte)((0x19 < bVar55) * '\x19' | (0x19 >= bVar55) * bVar55) == bVar55) &
                    0x20U | bVar46;
        pbVar3[2] = -((byte)((0x19 < bVar56) * '\x19' | (0x19 >= bVar56) * bVar56) == bVar56) &
                    0x20U | bVar47;
        pbVar3[3] = -((byte)((0x19 < bVar57) * '\x19' | (0x19 >= bVar57) * bVar57) == bVar57) &
                    0x20U | bVar48;
        pbVar3[4] = -((byte)((0x19 < bVar58) * '\x19' | (0x19 >= bVar58) * bVar58) == bVar58) &
                    0x20U | bVar49;
        pbVar3[5] = -((byte)((0x19 < bVar59) * '\x19' | (0x19 >= bVar59) * bVar59) == bVar59) &
                    0x20U | bVar50;
        pbVar3[6] = -((byte)((0x19 < bVar60) * '\x19' | (0x19 >= bVar60) * bVar60) == bVar60) &
                    0x20U | bVar51;
        pbVar3[7] = -((byte)((0x19 < bVar61) * '\x19' | (0x19 >= bVar61) * bVar61) == bVar61) &
                    0x20U | bVar52;
        pbVar3[8] = -((byte)((0x19 < bVar70) * '\x19' | (0x19 >= bVar70) * bVar70) == bVar70) &
                    0x20U | bVar53;
        pbVar3[9] = -((byte)((0x19 < bVar71) * '\x19' | (0x19 >= bVar71) * bVar71) == bVar71) &
                    0x20U | bVar62;
        pbVar3[10] = -((byte)((0x19 < bVar72) * '\x19' | (0x19 >= bVar72) * bVar72) == bVar72) &
                     0x20U | bVar63;
        pbVar3[0xb] = -((byte)((0x19 < bVar73) * '\x19' | (0x19 >= bVar73) * bVar73) == bVar73) &
                      0x20U | bVar64;
        pbVar3[0xc] = -((byte)((0x19 < bVar74) * '\x19' | (0x19 >= bVar74) * bVar74) == bVar74) &
                      0x20U | bVar65;
        pbVar3[0xd] = -((byte)((0x19 < bVar75) * '\x19' | (0x19 >= bVar75) * bVar75) == bVar75) &
                      0x20U | bVar66;
        pbVar3[0xe] = -((byte)((0x19 < bVar76) * '\x19' | (0x19 >= bVar76) * bVar76) == bVar76) &
                      0x20U | bVar67;
        pbVar3[0xf] = -((byte)((0x19 < bVar77) * '\x19' | (0x19 >= bVar77) * bVar77) == bVar77) &
                      0x20U | bVar68;
        pbVar2 = (byte *)((longlong)_Dst + uVar25 + 0x10);
        *pbVar2 = -((byte)((0x19 < bVar78) * '\x19' | (0x19 >= bVar78) * bVar78) == bVar78) & 0x20U
                  | bVar69;
        pbVar2[1] = -((byte)((0x19 < bVar79) * '\x19' | (0x19 >= bVar79) * bVar79) == bVar79) &
                    0x20U | bVar5;
        pbVar2[2] = -((byte)((0x19 < bVar80) * '\x19' | (0x19 >= bVar80) * bVar80) == bVar80) &
                    0x20U | bVar6;
        pbVar2[3] = -((byte)((0x19 < bVar81) * '\x19' | (0x19 >= bVar81) * bVar81) == bVar81) &
                    0x20U | bVar7;
        pbVar2[4] = -((byte)((0x19 < bVar82) * '\x19' | (0x19 >= bVar82) * bVar82) == bVar82) &
                    0x20U | bVar8;
        pbVar2[5] = -((byte)((0x19 < bVar83) * '\x19' | (0x19 >= bVar83) * bVar83) == bVar83) &
                    0x20U | bVar9;
        pbVar2[6] = -((byte)((0x19 < bVar84) * '\x19' | (0x19 >= bVar84) * bVar84) == bVar84) &
                    0x20U | bVar10;
        pbVar2[7] = -((byte)((0x19 < bVar85) * '\x19' | (0x19 >= bVar85) * bVar85) == bVar85) &
                    0x20U | bVar11;
        pbVar2[8] = -((byte)((0x19 < bVar86) * '\x19' | (0x19 >= bVar86) * bVar86) == bVar86) &
                    0x20U | bVar12;
        pbVar2[9] = -((byte)((0x19 < bVar87) * '\x19' | (0x19 >= bVar87) * bVar87) == bVar87) &
                    0x20U | bVar13;
        pbVar2[10] = -((byte)((0x19 < bVar88) * '\x19' | (0x19 >= bVar88) * bVar88) == bVar88) &
                     0x20U | bVar14;
        pbVar2[0xb] = -((byte)((0x19 < bVar89) * '\x19' | (0x19 >= bVar89) * bVar89) == bVar89) &
                      0x20U | bVar15;
        pbVar2[0xc] = -((byte)((0x19 < bVar90) * '\x19' | (0x19 >= bVar90) * bVar90) == bVar90) &
                      0x20U | bVar16;
        pbVar2[0xd] = -((byte)((0x19 < bVar91) * '\x19' | (0x19 >= bVar91) * bVar91) == bVar91) &
                      0x20U | bVar17;
        pbVar2[0xe] = -((byte)((0x19 < bVar92) * '\x19' | (0x19 >= bVar92) * bVar92) == bVar92) &
                      0x20U | bVar18;
        pbVar2[0xf] = -((byte)((0x19 < bVar93) * '\x19' | (0x19 >= bVar93) * bVar93) == bVar93) &
                      0x20U | bVar19;
        uVar25 = uVar25 + 0x20;
      } while (uVar23 != uVar25);
      if (param_4 == uVar23) goto LAB_1800f6452;
      uVar25 = uVar23;
      if ((param_4 & 0x18) != 0) goto LAB_1800f63da;
    }
    do {
      *(byte *)((longlong)_Dst + uVar23) =
           ((byte)(*(byte *)((longlong)_Dst + uVar23) + 0xbf) < 0x1a) << 5 |
           *(byte *)((longlong)_Dst + uVar23);
      uVar23 = uVar23 + 1;
LAB_1800f644d:
    } while (param_4 != uVar23);
  }
LAB_1800f6452:
  auVar22 = _DAT_180207d90;
  auVar21 = _DAT_180207d80;
  auVar20 = _DAT_180207d50;
  if (param_6 != 0) {
    puVar24 = param_5 + param_6 * 4;
    do {
      uVar25 = *param_5;
      uVar23 = param_5[1];
      if (uVar23 < uVar25) goto LAB_1800f688c;
      if (uVar25 != 0) {
        if (uVar25 < param_3) {
          if (*(char *)((longlong)_Dst + uVar25) < -0x40) goto LAB_1800f688c;
        }
        else if (uVar25 != param_3) goto LAB_1800f688c;
      }
      if (uVar23 != 0) {
        if (uVar23 < param_3) {
          if (*(char *)((longlong)_Dst + uVar23) < -0x40) goto LAB_1800f688c;
        }
        else if (uVar23 != param_3) {
LAB_1800f688c:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(_Dst,param_3,uVar25,uVar23,&PTR_s_C__Users_burne__cargo_registry_s_180217428
                        ,_Dst,param_3);
        }
      }
      piVar1 = (int *)((longlong)_Dst + uVar25);
      uVar27 = uVar23 - uVar25;
      cVar30 = auVar20[0];
      cVar31 = auVar20[1];
      cVar32 = auVar20[2];
      cVar33 = auVar20[3];
      cVar34 = auVar20[4];
      cVar35 = auVar20[5];
      cVar36 = auVar20[6];
      cVar37 = auVar20[7];
      cVar38 = auVar20[8];
      cVar39 = auVar20[9];
      cVar40 = auVar20[10];
      cVar41 = auVar20[0xb];
      cVar42 = auVar20[0xc];
      cVar43 = auVar20[0xd];
      cVar44 = auVar20[0xe];
      cVar45 = auVar20[0xf];
      bVar46 = auVar22[0];
      bVar47 = auVar22[1];
      bVar48 = auVar22[2];
      bVar49 = auVar22[3];
      bVar50 = auVar22[4];
      bVar51 = auVar22[5];
      bVar52 = auVar22[6];
      bVar53 = auVar22[7];
      if (uVar27 != 0) {
        if (uVar27 < 8) {
          uVar29 = 0;
        }
        else {
          if (uVar27 < 0x20) {
            uVar28 = 0;
          }
          else {
            uVar29 = uVar27 & 0xffffffffffffffe0;
            uVar28 = 0;
            do {
              pbVar3 = (byte *)((longlong)_Dst + uVar28 + uVar25);
              bVar62 = pbVar3[1];
              bVar63 = pbVar3[2];
              bVar64 = pbVar3[3];
              bVar65 = pbVar3[4];
              bVar66 = pbVar3[5];
              bVar67 = pbVar3[6];
              bVar68 = pbVar3[7];
              bVar69 = pbVar3[8];
              bVar5 = pbVar3[9];
              bVar6 = pbVar3[10];
              bVar7 = pbVar3[0xb];
              bVar8 = pbVar3[0xc];
              bVar9 = pbVar3[0xd];
              bVar10 = pbVar3[0xe];
              bVar11 = pbVar3[0xf];
              pbVar2 = (byte *)((longlong)_Dst + uVar28 + uVar25 + 0x10);
              bVar12 = *pbVar2;
              bVar13 = pbVar2[1];
              bVar14 = pbVar2[2];
              bVar15 = pbVar2[3];
              bVar16 = pbVar2[4];
              bVar17 = pbVar2[5];
              bVar18 = pbVar2[6];
              bVar19 = pbVar2[7];
              bVar54 = pbVar2[8];
              bVar55 = pbVar2[9];
              bVar56 = pbVar2[10];
              bVar57 = pbVar2[0xb];
              bVar58 = pbVar2[0xc];
              bVar59 = pbVar2[0xd];
              bVar60 = pbVar2[0xe];
              bVar61 = pbVar2[0xf];
              bVar70 = *pbVar3 + cVar30;
              bVar71 = bVar62 + cVar31;
              bVar72 = bVar63 + cVar32;
              bVar73 = bVar64 + cVar33;
              bVar74 = bVar65 + cVar34;
              bVar75 = bVar66 + cVar35;
              bVar76 = bVar67 + cVar36;
              bVar77 = bVar68 + cVar37;
              bVar78 = bVar69 + cVar38;
              bVar79 = bVar5 + cVar39;
              bVar80 = bVar6 + cVar40;
              bVar81 = bVar7 + cVar41;
              bVar82 = bVar8 + cVar42;
              bVar83 = bVar9 + cVar43;
              bVar84 = bVar10 + cVar44;
              bVar85 = bVar11 + cVar45;
              bVar86 = bVar12 + cVar30;
              bVar87 = bVar13 + cVar31;
              bVar88 = bVar14 + cVar32;
              bVar89 = bVar15 + cVar33;
              bVar90 = bVar16 + cVar34;
              bVar91 = bVar17 + cVar35;
              bVar92 = bVar18 + cVar36;
              bVar93 = bVar19 + cVar37;
              bVar94 = bVar54 + cVar38;
              bVar95 = bVar55 + cVar39;
              bVar96 = bVar56 + cVar40;
              bVar97 = bVar57 + cVar41;
              bVar98 = bVar58 + cVar42;
              bVar99 = bVar59 + cVar43;
              bVar100 = bVar60 + cVar44;
              bVar101 = bVar61 + cVar45;
              pbVar2 = (byte *)((longlong)_Dst + uVar28 + uVar25);
              *pbVar2 = -((byte)((0x19 < bVar70) * '\x19' | (0x19 >= bVar70) * bVar70) == bVar70) &
                        0x20U | *pbVar3;
              pbVar2[1] = -((byte)((0x19 < bVar71) * '\x19' | (0x19 >= bVar71) * bVar71) == bVar71)
                          & 0x20U | bVar62;
              pbVar2[2] = -((byte)((0x19 < bVar72) * '\x19' | (0x19 >= bVar72) * bVar72) == bVar72)
                          & 0x20U | bVar63;
              pbVar2[3] = -((byte)((0x19 < bVar73) * '\x19' | (0x19 >= bVar73) * bVar73) == bVar73)
                          & 0x20U | bVar64;
              pbVar2[4] = -((byte)((0x19 < bVar74) * '\x19' | (0x19 >= bVar74) * bVar74) == bVar74)
                          & 0x20U | bVar65;
              pbVar2[5] = -((byte)((0x19 < bVar75) * '\x19' | (0x19 >= bVar75) * bVar75) == bVar75)
                          & 0x20U | bVar66;
              pbVar2[6] = -((byte)((0x19 < bVar76) * '\x19' | (0x19 >= bVar76) * bVar76) == bVar76)
                          & 0x20U | bVar67;
              pbVar2[7] = -((byte)((0x19 < bVar77) * '\x19' | (0x19 >= bVar77) * bVar77) == bVar77)
                          & 0x20U | bVar68;
              pbVar2[8] = -((byte)((0x19 < bVar78) * '\x19' | (0x19 >= bVar78) * bVar78) == bVar78)
                          & 0x20U | bVar69;
              pbVar2[9] = -((byte)((0x19 < bVar79) * '\x19' | (0x19 >= bVar79) * bVar79) == bVar79)
                          & 0x20U | bVar5;
              pbVar2[10] = -((byte)((0x19 < bVar80) * '\x19' | (0x19 >= bVar80) * bVar80) == bVar80)
                           & 0x20U | bVar6;
              pbVar2[0xb] = -((byte)((0x19 < bVar81) * '\x19' | (0x19 >= bVar81) * bVar81) == bVar81
                             ) & 0x20U | bVar7;
              pbVar2[0xc] = -((byte)((0x19 < bVar82) * '\x19' | (0x19 >= bVar82) * bVar82) == bVar82
                             ) & 0x20U | bVar8;
              pbVar2[0xd] = -((byte)((0x19 < bVar83) * '\x19' | (0x19 >= bVar83) * bVar83) == bVar83
                             ) & 0x20U | bVar9;
              pbVar2[0xe] = -((byte)((0x19 < bVar84) * '\x19' | (0x19 >= bVar84) * bVar84) == bVar84
                             ) & 0x20U | bVar10;
              pbVar2[0xf] = -((byte)((0x19 < bVar85) * '\x19' | (0x19 >= bVar85) * bVar85) == bVar85
                             ) & 0x20U | bVar11;
              pbVar2 = (byte *)((longlong)_Dst + uVar28 + uVar25 + 0x10);
              *pbVar2 = -((byte)((0x19 < bVar86) * '\x19' | (0x19 >= bVar86) * bVar86) == bVar86) &
                        0x20U | bVar12;
              pbVar2[1] = -((byte)((0x19 < bVar87) * '\x19' | (0x19 >= bVar87) * bVar87) == bVar87)
                          & 0x20U | bVar13;
              pbVar2[2] = -((byte)((0x19 < bVar88) * '\x19' | (0x19 >= bVar88) * bVar88) == bVar88)
                          & 0x20U | bVar14;
              pbVar2[3] = -((byte)((0x19 < bVar89) * '\x19' | (0x19 >= bVar89) * bVar89) == bVar89)
                          & 0x20U | bVar15;
              pbVar2[4] = -((byte)((0x19 < bVar90) * '\x19' | (0x19 >= bVar90) * bVar90) == bVar90)
                          & 0x20U | bVar16;
              pbVar2[5] = -((byte)((0x19 < bVar91) * '\x19' | (0x19 >= bVar91) * bVar91) == bVar91)
                          & 0x20U | bVar17;
              pbVar2[6] = -((byte)((0x19 < bVar92) * '\x19' | (0x19 >= bVar92) * bVar92) == bVar92)
                          & 0x20U | bVar18;
              pbVar2[7] = -((byte)((0x19 < bVar93) * '\x19' | (0x19 >= bVar93) * bVar93) == bVar93)
                          & 0x20U | bVar19;
              pbVar2[8] = -((byte)((0x19 < bVar94) * '\x19' | (0x19 >= bVar94) * bVar94) == bVar94)
                          & 0x20U | bVar54;
              pbVar2[9] = -((byte)((0x19 < bVar95) * '\x19' | (0x19 >= bVar95) * bVar95) == bVar95)
                          & 0x20U | bVar55;
              pbVar2[10] = -((byte)((0x19 < bVar96) * '\x19' | (0x19 >= bVar96) * bVar96) == bVar96)
                           & 0x20U | bVar56;
              pbVar2[0xb] = -((byte)((0x19 < bVar97) * '\x19' | (0x19 >= bVar97) * bVar97) == bVar97
                             ) & 0x20U | bVar57;
              pbVar2[0xc] = -((byte)((0x19 < bVar98) * '\x19' | (0x19 >= bVar98) * bVar98) == bVar98
                             ) & 0x20U | bVar58;
              pbVar2[0xd] = -((byte)((0x19 < bVar99) * '\x19' | (0x19 >= bVar99) * bVar99) == bVar99
                             ) & 0x20U | bVar59;
              pbVar2[0xe] = -((byte)((0x19 < bVar100) * '\x19' | (0x19 >= bVar100) * bVar100) ==
                             bVar100) & 0x20U | bVar60;
              pbVar2[0xf] = -((byte)((0x19 < bVar101) * '\x19' | (0x19 >= bVar101) * bVar101) ==
                             bVar101) & 0x20U | bVar61;
              uVar28 = uVar28 + 0x20;
            } while (uVar29 != uVar28);
            if (uVar27 == uVar29) goto LAB_1800f666c;
            uVar28 = uVar29;
            if ((uVar27 & 0x18) == 0) goto LAB_1800f663b;
          }
          uVar29 = uVar27 & 0xfffffffffffffff8;
          do {
            uVar4 = *(ulonglong *)((longlong)piVar1 + uVar28);
            bVar62 = (char)uVar4 + auVar21[0];
            bVar63 = (char)(uVar4 >> 8) + auVar21[1];
            bVar64 = (char)(uVar4 >> 0x10) + auVar21[2];
            bVar65 = (char)(uVar4 >> 0x18) + auVar21[3];
            bVar66 = (char)(uVar4 >> 0x20) + auVar21[4];
            bVar67 = (char)(uVar4 >> 0x28) + auVar21[5];
            bVar68 = (char)(uVar4 >> 0x30) + auVar21[6];
            bVar69 = (char)(uVar4 >> 0x38) + auVar21[7];
            *(ulonglong *)((longlong)piVar1 + uVar28) =
                 ~CONCAT17(-((byte)((bVar69 < bVar53) * bVar53 | (bVar69 >= bVar53) * bVar69) ==
                            bVar69),CONCAT16(-((byte)((bVar68 < bVar52) * bVar52 |
                                                     (bVar68 >= bVar52) * bVar68) == bVar68),
                                             CONCAT15(-((byte)((bVar67 < bVar51) * bVar51 |
                                                              (bVar67 >= bVar51) * bVar67) == bVar67
                                                       ),CONCAT14(-((byte)((bVar66 < bVar50) *
                                                                           bVar50 | (bVar66 >=
                                                                                    bVar50) * bVar66
                                                                          ) == bVar66),
                                                                  CONCAT13(-((byte)((bVar65 < bVar49
                                                                                    ) * bVar49 |
                                                                                   (bVar65 >= bVar49
                                                                                   ) * bVar65) ==
                                                                            bVar65),CONCAT12(-((byte
                                                  )((bVar64 < bVar48) * bVar48 |
                                                   (bVar64 >= bVar48) * bVar64) == bVar64),
                                                  CONCAT11(-((byte)((bVar63 < bVar47) * bVar47 |
                                                                   (bVar63 >= bVar47) * bVar63) ==
                                                            bVar63),-((byte)((bVar62 < bVar46) *
                                                                             bVar46 | (bVar62 >=
                                                                                      bVar46) * 
                                                  bVar62) == bVar62)))))))) & 0x2020202020202020 |
                 uVar4;
            uVar28 = uVar28 + 8;
          } while (uVar29 != uVar28);
          if (uVar27 == uVar29) goto LAB_1800f666c;
        }
LAB_1800f663b:
        uVar29 = uVar29 + uVar25;
        do {
          *(byte *)((longlong)_Dst + uVar29) =
               ((byte)(*(byte *)((longlong)_Dst + uVar29) + 0xbf) < 0x1a) << 5 |
               *(byte *)((longlong)_Dst + uVar29);
          uVar29 = uVar29 + 1;
        } while (uVar23 != uVar29);
      }
LAB_1800f666c:
      if (uVar25 != 0) {
        if (uVar25 < param_3) {
          if ((char)*piVar1 < -0x40) goto LAB_1800f68c6;
        }
        else if (uVar25 != param_3) goto LAB_1800f68c6;
      }
      if (uVar23 != 0) {
        if (uVar23 < param_3) {
          if (*(char *)((longlong)_Dst + uVar23) < -0x40) goto LAB_1800f68c6;
        }
        else if (uVar23 != param_3) {
LAB_1800f68c6:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(_Dst,param_3,uVar25,uVar23,&PTR_s_C__Users_burne__cargo_registry_s_180217440
                        ,_Dst,param_3);
        }
      }
      if ((uVar27 == 7) && (*(int *)((longlong)piVar1 + 3) == 0x74657372 && *piVar1 == 0x72616863))
      {
        uVar25 = param_5[2];
        uVar23 = param_5[3];
        if (uVar23 < uVar25) goto LAB_1800f68a9;
        if (uVar25 != 0) {
          if (uVar25 < param_3) {
            if (*(char *)((longlong)_Dst + uVar25) < -0x40) goto LAB_1800f68a9;
          }
          else if (uVar25 != param_3) goto LAB_1800f68a9;
        }
        if (uVar23 != 0) {
          if (uVar23 < param_3) {
            if (*(char *)((longlong)_Dst + uVar23) < -0x40) goto LAB_1800f68a9;
          }
          else if (uVar23 != param_3) {
LAB_1800f68a9:
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(_Dst,param_3,uVar25,uVar23,
                          &PTR_s_C__Users_burne__cargo_registry_s_180217458,_Dst,param_3);
          }
        }
        uVar27 = uVar23 - uVar25;
        if (uVar27 != 0) {
          if (uVar27 < 8) {
            uVar28 = 0;
          }
          else {
            if (uVar27 < 0x20) {
              uVar29 = 0;
            }
            else {
              uVar28 = uVar27 & 0xffffffffffffffe0;
              uVar29 = 0;
              do {
                pbVar3 = (byte *)((longlong)_Dst + uVar29 + uVar25);
                bVar13 = pbVar3[1];
                bVar14 = pbVar3[2];
                bVar15 = pbVar3[3];
                bVar16 = pbVar3[4];
                bVar17 = pbVar3[5];
                bVar18 = pbVar3[6];
                bVar19 = pbVar3[7];
                bVar54 = pbVar3[8];
                bVar55 = pbVar3[9];
                bVar56 = pbVar3[10];
                bVar57 = pbVar3[0xb];
                bVar58 = pbVar3[0xc];
                bVar59 = pbVar3[0xd];
                bVar60 = pbVar3[0xe];
                bVar61 = pbVar3[0xf];
                pbVar2 = (byte *)((longlong)_Dst + uVar29 + uVar25 + 0x10);
                bVar62 = *pbVar2;
                bVar63 = pbVar2[1];
                bVar64 = pbVar2[2];
                bVar65 = pbVar2[3];
                bVar66 = pbVar2[4];
                bVar67 = pbVar2[5];
                bVar68 = pbVar2[6];
                bVar69 = pbVar2[7];
                bVar5 = pbVar2[8];
                bVar6 = pbVar2[9];
                bVar7 = pbVar2[10];
                bVar8 = pbVar2[0xb];
                bVar9 = pbVar2[0xc];
                bVar10 = pbVar2[0xd];
                bVar11 = pbVar2[0xe];
                bVar12 = pbVar2[0xf];
                bVar70 = *pbVar3 + cVar30;
                bVar71 = bVar13 + cVar31;
                bVar72 = bVar14 + cVar32;
                bVar73 = bVar15 + cVar33;
                bVar74 = bVar16 + cVar34;
                bVar75 = bVar17 + cVar35;
                bVar76 = bVar18 + cVar36;
                bVar77 = bVar19 + cVar37;
                bVar78 = bVar54 + cVar38;
                bVar79 = bVar55 + cVar39;
                bVar80 = bVar56 + cVar40;
                bVar81 = bVar57 + cVar41;
                bVar82 = bVar58 + cVar42;
                bVar83 = bVar59 + cVar43;
                bVar84 = bVar60 + cVar44;
                bVar85 = bVar61 + cVar45;
                bVar86 = bVar62 + cVar30;
                bVar87 = bVar63 + cVar31;
                bVar88 = bVar64 + cVar32;
                bVar89 = bVar65 + cVar33;
                bVar90 = bVar66 + cVar34;
                bVar91 = bVar67 + cVar35;
                bVar92 = bVar68 + cVar36;
                bVar93 = bVar69 + cVar37;
                bVar94 = bVar5 + cVar38;
                bVar95 = bVar6 + cVar39;
                bVar96 = bVar7 + cVar40;
                bVar97 = bVar8 + cVar41;
                bVar98 = bVar9 + cVar42;
                bVar99 = bVar10 + cVar43;
                bVar100 = bVar11 + cVar44;
                bVar101 = bVar12 + cVar45;
                pbVar2 = (byte *)((longlong)_Dst + uVar29 + uVar25);
                *pbVar2 = -((byte)((0x19 < bVar70) * '\x19' | (0x19 >= bVar70) * bVar70) == bVar70)
                          & 0x20U | *pbVar3;
                pbVar2[1] = -((byte)((0x19 < bVar71) * '\x19' | (0x19 >= bVar71) * bVar71) == bVar71
                             ) & 0x20U | bVar13;
                pbVar2[2] = -((byte)((0x19 < bVar72) * '\x19' | (0x19 >= bVar72) * bVar72) == bVar72
                             ) & 0x20U | bVar14;
                pbVar2[3] = -((byte)((0x19 < bVar73) * '\x19' | (0x19 >= bVar73) * bVar73) == bVar73
                             ) & 0x20U | bVar15;
                pbVar2[4] = -((byte)((0x19 < bVar74) * '\x19' | (0x19 >= bVar74) * bVar74) == bVar74
                             ) & 0x20U | bVar16;
                pbVar2[5] = -((byte)((0x19 < bVar75) * '\x19' | (0x19 >= bVar75) * bVar75) == bVar75
                             ) & 0x20U | bVar17;
                pbVar2[6] = -((byte)((0x19 < bVar76) * '\x19' | (0x19 >= bVar76) * bVar76) == bVar76
                             ) & 0x20U | bVar18;
                pbVar2[7] = -((byte)((0x19 < bVar77) * '\x19' | (0x19 >= bVar77) * bVar77) == bVar77
                             ) & 0x20U | bVar19;
                pbVar2[8] = -((byte)((0x19 < bVar78) * '\x19' | (0x19 >= bVar78) * bVar78) == bVar78
                             ) & 0x20U | bVar54;
                pbVar2[9] = -((byte)((0x19 < bVar79) * '\x19' | (0x19 >= bVar79) * bVar79) == bVar79
                             ) & 0x20U | bVar55;
                pbVar2[10] = -((byte)((0x19 < bVar80) * '\x19' | (0x19 >= bVar80) * bVar80) ==
                              bVar80) & 0x20U | bVar56;
                pbVar2[0xb] = -((byte)((0x19 < bVar81) * '\x19' | (0x19 >= bVar81) * bVar81) ==
                               bVar81) & 0x20U | bVar57;
                pbVar2[0xc] = -((byte)((0x19 < bVar82) * '\x19' | (0x19 >= bVar82) * bVar82) ==
                               bVar82) & 0x20U | bVar58;
                pbVar2[0xd] = -((byte)((0x19 < bVar83) * '\x19' | (0x19 >= bVar83) * bVar83) ==
                               bVar83) & 0x20U | bVar59;
                pbVar2[0xe] = -((byte)((0x19 < bVar84) * '\x19' | (0x19 >= bVar84) * bVar84) ==
                               bVar84) & 0x20U | bVar60;
                pbVar2[0xf] = -((byte)((0x19 < bVar85) * '\x19' | (0x19 >= bVar85) * bVar85) ==
                               bVar85) & 0x20U | bVar61;
                pbVar2 = (byte *)((longlong)_Dst + uVar29 + uVar25 + 0x10);
                *pbVar2 = -((byte)((0x19 < bVar86) * '\x19' | (0x19 >= bVar86) * bVar86) == bVar86)
                          & 0x20U | bVar62;
                pbVar2[1] = -((byte)((0x19 < bVar87) * '\x19' | (0x19 >= bVar87) * bVar87) == bVar87
                             ) & 0x20U | bVar63;
                pbVar2[2] = -((byte)((0x19 < bVar88) * '\x19' | (0x19 >= bVar88) * bVar88) == bVar88
                             ) & 0x20U | bVar64;
                pbVar2[3] = -((byte)((0x19 < bVar89) * '\x19' | (0x19 >= bVar89) * bVar89) == bVar89
                             ) & 0x20U | bVar65;
                pbVar2[4] = -((byte)((0x19 < bVar90) * '\x19' | (0x19 >= bVar90) * bVar90) == bVar90
                             ) & 0x20U | bVar66;
                pbVar2[5] = -((byte)((0x19 < bVar91) * '\x19' | (0x19 >= bVar91) * bVar91) == bVar91
                             ) & 0x20U | bVar67;
                pbVar2[6] = -((byte)((0x19 < bVar92) * '\x19' | (0x19 >= bVar92) * bVar92) == bVar92
                             ) & 0x20U | bVar68;
                pbVar2[7] = -((byte)((0x19 < bVar93) * '\x19' | (0x19 >= bVar93) * bVar93) == bVar93
                             ) & 0x20U | bVar69;
                pbVar2[8] = -((byte)((0x19 < bVar94) * '\x19' | (0x19 >= bVar94) * bVar94) == bVar94
                             ) & 0x20U | bVar5;
                pbVar2[9] = -((byte)((0x19 < bVar95) * '\x19' | (0x19 >= bVar95) * bVar95) == bVar95
                             ) & 0x20U | bVar6;
                pbVar2[10] = -((byte)((0x19 < bVar96) * '\x19' | (0x19 >= bVar96) * bVar96) ==
                              bVar96) & 0x20U | bVar7;
                pbVar2[0xb] = -((byte)((0x19 < bVar97) * '\x19' | (0x19 >= bVar97) * bVar97) ==
                               bVar97) & 0x20U | bVar8;
                pbVar2[0xc] = -((byte)((0x19 < bVar98) * '\x19' | (0x19 >= bVar98) * bVar98) ==
                               bVar98) & 0x20U | bVar9;
                pbVar2[0xd] = -((byte)((0x19 < bVar99) * '\x19' | (0x19 >= bVar99) * bVar99) ==
                               bVar99) & 0x20U | bVar10;
                pbVar2[0xe] = -((byte)((0x19 < bVar100) * '\x19' | (0x19 >= bVar100) * bVar100) ==
                               bVar100) & 0x20U | bVar11;
                pbVar2[0xf] = -((byte)((0x19 < bVar101) * '\x19' | (0x19 >= bVar101) * bVar101) ==
                               bVar101) & 0x20U | bVar12;
                uVar29 = uVar29 + 0x20;
              } while (uVar28 != uVar29);
              if (uVar27 == uVar28) goto LAB_1800f64c0;
              uVar29 = uVar28;
              if ((uVar27 & 0x18) == 0) goto LAB_1800f681f;
            }
            uVar28 = uVar27 & 0xfffffffffffffff8;
            do {
              uVar4 = *(ulonglong *)((longlong)_Dst + uVar29 + uVar25);
              bVar62 = (char)uVar4 + auVar21[0];
              bVar63 = (char)(uVar4 >> 8) + auVar21[1];
              bVar64 = (char)(uVar4 >> 0x10) + auVar21[2];
              bVar65 = (char)(uVar4 >> 0x18) + auVar21[3];
              bVar66 = (char)(uVar4 >> 0x20) + auVar21[4];
              bVar67 = (char)(uVar4 >> 0x28) + auVar21[5];
              bVar68 = (char)(uVar4 >> 0x30) + auVar21[6];
              bVar69 = (char)(uVar4 >> 0x38) + auVar21[7];
              *(ulonglong *)((longlong)_Dst + uVar29 + uVar25) =
                   ~CONCAT17(-((byte)((bVar69 < bVar53) * bVar53 | (bVar69 >= bVar53) * bVar69) ==
                              bVar69),CONCAT16(-((byte)((bVar68 < bVar52) * bVar52 |
                                                       (bVar68 >= bVar52) * bVar68) == bVar68),
                                               CONCAT15(-((byte)((bVar67 < bVar51) * bVar51 |
                                                                (bVar67 >= bVar51) * bVar67) ==
                                                         bVar67),CONCAT14(-((byte)((bVar66 < bVar50)
                                                                                   * bVar50 |
                                                                                  (bVar66 >= bVar50)
                                                                                  * bVar66) ==
                                                                           bVar66),CONCAT13(-((byte)
                                                  ((bVar65 < bVar49) * bVar49 |
                                                  (bVar65 >= bVar49) * bVar65) == bVar65),
                                                  CONCAT12(-((byte)((bVar64 < bVar48) * bVar48 |
                                                                   (bVar64 >= bVar48) * bVar64) ==
                                                            bVar64),CONCAT11(-((byte)((bVar63 < 
                                                  bVar47) * bVar47 | (bVar63 >= bVar47) * bVar63) ==
                                                  bVar63),-((byte)((bVar62 < bVar46) * bVar46 |
                                                                  (bVar62 >= bVar46) * bVar62) ==
                                                           bVar62)))))))) & 0x2020202020202020 |
                   uVar4;
              uVar29 = uVar29 + 8;
            } while (uVar28 != uVar29);
            if (uVar27 == uVar28) goto LAB_1800f64c0;
          }
LAB_1800f681f:
          uVar28 = uVar28 + uVar25;
          do {
            *(byte *)((longlong)_Dst + uVar28) =
                 ((byte)(*(byte *)((longlong)_Dst + uVar28) + 0xbf) < 0x1a) << 5 |
                 *(byte *)((longlong)_Dst + uVar28);
            uVar28 = uVar28 + 1;
          } while (uVar23 != uVar28);
        }
      }
LAB_1800f64c0:
      param_5 = param_5 + 4;
    } while (param_5 != puVar24);
  }
  *param_1 = param_3;
  param_1[1] = (ulonglong)_Dst;
  param_1[2] = param_3;
  return;
}


