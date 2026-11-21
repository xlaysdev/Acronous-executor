/* FUN_1800d4670 @ 1800d4670 */

undefined8 FUN_1800d4670(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_b1;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  longlong *local_40;
  longlong local_38;
  code *local_30;
  longlong *local_28;
  code *local_20;
  
  lVar3 = 0;
  do {
    if (param_4 * 0x10 == lVar3) {
      local_98 = 1;
      local_90 = (char *)0x0;
      goto LAB_1800d46b0;
    }
    local_90 = (char *)(ulonglong)*(uint *)(param_3 + lVar3);
    lVar3 = lVar3 + 0x10;
  } while (local_90 == (char *)0x0);
  local_98 = *(undefined8 *)(param_3 + -8 + lVar3);
LAB_1800d46b0:
  uVar1 = FUN_1800eb230(param_1,param_2,&local_98);
  if (uVar1 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
        local_38 = param_1 + 0x128;
        local_30 = FUN_1801eea70;
        local_28 = &local_b0;
        local_20 = FUN_1800cbe50;
        local_68 = 5;
        local_60 = "reqwest::connect::verbose";
        local_58 = 0x19;
        local_48 = &DAT_180214b98;
        local_40 = &local_38;
        local_98 = 0;
        local_90 = "reqwest::connect::verbose";
        local_88 = 0x19;
        local_80 = 0;
        local_78 = 
        "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs"
        ;
        local_70 = 0x62;
        local_50 = 0x7f200000001;
        local_b0 = param_3;
        local_a8 = param_4;
        local_a0 = param_2;
        FUN_1801905c0(&local_b1,&local_98);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


