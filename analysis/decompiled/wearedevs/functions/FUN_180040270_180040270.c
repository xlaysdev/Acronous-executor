/* FUN_180040270 @ 180040270 */

void FUN_180040270(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int *piVar3;
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
  byte bVar27;
  char cVar28;
  ushort uVar29;
  ushort uVar30;
  int iVar31;
  void *_Buf1;
  void *_Buf2;
  ulonglong uVar32;
  byte *pbVar33;
  short sVar34;
  short sVar35;
  longlong **_Size;
  longlong **pplVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  byte bVar55;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  longlong local_230;
  int *piStack_228;
  ulonglong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  ulonglong uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  longlong local_188;
  int *piStack_180;
  ulonglong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_f8;
  longlong *local_e8;
  byte *local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_188 = 0;
  piStack_180 = (int *)0x1;
  local_178 = 0;
  local_d8 = 0x60000020;
  local_e8 = &local_188;
  local_e0 = (byte *)&DAT_180208168;
  cVar28 = FUN_1801ac560(param_2 + 0x60,&local_e8);
  if (cVar28 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("a Display implementation returned an error unexpectedlyC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\string.rs"
                  ,0x37,&local_128,&DAT_180208290,&DAT_180208240);
  }
  local_f8 = local_188;
  uStack_c8 = 0;
  local_e8 = (longlong *)0x0;
  local_d8 = 0;
  _Size = &local_e8;
  local_130 = piStack_180;
  FUN_180190620(&local_230,_Size,piStack_180,local_178);
  if (SBORROW8(0,local_230)) goto LAB_180040a1e;
  local_138 = local_1e0;
  local_148 = local_1f0;
  uStack_140 = uStack_1e8;
  local_158 = local_200;
  uStack_150 = uStack_1f8;
  local_168 = local_210;
  uStack_160 = uStack_208;
  local_178 = local_220;
  uStack_170 = uStack_218;
  local_188 = local_230;
  piStack_180 = piStack_228;
  lVar41 = *(longlong *)(param_1 + 0x10);
  if (lVar41 != 0) {
    lVar40 = *(longlong *)(param_1 + 8);
    _Buf1 = (void *)FUN_1801916a0(&local_188);
    lVar41 = lVar41 * 0x58;
    lVar37 = lVar40 + lVar41 + -0x58;
    pplVar36 = _Size;
    _Buf2 = (void *)FUN_1801916a0(lVar37);
    lVar40 = lVar40 + lVar41;
    if (_Buf1 == (void *)0x0) {
      if (_Buf2 == (void *)0x0) goto LAB_18004040f;
LAB_18004045b:
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0x10;
      FUN_180054c80(&local_e8,param_2,&local_128);
      if ((char)uStack_c8 != '\x02') {
        (*(code *)local_e8[4])(local_d0,local_e0,local_d8);
      }
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0x1e;
      FUN_180054c80(&local_e8,param_2,&local_128);
      if ((char)uStack_c8 != '\x02') {
        (*(code *)local_e8[4])(local_d0,local_e0,local_d8);
      }
      FUN_180054f10(&local_e8,param_2,"cookie2",7);
      if ((char)uStack_c8 != '\x02') {
        (*(code *)local_e8[4])(local_d0,local_e0,local_d8);
      }
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0x33;
      FUN_180054c80(&local_e8,param_2,&local_128);
      if ((char)uStack_c8 != '\x02') {
        (*(code *)local_e8[4])(local_d0,local_e0,local_d8);
      }
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0x4c;
      FUN_180054c80(&local_e8,param_2,&local_128);
      if ((char)uStack_c8 != '\x02') {
        (*(code *)local_e8[4])(local_d0,local_e0,local_d8);
      }
    }
    else {
      if ((_Buf2 == (void *)0x0 || _Size != pplVar36) ||
         (iVar31 = memcmp(_Buf1,_Buf2,(size_t)_Size), iVar31 != 0)) goto LAB_18004045b;
LAB_18004040f:
      sVar34 = (short)(uStack_160 >> 0x10);
      uVar29 = FUN_180044df0(uStack_160 & 0xffff,uStack_160 >> 0x10 & 0xffff,&local_188);
      sVar35 = *(short *)(lVar40 + -0x2e);
      uVar30 = FUN_180044df0(*(undefined2 *)(lVar40 + -0x30),sVar35,lVar37);
      if ((uVar29 & 1) == 0) {
        if (uVar30 != 0) goto LAB_18004045b;
      }
      else if (((uVar30 & 1) == 0) || (sVar34 != sVar35)) goto LAB_18004045b;
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar32 = (ulonglong)uStack_160._4_4_;
      if (uVar32 != 0) {
        if (uVar32 < local_178) {
          if (*(char *)((longlong)piStack_180 + uVar32) < -0x40) {
LAB_180040636:
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(piStack_180,local_178,0,uVar32,
                          &PTR_s_C__Users_burne__cargo_registry_s_180208600);
          }
        }
        else if (local_178 != uVar32) goto LAB_180040636;
        if ((uStack_160._4_4_ == 4) && (*piStack_180 == 0x70747468)) {
          uVar32 = (ulonglong)*(uint *)(lVar40 + -0x2c);
          if (uVar32 != 0) {
            piVar3 = *(int **)(lVar40 + -0x50);
            uVar39 = *(ulonglong *)(lVar40 + -0x48);
            if (uVar32 < uVar39) {
              if (*(char *)((longlong)piVar3 + uVar32) < -0x40) {
LAB_18004088a:
                    /* WARNING: Subroutine does not return */
                FUN_1802018d0(piVar3,uVar39,0,uVar32,
                              &PTR_s_C__Users_burne__cargo_registry_s_180208600);
              }
            }
            else if (uVar39 != uVar32) goto LAB_18004088a;
            if ((*(uint *)(lVar40 + -0x2c) == 5) &&
               ((char)piVar3[1] == 's' && *piVar3 == 0x70747468)) goto LAB_180040a06;
          }
        }
      }
      FUN_1801ed500(&local_e8,lVar37);
      local_bc = *(undefined8 *)(lVar40 + -0x2c);
      uStack_b4 = *(undefined8 *)(lVar40 + -0x24);
      local_a8 = *(undefined8 *)(lVar40 + -0x18);
      uStack_a0 = *(undefined8 *)(lVar40 + -0x10);
      local_98 = *(undefined1 *)(lVar40 + -8);
      local_c0 = *(undefined4 *)(lVar40 + -0x30);
      local_ac = *(undefined4 *)(lVar40 + -0x1c);
      local_d0 = *(undefined8 *)(lVar40 + -0x40);
      uStack_c8 = *(undefined8 *)(lVar40 + -0x38);
      FUN_180190e70(&local_e8,1,0);
      FUN_1801908c0(&local_e8,0);
      FUN_1801906d0(&local_e8,0);
      if (local_d8 != 0) {
        if (local_d8 < 8) {
          bVar42 = false;
          pbVar33 = local_e0;
LAB_1800408d0:
          do {
            bVar2 = *pbVar33;
            pbVar33 = pbVar33 + 1;
            bVar42 = (bool)(bVar42 | (bVar2 != 9 && (bVar2 == 0x7f || bVar2 < 0x20)));
          } while (pbVar33 != local_e0 + local_d8);
        }
        else if (local_d8 < 0x20) {
          uVar32 = 0;
          uVar38 = 0;
LAB_1800407da:
          uVar39 = local_d8 & 0xfffffffffffffff8;
          pbVar33 = local_e0 + uVar39;
          auVar43 = ZEXT416(uVar38);
          auVar44._8_4_ = 0xffffffff;
          auVar44._0_8_ = 0xffffffffffffffff;
          auVar44._12_4_ = 0xffffffff;
          do {
            uVar1 = *(undefined8 *)(local_e0 + uVar32);
            bVar55 = (byte)uVar1;
            bVar58 = (byte)((ulonglong)uVar1 >> 8);
            bVar59 = (byte)((ulonglong)uVar1 >> 0x10);
            bVar60 = (byte)((ulonglong)uVar1 >> 0x18);
            bVar61 = (byte)((ulonglong)uVar1 >> 0x20);
            bVar62 = (byte)((ulonglong)uVar1 >> 0x28);
            bVar63 = (byte)((ulonglong)uVar1 >> 0x30);
            bVar2 = (byte)((ulonglong)uVar1 >> 0x38);
            auVar57[0] = -((byte)((bVar55 < (byte)' ') * ' ' | (bVar55 >= (byte)' ') * bVar55) ==
                          bVar55);
            auVar57[1] = -((byte)((bVar58 < (byte)' ') * ' ' | (bVar58 >= (byte)' ') * bVar58) ==
                          bVar58);
            auVar57[2] = -((byte)((bVar59 < (byte)' ') * ' ' | (bVar59 >= (byte)' ') * bVar59) ==
                          bVar59);
            auVar57[3] = -((byte)((bVar60 < (byte)' ') * ' ' | (bVar60 >= (byte)' ') * bVar60) ==
                          bVar60);
            auVar57[4] = -((byte)((bVar61 < (byte)' ') * ' ' | (bVar61 >= (byte)' ') * bVar61) ==
                          bVar61);
            auVar57[5] = -((byte)((bVar62 < (byte)' ') * ' ' | (bVar62 >= (byte)' ') * bVar62) ==
                          bVar62);
            auVar57[6] = -((byte)((bVar63 < (byte)' ') * ' ' | (bVar63 >= (byte)' ') * bVar63) ==
                          bVar63);
            auVar57[7] = -((byte)((bVar2 < (byte)' ') * ' ' | (bVar2 >= (byte)' ') * bVar2) == bVar2
                          );
            auVar57[8] = 0xff;
            auVar57[9] = 0xff;
            auVar57[10] = 0xff;
            auVar57[0xb] = 0xff;
            auVar57[0xc] = 0xff;
            auVar57[0xd] = 0xff;
            auVar57[0xe] = 0xff;
            auVar57[0xf] = 0xff;
            auVar66[0] = -(bVar55 == 0x7f);
            auVar66[1] = -(bVar58 == 0x7f);
            auVar66[2] = -(bVar59 == 0x7f);
            auVar66[3] = -(bVar60 == 0x7f);
            auVar66[4] = -(bVar61 == 0x7f);
            auVar66[5] = -(bVar62 == 0x7f);
            auVar66[6] = -(bVar63 == 0x7f);
            auVar66[7] = -(bVar2 == 0x7f);
            auVar66[8] = 0xff;
            auVar66[9] = 0xff;
            auVar66[10] = 0xff;
            auVar66[0xb] = 0xff;
            auVar66[0xc] = 0xff;
            auVar66[0xd] = 0xff;
            auVar66[0xe] = 0xff;
            auVar66[0xf] = 0xff;
            auVar45[0] = -(bVar55 == '\t');
            auVar45[1] = -(bVar58 == '\t');
            auVar45[2] = -(bVar59 == '\t');
            auVar45[3] = -(bVar60 == '\t');
            auVar45[4] = -(bVar61 == '\t');
            auVar45[5] = -(bVar62 == '\t');
            auVar45[6] = -(bVar63 == '\t');
            auVar45[7] = -(bVar2 == '\t');
            auVar45[8] = 0xff;
            auVar45[9] = 0xff;
            auVar45[10] = 0xff;
            auVar45[0xb] = 0xff;
            auVar45[0xc] = 0xff;
            auVar45[0xd] = 0xff;
            auVar45[0xe] = 0xff;
            auVar45[0xf] = 0xff;
            auVar46 = ~auVar45 & (auVar66 | auVar57 ^ auVar44);
            auVar54._0_14_ = auVar46._0_14_;
            auVar54[0xe] = auVar46[7];
            auVar54[0xf] = auVar46[7];
            auVar53._14_2_ = auVar54._14_2_;
            auVar53._0_13_ = auVar46._0_13_;
            auVar53[0xd] = auVar46[6];
            auVar52._13_3_ = auVar53._13_3_;
            auVar52._0_12_ = auVar46._0_12_;
            auVar52[0xc] = auVar46[6];
            auVar51._12_4_ = auVar52._12_4_;
            auVar51._0_11_ = auVar46._0_11_;
            auVar51[0xb] = auVar46[5];
            auVar50._11_5_ = auVar51._11_5_;
            auVar50._0_10_ = auVar46._0_10_;
            auVar50[10] = auVar46[5];
            auVar49._10_6_ = auVar50._10_6_;
            auVar49._0_9_ = auVar46._0_9_;
            auVar49[9] = auVar46[4];
            auVar48._9_7_ = auVar49._9_7_;
            auVar48._0_8_ = auVar46._0_8_;
            auVar48[8] = auVar46[4];
            auVar47._8_8_ = auVar48._8_8_;
            auVar47[7] = auVar46[3];
            auVar47[6] = auVar46[3];
            auVar47[5] = auVar46[2];
            auVar47[4] = auVar46[2];
            auVar47[3] = auVar46[1];
            auVar47[2] = auVar46[1];
            auVar47[0] = auVar46[0];
            auVar47[1] = auVar47[0];
            auVar43 = auVar43 | auVar47;
            uVar32 = uVar32 + 8;
          } while (uVar39 != uVar32);
          auVar43 = psllw(auVar43,7);
          bVar42 = (((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar43 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar43 >> 0x77,0) & 1) != 0;
          if (local_d8 != uVar39) goto LAB_1800408d0;
        }
        else {
          uVar32 = local_d8 & 0xffffffffffffffe0;
          auVar43 = (undefined1  [16])0x0;
          uVar39 = 0;
          auVar44 = (undefined1  [16])0x0;
          do {
            pbVar33 = local_e0 + uVar39;
            bVar2 = *pbVar33;
            bVar55 = pbVar33[1];
            bVar58 = pbVar33[2];
            bVar59 = pbVar33[3];
            bVar60 = pbVar33[4];
            bVar61 = pbVar33[5];
            bVar62 = pbVar33[6];
            bVar63 = pbVar33[7];
            bVar4 = pbVar33[8];
            bVar5 = pbVar33[9];
            bVar6 = pbVar33[10];
            bVar7 = pbVar33[0xb];
            bVar8 = pbVar33[0xc];
            bVar9 = pbVar33[0xd];
            bVar10 = pbVar33[0xe];
            bVar11 = pbVar33[0xf];
            pbVar33 = local_e0 + uVar39 + 0x10;
            bVar12 = *pbVar33;
            bVar13 = pbVar33[1];
            bVar14 = pbVar33[2];
            bVar15 = pbVar33[3];
            bVar16 = pbVar33[4];
            bVar17 = pbVar33[5];
            bVar18 = pbVar33[6];
            bVar19 = pbVar33[7];
            bVar20 = pbVar33[8];
            bVar21 = pbVar33[9];
            bVar22 = pbVar33[10];
            bVar23 = pbVar33[0xb];
            bVar24 = pbVar33[0xc];
            bVar25 = pbVar33[0xd];
            bVar26 = pbVar33[0xe];
            bVar27 = pbVar33[0xf];
            auVar64[0] = -((byte)((0x1f < bVar2) * '\x1f' | (0x1f >= bVar2) * bVar2) == bVar2);
            auVar64[1] = -((byte)((0x1f < bVar55) * '\x1f' | (0x1f >= bVar55) * bVar55) == bVar55);
            auVar64[2] = -((byte)((0x1f < bVar58) * '\x1f' | (0x1f >= bVar58) * bVar58) == bVar58);
            auVar64[3] = -((byte)((0x1f < bVar59) * '\x1f' | (0x1f >= bVar59) * bVar59) == bVar59);
            auVar64[4] = -((byte)((0x1f < bVar60) * '\x1f' | (0x1f >= bVar60) * bVar60) == bVar60);
            auVar64[5] = -((byte)((0x1f < bVar61) * '\x1f' | (0x1f >= bVar61) * bVar61) == bVar61);
            auVar64[6] = -((byte)((0x1f < bVar62) * '\x1f' | (0x1f >= bVar62) * bVar62) == bVar62);
            auVar64[7] = -((byte)((0x1f < bVar63) * '\x1f' | (0x1f >= bVar63) * bVar63) == bVar63);
            auVar64[8] = -((byte)((0x1f < bVar4) * '\x1f' | (0x1f >= bVar4) * bVar4) == bVar4);
            auVar64[9] = -((byte)((0x1f < bVar5) * '\x1f' | (0x1f >= bVar5) * bVar5) == bVar5);
            auVar64[10] = -((byte)((0x1f < bVar6) * '\x1f' | (0x1f >= bVar6) * bVar6) == bVar6);
            auVar64[0xb] = -((byte)((0x1f < bVar7) * '\x1f' | (0x1f >= bVar7) * bVar7) == bVar7);
            auVar64[0xc] = -((byte)((0x1f < bVar8) * '\x1f' | (0x1f >= bVar8) * bVar8) == bVar8);
            auVar64[0xd] = -((byte)((0x1f < bVar9) * '\x1f' | (0x1f >= bVar9) * bVar9) == bVar9);
            auVar64[0xe] = -((byte)((0x1f < bVar10) * '\x1f' | (0x1f >= bVar10) * bVar10) == bVar10)
            ;
            auVar64[0xf] = -((byte)((0x1f < bVar11) * '\x1f' | (0x1f >= bVar11) * bVar11) == bVar11)
            ;
            auVar67[0] = -((byte)((0x1f < bVar12) * '\x1f' | (0x1f >= bVar12) * bVar12) == bVar12);
            auVar67[1] = -((byte)((0x1f < bVar13) * '\x1f' | (0x1f >= bVar13) * bVar13) == bVar13);
            auVar67[2] = -((byte)((0x1f < bVar14) * '\x1f' | (0x1f >= bVar14) * bVar14) == bVar14);
            auVar67[3] = -((byte)((0x1f < bVar15) * '\x1f' | (0x1f >= bVar15) * bVar15) == bVar15);
            auVar67[4] = -((byte)((0x1f < bVar16) * '\x1f' | (0x1f >= bVar16) * bVar16) == bVar16);
            auVar67[5] = -((byte)((0x1f < bVar17) * '\x1f' | (0x1f >= bVar17) * bVar17) == bVar17);
            auVar67[6] = -((byte)((0x1f < bVar18) * '\x1f' | (0x1f >= bVar18) * bVar18) == bVar18);
            auVar67[7] = -((byte)((0x1f < bVar19) * '\x1f' | (0x1f >= bVar19) * bVar19) == bVar19);
            auVar67[8] = -((byte)((0x1f < bVar20) * '\x1f' | (0x1f >= bVar20) * bVar20) == bVar20);
            auVar67[9] = -((byte)((0x1f < bVar21) * '\x1f' | (0x1f >= bVar21) * bVar21) == bVar21);
            auVar67[10] = -((byte)((0x1f < bVar22) * '\x1f' | (0x1f >= bVar22) * bVar22) == bVar22);
            auVar67[0xb] = -((byte)((0x1f < bVar23) * '\x1f' | (0x1f >= bVar23) * bVar23) == bVar23)
            ;
            auVar67[0xc] = -((byte)((0x1f < bVar24) * '\x1f' | (0x1f >= bVar24) * bVar24) == bVar24)
            ;
            auVar67[0xd] = -((byte)((0x1f < bVar25) * '\x1f' | (0x1f >= bVar25) * bVar25) == bVar25)
            ;
            auVar67[0xe] = -((byte)((0x1f < bVar26) * '\x1f' | (0x1f >= bVar26) * bVar26) == bVar26)
            ;
            auVar67[0xf] = -((byte)((0x1f < bVar27) * '\x1f' | (0x1f >= bVar27) * bVar27) == bVar27)
            ;
            auVar68[0] = -(bVar2 == 0x7f);
            auVar68[1] = -(bVar55 == 0x7f);
            auVar68[2] = -(bVar58 == 0x7f);
            auVar68[3] = -(bVar59 == 0x7f);
            auVar68[4] = -(bVar60 == 0x7f);
            auVar68[5] = -(bVar61 == 0x7f);
            auVar68[6] = -(bVar62 == 0x7f);
            auVar68[7] = -(bVar63 == 0x7f);
            auVar68[8] = -(bVar4 == 0x7f);
            auVar68[9] = -(bVar5 == 0x7f);
            auVar68[10] = -(bVar6 == 0x7f);
            auVar68[0xb] = -(bVar7 == 0x7f);
            auVar68[0xc] = -(bVar8 == 0x7f);
            auVar68[0xd] = -(bVar9 == 0x7f);
            auVar68[0xe] = -(bVar10 == 0x7f);
            auVar68[0xf] = -(bVar11 == 0x7f);
            auVar65[0] = -(bVar12 == 0x7f);
            auVar65[1] = -(bVar13 == 0x7f);
            auVar65[2] = -(bVar14 == 0x7f);
            auVar65[3] = -(bVar15 == 0x7f);
            auVar65[4] = -(bVar16 == 0x7f);
            auVar65[5] = -(bVar17 == 0x7f);
            auVar65[6] = -(bVar18 == 0x7f);
            auVar65[7] = -(bVar19 == 0x7f);
            auVar65[8] = -(bVar20 == 0x7f);
            auVar65[9] = -(bVar21 == 0x7f);
            auVar65[10] = -(bVar22 == 0x7f);
            auVar65[0xb] = -(bVar23 == 0x7f);
            auVar65[0xc] = -(bVar24 == 0x7f);
            auVar65[0xd] = -(bVar25 == 0x7f);
            auVar65[0xe] = -(bVar26 == 0x7f);
            auVar65[0xf] = -(bVar27 == 0x7f);
            auVar46[0] = -(bVar2 == 9);
            auVar46[1] = -(bVar55 == 9);
            auVar46[2] = -(bVar58 == 9);
            auVar46[3] = -(bVar59 == 9);
            auVar46[4] = -(bVar60 == 9);
            auVar46[5] = -(bVar61 == 9);
            auVar46[6] = -(bVar62 == 9);
            auVar46[7] = -(bVar63 == 9);
            auVar46[8] = -(bVar4 == 9);
            auVar46[9] = -(bVar5 == 9);
            auVar46[10] = -(bVar6 == 9);
            auVar46[0xb] = -(bVar7 == 9);
            auVar46[0xc] = -(bVar8 == 9);
            auVar46[0xd] = -(bVar9 == 9);
            auVar46[0xe] = -(bVar10 == 9);
            auVar46[0xf] = -(bVar11 == 9);
            auVar43 = auVar43 | ~auVar46 & (auVar68 | auVar64);
            auVar56[0] = -(bVar12 == 9);
            auVar56[1] = -(bVar13 == 9);
            auVar56[2] = -(bVar14 == 9);
            auVar56[3] = -(bVar15 == 9);
            auVar56[4] = -(bVar16 == 9);
            auVar56[5] = -(bVar17 == 9);
            auVar56[6] = -(bVar18 == 9);
            auVar56[7] = -(bVar19 == 9);
            auVar56[8] = -(bVar20 == 9);
            auVar56[9] = -(bVar21 == 9);
            auVar56[10] = -(bVar22 == 9);
            auVar56[0xb] = -(bVar23 == 9);
            auVar56[0xc] = -(bVar24 == 9);
            auVar56[0xd] = -(bVar25 == 9);
            auVar56[0xe] = -(bVar26 == 9);
            auVar56[0xf] = -(bVar27 == 9);
            auVar44 = auVar44 | ~auVar56 & (auVar65 | auVar67);
            uVar39 = uVar39 + 0x20;
          } while (uVar32 != uVar39);
          auVar43 = psllw(auVar44 | auVar43,7);
          bVar42 = (((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 ||
                                (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                               (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                              (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                             (SUB161(auVar43 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                           (SUB161(auVar43 >> 0x37,0) & 1) != 0) ||
                          (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
                         (SUB161(auVar43 >> 0x47,0) & 1) != 0) ||
                        (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x67,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x6f,0) & 1) != 0) || (SUB161(auVar43 >> 0x77,0) & 1) != 0)
                   || auVar43[0xf] < '\0';
          uVar38 = (uint)bVar42;
          if (local_d8 != uVar32) {
            if ((local_d8 & 0x18) == 0) {
              pbVar33 = local_e0 + uVar32;
              goto LAB_1800408d0;
            }
            goto LAB_1800407da;
          }
        }
        if (bVar42) {
          if (local_e8 != (longlong *)0x0) {
            thunk_FUN_1801d3330(local_e0,local_e8,1);
          }
          goto LAB_180040a06;
        }
      }
      FUN_1801b3ac0(&local_128);
      local_1c8 = local_118;
      uStack_1c0 = uStack_110;
      local_1d8 = local_128;
      uStack_1d0 = uStack_120;
      if (local_e8 != (longlong *)0x0) {
        thunk_FUN_1801d3330(local_e0,local_e8,1);
      }
      local_1b8 = local_1d8;
      uStack_1b0 = uStack_1d0;
      local_1a8 = local_1c8;
      uStack_1a0 = uStack_1c0;
      local_198 = 0;
      FUN_180044ed0(&local_e8,param_2,&DAT_180208020,&local_1b8);
      if ((char)uStack_c8 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_128,&DAT_1802082b0,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802080b8);
      }
      if ((char)uStack_c8 != '\x02') {
        (*(code *)local_e8[4])(local_d0,local_e0,local_d8);
      }
    }
  }
LAB_180040a06:
  if (local_188 != 0) {
    thunk_FUN_1801d3330(piStack_180,local_188,1);
  }
LAB_180040a1e:
  if (local_f8 != 0) {
    thunk_FUN_1801d3330(local_130,local_f8,1);
  }
  return;
}


