/* FUN_1800d0bf0 @ 1800d0bf0 */

undefined8 * FUN_1800d0bf0(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined1 local_268 [144];
  undefined **local_1d8;
  undefined **local_1d0;
  longlong local_1c8;
  undefined **local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined **local_b8;
  undefined **ppuStack_b0;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined **local_90;
  longlong *local_88;
  undefined *local_80;
  undefined **local_78;
  longlong *local_70;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x1c);
  local_c0 = *(undefined1 *)(param_2 + 0x22);
  local_bf = *(undefined2 *)((longlong)param_2 + 0x89);
  local_100 = *(undefined8 *)(param_2 + 0x12);
  uStack_f8 = *(undefined8 *)(param_2 + 0x14);
  local_f0 = *(undefined8 *)(param_2 + 0x16);
  uStack_e8 = *(undefined8 *)(param_2 + 0x18);
  local_e0 = *(undefined8 *)(param_2 + 0x1a);
  local_d0 = *(longlong *)(param_2 + 0x1e);
  local_c8 = *(undefined8 *)(param_2 + 0x20);
  local_148 = *param_2;
  uStack_144 = param_2[1];
  uStack_140 = param_2[2];
  uStack_13c = param_2[3];
  local_138 = param_2[4];
  uStack_134 = param_2[5];
  uStack_130 = param_2[6];
  uStack_12c = param_2[7];
  local_128 = param_2[8];
  uStack_124 = param_2[9];
  uStack_120 = param_2[10];
  uStack_11c = param_2[0xb];
  local_118 = *(undefined8 *)(param_2 + 0xc);
  local_108 = 1000000000;
  local_d8 = plVar1;
  local_70 = param_3;
  if ((local_d0 != 0) && (plVar1[4] != 0)) {
    FUN_180027490();
    local_58 = (undefined **)thunk_FUN_1801d32d0(0x28,8);
    if (local_58 == (undefined **)0x0) {
      local_49 = 1;
      local_4a = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x28);
    }
    *local_58 = (undefined *)0x1;
    local_58[1] = (undefined *)0x1;
    local_58[2] = (undefined *)0x0;
    local_58[3] = (undefined *)0x8;
    local_58[4] = (undefined *)0x0;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d670(&local_d8);
    }
    local_d8 = (longlong *)local_58;
    if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
      local_1a8 = 5;
      local_1a0 = "reqwest::connect";
      local_198 = 0x10;
      local_188 = "windows_named_pipe() set, proxies are ignored";
      local_180 = 0x5b;
      local_1d8 = (undefined **)0x0;
      local_1d0 = (undefined **)0x180213fd5;
      local_1c8 = 0x10;
      local_1c0 = (undefined **)0x0;
      local_1b8 = 
      "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs"
      ;
      local_1b0 = 0x62;
      local_190 = 0x7800000001;
      local_49 = 1;
      local_4a = 1;
      FUN_1801905c0(&local_88,&local_1d8);
    }
  }
  plVar1 = local_70;
  lVar2 = local_70[2];
  if (lVar2 == 0) {
    local_110 = *(undefined8 *)(param_2 + 0xe);
    local_108 = param_2[0x10];
    memcpy(param_1,&local_148,0x90);
    if (*plVar1 != 0) {
      thunk_FUN_1801d3330(plVar1[1],*plVar1 << 4,8);
    }
  }
  else {
    memcpy(local_268,&local_148,0x90);
    memcpy(&local_1d8,&local_148,0x90);
    FUN_180027490();
    ppuVar3 = (undefined **)thunk_FUN_1801d32d0(0x90,8);
    if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    memcpy(ppuVar3,local_268,0x90);
    local_1c8 = *plVar1;
    local_1d8 = (undefined **)plVar1[1];
    ppuVar7 = local_1d8 + lVar2 * 2;
    ppuVar4 = local_1d8;
    local_60 = &PTR_LAB_180213fe8;
    local_1d0 = local_1d8;
    local_1c0 = ppuVar7;
    while( true ) {
      local_78 = ppuVar3;
      local_58 = local_60;
      if (ppuVar4 == ppuVar7) break;
      local_88 = (longlong *)*ppuVar4;
      local_80 = ppuVar4[1];
      local_1d0 = ppuVar4 + 2;
      ppuVar5 = (undefined **)
                (**(code **)(local_80 + 0x18))
                          ((longlong)local_88 +
                           (*(longlong *)(local_80 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      LOCK();
      *local_88 = *local_88 + -1;
      UNLOCK();
      if (*local_88 == 0) {
        local_4c = 1;
        local_98 = ppuVar5;
        local_90 = ppuVar3;
        FUN_18003cc40(&local_88);
      }
      ppuVar4 = ppuVar4 + 2;
      local_60 = ppuVar3;
      ppuVar3 = ppuVar5;
    }
    local_4b = 1;
    local_68 = ppuVar3;
    FUN_180093a60(&local_1d8);
    ppuVar4 = local_58;
    iStack_a0 = param_2[0x10];
    if (iStack_a0 == 1000000000) {
      local_1d0 = local_58;
      local_1d8 = ppuVar3;
      FUN_180027490();
      puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x10);
      }
      *puVar6 = ppuVar3;
      puVar6[1] = ppuVar4;
      ppuVar3 = &PTR_FUN_180214018;
    }
    else {
      local_a8 = *(undefined8 *)(param_2 + 0xe);
      ppuStack_b0 = local_58;
      local_b8 = ppuVar3;
      FUN_180027490();
      puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      puVar6[2] = local_a8;
      puVar6[3] = CONCAT44(uStack_9c,iStack_a0);
      *puVar6 = local_b8;
      puVar6[1] = ppuStack_b0;
      ppuVar3 = &PTR_FUN_180214048;
    }
    param_1[1] = puVar6;
    param_1[2] = ppuVar3;
    *param_1 = 2;
  }
  return param_1;
}


