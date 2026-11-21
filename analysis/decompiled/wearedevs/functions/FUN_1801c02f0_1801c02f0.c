/* FUN_1801c02f0 @ 1801c02f0 */

undefined8 * FUN_1801c02f0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_c0 = (*(code *)*param_2)(0);
  if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180287200);
  }
  local_68 = *(undefined8 *)(param_3 + 0x14);
  local_78 = *(undefined8 *)(param_3 + 0x10);
  uStack_70 = *(undefined8 *)(param_3 + 0x12);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  local_a8 = param_3[4];
  uStack_a4 = param_3[5];
  uStack_a0 = param_3[6];
  uStack_9c = param_3[7];
  local_98 = param_3[8];
  uStack_94 = param_3[9];
  uStack_90 = param_3[10];
  uStack_8c = param_3[0xb];
  local_88 = param_3[0xc];
  uStack_84 = param_3[0xd];
  uStack_80 = param_3[0xe];
  uStack_7c = param_3[0xf];
  local_60 = 0;
  local_21 = 1;
  FUN_1801c43e0(*(undefined8 *)(param_3 + 0x16),FUN_1801c09a0,&local_c0);
  local_21 = 1;
  FUN_1801c6020(local_c0);
  if (local_60 == 1) {
    param_1[4] = local_38;
    param_1[5] = uStack_30;
    param_1[2] = local_48;
    param_1[3] = uStack_40;
    *param_1 = local_58;
    param_1[1] = local_50;
    return param_1;
  }
  if (local_60 == 2) {
    local_21 = 0;
    FUN_1801c22b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_21 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\job.rs"
                ,0x28,&DAT_180286fe8);
}


