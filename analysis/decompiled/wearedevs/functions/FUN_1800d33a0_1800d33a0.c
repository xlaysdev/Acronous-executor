/* FUN_1800d33a0 @ 1800d33a0 */

undefined8 FUN_1800d33a0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_d9;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  code *local_a0;
  longlong *local_98;
  code *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  longlong *local_30;
  
  uVar5 = param_3[1];
  uVar1 = param_3[2];
  local_d0 = uVar5 - uVar1;
  if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar1,uVar5,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180214b50);
  }
  local_d8 = *param_3 + uVar1;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar3 = FUN_18005a640(param_1,param_2,&local_d8);
  uVar2 = local_c8;
  uVar5 = local_d0;
  if ((uVar3 & 1) == 0) {
    if (param_2 != 0) {
      return 0;
    }
    if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
      if (local_d0 < local_c8) goto LAB_1800d355b;
      local_a8 = param_1 + 0x128;
      local_b8 = local_d8;
      local_b0 = local_c8;
      local_a0 = FUN_1801eea70;
      local_98 = &local_b8;
      local_90 = FUN_18007d180;
      local_58 = 5;
      local_50 = "reqwest::connect::verbose";
      local_48 = 0x19;
      local_38 = &DAT_180214b20;
      local_30 = &local_a8;
      local_88 = 0;
      local_80 = "reqwest::connect::verbose";
      local_78 = 0x19;
      local_70 = 0;
      local_68 = 
      "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs"
      ;
      local_60 = 0x62;
      local_40 = 0x7cc00000001;
      FUN_1801905c0(&local_d9,&local_88);
    }
    if (uVar5 < uVar2) {
LAB_1800d355b:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar2,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180214b38);
    }
    uVar5 = uVar2 + uVar1;
    if (CARRY8(uVar2,uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("overflow",8,&PTR_s_C__Users_burne__cargo_registry_s_180213dc0);
    }
    param_3[2] = uVar5;
    if (uVar5 < (ulonglong)param_3[3]) {
      uVar5 = param_3[3];
    }
    param_3[3] = uVar5;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


