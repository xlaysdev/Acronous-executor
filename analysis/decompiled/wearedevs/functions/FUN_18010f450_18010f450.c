/* FUN_18010f450 @ 18010f450 */

longlong * FUN_18010f450(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(int *)(param_2 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("internal error: entered unreachable code: unexpected stageC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\task\\core.rs"
                  ,0x75,&DAT_18023e9a0);
  }
  local_78 = FUN_18016c5d0(*(undefined8 *)(param_2 + 0x10));
  FUN_1801024d0(&local_a0,param_2 + 0x20,param_3);
  FUN_1801783b0(&local_78);
  if (local_a0 == 0) {
    local_78._0_4_ = 2;
    local_31 = 1;
    local_48 = FUN_18016c5d0(*(undefined8 *)(param_2 + 0x10));
    local_40 = (undefined4 *)(param_2 + 0x18);
    FUN_18010f230(local_40);
    local_40[8] = local_58;
    local_40[9] = uStack_54;
    local_40[10] = uStack_50;
    local_40[0xb] = uStack_4c;
    local_40[4] = local_68;
    local_40[5] = uStack_64;
    local_40[6] = uStack_60;
    local_40[7] = uStack_5c;
    *local_40 = (undefined4)local_78;
    local_40[1] = local_78._4_4_;
    local_40[2] = uStack_70;
    local_40[3] = uStack_6c;
    local_31 = 0;
    FUN_1801783b0(&local_48);
  }
  param_1[4] = local_80;
  param_1[2] = local_90;
  param_1[3] = lStack_88;
  *param_1 = local_a0;
  param_1[1] = lStack_98;
  return param_1;
}


