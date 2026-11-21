/* FUN_18002bc40 @ 18002bc40 */

undefined4 * FUN_18002bc40(undefined4 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  char local_120 [32];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1801d31c0(&local_78);
  if (SBORROW8(0,local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_src_wrdapi_rs_180205bf0);
  }
  local_40 = local_78;
  local_48 = local_70;
  FUN_1801de240(&local_e0,local_70,uStack_68,&DAT_180205c08,0x10);
  if (local_40 != 0) {
    thunk_FUN_1801d3330(local_48,local_40,1);
  }
  FUN_1801d50e0(&local_78,local_d8,local_d0);
  if (SBORROW8(0,local_78)) {
    local_50 = 1;
    local_58 = 0;
    FUN_18002d000(0x8000000000000000,local_70);
    uVar1 = 0;
    lVar2 = 1;
    lVar3 = 0;
  }
  else {
    uVar1 = uStack_68;
    lVar2 = local_70;
    lVar3 = local_78;
  }
  uStack_68 = 0;
  local_78 = lVar2;
  local_70 = uVar1;
  local_58 = lVar3;
  local_50 = lVar2;
  FUN_1800373e0(&local_100,&local_78);
  if ((char)local_100 == '\x06') {
    local_90 = 0;
    local_80 = 0;
    FUN_180027490();
    local_a0 = (undefined8 *)thunk_FUN_1801d32d0(8,1);
    local_48 = lVar3;
    local_40 = lVar2;
    if (local_a0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,8);
    }
    *local_a0 = 0x73676e6974746573;
    local_a8 = 8;
    local_98 = 8;
    local_c0 = 0;
    local_b0 = 0;
    FUN_180027490();
    local_130 = (undefined8 *)thunk_FUN_1801d32d0(0xb,1);
    if (local_130 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,0xb);
    }
    *local_130 = 0x6e4f737961776c61;
    *(undefined4 *)((longlong)local_130 + 7) = 0x706f546e;
    local_138 = 0xb;
    local_128 = 0xb;
    local_78 = CONCAT62(local_78._2_6_,1);
    FUN_180030320(local_120,&local_c0,&local_138,&local_78);
    if (local_120[0] != '\x06') {
      FUN_18000b2a0(local_120);
    }
    local_70 = local_c0;
    uStack_68 = CONCAT44(uStack_b4,uStack_b8);
    local_60 = local_b0;
    local_78 = CONCAT71(local_78._1_7_,5);
    local_31 = 0;
    FUN_180030320(local_120,&local_90,&local_a8,&local_78);
    if (local_120[0] != '\x06') {
      FUN_18000b2a0(local_120);
    }
    lVar2 = local_40;
    lVar3 = local_48;
    *(undefined8 *)(param_1 + 6) = local_80;
    param_1[2] = (undefined4)local_90;
    param_1[3] = local_90._4_4_;
    param_1[4] = uStack_88;
    param_1[5] = uStack_84;
    *(undefined1 *)param_1 = 5;
    local_50 = local_40;
    local_58 = local_48;
    FUN_18002caf0(&local_100);
  }
  else {
    *(undefined8 *)(param_1 + 4) = local_f0;
    *(undefined8 *)(param_1 + 6) = uStack_e8;
    *param_1 = local_100;
    param_1[1] = uStack_fc;
    param_1[2] = uStack_f8;
    param_1[3] = uStack_f4;
  }
  if (lVar3 != 0) {
    thunk_FUN_1801d3330(lVar2,lVar3,1);
  }
  if (local_e0 != 0) {
    thunk_FUN_1801d3330(local_d8,local_e0,1);
  }
  return param_1;
}


