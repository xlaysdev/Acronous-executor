/* FUN_180116dd0 @ 180116dd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180116dd0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 *puVar7;
  size_t *psVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  byte *pbVar14;
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
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  char acVar41 [16];
  char acVar42 [16];
  char cVar43;
  int iVar44;
  longlong lVar45;
  undefined8 ****ppppuVar46;
  byte *pbVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  longlong lVar52;
  undefined8 uVar53;
  longlong lVar54;
  ushort uVar55;
  uint uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  undefined1 (*pauVar59) [16];
  ulonglong uVar60;
  undefined8 *puVar61;
  undefined8 *puVar62;
  bool bVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  byte bVar77;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 local_2d8 [24];
  undefined1 local_2c0 [24];
  char local_2a8;
  undefined1 local_2a7;
  undefined8 *local_298;
  longlong local_290;
  ulonglong local_288;
  longlong local_280;
  longlong local_278;
  undefined8 **local_270;
  undefined8 *local_268;
  undefined8 ***local_260;
  undefined1 *local_258;
  longlong local_250;
  longlong lStack_248;
  longlong lStack_240;
  ulonglong uStack_238;
  longlong local_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  longlong lStack_218;
  ulonglong local_210;
  longlong lStack_208;
  ulonglong local_200;
  ushort uStack_1f8;
  undefined6 uStack_1f6;
  undefined1 (*local_1f0) [16];
  undefined8 local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  longlong local_188;
  undefined8 ****ppppuStack_180;
  size_t local_178;
  size_t sStack_170;
  ushort local_168;
  undefined6 uStack_166;
  ulonglong local_158;
  longlong local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  size_t local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  undefined8 ****local_100;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  uStack_1f8 = 0;
  lStack_208 = 2;
  local_200 = 0;
  uStack_238 = 0;
  local_230 = 8;
  uStack_228 = 0;
  uStack_220 = 0;
  lStack_218 = 8;
  local_210 = 0;
  local_250 = 0;
  uVar57 = param_3 * 0x20;
  if (0x7ffffffffffffff8 < uVar57 || param_3 >> 0x3b != 0) {
    uVar53 = 0;
LAB_180116ec8:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar53,uVar57);
  }
  if (uVar57 == 0) {
    local_1f0 = (undefined1 (*) [16])&DAT_00000008;
    local_158 = 0;
    pauVar59 = local_1f0;
    if (1 < param_3) goto LAB_180116f15;
LAB_180116f45:
    pauVar59 = local_1f0;
    if (param_3 == 0) goto LAB_180116fe9;
  }
  else {
    FUN_180027490();
    uVar53 = 8;
    local_1f0 = (undefined1 (*) [16])thunk_FUN_1801d32d0(uVar57,8);
    if (local_1f0 == (undefined1 (*) [16])0x0) goto LAB_180116ec8;
    pauVar59 = local_1f0;
    local_158 = param_3;
    if (param_3 < 2) goto LAB_180116f45;
LAB_180116f15:
    auVar66 = _DAT_180240408;
    uVar57 = (ulonglong)((uint)(param_3 - 1) & 3);
    local_1f0 = pauVar59;
    auVar64 = _DAT_180240408;
    if (2 < param_3 - 2) {
      uVar48 = param_3 - 1 & 0xfffffffffffffffc;
      do {
        *(undefined8 *)local_1f0[1] = 1;
        *(undefined8 *)(local_1f0[1] + 8) = 0;
        *local_1f0 = auVar66;
        local_1f0[2] = auVar66;
        *(undefined8 *)local_1f0[3] = 1;
        *(undefined8 *)(local_1f0[3] + 8) = 0;
        local_1f0[4] = auVar66;
        *(undefined8 *)local_1f0[5] = 1;
        *(undefined8 *)(local_1f0[5] + 8) = 0;
        local_1f0[6] = auVar66;
        *(undefined8 *)local_1f0[7] = 1;
        *(undefined8 *)(local_1f0[7] + 8) = 0;
        local_1f0 = local_1f0 + 8;
        uVar48 = uVar48 - 4;
        auVar64 = _DAT_180240408;
      } while (uVar48 != 0);
    }
    while( true ) {
      auVar66 = _DAT_180240408;
      _DAT_180240408 = auVar64;
      if (uVar57 == 0) break;
      *(undefined8 *)local_1f0[1] = 1;
      *(undefined8 *)(local_1f0[1] + 8) = 0;
      *local_1f0 = auVar66;
      uVar57 = uVar57 - 1;
      local_1f0 = local_1f0 + 2;
      auVar64 = _DAT_180240408;
      _DAT_180240408 = auVar66;
    }
  }
  *(undefined8 *)local_1f0[1] = 1;
  *(undefined8 *)(local_1f0[1] + 8) = 0;
  *(undefined8 *)*local_1f0 = 1;
  *(undefined8 *)(*local_1f0 + 8) = 0;
  local_1f0 = pauVar59;
LAB_180116fe9:
  FUN_18012c4b0(&local_2a8,*param_2,param_2[1],local_1f0,param_3);
  acVar42 = s_modnarodsetybdet_180204b80;
  acVar41 = s_uespemosarenegyl_180204b70;
  if (local_2a8 == '\x01') {
    lVar45 = FUN_180114c00(0x14,local_2a7);
  }
  else {
    if (local_298 != (undefined8 *)0x0) {
      local_1d0 = local_298 + local_290 * 4;
      puVar61 = local_298;
      puVar62 = local_1d0;
      local_1d8 = param_1;
LAB_1801170a2:
      do {
        if (puVar61 == puVar62) {
          param_1[10] = local_200;
          param_1[0xb] = CONCAT62(uStack_1f6,uStack_1f8);
          param_1[8] = local_210;
          param_1[9] = lStack_208;
          param_1[6] = uStack_220;
          param_1[7] = lStack_218;
          param_1[4] = local_230;
          param_1[5] = uStack_228;
          param_1[2] = lStack_240;
          param_1[3] = uStack_238;
          *param_1 = local_250;
          param_1[1] = lStack_248;
          if (local_158 == 0) {
            return param_1;
          }
          thunk_FUN_1801d3330(local_1f0,local_158 << 5,8);
          return param_1;
        }
        local_268 = puVar61;
        FUN_1801ae6b0(local_1c8,*puVar61,puVar61[1]);
        if (local_1c8._0_4_ == 1) {
          local_270 = &local_268;
          local_260 = &local_270;
          local_258 = &LAB_1801150a0;
          FUN_1801ec780(local_2c0,&DAT_180240471,&local_260);
          lVar45 = FUN_18018c8e0(0x14,local_2c0);
          param_1[1] = lVar45;
          *param_1 = 3;
          goto joined_r0x000180117ea5;
        }
        uVar53 = local_1c8._8_8_;
        local_100 = (undefined8 ****)local_1b8._0_8_;
        local_110 = local_1b8._8_8_;
        local_120 = local_1a8._0_8_;
        pbVar14 = (byte *)local_268[2];
        uVar57 = local_268[3];
        if (uVar57 != 0) {
          if (uVar57 < 8) {
            bVar63 = false;
            pbVar47 = pbVar14;
LAB_180117277:
            do {
              bVar11 = *pbVar47;
              pbVar47 = pbVar47 + 1;
              bVar63 = (bool)(bVar63 | (bVar11 != 9 && (bVar11 == 0x7f || bVar11 < 0x20)));
            } while (pbVar47 != pbVar14 + uVar57);
          }
          else if (uVar57 < 0x20) {
            uVar48 = 0;
            uVar56 = 0;
LAB_1801171f5:
            uVar49 = uVar57 & 0xfffffffffffffff8;
            pbVar47 = pbVar14 + uVar49;
            auVar64 = ZEXT416(uVar56);
            do {
              uVar10 = *(undefined8 *)(pbVar14 + uVar48);
              bVar77 = (byte)uVar10;
              bVar80 = (byte)((ulonglong)uVar10 >> 8);
              bVar81 = (byte)((ulonglong)uVar10 >> 0x10);
              bVar82 = (byte)((ulonglong)uVar10 >> 0x18);
              bVar83 = (byte)((ulonglong)uVar10 >> 0x20);
              bVar84 = (byte)((ulonglong)uVar10 >> 0x28);
              bVar85 = (byte)((ulonglong)uVar10 >> 0x30);
              bVar11 = (byte)((ulonglong)uVar10 >> 0x38);
              auVar79[0] = -((byte)((bVar77 < (byte)' ') * ' ' | (bVar77 >= (byte)' ') * bVar77) ==
                            bVar77);
              auVar79[1] = -((byte)((bVar80 < (byte)' ') * ' ' | (bVar80 >= (byte)' ') * bVar80) ==
                            bVar80);
              auVar79[2] = -((byte)((bVar81 < (byte)' ') * ' ' | (bVar81 >= (byte)' ') * bVar81) ==
                            bVar81);
              auVar79[3] = -((byte)((bVar82 < (byte)' ') * ' ' | (bVar82 >= (byte)' ') * bVar82) ==
                            bVar82);
              auVar79[4] = -((byte)((bVar83 < (byte)' ') * ' ' | (bVar83 >= (byte)' ') * bVar83) ==
                            bVar83);
              auVar79[5] = -((byte)((bVar84 < (byte)' ') * ' ' | (bVar84 >= (byte)' ') * bVar84) ==
                            bVar84);
              auVar79[6] = -((byte)((bVar85 < (byte)' ') * ' ' | (bVar85 >= (byte)' ') * bVar85) ==
                            bVar85);
              auVar79[7] = -((byte)((bVar11 < (byte)' ') * ' ' | (bVar11 >= (byte)' ') * bVar11) ==
                            bVar11);
              auVar79[8] = 0xff;
              auVar79[9] = 0xff;
              auVar79[10] = 0xff;
              auVar79[0xb] = 0xff;
              auVar79[0xc] = 0xff;
              auVar79[0xd] = 0xff;
              auVar79[0xe] = 0xff;
              auVar79[0xf] = 0xff;
              auVar66._8_4_ = 0xffffffff;
              auVar66._0_8_ = 0xffffffffffffffff;
              auVar66._12_4_ = 0xffffffff;
              auVar87[0] = -(bVar77 == 0x7f);
              auVar87[1] = -(bVar80 == 0x7f);
              auVar87[2] = -(bVar81 == 0x7f);
              auVar87[3] = -(bVar82 == 0x7f);
              auVar87[4] = -(bVar83 == 0x7f);
              auVar87[5] = -(bVar84 == 0x7f);
              auVar87[6] = -(bVar85 == 0x7f);
              auVar87[7] = -(bVar11 == 0x7f);
              auVar87[8] = 0xff;
              auVar87[9] = 0xff;
              auVar87[10] = 0xff;
              auVar87[0xb] = 0xff;
              auVar87[0xc] = 0xff;
              auVar87[0xd] = 0xff;
              auVar87[0xe] = 0xff;
              auVar87[0xf] = 0xff;
              auVar65[0] = -(bVar77 == '\t');
              auVar65[1] = -(bVar80 == '\t');
              auVar65[2] = -(bVar81 == '\t');
              auVar65[3] = -(bVar82 == '\t');
              auVar65[4] = -(bVar83 == '\t');
              auVar65[5] = -(bVar84 == '\t');
              auVar65[6] = -(bVar85 == '\t');
              auVar65[7] = -(bVar11 == '\t');
              auVar65[8] = 0xff;
              auVar65[9] = 0xff;
              auVar65[10] = 0xff;
              auVar65[0xb] = 0xff;
              auVar65[0xc] = 0xff;
              auVar65[0xd] = 0xff;
              auVar65[0xe] = 0xff;
              auVar65[0xf] = 0xff;
              auVar66 = ~auVar65 & (auVar87 | auVar79 ^ auVar66);
              auVar74._0_14_ = auVar66._0_14_;
              auVar74[0xe] = auVar66[7];
              auVar74[0xf] = auVar66[7];
              auVar73._14_2_ = auVar74._14_2_;
              auVar73._0_13_ = auVar66._0_13_;
              auVar73[0xd] = auVar66[6];
              auVar72._13_3_ = auVar73._13_3_;
              auVar72._0_12_ = auVar66._0_12_;
              auVar72[0xc] = auVar66[6];
              auVar71._12_4_ = auVar72._12_4_;
              auVar71._0_11_ = auVar66._0_11_;
              auVar71[0xb] = auVar66[5];
              auVar70._11_5_ = auVar71._11_5_;
              auVar70._0_10_ = auVar66._0_10_;
              auVar70[10] = auVar66[5];
              auVar69._10_6_ = auVar70._10_6_;
              auVar69._0_9_ = auVar66._0_9_;
              auVar69[9] = auVar66[4];
              auVar68._9_7_ = auVar69._9_7_;
              auVar68._0_8_ = auVar66._0_8_;
              auVar68[8] = auVar66[4];
              auVar67._8_8_ = auVar68._8_8_;
              auVar67[7] = auVar66[3];
              auVar67[6] = auVar66[3];
              auVar67[5] = auVar66[2];
              auVar67[4] = auVar66[2];
              auVar67[3] = auVar66[1];
              auVar67[2] = auVar66[1];
              auVar67[0] = auVar66[0];
              auVar67[1] = auVar67[0];
              auVar64 = auVar64 | auVar67;
              uVar48 = uVar48 + 8;
            } while (uVar49 != uVar48);
            auVar64 = psllw(auVar64,7);
            bVar63 = (((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0x17,0) & 1) != 0
                          ) || (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x67,0) & 1) != 0) ||
                     (SUB161(auVar64 >> 0x77,0) & 1) != 0;
            if (uVar57 != uVar49) goto LAB_180117277;
          }
          else {
            uVar48 = uVar57 & 0xffffffffffffffe0;
            auVar64 = (undefined1  [16])0x0;
            uVar49 = 0;
            auVar66 = (undefined1  [16])0x0;
            do {
              pbVar47 = pbVar14 + uVar49;
              bVar11 = *pbVar47;
              bVar77 = pbVar47[1];
              bVar80 = pbVar47[2];
              bVar81 = pbVar47[3];
              bVar82 = pbVar47[4];
              bVar83 = pbVar47[5];
              bVar84 = pbVar47[6];
              bVar85 = pbVar47[7];
              bVar15 = pbVar47[8];
              bVar16 = pbVar47[9];
              bVar17 = pbVar47[10];
              bVar18 = pbVar47[0xb];
              bVar19 = pbVar47[0xc];
              bVar20 = pbVar47[0xd];
              bVar21 = pbVar47[0xe];
              bVar22 = pbVar47[0xf];
              pbVar47 = pbVar14 + uVar49 + 0x10;
              bVar23 = *pbVar47;
              bVar24 = pbVar47[1];
              bVar25 = pbVar47[2];
              bVar26 = pbVar47[3];
              bVar27 = pbVar47[4];
              bVar28 = pbVar47[5];
              bVar29 = pbVar47[6];
              bVar30 = pbVar47[7];
              bVar31 = pbVar47[8];
              bVar32 = pbVar47[9];
              bVar33 = pbVar47[10];
              bVar34 = pbVar47[0xb];
              bVar35 = pbVar47[0xc];
              bVar36 = pbVar47[0xd];
              bVar37 = pbVar47[0xe];
              bVar38 = pbVar47[0xf];
              auVar88[0] = -((byte)((0x1f < bVar11) * '\x1f' | (0x1f >= bVar11) * bVar11) == bVar11)
              ;
              auVar88[1] = -((byte)((0x1f < bVar77) * '\x1f' | (0x1f >= bVar77) * bVar77) == bVar77)
              ;
              auVar88[2] = -((byte)((0x1f < bVar80) * '\x1f' | (0x1f >= bVar80) * bVar80) == bVar80)
              ;
              auVar88[3] = -((byte)((0x1f < bVar81) * '\x1f' | (0x1f >= bVar81) * bVar81) == bVar81)
              ;
              auVar88[4] = -((byte)((0x1f < bVar82) * '\x1f' | (0x1f >= bVar82) * bVar82) == bVar82)
              ;
              auVar88[5] = -((byte)((0x1f < bVar83) * '\x1f' | (0x1f >= bVar83) * bVar83) == bVar83)
              ;
              auVar88[6] = -((byte)((0x1f < bVar84) * '\x1f' | (0x1f >= bVar84) * bVar84) == bVar84)
              ;
              auVar88[7] = -((byte)((0x1f < bVar85) * '\x1f' | (0x1f >= bVar85) * bVar85) == bVar85)
              ;
              auVar88[8] = -((byte)((0x1f < bVar15) * '\x1f' | (0x1f >= bVar15) * bVar15) == bVar15)
              ;
              auVar88[9] = -((byte)((0x1f < bVar16) * '\x1f' | (0x1f >= bVar16) * bVar16) == bVar16)
              ;
              auVar88[10] = -((byte)((0x1f < bVar17) * '\x1f' | (0x1f >= bVar17) * bVar17) == bVar17
                             );
              auVar88[0xb] = -((byte)((0x1f < bVar18) * '\x1f' | (0x1f >= bVar18) * bVar18) ==
                              bVar18);
              auVar88[0xc] = -((byte)((0x1f < bVar19) * '\x1f' | (0x1f >= bVar19) * bVar19) ==
                              bVar19);
              auVar88[0xd] = -((byte)((0x1f < bVar20) * '\x1f' | (0x1f >= bVar20) * bVar20) ==
                              bVar20);
              auVar88[0xe] = -((byte)((0x1f < bVar21) * '\x1f' | (0x1f >= bVar21) * bVar21) ==
                              bVar21);
              auVar88[0xf] = -((byte)((0x1f < bVar22) * '\x1f' | (0x1f >= bVar22) * bVar22) ==
                              bVar22);
              auVar90[0] = -((byte)((0x1f < bVar23) * '\x1f' | (0x1f >= bVar23) * bVar23) == bVar23)
              ;
              auVar90[1] = -((byte)((0x1f < bVar24) * '\x1f' | (0x1f >= bVar24) * bVar24) == bVar24)
              ;
              auVar90[2] = -((byte)((0x1f < bVar25) * '\x1f' | (0x1f >= bVar25) * bVar25) == bVar25)
              ;
              auVar90[3] = -((byte)((0x1f < bVar26) * '\x1f' | (0x1f >= bVar26) * bVar26) == bVar26)
              ;
              auVar90[4] = -((byte)((0x1f < bVar27) * '\x1f' | (0x1f >= bVar27) * bVar27) == bVar27)
              ;
              auVar90[5] = -((byte)((0x1f < bVar28) * '\x1f' | (0x1f >= bVar28) * bVar28) == bVar28)
              ;
              auVar90[6] = -((byte)((0x1f < bVar29) * '\x1f' | (0x1f >= bVar29) * bVar29) == bVar29)
              ;
              auVar90[7] = -((byte)((0x1f < bVar30) * '\x1f' | (0x1f >= bVar30) * bVar30) == bVar30)
              ;
              auVar90[8] = -((byte)((0x1f < bVar31) * '\x1f' | (0x1f >= bVar31) * bVar31) == bVar31)
              ;
              auVar90[9] = -((byte)((0x1f < bVar32) * '\x1f' | (0x1f >= bVar32) * bVar32) == bVar32)
              ;
              auVar90[10] = -((byte)((0x1f < bVar33) * '\x1f' | (0x1f >= bVar33) * bVar33) == bVar33
                             );
              auVar90[0xb] = -((byte)((0x1f < bVar34) * '\x1f' | (0x1f >= bVar34) * bVar34) ==
                              bVar34);
              auVar90[0xc] = -((byte)((0x1f < bVar35) * '\x1f' | (0x1f >= bVar35) * bVar35) ==
                              bVar35);
              auVar90[0xd] = -((byte)((0x1f < bVar36) * '\x1f' | (0x1f >= bVar36) * bVar36) ==
                              bVar36);
              auVar90[0xe] = -((byte)((0x1f < bVar37) * '\x1f' | (0x1f >= bVar37) * bVar37) ==
                              bVar37);
              auVar90[0xf] = -((byte)((0x1f < bVar38) * '\x1f' | (0x1f >= bVar38) * bVar38) ==
                              bVar38);
              auVar91[0] = -(bVar11 == 0x7f);
              auVar91[1] = -(bVar77 == 0x7f);
              auVar91[2] = -(bVar80 == 0x7f);
              auVar91[3] = -(bVar81 == 0x7f);
              auVar91[4] = -(bVar82 == 0x7f);
              auVar91[5] = -(bVar83 == 0x7f);
              auVar91[6] = -(bVar84 == 0x7f);
              auVar91[7] = -(bVar85 == 0x7f);
              auVar91[8] = -(bVar15 == 0x7f);
              auVar91[9] = -(bVar16 == 0x7f);
              auVar91[10] = -(bVar17 == 0x7f);
              auVar91[0xb] = -(bVar18 == 0x7f);
              auVar91[0xc] = -(bVar19 == 0x7f);
              auVar91[0xd] = -(bVar20 == 0x7f);
              auVar91[0xe] = -(bVar21 == 0x7f);
              auVar91[0xf] = -(bVar22 == 0x7f);
              auVar89[0] = -(bVar23 == 0x7f);
              auVar89[1] = -(bVar24 == 0x7f);
              auVar89[2] = -(bVar25 == 0x7f);
              auVar89[3] = -(bVar26 == 0x7f);
              auVar89[4] = -(bVar27 == 0x7f);
              auVar89[5] = -(bVar28 == 0x7f);
              auVar89[6] = -(bVar29 == 0x7f);
              auVar89[7] = -(bVar30 == 0x7f);
              auVar89[8] = -(bVar31 == 0x7f);
              auVar89[9] = -(bVar32 == 0x7f);
              auVar89[10] = -(bVar33 == 0x7f);
              auVar89[0xb] = -(bVar34 == 0x7f);
              auVar89[0xc] = -(bVar35 == 0x7f);
              auVar89[0xd] = -(bVar36 == 0x7f);
              auVar89[0xe] = -(bVar37 == 0x7f);
              auVar89[0xf] = -(bVar38 == 0x7f);
              auVar78[0] = -(bVar11 == 9);
              auVar78[1] = -(bVar77 == 9);
              auVar78[2] = -(bVar80 == 9);
              auVar78[3] = -(bVar81 == 9);
              auVar78[4] = -(bVar82 == 9);
              auVar78[5] = -(bVar83 == 9);
              auVar78[6] = -(bVar84 == 9);
              auVar78[7] = -(bVar85 == 9);
              auVar78[8] = -(bVar15 == 9);
              auVar78[9] = -(bVar16 == 9);
              auVar78[10] = -(bVar17 == 9);
              auVar78[0xb] = -(bVar18 == 9);
              auVar78[0xc] = -(bVar19 == 9);
              auVar78[0xd] = -(bVar20 == 9);
              auVar78[0xe] = -(bVar21 == 9);
              auVar78[0xf] = -(bVar22 == 9);
              auVar64 = auVar64 | ~auVar78 & (auVar91 | auVar88);
              auVar86[0] = -(bVar23 == 9);
              auVar86[1] = -(bVar24 == 9);
              auVar86[2] = -(bVar25 == 9);
              auVar86[3] = -(bVar26 == 9);
              auVar86[4] = -(bVar27 == 9);
              auVar86[5] = -(bVar28 == 9);
              auVar86[6] = -(bVar29 == 9);
              auVar86[7] = -(bVar30 == 9);
              auVar86[8] = -(bVar31 == 9);
              auVar86[9] = -(bVar32 == 9);
              auVar86[10] = -(bVar33 == 9);
              auVar86[0xb] = -(bVar34 == 9);
              auVar86[0xc] = -(bVar35 == 9);
              auVar86[0xd] = -(bVar36 == 9);
              auVar86[0xe] = -(bVar37 == 9);
              auVar86[0xf] = -(bVar38 == 9);
              auVar66 = auVar66 | ~auVar86 & (auVar89 | auVar90);
              uVar49 = uVar49 + 0x20;
            } while (uVar48 != uVar49);
            auVar64 = psllw(auVar66 | auVar64,7);
            bVar63 = (((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 ||
                                  (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                                 (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                                (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                               (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                              (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
                             (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                            (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar64 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
                         (SUB161(auVar64 >> 0x57,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0';
            uVar56 = (uint)bVar63;
            if (uVar57 != uVar48) {
              if ((uVar57 & 0x18) == 0) {
                pbVar47 = pbVar14 + uVar48;
                goto LAB_180117277;
              }
              goto LAB_1801171f5;
            }
          }
          if (bVar63) {
            local_1a8[0] = 2;
            local_270 = &local_268;
            local_260 = &local_270;
            local_258 = &LAB_1801150a0;
            local_150 = local_1c8._8_8_;
            local_f3 = 1;
            FUN_1801ec780(local_2d8,&DAT_180240458,&local_260);
            local_150 = uVar53;
            local_f3 = 1;
            lVar45 = FUN_18018c8e0(0x14,local_2d8);
            param_1[1] = lVar45;
            *param_1 = 3;
            if (uVar53 != 0) {
              (**(code **)(uVar53 + 0x20))(local_120,local_100,local_110);
            }
            goto joined_r0x000180117ea5;
          }
        }
        local_150 = local_1c8._8_8_;
        local_f3 = 1;
        FUN_1801b3ac0(local_1c8);
        local_118 = uVar53;
        auVar64[0xf] = 0;
        auVar64._0_15_ = local_1a8._1_15_;
        local_1a8 = auVar64 << 8;
        local_128 = local_1c8._0_8_;
        local_138 = local_1c8._8_8_;
        local_140 = local_1b8._0_8_;
        local_130 = local_1b8._8_8_;
        uVar53 = local_1a8._0_8_;
        local_f1 = 1;
        local_f2 = 1;
        cVar43 = FUN_180129e00(&local_250);
        uVar57 = local_110;
        lVar45 = local_118;
        if (cVar43 != '\0') {
          local_f4 = 1;
          (**(code **)(local_128 + 0x20))(local_130,local_138,local_140);
          lVar45 = local_118;
          if (local_118 == 0) {
            lVar45 = 0;
          }
          else {
            local_150 = local_118;
            local_f3 = 0;
            (**(code **)(local_118 + 0x20))(local_120,local_100,local_110);
          }
LAB_18011803e:
          local_f3 = 0;
          local_150 = lVar45;
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("size overflows MAX_SIZE",0x17,local_1c8,&DAT_180240338,
                        &PTR_s_C__Users_burne__cargo_registry_s_180240440);
        }
        local_278 = local_250;
        local_1e8 = uVar53;
        if (local_250 == 2) {
          local_1a8._8_8_ = lStack_240;
          local_1a8._0_8_ = lStack_248;
          auVar75._8_4_ = (int)lStack_248;
          auVar75._0_8_ = lStack_248;
          auVar75._12_4_ = (int)((ulonglong)lStack_248 >> 0x20);
          local_1c8 = auVar75 ^ (undefined1  [16])acVar41;
          auVar76._8_4_ = (int)lStack_240;
          auVar76._0_8_ = lStack_240;
          auVar76._12_4_ = (int)((ulonglong)lStack_240 >> 0x20);
          local_1b8 = auVar76 ^ (undefined1  [16])acVar42;
          local_198 = (undefined1  [16])0x0;
          local_188 = 0;
          local_260 = (undefined8 ***)(ulonglong)(local_118 != 0);
          ppppuVar46 = &local_260;
          FUN_1800271e0(local_1c8,ppppuVar46,8);
          if (lVar45 == 0) {
            local_260 = (undefined8 ***)((ulonglong)local_100 & 0xff);
            uVar57 = 8;
          }
          else {
            ppppuVar46 = local_100;
          }
          FUN_1800271e0(local_1c8,ppppuVar46,uVar57);
          uVar60 = local_198._0_8_ << 0x38 | local_198._8_8_;
          uVar48 = local_1b8._8_8_ ^ uVar60;
          uVar58 = local_1c8._0_8_ + local_1b8._0_8_;
          uVar57 = (local_1b8._0_8_ << 0xd | (ulonglong)local_1b8._0_8_ >> 0x33) ^ uVar58;
          uVar49 = (uVar48 << 0x10 | uVar48 >> 0x30) ^ local_1c8._8_8_ + uVar48;
          uVar50 = local_1c8._8_8_ + uVar48 + uVar57;
          uVar58 = (uVar58 << 0x20 | uVar58 >> 0x20) + uVar49;
          uVar57 = (uVar57 << 0x11 | uVar57 >> 0x2f) ^ uVar50;
          uVar48 = (uVar49 << 0x15 | uVar49 >> 0x2b) ^ uVar58;
          uVar58 = (uVar58 ^ uVar60) + uVar57;
          uVar49 = ((uVar50 << 0x20 | uVar50 >> 0x20) ^ 0xff) + uVar48;
          uVar57 = (uVar57 << 0xd | uVar57 >> 0x33) ^ uVar58;
          uVar48 = (uVar48 << 0x10 | uVar48 >> 0x30) ^ uVar49;
          uVar49 = uVar49 + uVar57;
          uVar50 = (uVar58 << 0x20 | uVar58 >> 0x20) + uVar48;
          uVar57 = (uVar57 << 0x11 | uVar57 >> 0x2f) ^ uVar49;
          uVar48 = (uVar48 << 0x15 | uVar48 >> 0x2b) ^ uVar50;
          uVar50 = uVar50 + uVar57;
          uVar49 = (uVar49 << 0x20 | uVar49 >> 0x20) + uVar48;
          uVar57 = (uVar57 << 0xd | uVar57 >> 0x33) ^ uVar50;
          uVar48 = (uVar48 << 0x10 | uVar48 >> 0x30) ^ uVar49;
          uVar49 = uVar49 + uVar57;
          uVar50 = (uVar50 << 0x20 | uVar50 >> 0x20) + uVar48;
          uVar57 = (uVar57 << 0x11 | uVar57 >> 0x2f) ^ uVar49;
          uVar48 = (uVar48 << 0x15 | uVar48 >> 0x2b) ^ uVar50;
          lVar51 = (uVar49 << 0x20 | uVar49 >> 0x20) + uVar48;
          uVar57 = (uVar57 << 0xd | uVar57 >> 0x33) ^ uVar50 + uVar57;
          lVar52 = lVar51 + uVar57;
          uVar56 = (uint)((ulonglong)lVar52 >> 0x20) ^ (uint)lVar52 ^
                   ((uint)(uVar48 >> 0x10) ^ (uint)((ulonglong)lVar51 >> 0x20)) >> 0xb ^
                   (uint)(uVar57 >> 0x2f);
LAB_180117575:
          local_108 = lVar45;
        }
        else {
          uVar56 = (local_118 != 0 ^ 0x84222325) * 0xaef4a21;
          if (local_118 == 0) {
            uVar56 = ((byte)local_100 ^ 0x281a39c5) * 0xaef4a21;
            local_108 = 0;
          }
          else if (local_110 == 0) {
            local_108 = local_118;
          }
          else {
            uVar57 = local_110 & 7;
            ppppuVar46 = local_100;
            if (uVar57 != 0) {
              do {
                bVar11 = *(byte *)ppppuVar46;
                ppppuVar46 = (undefined8 ****)((longlong)ppppuVar46 + 1);
                uVar56 = (bVar11 ^ uVar56) * 0x1b3;
                uVar57 = uVar57 - 1;
              } while (uVar57 != 0);
            }
            local_108 = local_118;
            if (6 < local_110 - 1) {
              do {
                bVar11 = *(byte *)ppppuVar46;
                pbVar14 = (byte *)((longlong)ppppuVar46 + 1);
                pbVar47 = (byte *)((longlong)ppppuVar46 + 2);
                pbVar1 = (byte *)((longlong)ppppuVar46 + 3);
                pbVar2 = (byte *)((longlong)ppppuVar46 + 4);
                pbVar3 = (byte *)((longlong)ppppuVar46 + 5);
                pbVar4 = (byte *)((longlong)ppppuVar46 + 6);
                pbVar5 = (byte *)((longlong)ppppuVar46 + 7);
                ppppuVar46 = ppppuVar46 + 1;
                uVar56 = ((uint)*pbVar5 ^
                         ((uint)*pbVar4 ^
                         ((uint)*pbVar3 ^
                         ((uint)*pbVar2 ^
                         ((uint)*pbVar1 ^
                         ((uint)*pbVar47 ^ ((uint)*pbVar14 ^ (bVar11 ^ uVar56) * 0x1b3) * 0x1b3) *
                         0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
              } while (ppppuVar46 != (undefined8 ****)((longlong)local_100 + local_110));
              goto LAB_180117575;
            }
          }
        }
        uVar13 = uStack_1f8;
        lVar45 = lStack_208;
        local_1e0 = puVar61 + 4;
        uVar56 = uVar56 & 0x7fff;
        uVar48 = (ulonglong)(uVar56 & uStack_1f8);
        local_148 = uStack_228;
        uVar49 = 0;
        uVar57 = local_200;
        lVar51 = local_230;
LAB_180117606:
        if (uVar57 <= uVar48) {
          uVar48 = 0;
        }
        if (uVar57 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar50 = (ulonglong)*(ushort *)(lVar45 + uVar48 * 4);
        uVar55 = (ushort)uVar56;
        if (uVar50 == 0xffff) {
          if (0x7fff < local_148) {
            (**(code **)(local_128 + 0x20))(local_130,local_138,local_140);
            if (local_108 != 0) {
              local_f1 = 0;
              local_f2 = 0;
              (**(code **)(local_108 + 0x20))(local_120,local_100,local_110);
            }
LAB_180118005:
            lVar45 = local_118;
            goto LAB_18011803e;
          }
          local_188 = local_108;
          ppppuStack_180 = local_100;
          local_178 = local_110;
          sStack_170 = local_120;
          local_1b8._8_8_ = local_128;
          local_1a8._8_8_ = local_140;
          local_1a8._0_8_ = local_138;
          local_198._8_8_ = local_1e8;
          local_198._0_8_ = local_130;
          auVar39._8_8_ = 0;
          auVar39._0_8_ = local_1c8._8_8_;
          local_1c8 = auVar39 << 0x40;
          local_168 = uVar55;
          if (local_148 == uStack_238) {
            FUN_1801fa370(&uStack_238);
            uVar57 = local_200;
            lVar51 = local_230;
          }
          lVar45 = local_148 * 0x68;
          *(ulonglong *)(lVar51 + 0x60 + lVar45) = CONCAT62(uStack_166,local_168);
          psVar8 = (size_t *)(lVar51 + 0x50 + lVar45);
          *psVar8 = local_178;
          psVar8[1] = sStack_170;
          plVar9 = (longlong *)(lVar51 + 0x40 + lVar45);
          *plVar9 = local_188;
          plVar9[1] = (longlong)ppppuStack_180;
          puVar61 = (undefined8 *)(lVar51 + 0x30 + lVar45);
          *puVar61 = local_198._0_8_;
          puVar61[1] = local_198._8_8_;
          puVar61 = (undefined8 *)(lVar51 + 0x20 + lVar45);
          *puVar61 = local_1a8._0_8_;
          puVar61[1] = local_1a8._8_8_;
          *(undefined1 (*) [16])(lVar51 + 0x10 + lVar45) = local_1b8;
          *(undefined8 *)(lVar51 + lVar45) = local_1c8._0_8_;
          ((undefined8 *)(lVar51 + lVar45))[1] = local_1c8._8_8_;
          uStack_228 = local_148 + 1;
          if (uVar57 <= uVar48) {
            local_f1 = 0;
            local_f2 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar48,uVar57,&PTR_s_C__Users_burne__cargo_registry_s_1802403f0);
          }
          *(short *)(lStack_208 + uVar48 * 4) = (short)local_148;
          *(ushort *)(lStack_208 + 2 + uVar48 * 4) = uVar55;
          puVar61 = local_1e0;
          puVar62 = local_1d0;
          param_1 = local_1d8;
          goto LAB_1801170a2;
        }
        uVar12 = *(ushort *)(lVar45 + 2 + uVar48 * 4);
        if (uVar49 <= ((int)uVar48 - (uint)(uVar12 & uVar13) & (uint)uVar13)) {
          if (uVar12 == uVar55) {
            if (local_148 <= uVar50) {
              local_f1 = 1;
              local_f2 = 1;
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar50,local_148,&PTR_s_C__Users_burne__cargo_registry_s_1802403d8);
            }
            lVar54 = uVar50 * 0x68;
            lVar52 = *(longlong *)(lVar51 + 0x40 + lVar54);
            if ((local_108 == 0) != (lVar52 != 0)) {
              lVar6 = lVar51 + lVar54;
              if (lVar52 == 0) {
                if (*(char *)(lVar6 + 0x48) == (char)local_100) goto LAB_1801176ca;
              }
              else if (*(size_t *)(lVar6 + 0x50) == local_110) {
                local_288 = uVar57;
                local_280 = lVar51;
                iVar44 = memcmp(*(void **)(lVar6 + 0x48),local_100,local_110);
                uVar57 = local_288;
                lVar51 = local_280;
                if (iVar44 == 0) goto LAB_1801176ca;
              }
            }
          }
          uVar49 = uVar49 + 1;
          uVar48 = uVar48 + 1;
          goto LAB_180117606;
        }
        bVar63 = (int)local_278 != 2;
        if (0x7fff < local_148) {
          (**(code **)(local_128 + 0x20))(local_130,local_138,local_140);
          if (local_108 != 0) {
            local_f1 = 0;
            local_f2 = 0;
            (**(code **)(local_108 + 0x20))(local_120,local_100,local_110);
          }
          goto LAB_180118005;
        }
        local_188 = local_108;
        ppppuStack_180 = local_100;
        local_178 = local_110;
        sStack_170 = local_120;
        local_1b8._8_8_ = local_128;
        local_1a8._8_8_ = local_140;
        local_1a8._0_8_ = local_138;
        local_198._8_8_ = local_1e8;
        local_198._0_8_ = local_130;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = local_1c8._8_8_;
        local_1c8 = auVar40 << 0x40;
        local_168 = uVar55;
        if (local_148 == uStack_238) {
          FUN_1801fa370(&uStack_238);
          uVar57 = local_200;
          lVar51 = local_230;
          lVar45 = lStack_208;
        }
        lVar52 = local_148 * 0x68;
        *(ulonglong *)(lVar51 + 0x60 + lVar52) = CONCAT62(uStack_166,local_168);
        psVar8 = (size_t *)(lVar51 + 0x50 + lVar52);
        *psVar8 = local_178;
        psVar8[1] = sStack_170;
        plVar9 = (longlong *)(lVar51 + 0x40 + lVar52);
        *plVar9 = local_188;
        plVar9[1] = (longlong)ppppuStack_180;
        puVar61 = (undefined8 *)(lVar51 + 0x30 + lVar52);
        *puVar61 = local_198._0_8_;
        puVar61[1] = local_198._8_8_;
        puVar61 = (undefined8 *)(lVar51 + 0x20 + lVar52);
        *puVar61 = local_1a8._0_8_;
        puVar61[1] = local_1a8._8_8_;
        *(undefined1 (*) [16])(lVar51 + 0x10 + lVar52) = local_1b8;
        *(undefined8 *)(lVar51 + lVar52) = local_1c8._0_8_;
        ((undefined8 *)(lVar51 + lVar52))[1] = local_1c8._8_8_;
        uStack_228 = local_148 + 1;
        uVar58 = 0;
        uVar50 = local_148;
        while( true ) {
          if (uVar57 <= uVar48) {
            uVar48 = 0;
          }
          if (uVar57 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar13 = *(ushort *)(lVar45 + uVar48 * 4);
          if (uVar13 == 0xffff) break;
          uVar58 = uVar58 + 1;
          uVar55 = *(ushort *)(lVar45 + 2 + uVar48 * 4);
          *(short *)(lVar45 + uVar48 * 4) = (short)uVar50;
          *(short *)(lVar45 + 2 + uVar48 * 4) = (short)uVar56;
          uVar48 = uVar48 + 1;
          uVar56 = (uint)uVar55;
          uVar50 = (ulonglong)uVar13;
        }
        *(short *)(lVar45 + uVar48 * 4) = (short)uVar50;
        *(short *)(lVar45 + 2 + uVar48 * 4) = (short)uVar56;
        puVar61 = local_1e0;
        puVar62 = local_1d0;
        param_1 = local_1d8;
        if ((bVar63 && 0x1ff < uVar49 || 0x7f < uVar58) && (local_250 == 0)) {
          local_250 = 1;
        }
      } while( true );
    }
    lVar45 = FUN_1801d6710(0x14,
                           "Partial headerInactiveStreamIdUnexpectedFrameTypePayloadTooBigRejectedReleaseCapacityTooBigOverflowedStreamIdMalformedHeadersMissingUriSchemeAndAuthorityPollResetAfterSendResponseSendPingWhilePendingSendSettingsWhilePendingPeerDisabledServerPushInvalidInformationalStatusCode"
                           ,0xe);
  }
  param_1[1] = lVar45;
  *param_1 = 3;
joined_r0x000180117ea5:
  if (local_158 != 0) {
    thunk_FUN_1801d3330(local_1f0,local_158 << 5,8);
  }
  FUN_18000b470(&local_250);
                    /* WARNING: Read-only address (ram,0x000180204b70) is written */
                    /* WARNING: Read-only address (ram,0x000180204b80) is written */
                    /* WARNING: Read-only address (ram,0x000180240408) is written */
  return param_1;
LAB_1801176ca:
  puVar62 = local_1d0;
  param_1 = local_1d8;
  puVar61 = local_1e0;
  uVar57 = local_210;
  puVar7 = (undefined8 *)(lVar51 + lVar54);
  if (*(int *)(lVar51 + lVar54) == 1) {
    uVar48 = puVar7[2];
    if (local_210 == uStack_220) {
      FUN_1801f8b00(&uStack_220);
    }
    *(undefined8 *)(lStack_218 + uVar57 * 0x48) = 1;
    *(ulonglong *)(lStack_218 + 8 + uVar57 * 0x48) = uVar48;
    *(undefined8 *)(lStack_218 + 0x10 + uVar57 * 0x48) = 0;
    *(ulonglong *)(lStack_218 + 0x18 + uVar57 * 0x48) = uVar50;
    *(longlong *)(lStack_218 + 0x20 + uVar57 * 0x48) = local_128;
    *(undefined8 *)(lStack_218 + 0x28 + uVar57 * 0x48) = local_138;
    *(undefined8 *)(lStack_218 + 0x30 + uVar57 * 0x48) = local_140;
    *(undefined8 *)(lStack_218 + 0x38 + uVar57 * 0x48) = local_130;
    *(undefined8 *)(lStack_218 + 0x40 + uVar57 * 0x48) = local_1e8;
    local_210 = uVar57 + 1;
    if (uVar57 < uVar48) {
      local_f1 = 1;
      local_f2 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar48,local_210,&PTR_s_C__Users_burne__cargo_registry_s_1802403c0);
    }
    *(undefined8 *)(lStack_218 + 0x10 + uVar48 * 0x48) = 1;
    *(ulonglong *)(lStack_218 + 0x18 + uVar48 * 0x48) = uVar57;
    *puVar7 = 1;
    puVar7[2] = uVar57;
  }
  else {
    if (local_210 == uStack_220) {
      FUN_1801f8b00(&uStack_220);
    }
    *(undefined8 *)(lStack_218 + uVar57 * 0x48) = 0;
    *(ulonglong *)(lStack_218 + 8 + uVar57 * 0x48) = uVar50;
    *(undefined8 *)(lStack_218 + 0x10 + uVar57 * 0x48) = 0;
    *(ulonglong *)(lStack_218 + 0x18 + uVar57 * 0x48) = uVar50;
    *(longlong *)(lStack_218 + 0x20 + uVar57 * 0x48) = local_128;
    *(undefined8 *)(lStack_218 + 0x28 + uVar57 * 0x48) = local_138;
    *(undefined8 *)(lStack_218 + 0x30 + uVar57 * 0x48) = local_140;
    *(undefined8 *)(lStack_218 + 0x38 + uVar57 * 0x48) = local_130;
    *(undefined8 *)(lStack_218 + 0x40 + uVar57 * 0x48) = local_1e8;
    *puVar7 = 1;
    puVar7[1] = uVar57;
    puVar7[2] = uVar57;
  }
  local_210 = uVar57 + 1;
  if (local_108 != 0) {
    local_150 = local_118;
    local_f3 = 0;
    (**(code **)(local_108 + 0x20))(local_120,local_100,local_110);
  }
  goto LAB_1801170a2;
}


