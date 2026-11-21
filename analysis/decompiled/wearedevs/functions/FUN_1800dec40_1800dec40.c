/* FUN_1800dec40 @ 1800dec40 */

ulonglong * FUN_1800dec40(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined1 local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  uint local_58;
  undefined4 uStack_54;
  uint local_44;
  ulonglong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar1 = param_2 + 1;
  lVar5 = 0;
  if (1 < *param_2) {
    lVar5 = *param_2 - 2;
  }
  if (lVar5 == 0) {
    FUN_180094710(&local_c8,param_2,param_3);
    local_40 = param_2;
    if ((local_58 & 0xff) == 5) {
      FUN_1800df420(param_2);
      *local_40 = 4;
      local_198 = local_98;
      local_1a8 = local_a8;
      uStack_1a0 = uStack_a0;
      local_1b8 = local_b8;
      uStack_1b0 = uStack_b0;
      local_1c8 = local_c8;
      uStack_1c0 = uStack_c0;
      local_e8 = 2;
      goto LAB_1800def67;
    }
    if ((local_58 & 0xff) == 6) goto LAB_1800dece3;
    local_44 = local_58 & 0xff;
    FUN_1800df420(param_2);
    *local_40 = 3;
    param_2[0xd] = local_68;
    param_2[0xe] = uStack_60;
    param_2[0xb] = local_78;
    param_2[0xc] = uStack_70;
    param_2[9] = local_88;
    param_2[10] = uStack_80;
    *(undefined4 *)(param_2 + 7) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_2 + 0x3c) = local_98._4_4_;
    *(undefined4 *)(param_2 + 8) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_2 + 0x44) = uStack_90._4_4_;
    *(undefined4 *)(param_2 + 5) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_2 + 0x2c) = local_a8._4_4_;
    *(undefined4 *)(param_2 + 6) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0x34) = uStack_a0._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_2 + 0x1c) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 4) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_b0._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(param_2 + 2) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_c0._4_4_;
    cVar6 = (char)local_44;
    *(char *)(local_40 + 0xf) = cVar6;
    *(undefined4 *)((longlong)param_2 + 0x7c) = uStack_54;
    *(undefined4 *)((longlong)param_2 + 0x79) = CONCAT13((undefined1)uStack_54,local_58._1_3_);
    puVar2 = local_40;
  }
  else {
    if (lVar5 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("TryFlatten polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\try_future\\try_flatten.rs"
                    ,0x22,&DAT_1802159c0);
    }
    cVar6 = (char)param_2[0xf];
    puVar2 = param_2;
  }
  if (cVar6 == '\x04') {
    FUN_1800b2a80(&local_c8,puVar1,param_3);
    if ((char)local_58 == '\x03') {
LAB_1800dece3:
      *(undefined1 *)(param_1 + 0xe) = 3;
      return param_1;
    }
  }
  else {
    *(undefined1 *)(puVar2 + 0xf) = 3;
    if (cVar6 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("Ready polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\ready.rs"
                    ,0x1d,&DAT_18020f948);
    }
    local_68 = param_2[0xd];
    uStack_60 = param_2[0xe];
    local_78 = param_2[0xb];
    uStack_70 = param_2[0xc];
    local_88 = param_2[9];
    uStack_80 = param_2[10];
    local_c8 = *puVar1;
    uStack_c0 = param_2[2];
    local_b8 = param_2[3];
    uStack_b0 = param_2[4];
    local_a8 = param_2[5];
    uStack_a0 = param_2[6];
    local_98 = param_2[7];
    uStack_90 = param_2[8];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x7c);
    local_58 = CONCAT31((int3)*(undefined4 *)((longlong)param_2 + 0x79),cVar6);
  }
  uVar3 = uStack_54;
  uVar4 = local_58;
  uStack_160 = uStack_60;
  local_168 = local_68;
  uStack_170 = uStack_70;
  local_178 = local_78;
  uStack_180 = uStack_80;
  local_188 = local_88;
  uStack_190 = uStack_90;
  local_198 = local_98;
  uStack_1a0 = uStack_a0;
  local_1a8 = local_a8;
  uStack_1b0 = uStack_b0;
  local_1b8 = local_b8;
  uStack_1c0 = uStack_c0;
  local_1c8 = local_c8;
  local_40 = puVar2;
  FUN_1800df420(puVar2);
  *local_40 = 4;
  local_e8 = (undefined1)uVar4;
  local_c8 = (ulonglong)CONCAT43(uVar3,(int3)(uVar4 >> 8));
LAB_1800def67:
  param_1[0xc] = local_168;
  param_1[0xd] = uStack_160;
  param_1[10] = local_178;
  param_1[0xb] = uStack_170;
  param_1[8] = local_188;
  param_1[9] = uStack_180;
  param_1[6] = local_198;
  param_1[7] = uStack_190;
  param_1[4] = local_1a8;
  param_1[5] = uStack_1a0;
  param_1[2] = local_1b8;
  param_1[3] = uStack_1b0;
  *param_1 = local_1c8;
  param_1[1] = uStack_1c0;
  *(undefined1 *)(param_1 + 0xe) = local_e8;
  uVar3 = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_1 + 0x71) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x74) = local_c8._3_4_;
  return param_1;
}


