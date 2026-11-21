/* FUN_1801fcb70 @ 1801fcb70 */

void FUN_1801fcb70(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = param_3 + 0x110;
  local_38 = *(undefined8 *)(param_3 + 0x100);
  local_40 = 0;
  local_30 = 1;
  local_d8 = *param_4;
  uStack_d0 = param_4[1];
  local_c8 = *(undefined4 *)(param_4 + 2);
  uStack_c4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_c0 = *(undefined4 *)(param_4 + 3);
  uStack_bc = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_b8 = *(undefined4 *)(param_4 + 4);
  uStack_b4 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_b0 = *(undefined4 *)(param_4 + 5);
  uStack_ac = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_a8 = *(undefined4 *)(param_4 + 6);
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_a0 = *(undefined4 *)(param_4 + 7);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0x3c);
  local_98 = *(undefined4 *)(param_4 + 8);
  uStack_94 = *(undefined4 *)((longlong)param_4 + 0x44);
  uStack_90 = *(undefined4 *)(param_4 + 9);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0x4c);
  local_88 = param_4[10];
  local_80 = 0;
  local_21 = 1;
  FUN_1801c43e0(param_2,FUN_1801c0e50,&local_d8);
  if (local_40 != 3) {
    local_21 = 1;
    FUN_1801fe2e0(param_3,&local_40);
  }
  if (local_80 == 1) {
    *param_1 = local_78;
    param_1[1] = local_70;
    param_1[2] = local_68;
    param_1[3] = uStack_60;
    param_1[4] = local_58;
    param_1[5] = uStack_50;
    return;
  }
  if (local_80 == 2) {
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


