/* FUN_18003e500 @ 18003e500 */

undefined4 FUN_18003e500(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("internal error: entered unreachable code: unexpected stageC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\task\\core.rs"
                  ,0x75,&DAT_180207430);
  }
  local_60 = FUN_18016c5d0(*(undefined8 *)(param_1 + 8));
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))
                    (*(undefined8 *)(param_1 + 0x18),param_2);
  FUN_1801783b0(&local_60);
  if ((char)uVar1 == '\0') {
    local_60._0_4_ = 2;
    local_29 = 1;
    local_40 = FUN_18016c5d0(*(undefined8 *)(param_1 + 8));
    local_38 = (undefined4 *)(param_1 + 0x10);
    FUN_18003ad30(local_38);
    local_38[4] = local_50;
    local_38[5] = uStack_4c;
    local_38[6] = uStack_48;
    local_38[7] = uStack_44;
    *local_38 = (undefined4)local_60;
    local_38[1] = local_60._4_4_;
    local_38[2] = uStack_58;
    local_38[3] = uStack_54;
    local_29 = 0;
    FUN_1801783b0(&local_40);
  }
  return uVar1;
}


