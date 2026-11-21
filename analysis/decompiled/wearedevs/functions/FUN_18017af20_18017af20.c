/* FUN_18017af20 @ 18017af20 */

undefined8 * FUN_18017af20(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 local_478;
  undefined2 local_470;
  byte local_46e;
  undefined1 local_46d;
  longlong local_3d8;
  longlong lStack_3d0;
  longlong local_3c8;
  longlong *plStack_3c0;
  undefined4 *local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  longlong *plStack_390;
  undefined4 *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [160];
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  undefined8 local_298;
  int iStack_290;
  int iStack_28c;
  int local_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  int local_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_240;
  longlong local_238;
  int *local_230;
  longlong *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 *local_58;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((char)param_2[0x38] == '\x01') {
    if (*param_2 == 1) {
      lVar4 = *(longlong *)(param_2 + 2);
      local_46e = 0;
    }
    else {
      lVar4 = FUN_18017e260();
      local_46e = *(byte *)(param_2 + 0x38) ^ 1;
    }
    local_470 = *(undefined2 *)((longlong)param_2 + 0xe1);
    local_46d = *(undefined1 *)((longlong)param_2 + 0xe3);
    local_478 = *(undefined8 *)(param_2 + 0x18);
    FUN_1801646b0(&local_1d8,&local_478);
    uStack_210 = (longlong)uStack_1d0;
    local_218 = (longlong)local_1d8;
    if (local_1d8 == (undefined **)0x3) {
      param_1[1] = uStack_1d0;
      *param_1 = 2;
      return param_1;
    }
    memcpy(&local_398,&local_1c8,0xd0);
    local_1e8 = local_378;
    uStack_1e0 = uStack_370;
    local_1f8 = local_388;
    uStack_1f0 = uStack_380;
    local_208 = local_398;
    uStack_200 = plStack_390;
    memcpy(&local_478,local_368,0xa0);
    lVar10 = *(longlong *)(param_2 + 0x1a) + lVar4;
    local_4f = 1;
    plVar5 = (longlong *)FUN_180174880(param_2);
    LOCK();
    lVar12 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    local_228 = plVar5;
    local_220 = lVar10;
    local_58 = (undefined4 *)lVar10;
    if (*plVar5 == 0 || SCARRY8(lVar12,1) != *plVar5 < 0) {
LAB_18017b5a7:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    piVar11 = param_2 + 0x35;
    local_4b = 1;
    local_4c = 1;
    local_68 = plVar5;
    uVar2 = FUN_18016f900(piVar11);
    uVar8 = (undefined4)lVar10;
    local_4b = 1;
    local_4c = 1;
    uVar9 = uVar8;
    local_80 = FUN_18016f900(piVar11);
    local_84 = 0;
    local_3a8 = local_1e8;
    uStack_3a0 = uStack_1e0;
    local_3b8 = local_1f8;
    uStack_3b0 = uStack_1f0;
    local_3c8 = local_208;
    plStack_3c0 = uStack_200;
    local_3d8 = local_218;
    lStack_3d0 = uStack_210;
    local_7c = uVar9;
    memcpy(&local_398,&local_478,0xa0);
    plVar7 = *(longlong **)(param_2 + 0x24);
    iStack_d8 = 0;
    iStack_d4 = 0;
    iStack_d0 = 0;
    iStack_cc = 0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    iStack_e0 = 0;
    iStack_dc = 0;
    local_70 = plVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      lVar12 = *plVar7;
      *plVar7 = *plVar7 + 1;
      UNLOCK();
      if (*plVar7 == 0 || SCARRY8(lVar12,1) != *plVar7 < 0) goto LAB_18017b5a7;
      uStack_e8._0_4_ = param_2[0x24];
      uStack_e8._4_4_ = param_2[0x25];
      iStack_e0 = param_2[0x26];
      iStack_dc = param_2[0x27];
    }
    plVar7 = *(longlong **)(param_2 + 0x28);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      lVar12 = *plVar7;
      *plVar7 = *plVar7 + 1;
      UNLOCK();
      if (*plVar7 == 0 || SCARRY8(lVar12,1) != *plVar7 < 0) goto LAB_18017b5a7;
      iStack_d8 = param_2[0x28];
      iStack_d4 = param_2[0x29];
      iStack_d0 = param_2[0x2a];
      iStack_cc = param_2[0x2b];
    }
    plVar7 = *(longlong **)(param_2 + 0x2c);
    local_b8 = 0;
    iStack_b4 = 0;
    iStack_b0 = 0;
    iStack_ac = 0;
    local_c8 = 0;
    iStack_c4 = 0;
    iStack_c0 = 0;
    iStack_bc = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      lVar12 = *plVar7;
      *plVar7 = *plVar7 + 1;
      UNLOCK();
      if (*plVar7 == 0 || SCARRY8(lVar12,1) != *plVar7 < 0) goto LAB_18017b5a7;
      local_c8 = param_2[0x2c];
      iStack_c4 = param_2[0x2d];
      iStack_c0 = param_2[0x2e];
      iStack_bc = param_2[0x2f];
    }
    plVar7 = *(longlong **)(param_2 + 0x30);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      lVar12 = *plVar7;
      *plVar7 = *plVar7 + 1;
      UNLOCK();
      if (*plVar7 == 0 || SCARRY8(lVar12,1) != *plVar7 < 0) goto LAB_18017b5a7;
      local_b8 = param_2[0x30];
      iStack_b4 = param_2[0x31];
      iStack_b0 = param_2[0x32];
      iStack_ac = param_2[0x33];
    }
    local_a8 = param_2[0x34];
    local_f0 = *(undefined8 *)(param_2 + 0xe);
    local_a4 = 0;
    iStack_98 = param_2[0x39];
    local_a0 = uVar2;
    uStack_9c = uVar8;
    if (SBORROW8(0,*(longlong *)(param_2 + 8))) {
      local_60 = 0;
      lVar12 = -0x8000000000000000;
    }
    else {
      local_4e = 1;
      FUN_1801ed500(&local_1d8,param_2 + 8);
      local_60 = (longlong)uStack_1d0;
      piVar11 = local_1c8;
      lVar12 = (longlong)local_1d8;
    }
    local_1d8 = (undefined **)0x1;
    uStack_1d0 = (longlong *)0x1;
    local_1c8._0_4_ = (undefined4)local_218;
    local_1c8._4_4_ = local_218._4_4_;
    uStack_1c0._0_4_ = (undefined4)uStack_210;
    uStack_1c0._4_4_ = uStack_210._4_4_;
    local_1b8 = (undefined4)local_208;
    uStack_1b4 = (undefined2)((ulonglong)local_208 >> 0x20);
    uStack_1b2 = (undefined2)((ulonglong)local_208 >> 0x30);
    uStack_1b0 = (undefined4)uStack_200;
    uStack_1ac = uStack_200._4_4_;
    local_1a8 = (undefined4)local_1f8;
    uStack_1a4 = local_1f8._4_4_;
    uStack_1a0 = (undefined4)uStack_1f0;
    uStack_19c = uStack_1f0._4_4_;
    local_198 = (undefined4)local_1e8;
    uStack_194 = local_1e8._4_4_;
    uStack_190 = (undefined4)uStack_1e0;
    uStack_18c = uStack_1e0._4_4_;
    local_188 = 0;
    local_78 = plVar5;
    FUN_180027490();
    puVar6 = (undefined4 *)thunk_FUN_1801d32d0(0x58,8);
    local_90 = lVar12;
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x58);
    }
    *(ulonglong *)(puVar6 + 0x14) = CONCAT71(uStack_187,local_188);
    *(ulonglong *)(puVar6 + 0x10) = CONCAT44(uStack_194,local_198);
    *(ulonglong *)(puVar6 + 0x12) = CONCAT44(uStack_18c,uStack_190);
    puVar6[0xc] = local_1a8;
    puVar6[0xd] = uStack_1a4;
    puVar6[0xe] = uStack_1a0;
    puVar6[0xf] = uStack_19c;
    puVar6[8] = local_1b8;
    puVar6[9] = CONCAT22(uStack_1b2,uStack_1b4);
    puVar6[10] = uStack_1b0;
    puVar6[0xb] = uStack_1ac;
    puVar6[4] = (undefined4)local_1c8;
    puVar6[5] = local_1c8._4_4_;
    puVar6[6] = (undefined4)uStack_1c0;
    puVar6[7] = uStack_1c0._4_4_;
    *puVar6 = (undefined4)local_1d8;
    puVar6[1] = local_1d8._4_4_;
    puVar6[2] = (undefined4)uStack_1d0;
    puVar6[3] = uStack_1d0._4_4_;
    local_1d8 = (undefined **)0x1;
    uStack_1d0 = (longlong *)0x1;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b4 = 0;
    local_1c8 = puVar6;
    FUN_180027490();
    plVar7 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
    if (plVar7 == (longlong *)0x0) {
      local_58 = puVar6;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    plVar7[4] = CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
    plVar7[2] = (longlong)local_1c8;
    plVar7[3] = uStack_1c0;
    *plVar7 = (longlong)local_1d8;
    plVar7[1] = (longlong)uStack_1d0;
    memcpy(&local_1d8,&local_398,0xa0);
    local_258 = CONCAT44(uStack_9c,local_a0);
    uStack_250 = CONCAT44(uStack_94,iStack_98);
    local_268 = CONCAT44(iStack_ac,iStack_b0);
    uStack_260 = CONCAT44(local_a4,local_a8);
    local_278 = iStack_c0;
    iStack_274 = iStack_bc;
    iStack_270 = local_b8;
    iStack_26c = iStack_b4;
    local_288 = iStack_d0;
    iStack_284 = iStack_cc;
    iStack_280 = local_c8;
    iStack_27c = iStack_c4;
    local_298 = CONCAT44(iStack_dc,iStack_e0);
    iStack_290 = iStack_d8;
    iStack_28c = iStack_d4;
    local_2a8 = (undefined4)local_f0;
    uStack_2a4 = local_f0._4_4_;
    iStack_2a0 = (int)uStack_e8;
    iStack_29c = uStack_e8._4_4_;
    local_238 = local_60;
    local_4d = 0;
    local_240 = lVar12;
    local_230 = piVar11;
    FUN_180182660(&local_2c8,lVar4,plVar7,&local_1d8,plVar5,&local_84,&local_2a8,&local_240);
    local_298 = local_2b0;
    local_2a8 = local_2c0;
    uStack_2a4 = uStack_2bc;
    iStack_2a0 = uStack_2b8;
    iStack_29c = uStack_2b4;
    local_f0 = 1;
    uStack_e8 = local_2c8;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0xb8) != '\x01') {
      if (*(char *)(lVar4 + 0xb8) == '\x02') goto LAB_18017b53a;
      local_49 = 1;
      local_4a = 1;
      FUN_1801d8880(lVar4 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar4 + 0xb8) = 1;
    }
    local_49 = 1;
    local_4a = 1;
    FUN_18016c710(&local_1d8,lVar4 + 0x70,&local_f0);
    if (local_1d8 == (undefined **)0x3) {
LAB_18017b53a:
      local_1d8 = &PTR_s_The_Tokio_context_thread_local_v_180263a58;
      uStack_1d0 = (longlong *)&LAB_1800a5660;
      local_49 = 1;
      local_4a = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180263a68,&local_1d8,&PTR_s_C__Users_burne__cargo_registry_s_180263ad8);
    }
    plStack_390 = uStack_1d0;
    local_388 = local_1c8;
    local_398 = (longlong)local_1d8;
    local_1c8 = (int *)local_298;
    local_1d8 = (undefined **)CONCAT44(uStack_2a4,local_2a8);
    uStack_1d0 = (longlong *)CONCAT44(iStack_29c,iStack_2a0);
    FUN_180182440(&local_1d8);
    *param_1 = 1;
    *(undefined4 *)(param_1 + 6) = (undefined4)local_f0;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_f0._4_4_;
    *(int *)(param_1 + 7) = (int)uStack_e8;
    *(int *)((longlong)param_1 + 0x3c) = uStack_e8._4_4_;
    param_1[8] = plVar5;
    param_1[9] = local_58;
    FUN_18016ec90(&PTR_FUN_180261980,&local_398,&local_388);
    if (local_398 != 2) {
      if (local_398 == 0) {
        LOCK();
        *plStack_390 = *plStack_390 + -1;
        UNLOCK();
        if (*plStack_390 == 0) {
          local_49 = 0;
          local_4a = 0;
          FUN_1801635e0(&plStack_390);
        }
      }
      else {
        LOCK();
        *plStack_390 = *plStack_390 + -1;
        UNLOCK();
        if (*plStack_390 == 0) {
          local_49 = 0;
          local_4a = 0;
          FUN_180162f80();
        }
      }
    }
  }
  else {
    FUN_18017a830(&local_1d8,param_2,0);
    if (local_1d8 == (undefined **)0x2) {
      param_1[1] = uStack_1d0;
      uVar3 = 2;
    }
    else {
      param_1[5] = CONCAT44(uStack_1a4,local_1a8);
      param_1[3] = CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,local_1b8));
      param_1[4] = CONCAT44(uStack_1ac,uStack_1b0);
      param_1[1] = local_1c8;
      param_1[2] = uStack_1c0;
      param_1[6] = local_1d8;
      param_1[7] = uStack_1d0;
      param_1[8] = CONCAT44(uStack_19c,uStack_1a0);
      param_1[9] = CONCAT44(uStack_194,local_198);
      uVar3 = 0;
    }
    *param_1 = uVar3;
  }
  return param_1;
}


