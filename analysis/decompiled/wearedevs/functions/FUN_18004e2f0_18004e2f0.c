/* FUN_18004e2f0 @ 18004e2f0 */

ulonglong * FUN_18004e2f0(ulonglong *param_1,ulonglong *param_2,char ***param_3)

{
  ulonglong uVar1;
  int iVar2;
  void *_Src;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  void *_Dst;
  char **ppcVar8;
  ulonglong uVar9;
  ulonglong unaff_R12;
  ulonglong uVar10;
  ulonglong unaff_R13;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  longlong local_3f0 [17];
  undefined8 local_368;
  undefined1 *puStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218 [2];
  char ****local_208;
  undefined1 *puStack_200;
  char ****local_1f8;
  undefined1 *puStack_1f0;
  ulonglong local_1e8;
  char ****ppppcStack_1e0;
  undefined1 *local_1d8;
  ulonglong uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char ****local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  ulonglong local_190;
  longlong local_188;
  char **local_180;
  char ****local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_128;
  char ***local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  char ****local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  char ****local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  void *local_68;
  undefined1 *local_60;
  char ****local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar14 = 2;
  if (SBORROW8(0,param_2[0x11])) {
    if (*(char *)param_3 != '\0') {
      unaff_R13 = param_2[0x15];
      unaff_R12 = param_2[0x16];
      ppcVar8 = param_3[4];
      local_118 = param_3;
      if ((ppcVar8 != (char **)0x0) && (lVar7 = FUN_1801ac970(param_3[3]), lVar7 != 0)) {
        local_188 = lVar7;
        local_180 = ppcVar8;
        FUN_1801ac510(&local_f0,param_3);
        local_190 = (ulonglong)(local_f0 != (char ****)0x0);
        local_198 = (undefined *)0x1;
        if (local_f0 != (char ****)0x0) {
          local_198 = &DAT_180208930;
        }
        FUN_1801ac510(&local_1c8,param_3);
        if (CONCAT44(uStack_1c4,local_1c8) == 0) {
          local_88 = (char ****)0x0;
          puStack_80 = (undefined1 *)0x1;
          local_78 = 0;
        }
        else {
          local_218[0] = local_1b8;
          local_228 = local_1c8;
          uStack_224 = uStack_1c4;
          uStack_220 = uStack_1c0;
          uStack_21c = uStack_1bc;
          local_178 = (char ****)0x0;
          puStack_170 = (undefined1 *)0x1;
          local_168 = 0;
          local_e0 = (longlong *)0x60000020;
          local_f0 = (char ****)&local_178;
          puStack_e8 = &DAT_180208168;
          cVar6 = FUN_1801ee5a0(local_218,&local_f0);
          if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("a Display implementation returned an error unexpectedlyC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\string.rs"
                          ,0x37,&local_88,&DAT_180208290,&DAT_180208240);
          }
          local_88 = local_178;
          puStack_80 = puStack_170;
          local_78 = local_168;
        }
        local_f0 = &local_118;
        puStack_e8 = (undefined8 *)&LAB_1800419b0;
        local_e0 = &local_188;
        uStack_d8 = &LAB_1800a5660;
        local_d0 = &local_198;
        uStack_c8 = &LAB_1800a5660;
        local_c0 = (char ****)&local_88;
        uStack_b8 = &LAB_180027ca0;
        FUN_1801ec780(&local_1b0,&DAT_180208898,&local_f0);
        if (local_88 != (char ****)0x0) {
          thunk_FUN_1801d3330(puStack_80,local_88,1);
        }
        local_58 = local_1b0;
        local_d0 = (undefined **)0x0;
        local_f0 = (char ****)0x0;
        local_e0 = (longlong *)0x0;
        local_60 = local_1a8;
        FUN_180190620(&local_368,&local_f0,local_1a8,local_1a0);
        if (SBORROW8(0,(longlong)local_368)) {
          local_f0 = (char ****)CONCAT71(local_f0._1_7_,puStack_360._0_1_);
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("should be valid Url",0x13,&local_f0,&DAT_1802082f0,
                        &PTR_s_C__Users_burne__cargo_registry_s_180208918);
        }
        local_128 = local_318;
        local_148 = local_338;
        uStack_144 = uStack_334;
        uStack_140 = uStack_330;
        uStack_13c = uStack_32c;
        local_158 = local_348;
        uStack_154 = uStack_344;
        uStack_150 = uStack_340;
        uStack_14c = uStack_33c;
        uStack_160 = uStack_350;
        uStack_15c = uStack_34c;
        local_178 = local_368;
        puStack_170 = puStack_360;
        if (local_58 != (char ****)0x0) {
          thunk_FUN_1801d3330(local_60,local_58,1);
        }
        (**(code **)(unaff_R12 + 0x28))
                  (&local_f0,
                   (*(longlong *)(unaff_R12 + 0x10) - 1U & 0xfffffffffffffff0) + unaff_R13 + 0x10,
                   &local_178);
        if (local_f0 == (char ****)0x8000000000000001) {
LAB_18004e908:
          local_3f0[0] = -0x7ffffffffffffffe;
        }
        else {
          local_368 = local_f0;
          puStack_360 = (undefined1 *)puStack_e8;
          local_318 = local_a0;
          local_328 = (undefined4)local_b0;
          uStack_324 = local_b0._4_4_;
          uStack_320 = (undefined4)uStack_a8;
          uStack_31c = uStack_a8._4_4_;
          local_338 = (undefined4)local_c0;
          uStack_334 = local_c0._4_4_;
          uStack_330 = (undefined4)uStack_b8;
          uStack_32c = uStack_b8._4_4_;
          local_348 = (undefined4)local_d0;
          uStack_344 = local_d0._4_4_;
          uStack_340 = (undefined4)uStack_c8;
          uStack_33c = uStack_c8._4_4_;
          local_358 = (undefined4)local_e0;
          uStack_354 = local_e0._4_4_;
          uStack_350 = (undefined4)uStack_d8;
          uStack_34c = uStack_d8._4_4_;
          if (SBORROW8(0,(longlong)local_f0)) {
            FUN_180042770(&puStack_360);
            goto LAB_18004e908;
          }
          uStack_c8 = (undefined1 *)0x0;
          local_c0 = (char ****)0x0;
          local_b0 = 0;
          uStack_a8 = 0;
          uStack_d8 = (undefined1 *)0x0;
          local_d0 = (undefined **)0x1;
          uStack_b8 = (undefined1 *)0x1;
          local_a0 = 1;
          local_98 = 0;
          local_90 = 0;
          FUN_180107160(&local_368,&local_f0);
          FUN_180107ec0(local_3f0,&local_368,param_3);
          FUN_1800439a0(&local_368);
        }
        if (local_178 != (char ****)0x0) {
          thunk_FUN_1801d3330(puStack_170,local_178,1);
        }
        goto LAB_18004e491;
      }
    }
    local_3f0[0] = -0x7ffffffffffffffe;
  }
  else {
    FUN_180107ec0(local_3f0,param_2 + 0x11);
  }
LAB_18004e491:
  if (local_3f0[0] == -0x7ffffffffffffffe) {
    *param_1 = 4;
    return param_1;
  }
  if ((char)param_2[0x10] == '\x02') {
    iVar2 = (int)*param_2;
    uVar12 = 2;
    uVar9 = unaff_R12;
    uVar10 = unaff_R13;
    uVar1 = local_108;
    uVar3 = local_100;
    puVar4 = local_f8;
    uVar5 = local_49;
  }
  else {
    (**(code **)param_2[0xc])(&local_368,param_2 + 0xf,param_2[0xd],param_2[0xe]);
    iVar2 = (int)*param_2;
    uVar12 = (char)param_2[0x10];
    local_58 = local_368;
    local_60 = puStack_360;
    uVar9 = CONCAT44(uStack_354,local_358);
    uVar10 = CONCAT44(uStack_34c,uStack_350);
    uVar1 = local_108;
    uVar3 = local_100;
    puVar4 = local_f8;
    uVar5 = local_49;
  }
  local_100 = uVar10;
  local_108 = uVar9;
  local_49 = uVar12;
  if (iVar2 == 3) {
    uVar9 = 3;
    uVar10 = local_108;
    uVar11 = local_100;
    uVar12 = local_49;
    local_108 = uVar1;
    local_100 = uVar3;
    local_f8 = puVar4;
    local_49 = uVar5;
  }
  else {
    local_f8 = (ulonglong *)param_2[10];
    uVar1 = (longlong)local_f8 * 4;
    if (0x7ffffffffffffffe < uVar1 || (ulonglong)local_f8 >> 0x3e != 0) {
      uVar13 = 0;
      local_f8 = puVar4;
LAB_18004e541:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar13,uVar1);
    }
    uVar14 = (undefined2)param_2[0xb];
    _Src = (void *)param_2[9];
    if (uVar1 == 0) {
      _Dst = (void *)0x2;
    }
    else {
      uVar3 = (ulonglong)local_68 >> 0x10;
      local_68 = (void *)CONCAT62((int6)uVar3,uVar14);
      FUN_180027490();
      uVar13 = 2;
      _Dst = (void *)thunk_FUN_1801d32d0(uVar1,2);
      if (_Dst == (void *)0x0) goto LAB_18004e541;
      uVar14 = local_68._0_2_;
    }
    local_110 = uVar1;
    local_68 = _Dst;
    memcpy(_Dst,_Src,uVar1);
    FUN_18009cd60(&local_f0,param_2 + 3);
    FUN_18009c810(&local_368,param_2 + 6);
    uVar9 = *param_2;
    if (1 < uVar9) {
      local_178 = (char ****)param_2[1];
      puStack_170 = (undefined1 *)param_2[2];
    }
    local_1e8 = (ulonglong)local_e0;
    local_1f8 = local_f0;
    puStack_1f0 = (undefined1 *)puStack_e8;
    ppppcStack_1e0 = local_368;
    local_1d8 = puStack_360;
    uStack_1d0 = CONCAT44(uStack_354,local_358);
    local_208 = local_178;
    puStack_200 = puStack_170;
    param_2 = local_f8;
    uVar10 = local_108;
    uVar11 = local_100;
    uVar12 = local_49;
  }
  memcpy((void *)((longlong)&local_368 + 7),local_3f0,0x88);
  *param_1 = uVar9;
  param_1[1] = (ulonglong)local_208;
  param_1[2] = (ulonglong)puStack_200;
  param_1[3] = (ulonglong)local_1f8;
  param_1[4] = (ulonglong)puStack_1f0;
  param_1[5] = local_1e8;
  param_1[6] = (ulonglong)ppppcStack_1e0;
  param_1[7] = (ulonglong)local_1d8;
  param_1[8] = uStack_1d0;
  param_1[9] = (ulonglong)local_68;
  param_1[10] = (ulonglong)param_2;
  *(undefined2 *)(param_1 + 0xb) = uVar14;
  param_1[0xc] = (ulonglong)local_58;
  param_1[0xd] = (ulonglong)local_60;
  param_1[0xe] = uVar10;
  param_1[0xf] = uVar11;
  *(undefined1 *)(param_1 + 0x10) = uVar12;
  memcpy((void *)((longlong)param_1 + 0x81),&local_368,0x8f);
  return param_1;
}


