/* FUN_1801024d0 @ 1801024d0 */

undefined8 * FUN_1801024d0(undefined8 *param_1,longlong *param_2)

{
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = *param_2;
  local_40 = param_2[1];
  *param_2 = 0;
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("[internal exception] blocking task ran twice.C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\task.rs"
                  ,0x2d,&DAT_1802398f8);
  }
  local_31 = 0;
  FUN_18016e590();
  local_60 = local_48;
  local_58 = local_40;
  local_50 = 0;
  FUN_1801e4e80(&local_98,&local_60);
  if (local_98 != 0) {
    local_78 = local_88;
    uStack_74 = uStack_84;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
  }
  if (local_40 != 0) {
    thunk_FUN_1801d3330(local_48,local_40,1);
  }
  param_1[1] = local_98;
  param_1[2] = uStack_90;
  param_1[3] = CONCAT44(uStack_74,local_78);
  param_1[4] = CONCAT44(uStack_6c,uStack_70);
  *param_1 = 0;
  return param_1;
}


