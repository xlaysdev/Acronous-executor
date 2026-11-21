/* FUN_18004edd0 @ 18004edd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18004edd0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *_Dst;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  undefined2 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_318 [136];
  longlong *local_290;
  ulonglong uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  longlong *local_230;
  undefined8 uStack_228;
  longlong *local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined **local_180;
  longlong local_170;
  longlong *local_168;
  undefined8 *puStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined2 local_110;
  longlong *local_f8;
  undefined8 *puStack_f0;
  longlong local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *puStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 *local_70;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_170 = param_2;
  if ((*(longlong *)(param_2 + 0x6f0) == 0) ||
     (cVar6 = FUN_1801799c0(*(longlong *)(param_2 + 0x6f0),param_3), cVar6 != '\0')) {
    if ((*(longlong *)(param_2 + 0x6f8) == 0) ||
       (cVar6 = FUN_1801799c0(*(longlong *)(param_2 + 0x6f8),param_3), cVar6 != '\0')) {
      FUN_180081b50(&local_168,param_2,param_3);
      if (local_168 == (longlong *)0x4) {
        *param_1 = 4;
        return param_1;
      }
      if ((int)local_168 == 3) {
        uVar7 = FUN_18006b260(puStack_160,&local_170);
        *param_1 = 3;
        param_1[1] = uVar7;
        return param_1;
      }
      local_290 = local_168;
      uStack_288 = (ulonglong)puStack_160;
      memcpy(&local_280,&local_158,0x88);
      local_a8 = local_d8;
      local_b8 = local_e8;
      uStack_b0 = puStack_e0;
      local_c8 = local_f8;
      puStack_c0 = puStack_f0;
      FUN_180027490();
      local_188 = (undefined8 *)thunk_FUN_1801d32d0(0x28,8);
      if (local_188 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x28);
      }
      local_188[4] = local_d8;
      local_188[2] = local_e8;
      local_188[3] = puStack_e0;
      *local_188 = local_f8;
      local_188[1] = puStack_f0;
      local_1f8 = local_290;
      uStack_1f0 = uStack_288;
      local_1e8 = local_280;
      uStack_1e0 = uStack_278;
      local_1d8 = local_270;
      uStack_1d0 = uStack_268;
      local_1c8 = local_260;
      uStack_1c0 = uStack_258;
      local_1b8 = local_250;
      uStack_1b0 = uStack_248;
      local_1a8 = local_240;
      uStack_1a0 = uStack_238;
      local_198 = local_230;
      uStack_190 = uStack_228;
      local_180 = &PTR_LAB_1802077b8;
      if ((local_230 != (longlong *)0x0) && (local_230[3] != 0)) {
        lVar8 = *local_230;
        lVar9 = lVar8 + -0x20;
        uVar12 = 0x985534b49fd55eb4;
        lVar13 = 0;
        while( true ) {
          uVar12 = uVar12 & local_230[1];
          auVar1 = *(undefined1 (*) [16])(lVar8 + uVar12);
          auVar21[0] = -(auVar1[0] == DAT_180207da0);
          auVar21[1] = -(auVar1[1] == DAT_180207da0._1_1_);
          auVar21[2] = -(auVar1[2] == DAT_180207da0._2_1_);
          auVar21[3] = -(auVar1[3] == DAT_180207da0._3_1_);
          auVar21[4] = -(auVar1[4] == DAT_180207da0._4_1_);
          auVar21[5] = -(auVar1[5] == DAT_180207da0._5_1_);
          auVar21[6] = -(auVar1[6] == DAT_180207da0._6_1_);
          auVar21[7] = -(auVar1[7] == DAT_180207da0._7_1_);
          auVar21[8] = -(auVar1[8] == DAT_180207da0._8_1_);
          auVar21[9] = -(auVar1[9] == DAT_180207da0._9_1_);
          auVar21[10] = -(auVar1[10] == DAT_180207da0._10_1_);
          auVar21[0xb] = -(auVar1[0xb] == DAT_180207da0._11_1_);
          auVar21[0xc] = -(auVar1[0xc] == DAT_180207da0._12_1_);
          auVar21[0xd] = -(auVar1[0xd] == DAT_180207da0._13_1_);
          auVar21[0xe] = -(auVar1[0xe] == DAT_180207da0._14_1_);
          auVar21[0xf] = -(auVar1[0xf] == DAT_180207da0._15_1_);
          uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar21[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar15;
          while (uVar15 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar16 = uVar4 + uVar12 & local_230[1];
            pcVar10 = (char *)(lVar9 + uVar16 * -0x20);
            auVar22[0] = -(*pcVar10 == DAT_180207db0);
            auVar22[1] = -(pcVar10[1] == DAT_180207db0._1_1_);
            auVar22[2] = -(pcVar10[2] == DAT_180207db0._2_1_);
            auVar22[3] = -(pcVar10[3] == DAT_180207db0._3_1_);
            auVar22[4] = -(pcVar10[4] == DAT_180207db0._4_1_);
            auVar22[5] = -(pcVar10[5] == DAT_180207db0._5_1_);
            auVar22[6] = -(pcVar10[6] == DAT_180207db0._6_1_);
            auVar22[7] = -(pcVar10[7] == DAT_180207db0._7_1_);
            auVar22[8] = -(pcVar10[8] == DAT_180207db0._8_1_);
            auVar22[9] = -(pcVar10[9] == DAT_180207db0._9_1_);
            auVar22[10] = -(pcVar10[10] == DAT_180207db0._10_1_);
            auVar22[0xb] = -(pcVar10[0xb] == DAT_180207db0._11_1_);
            auVar22[0xc] = -(pcVar10[0xc] == DAT_180207db0._12_1_);
            auVar22[0xd] = -(pcVar10[0xd] == DAT_180207db0._13_1_);
            auVar22[0xe] = -(pcVar10[0xe] == DAT_180207db0._14_1_);
            auVar22[0xf] = -(pcVar10[0xf] == DAT_180207db0._15_1_);
            if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
              lVar13 = uVar16 * -0x20;
              local_61 = 1;
              lVar8 = (**(code **)(*(longlong *)(lVar8 + -8 + lVar13) + 0x28))
                                (*(undefined8 *)(lVar8 + -0x10 + lVar13));
              local_61 = 1;
              (**(code **)(lVar9 + 0x18))(&local_168,lVar8);
              if ((lVar8 != 0) &&
                 (puStack_160 == (undefined8 *)0x985534b49fd55eb4 &&
                  local_168 == (longlong *)0xb96ea4b83f26adec)) {
                local_98 = 0;
                lStack_90 = 1;
                local_88 = 0;
                local_b8 = 0x60000020;
                local_c8 = &local_98;
                puStack_c0 = &DAT_180208168;
                cVar6 = FUN_1801ac560(lVar8,&local_c8);
                if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_180201bc0("a Display implementation returned an error unexpectedlyC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\string.rs"
                                ,0x37,&local_d0,&DAT_180208290,&DAT_180208240);
                }
                local_70 = (undefined8 *)local_98;
                local_a8 = 0;
                local_c8 = (longlong *)0x0;
                local_b8 = 0;
                local_78 = lStack_90;
                FUN_180190620(&local_168,&local_c8,lStack_90,local_88);
                if (SBORROW8(0,(longlong)local_168)) {
                  local_c8 = (longlong *)CONCAT62(local_c8._2_6_,5);
                  uVar7 = FUN_18006adf0(&local_c8,(ulonglong)puStack_160 & 0xff);
                  *param_1 = 3;
                  param_1[1] = uVar7;
                  if (local_70 != (undefined8 *)0x0) {
                    thunk_FUN_1801d3330(local_78,local_70,1);
                  }
                  FUN_180042380(&local_1f8);
                  return param_1;
                }
                if (*(longlong *)(param_2 + 0x668) != 0) {
                  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x670),
                                      *(longlong *)(param_2 + 0x668),1);
                }
                *(ulonglong *)(param_2 + 0x6b8) = CONCAT71(uStack_117,local_118);
                *(undefined8 *)(param_2 + 0x6a8) = local_128;
                *(undefined8 *)(param_2 + 0x6b0) = uStack_120;
                *(ulonglong *)(param_2 + 0x698) = CONCAT44(uStack_134,uStack_138);
                *(ulonglong *)(param_2 + 0x6a0) = CONCAT44(local_12c,uStack_130);
                *(undefined8 *)(param_2 + 0x688) = uStack_148;
                *(ulonglong *)(param_2 + 0x690) = CONCAT44(uStack_13c,uStack_140);
                *(longlong *)(param_2 + 0x678) = local_158;
                *(undefined8 *)(param_2 + 0x680) = uStack_150;
                *(longlong **)(param_2 + 0x668) = local_168;
                *(undefined8 **)(param_2 + 0x670) = puStack_160;
                if (local_70 != (undefined8 *)0x0) {
                  thunk_FUN_1801d3330(local_78,local_70,1);
                }
              }
              goto LAB_18004f52d;
            }
            uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
          }
          auVar20[0] = -(auVar1[0] == -1);
          auVar20[1] = -(auVar1[1] == -1);
          auVar20[2] = -(auVar1[2] == -1);
          auVar20[3] = -(auVar1[3] == -1);
          auVar20[4] = -(auVar1[4] == -1);
          auVar20[5] = -(auVar1[5] == -1);
          auVar20[6] = -(auVar1[6] == -1);
          auVar20[7] = -(auVar1[7] == -1);
          auVar20[8] = -(auVar1[8] == -1);
          auVar20[9] = -(auVar1[9] == -1);
          auVar20[10] = -(auVar1[10] == -1);
          auVar20[0xb] = -(auVar1[0xb] == -1);
          auVar20[0xc] = -(auVar1[0xc] == -1);
          auVar20[0xd] = -(auVar1[0xd] == -1);
          auVar20[0xe] = -(auVar1[0xe] == -1);
          auVar20[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x2f,0) & 1) != 0) || (SUB161(auVar20 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
          uVar12 = uVar12 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
LAB_18004f52d:
      local_62 = 1;
      FUN_1801ed500(&local_c8,param_2 + 0x668);
      local_118 = *(undefined1 *)(param_2 + 0x6b8);
      local_128 = *(undefined8 *)(param_2 + 0x6a8);
      uStack_120 = *(undefined8 *)(param_2 + 0x6b0);
      uStack_140 = *(undefined4 *)(param_2 + 0x690);
      local_12c = *(undefined4 *)(param_2 + 0x6a4);
      uStack_150 = *(undefined8 *)(param_2 + 0x680);
      uStack_148 = *(undefined8 *)(param_2 + 0x688);
      local_168 = local_c8;
      puStack_160 = puStack_c0;
      local_158 = local_b8;
      uStack_13c = (undefined4)*(undefined8 *)(param_2 + 0x694);
      uStack_138 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x694) >> 0x20);
      uStack_134 = (undefined4)*(undefined8 *)(param_2 + 0x69c);
      uStack_130 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x69c) >> 0x20);
      uVar7 = *(undefined8 *)(param_2 + 0x6f0);
      *(undefined8 *)(param_2 + 0x6f0) = 0;
      local_62 = 0;
      FUN_180090610(local_318,&local_1f8,&local_168,uVar7,*(undefined8 *)(param_2 + 0x6c0),
                    *(undefined4 *)(param_2 + 0x6c8));
      memcpy(param_1,local_318,0x88);
      return param_1;
    }
    local_110 = 1;
    local_e8 = 1;
    puStack_e0 = &DAT_18020b258;
    local_168 = (longlong *)0x8000000000000000;
    FUN_180027490();
    _Dst = (longlong *)thunk_FUN_1801d32d0(0x90,8);
    if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    local_70 = param_1;
    memcpy(_Dst,&local_168,0x90);
    local_d0 = _Dst;
    FUN_1801ed500(&local_168,param_2 + 0x668);
    uVar23 = *(undefined4 *)(param_2 + 0x694);
    uVar24 = *(undefined4 *)(param_2 + 0x698);
    uVar25 = *(undefined4 *)(param_2 + 0x69c);
    uVar26 = *(undefined4 *)(param_2 + 0x6a0);
    local_98 = *(longlong *)(param_2 + 0x6a8);
    lStack_90 = *(longlong *)(param_2 + 0x6b0);
    local_88 = CONCAT71(local_88._1_7_,*(undefined1 *)(param_2 + 0x6b8));
    uVar19 = *(undefined2 *)(param_2 + 0x690);
    uVar17 = *(undefined2 *)(param_2 + 0x692);
    local_78._0_4_ = *(undefined4 *)(param_2 + 0x6a4);
    uVar2 = *(undefined4 *)(param_2 + 0x680);
    uVar3 = *(undefined4 *)(param_2 + 0x684);
    uVar18 = *(undefined4 *)(param_2 + 0x688);
    uVar11 = *(undefined4 *)(param_2 + 0x68c);
    local_b8 = local_158;
    local_c8 = local_168;
    puStack_c0 = puStack_160;
    lVar9 = *_Dst;
    if ((!SBORROW8(0,lVar9)) && (lVar9 != 0)) {
      thunk_FUN_1801d3330(_Dst[1],lVar9,1);
    }
    _Dst[2] = local_b8;
    *_Dst = (longlong)local_c8;
    _Dst[1] = (longlong)puStack_c0;
    *(undefined4 *)(_Dst + 3) = uVar2;
    *(undefined4 *)((longlong)_Dst + 0x1c) = uVar3;
  }
  else {
    local_110 = 1;
    local_e8 = 1;
    puStack_e0 = &DAT_18020b258;
    local_168 = (longlong *)0x8000000000000000;
    FUN_180027490();
    _Dst = (longlong *)thunk_FUN_1801d32d0(0x90,8);
    if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    local_70 = param_1;
    memcpy(_Dst,&local_168,0x90);
    local_d0 = _Dst;
    FUN_1801ed500(&local_168,param_2 + 0x668);
    uVar23 = *(undefined4 *)(param_2 + 0x694);
    uVar24 = *(undefined4 *)(param_2 + 0x698);
    uVar25 = *(undefined4 *)(param_2 + 0x69c);
    uVar26 = *(undefined4 *)(param_2 + 0x6a0);
    local_98 = *(longlong *)(param_2 + 0x6a8);
    lStack_90 = *(longlong *)(param_2 + 0x6b0);
    local_88 = CONCAT71(local_88._1_7_,*(undefined1 *)(param_2 + 0x6b8));
    uVar19 = *(undefined2 *)(param_2 + 0x690);
    uVar17 = *(undefined2 *)(param_2 + 0x692);
    local_78._0_4_ = *(undefined4 *)(param_2 + 0x6a4);
    uVar2 = *(undefined4 *)(param_2 + 0x680);
    uVar3 = *(undefined4 *)(param_2 + 0x684);
    uVar18 = *(undefined4 *)(param_2 + 0x688);
    uVar11 = *(undefined4 *)(param_2 + 0x68c);
    local_b8 = local_158;
    local_c8 = local_168;
    puStack_c0 = puStack_160;
    lVar9 = *_Dst;
    if ((!SBORROW8(0,lVar9)) && (lVar9 != 0)) {
      thunk_FUN_1801d3330(_Dst[1],lVar9,1);
    }
    _Dst[2] = local_b8;
    *_Dst = (longlong)local_c8;
    _Dst[1] = (longlong)puStack_c0;
    *(undefined4 *)(_Dst + 3) = uVar2;
    *(undefined4 *)((longlong)_Dst + 0x1c) = uVar3;
  }
  *(undefined4 *)(_Dst + 4) = uVar18;
  *(undefined4 *)((longlong)_Dst + 0x24) = uVar11;
  *(undefined2 *)(_Dst + 5) = uVar19;
  *(undefined2 *)((longlong)_Dst + 0x2a) = uVar17;
  *(undefined4 *)((longlong)_Dst + 0x2c) = uVar23;
  *(undefined4 *)(_Dst + 6) = uVar24;
  *(undefined4 *)((longlong)_Dst + 0x34) = uVar25;
  *(undefined4 *)(_Dst + 7) = uVar26;
  *(undefined4 *)((longlong)_Dst + 0x3c) = (undefined4)local_78;
  _Dst[8] = local_98;
  _Dst[9] = lStack_90;
  *(undefined1 *)(_Dst + 10) = (undefined1)local_88;
  *local_70 = 3;
  local_70[1] = _Dst;
                    /* WARNING: Read-only address (ram,0x000180207da0) is written */
                    /* WARNING: Read-only address (ram,0x000180207db0) is written */
  return local_70;
}


