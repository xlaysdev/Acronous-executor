/* FUN_18009d050 @ 18009d050 */

ulonglong * FUN_18009d050(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined1 local_647 [7];
  undefined1 local_640 [232];
  char local_558 [8];
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_431;
  undefined8 local_429;
  undefined8 uStack_421;
  undefined8 local_419;
  undefined8 uStack_411;
  undefined8 local_409;
  undefined8 uStack_401;
  undefined8 local_3f9;
  undefined8 uStack_3f1;
  undefined8 uStack_3e1;
  undefined8 local_3d9;
  undefined8 uStack_3d1;
  undefined8 local_3c9;
  undefined8 uStack_3c1;
  undefined8 local_3b9;
  ulonglong local_3a8;
  ulonglong local_3a0;
  ulonglong local_398;
  ulonglong uStack_390;
  ulonglong local_388;
  ulonglong uStack_380;
  undefined1 local_378;
  undefined1 local_377;
  undefined4 local_376;
  undefined2 local_372;
  byte local_370;
  undefined8 local_36f;
  undefined8 uStack_367;
  undefined8 local_35f;
  undefined8 uStack_357;
  undefined8 local_34f;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  ulonglong uStack_338;
  char local_330;
  undefined8 local_32f;
  undefined8 uStack_327;
  undefined8 local_31f;
  undefined8 uStack_317;
  undefined8 local_30f;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0 [144];
  byte local_220 [8];
  ulonglong *local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  undefined1 local_180;
  undefined1 local_17f;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined7 uStack_150;
  undefined1 local_149;
  undefined7 uStack_148;
  ulonglong uStack_141;
  ulonglong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined1 local_118;
  ulonglong local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  undefined1 local_c9;
  undefined7 uStack_c8;
  ulonglong uStack_c1;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined2 local_6c;
  ulonglong *local_68;
  ulonglong *local_60;
  undefined4 local_54;
  undefined2 local_50;
  char local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar10 = (int)*param_2;
  if (*param_2 < 6) {
    if (iVar10 == 5) {
      uVar13 = param_2[0xf];
      *(undefined1 *)(param_2 + 0xf) = 3;
      if ((char)uVar13 != '\x03') {
        uVar2 = param_2[0xe];
        param_1[0xc] = param_2[0xd];
        param_1[0xd] = uVar2;
        uVar2 = param_2[0xc];
        param_1[10] = param_2[0xb];
        param_1[0xb] = uVar2;
        uVar2 = param_2[10];
        param_1[8] = param_2[9];
        param_1[9] = uVar2;
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar5 = param_2[4];
        uVar6 = param_2[5];
        uVar7 = param_2[6];
        uVar8 = param_2[8];
        param_1[6] = param_2[7];
        param_1[7] = uVar8;
        param_1[4] = uVar6;
        param_1[5] = uVar7;
        param_1[2] = uVar4;
        param_1[3] = uVar5;
        *param_1 = uVar2;
        param_1[1] = uVar3;
        uVar1 = *(undefined4 *)((longlong)param_2 + 0x7c);
        *(undefined4 *)((longlong)param_1 + 0x71) = *(undefined4 *)((longlong)param_2 + 0x79);
        *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
        *(char *)(param_1 + 0xe) = (char)uVar13;
        return param_1;
      }
LAB_18009d697:
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("Ready polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\ready.rs"
                    ,0x1d,&DAT_18020f948);
    }
    puVar12 = param_2;
LAB_18009d663:
    FUN_1800dec40(param_1,puVar12,param_3);
    return param_1;
  }
  local_68 = param_2;
  if (iVar10 == 6) {
    local_3a8 = param_2[1];
    *param_2 = 8;
    if (local_3a8 < 2) {
      memcpy(&local_3a0,param_2 + 2,0x228);
      FUN_180070d90(local_558,&local_188,local_220,local_180);
      if (local_558[0] == '\x03') {
        FUN_180098d50(&local_3a8);
        uVar13 = 5;
        local_330 = '\x02';
        local_80 = 0;
        local_49 = 2;
        local_78 = 0;
      }
      else {
        local_3b9 = local_528;
        local_3c9 = local_538;
        uStack_3c1 = uStack_530;
        local_3d9 = local_548;
        uStack_3d1 = uStack_540;
        uStack_3e1 = uStack_550;
        memcpy(local_558,local_2b0,0x90);
        uVar13 = local_3a8;
        local_4c8 = local_1f0;
        uStack_4c0 = uStack_1e8;
        local_4b8 = local_1e0;
        uStack_4b0 = uStack_1d8;
        local_4a8 = local_1d0;
        uStack_4a0 = uStack_1c8;
        local_498 = local_1c0;
        uStack_490 = uStack_1b8;
        local_488 = local_1b0;
        uStack_480 = uStack_1a8;
        local_478 = local_1a0;
        local_4a = local_17f;
        local_88 = local_188;
        local_78 = local_3a0;
        local_138 = local_398;
        uStack_130 = uStack_390;
        local_128 = local_388;
        uStack_120 = uStack_380;
        local_118 = local_378;
        local_49 = local_377;
        local_70 = local_376;
        local_6c = local_372;
        local_80 = (ulonglong)local_370;
        local_178 = local_36f;
        uStack_170 = uStack_367;
        local_168 = local_35f;
        uStack_160 = uStack_357;
        uStack_158 = local_34f;
        uStack_150 = uStack_347;
        local_149 = uStack_340;
        uStack_148 = uStack_33f;
        uStack_141 = uStack_338;
        local_468 = local_32f;
        uStack_460 = uStack_327;
        local_458 = local_31f;
        uStack_450 = uStack_317;
        local_448 = local_30f;
        uStack_431 = uStack_2f8;
        local_108 = local_198;
        uStack_100 = uStack_190;
        local_3f9 = local_2c0;
        uStack_3f1 = uStack_2b8;
        local_409 = local_2d0;
        uStack_401 = uStack_2c8;
        local_419 = local_2e0;
        uStack_411 = uStack_2d8;
        local_429 = local_2f0;
        uStack_421 = uStack_2e8;
        memcpy(local_640,local_558,0xe8);
        if (1 < local_220[0]) {
          local_60 = local_218;
          (**(code **)(*local_218 + 0x20))(local_218[3],local_218[1],local_218[2]);
          thunk_FUN_1801d3330(local_60,0x20,8);
        }
        (**(code **)(local_210 + 0x20))(local_1f8,local_208,local_200);
      }
      local_98 = local_118;
      local_a8 = local_128;
      uStack_a0 = uStack_120;
      local_b8 = local_138;
      uStack_b0 = uStack_130;
      local_50 = local_6c;
      local_54 = local_70;
      uStack_c8 = uStack_148;
      uStack_c1 = uStack_141;
      uStack_d8 = uStack_158;
      uStack_d0 = uStack_150;
      local_c9 = local_149;
      local_e8 = local_168;
      uStack_e0 = uStack_160;
      local_f8 = local_178;
      uStack_f0 = uStack_170;
      local_90 = uVar13;
      local_60 = param_2 + 2;
      local_4b = local_330;
      memcpy(local_558,local_647,0xef);
      lVar11 = 1;
      if (5 < *param_2) {
        lVar11 = *param_2 - 6;
      }
      if (lVar11 == 1) {
        FUN_180097a00(param_2);
      }
      else if (lVar11 == 0) {
        FUN_180098d50(param_2 + 1);
      }
      cVar9 = local_4b;
      puVar12 = local_68;
      uVar13 = local_90;
      *local_68 = local_90;
      local_68[1] = local_78;
      *(undefined1 *)(local_60 + 4) = local_98;
      local_60[2] = local_a8;
      local_60[3] = uStack_a0;
      *local_60 = local_b8;
      local_60[1] = uStack_b0;
      *(undefined1 *)((longlong)local_68 + 0x31) = local_49;
      *(undefined4 *)((longlong)local_68 + 0x32) = local_54;
      *(undefined2 *)((longlong)local_68 + 0x36) = local_50;
      *(char *)(local_68 + 7) = (char)local_80;
      *(undefined8 *)((longlong)local_68 + 0x39) = local_f8;
      *(undefined8 *)((longlong)local_68 + 0x41) = uStack_f0;
      *(undefined8 *)((longlong)local_68 + 0x49) = local_e8;
      *(undefined8 *)((longlong)local_68 + 0x51) = uStack_e0;
      *(undefined8 *)((longlong)local_68 + 0x59) = uStack_d8;
      *(ulonglong *)((longlong)local_68 + 0x61) = CONCAT17(local_c9,uStack_d0);
      local_68[0xd] = CONCAT71(uStack_c8,local_c9);
      local_68[0xe] = uStack_c1;
      *(char *)(local_68 + 0xf) = local_4b;
      memcpy((void *)((longlong)local_68 + 0x79),&local_468,0xb7);
      puVar12[0x26] = local_108;
      puVar12[0x27] = uStack_100;
      puVar12[0x28] = local_88;
      *(undefined1 *)(puVar12 + 0x29) = local_4a;
      memcpy((void *)((longlong)puVar12 + 0x149),local_558,0xef);
      if (5 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                      ,0x28,&PTR_s_C__Users_burne__cargo_registry_s_18020f9d0);
      }
      if (uVar13 == 5) {
        *(undefined1 *)(puVar12 + 0xf) = 3;
        if (cVar9 != '\x03') {
          uVar13 = param_2[0xe];
          param_1[0xc] = param_2[0xd];
          param_1[0xd] = uVar13;
          uVar13 = param_2[0xc];
          param_1[10] = param_2[0xb];
          param_1[0xb] = uVar13;
          uVar13 = param_2[10];
          param_1[8] = param_2[9];
          param_1[9] = uVar13;
          uVar13 = param_2[1];
          uVar2 = param_2[2];
          uVar3 = param_2[3];
          uVar4 = param_2[4];
          uVar5 = param_2[5];
          uVar6 = param_2[6];
          uVar7 = param_2[8];
          param_1[6] = param_2[7];
          param_1[7] = uVar7;
          param_1[4] = uVar5;
          param_1[5] = uVar6;
          param_1[2] = uVar3;
          param_1[3] = uVar4;
          *param_1 = uVar13;
          param_1[1] = uVar2;
          uVar1 = (undefined4)local_468;
          *(undefined4 *)((longlong)param_1 + 0x71) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x74) = local_468._3_4_;
          *(char *)(param_1 + 0xe) = cVar9;
          return param_1;
        }
        goto LAB_18009d697;
      }
      goto LAB_18009d663;
    }
  }
  else {
    if (iVar10 == 7) {
      FUN_180097a00(param_2);
    }
    *local_68 = 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0("internal error: entered unreachable code: lazy state wrong",0x75,
                &PTR_s_C__Users_burne__cargo_registry_s_18020fa28);
}


