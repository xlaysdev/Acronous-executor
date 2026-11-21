/* FUN_1801b8c90 @ 1801b8c90 */

longlong *
FUN_1801b8c90(longlong *param_1,ulonglong param_2,char param_3,ulonglong param_4,ulonglong param_5,
             longlong param_6,ulonglong param_7,undefined8 param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong *local_a0;
  ulonglong *local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_d8 = param_5;
  uVar2 = param_2 >> 1;
  local_70 = param_2;
  if (uVar2 < param_5) {
LAB_1801b8ce0:
    local_d0 = (ulonglong *)0x0;
    local_c8 = (ulonglong *)0x8;
    local_c0 = (ulonglong *)0x0;
    local_b8 = param_8;
    FUN_1801b5010(&local_110,&local_d0,param_6,param_6 + param_7 * 8);
    FUN_1801b49a0(param_1,&local_110);
  }
  else {
    if (param_3 == '\0') {
      if (param_4 == 0) goto LAB_1801b8ce0;
      local_e0 = param_4 >> 1;
    }
    else {
      uVar1 = FUN_1801c1690();
      local_e0 = param_4 >> 1;
      if (param_4 >> 1 <= uVar1) {
        local_e0 = uVar1;
      }
    }
    local_78 = uVar2;
    if (param_7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("mid > len",0x13,&PTR_s_C__Users_burne__cargo_registry_s_1802868b8);
    }
    local_b0 = param_7 - uVar2;
    local_b8 = param_6 + uVar2 * 8;
    local_d0 = &local_70;
    local_c8 = &local_78;
    local_c0 = &local_e0;
    local_a8 = param_8;
    local_90 = param_6;
    local_80 = param_8;
    local_a0 = local_c8;
    local_98 = local_c0;
    local_88 = uVar2;
    FUN_1801b9990(&local_110,&local_d0);
    if (local_108 == 0) {
      local_58 = (undefined4)local_f8;
      uStack_54 = (undefined4)((ulonglong)local_f8 >> 0x20);
      uStack_50 = (undefined4)lStack_f0;
      uStack_4c = (undefined4)((ulonglong)lStack_f0 >> 0x20);
      *(undefined4 *)param_1 = local_58;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_54;
      *(undefined4 *)(param_1 + 1) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
      param_1[2] = local_e8;
      local_68 = local_100;
      while (local_110 != 0) {
        local_60 = *(longlong *)(local_110 + 0x18);
        if (local_60 != 0) {
          *(undefined8 *)(local_60 + 0x20) = 0;
        }
        FUN_1801b8990();
        local_68 = local_68 + -1;
        local_110 = local_60;
      }
    }
    else {
      if (local_f8 == 0) {
        lStack_f0 = local_108;
      }
      else {
        *(longlong *)(local_108 + 0x18) = local_f8;
        *(longlong *)(local_f8 + 0x20) = local_108;
        local_100 = local_100 + local_e8;
      }
      *param_1 = local_110;
      param_1[1] = lStack_f0;
      param_1[2] = local_100;
    }
  }
  return param_1;
}


