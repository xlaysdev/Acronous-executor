/* FUN_18002c0f0 @ 18002c0f0 */

void FUN_18002c0f0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *local_a0;
  undefined **local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801d31c0(&local_88);
  if (SBORROW8(0,local_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_src_wrdapi_rs_180205c18);
  }
  local_30 = (undefined8 *)local_88;
  local_38 = local_80;
  FUN_1801de240(&local_88,local_80,local_78,&DAT_180205c08,0x10);
  if (local_30 != (undefined8 *)0x0) {
    thunk_FUN_1801d3330(local_38,local_30,1);
  }
  local_38 = local_88;
  local_30 = (undefined8 *)local_80;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  local_90 = 0x60000020;
  local_a0 = &local_68;
  local_98 = &PTR_LAB_180205d38;
  cVar1 = FUN_1801cbd60(param_1,&local_a0);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("a Display implementation returned an error unexpectedly",0x37,&local_39,
                  &DAT_180205e28,&PTR_s_C__Users_burne__rustup_toolchain_180205e10);
  }
  local_48 = local_68;
  local_50 = local_60;
  lVar2 = FUN_1801d5430(local_30,local_78,local_60,local_58);
  if (local_48 != 0) {
    thunk_FUN_1801d3330(local_50,local_48,1);
  }
  if (local_38 != 0) {
    thunk_FUN_1801d3330(local_30,local_38,1);
  }
  local_30 = (undefined8 *)lVar2;
  if (lVar2 != 0) {
    FUN_1801d72f0(&DAT_180205c30,0x2f);
  }
  if (((uint)local_30 & 3) == 1) {
    local_48 = (longlong)local_30 + -1;
    local_38 = *(undefined8 *)((longlong)local_30 + -1);
    local_30 = *(undefined8 **)((longlong)local_30 + 7);
    if ((code *)*local_30 != (code *)0x0) {
      (*(code *)*local_30)(local_38);
    }
    if (local_30[1] != 0) {
      thunk_FUN_1801d3330(local_38,local_30[1],local_30[2]);
    }
    thunk_FUN_1801d3330(local_48,0x18,8);
  }
  return;
}


