/* FUN_1801098f0 @ 1801098f0 */

uint * FUN_1801098f0(uint *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  short local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  short local_2a;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180027490();
  local_68 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (local_68 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *local_68 = 1;
  local_68[1] = 1;
  *(undefined1 *)(local_68 + 2) = 0;
  uStack_60 = 1;
  local_78 = 0;
  FUN_18016e550(&local_58,param_2);
  FUN_18016ded0(&local_f8,param_2);
  uStack_b0 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_f8;
  uVar1 = local_98;
  uStack_90 = uStack_f0;
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  local_b8 = (short)local_58;
  uVar2 = local_58 & 0xffff;
  local_98._0_2_ = (short)local_f8;
  local_2a = (short)local_98;
  local_98 = uVar1;
  if ((short)local_98 == 2 || local_b8 == 2) {
    *(undefined8 **)(param_1 + 4) = local_68;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
    *param_1 = (uint)local_78;
    param_1[1] = local_78._4_4_;
    param_1[2] = uStack_70;
    param_1[3] = uStack_6c;
  }
  else {
    local_d8 = local_f8;
    uStack_d0 = uStack_f0;
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
    uStack_40 = CONCAT22(uStack_5e,uStack_60);
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_3c = uStack_5c;
    local_58 = (uint)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    FUN_18010cf50(param_1,&local_58,&local_f8);
  }
  FUN_180109ba0(uVar2,uStack_b0);
  FUN_180109ba0(local_2a,uStack_90);
  return param_1;
}


