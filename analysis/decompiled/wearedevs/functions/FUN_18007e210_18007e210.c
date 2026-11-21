/* FUN_18007e210 @ 18007e210 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_18007e210(undefined4 *param_1,longlong ******param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  char local_4c8;
  undefined7 uStack_4c7;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  longlong *******local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong *local_88;
  longlong ******local_80;
  longlong *******local_78;
  undefined1 *puStack_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_88 = param_3;
  FUN_180027490();
  uStack_98 = (undefined4 *)thunk_FUN_1801d32d0(6);
  local_80 = param_2;
  if (uStack_98 == (undefined4 *)0x0) {
    local_33 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,6);
  }
  local_a0 = 6;
  *(undefined2 *)(uStack_98 + 1) = 0x2063;
  *uStack_98 = 0x69736142;
  local_90 = 6;
  local_c6 = 0;
  local_c8 = 0;
  memset(&local_4e8,0,0x400);
  local_d0 = &DAT_18020d00c;
  local_e8 = &local_a0;
  local_c5 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  puStack_70 = &LAB_180027ca0;
  local_34 = 1;
  local_78 = (longlong *******)param_2;
  lVar1 = FUN_1800ae940(&local_4e8,&DAT_18020d14f,&local_78);
  if (((uint)lVar1 & 3) == 1) {
    local_50 = lVar1 + -1;
    local_48 = *(undefined8 *)(lVar1 + -1);
    local_40 = *(undefined8 **)(lVar1 + 7);
    if ((code *)*local_40 != (code *)0x0) {
      (*(code *)*local_40)(local_48);
    }
    if (local_40[1] != 0) {
      thunk_FUN_1801d3330(local_48,local_40[1],local_40[2]);
    }
    thunk_FUN_1801d3330(local_50,0x18,8);
  }
  bVar2 = SBORROW8(0,*local_88);
  if (!bVar2) {
    local_68 = local_88[2];
    local_78 = (longlong *******)*local_88;
    puStack_70 = (undefined1 *)local_88[1];
    local_b8 = &LAB_180027ca0;
    local_c0 = (longlong *******)&local_78;
    lVar1 = FUN_1800ae940(&local_4e8,&DAT_18020cfd3,&local_c0);
    if (((uint)lVar1 & 3) == 1) {
      local_50 = lVar1 + -1;
      local_48 = *(undefined8 *)(lVar1 + -1);
      local_40 = *(undefined8 **)(lVar1 + 7);
      if ((code *)*local_40 != (code *)0x0) {
        (*(code *)*local_40)(local_48);
      }
      if (local_40[1] != 0) {
        thunk_FUN_1801d3330(local_48,local_40[1],local_40[2]);
      }
      thunk_FUN_1801d3330(local_50,0x18,8);
    }
    if (local_78 != (longlong *******)0x0) {
      thunk_FUN_1801d3330(puStack_70,local_78,1);
    }
  }
  local_32 = 1;
  local_31 = bVar2;
  FUN_1800b8b00(&local_4e8);
  local_4d8 = local_90;
  local_4e8 = (undefined4)local_a0;
  uStack_4e4 = local_a0._4_4_;
  uStack_4e0 = (undefined4)uStack_98;
  uStack_4dc = uStack_98._4_4_;
  local_32 = 0;
  local_31 = bVar2;
  FUN_1801b3d40(&local_c0,&local_4e8);
  if (local_c0 == (longlong *******)0x0) {
    local_32 = 0;
    local_31 = bVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180215a98);
  }
  local_78 = local_c0;
  puStack_70 = local_b8;
  local_60 = local_a8;
  local_32 = 0;
  local_31 = bVar2;
  FUN_1801b18c0(&local_4e8,&local_78);
  if (local_4c8 == '\x02') {
    local_32 = 0;
    local_31 = bVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("base64 is always valid HeaderValue",0x22,&local_78,&DAT_18020ce18,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020d1d8);
  }
  *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_4c7,local_4c8);
  param_1[4] = (undefined4)local_4d8;
  param_1[5] = local_4d8._4_4_;
  param_1[6] = uStack_4d0;
  param_1[7] = uStack_4cc;
  *param_1 = local_4e8;
  param_1[1] = uStack_4e4;
  param_1[2] = uStack_4e0;
  param_1[3] = uStack_4dc;
  *(undefined1 *)(param_1 + 8) = 1;
  if (*local_80 != (longlong *****)0x0) {
    thunk_FUN_1801d3330(local_80[1],*local_80,1);
  }
  return param_1;
}


