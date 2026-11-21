/* FUN_1800d39e0 @ 1800d39e0 */

undefined8 FUN_1800d39e0(int *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 local_a9;
  undefined8 local_a8;
  ulonglong local_a0;
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
  int **local_40;
  int *local_38;
  code *local_30;
  undefined8 *local_28;
  code *local_20;
  
  if (*param_1 == 2) {
    uVar1 = thunk_FUN_18016d760(param_1 + 2,param_2,param_3,param_4);
    local_a0 = param_2;
  }
  else {
    local_98 = param_3;
    local_90 = (char *)param_4;
    uVar1 = FUN_1800eb830(param_1,param_2,&local_98);
    local_a0 = param_2;
  }
  if (uVar1 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
        if (param_4 < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0);
        }
        local_38 = param_1 + 0x48;
        local_30 = FUN_1801eea70;
        local_28 = &local_a8;
        local_20 = FUN_18007d180;
        local_68 = 5;
        local_60 = "reqwest::connect::verbose";
        local_58 = 0x19;
        local_48 = &DAT_180214b68;
        local_40 = &local_38;
        local_98 = 0;
        local_90 = "reqwest::connect::verbose";
        local_88 = 0x19;
        local_80 = 0;
        local_78 = 
        "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs"
        ;
        local_70 = 0x62;
        local_50 = 0x7e300000001;
        local_a8 = param_3;
        FUN_1801905c0(&local_a9,&local_98);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


