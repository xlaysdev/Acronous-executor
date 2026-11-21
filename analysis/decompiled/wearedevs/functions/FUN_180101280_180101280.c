/* FUN_180101280 @ 180101280 */

ulonglong *
FUN_180101280(ulonglong *param_1,longlong *param_2,char param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = 0;
  uStack_90 = 0;
  if (param_3 != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  local_68 = 0;
  local_60 = (undefined4 *)&DAT_00000008;
  local_58 = 0;
  if (!SBORROW8(0,*param_6)) {
    local_88 = 0;
    FUN_180101d80(&local_b8,param_6[1],param_6[2]);
    local_80 = CONCAT44(uStack_b4,local_b8);
    unaff_R12 = CONCAT44(uStack_ac,uStack_b0);
    unaff_R13 = local_a8;
    if (local_80 != 0) {
      local_70 = local_a8;
      local_78 = unaff_R12;
      FUN_1801f8fa0(&local_68);
      *local_60 = (int)local_78;
      local_60[1] = 0x12;
      *(undefined8 *)(local_60 + 2) = local_70;
      local_58 = 1;
      local_c4 = 1;
      unaff_R13 = local_70;
      local_c0 = local_60;
      goto LAB_18010136f;
    }
  }
  local_c4 = 0;
  local_78 = unaff_R12;
  local_c0 = (undefined4 *)&DAT_00000008;
  local_80 = 0;
LAB_18010136f:
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0x100000000;
  local_e0 = &local_d8;
  local_4c = 0;
  lVar1 = *param_2;
  local_b8 = *(undefined4 *)(lVar1 + 0x10);
  uStack_b4 = *(undefined4 *)(lVar1 + 0x14);
  uStack_b0 = *(undefined4 *)(lVar1 + 0x18);
  uStack_ac = *(undefined4 *)(lVar1 + 0x1c);
  uVar2 = InitializeSecurityContextW
                    (&local_b8,0,param_4,0x9819c,0,0,&local_c8,0,&local_98,&local_e8,&local_4c,0);
  if (uVar2 == 0x90312) {
    *(undefined4 *)(param_1 + 3) = (undefined4)local_d8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_d0._4_4_;
    param_1[1] = uStack_90;
    *param_1 = local_98;
    param_1[2] = 1;
  }
  else {
    *param_1 = (ulonglong)uVar2 << 0x20 | 2;
    param_1[2] = 2;
  }
  if (local_80 != 0) {
    thunk_FUN_1801d3330(unaff_R13,local_78,local_80);
  }
  if (local_68 != 0) {
    thunk_FUN_1801d3330(local_60,local_68 << 4,8);
  }
  return param_1;
}


