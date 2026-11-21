/* FUN_1800eb990 @ 1800eb990 */

longlong * FUN_1800eb990(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  uVar1 = FUN_180101530(param_2 + 0xf0);
  if ((uVar1 & 1) == 0) {
    local_28[0] = param_2;
    FUN_180100da0(&local_40,local_28);
    if (SBORROW8(0,local_40)) {
      FUN_1800efb50(&local_40);
    }
    else {
      local_58 = (undefined4)local_38;
      uStack_54 = local_38._4_4_;
      uStack_50 = uStack_30;
      uStack_4c = uStack_2c;
    }
    FUN_180101100(local_28);
  }
  else {
    if ((param_2 & 0xffffffff00000003) != 0x8009030e00000002) {
      local_40 = 2;
      local_38 = param_2;
      FUN_1800ee2d0(&local_40);
    }
    local_40 = -0x8000000000000000;
  }
  *param_1 = local_40;
  param_1[1] = CONCAT44(uStack_54,local_58);
  param_1[2] = CONCAT44(uStack_4c,uStack_50);
  return param_1;
}


