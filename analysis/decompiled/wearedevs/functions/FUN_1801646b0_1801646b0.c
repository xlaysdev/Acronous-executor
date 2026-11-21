/* FUN_1801646b0 @ 1801646b0 */

undefined8 * FUN_1801646b0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined4 uVar6;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_c8;
  longlong *plStack_c0;
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
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 1) == '\0') {
    FUN_180027490();
    plVar2 = (longlong *)thunk_FUN_1801d32d0(0x20);
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    *plVar2 = 1;
    plVar2[1] = 1;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined2 *)((longlong)plVar2 + 0x1c) = 0;
    LOCK();
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar5,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = 0;
    lVar3 = -0x8000000000000000;
    plStack_c0 = plVar2;
  }
  else {
    FUN_180171f10(&local_c8,*param_2);
    if (SBORROW8(0,local_c8)) {
      param_1[1] = plStack_c0;
      *param_1 = 3;
      return param_1;
    }
    local_108 = CONCAT44(uStack_94,local_98);
    local_128 = CONCAT44(uStack_b4,local_b8);
    uStack_120 = CONCAT44(uStack_ac,uStack_b0);
    local_118 = CONCAT44(uStack_a4,local_a8);
    uStack_110 = CONCAT44(uStack_9c,uStack_a0);
    lVar5 = CONCAT44(uStack_8c,uStack_90);
    local_1b8 = CONCAT44(uStack_7c,uStack_80);
    uStack_1b0 = uStack_78;
    local_1a8 = local_70;
    uStack_1a0 = uStack_68;
    local_198 = local_60;
    uStack_190 = uStack_58;
    local_188 = local_50;
    uStack_180 = uStack_48;
    local_178 = local_40;
    plVar2 = plStack_c0;
    lVar3 = local_c8;
    plStack_c0 = (longlong *)CONCAT44(uStack_84,local_88);
  }
  uStack_78 = local_178;
  local_88 = (undefined4)local_188;
  uStack_84 = local_188._4_4_;
  uStack_80 = (undefined4)uStack_180;
  uStack_7c = uStack_180._4_4_;
  local_98 = (undefined4)local_198;
  uStack_94 = local_198._4_4_;
  uStack_90 = (undefined4)uStack_190;
  uStack_8c = uStack_190._4_4_;
  local_a8 = (undefined4)local_1a8;
  uStack_a4 = local_1a8._4_4_;
  uStack_a0 = (undefined4)uStack_1a0;
  uStack_9c = uStack_1a0._4_4_;
  local_b8 = (undefined4)local_1b8;
  uStack_b4 = local_1b8._4_4_;
  uStack_b0 = (undefined4)uStack_1b0;
  uStack_ac = uStack_1b0._4_4_;
  local_c8 = lVar5;
  if (*(char *)((longlong)param_2 + 9) == '\x01') {
    unaff_RBX = FUN_1801df8c0();
    uVar6 = (undefined4)lVar5;
    lVar5 = 6;
    local_178 = FUN_1801745d0();
    if (lVar5 != 6) {
      local_38 = local_178;
      local_30 = lVar5;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0(&DAT_180260038,0x2b,&local_38,&PTR_LAB_180260018,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802601d8);
    }
    local_1c8 = 0;
    uStack_1c0 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
    uVar6 = 1000000000;
  }
  param_1[0x12] = uStack_78;
  param_1[0x10] = CONCAT44(uStack_84,local_88);
  param_1[0x11] = CONCAT44(uStack_7c,uStack_80);
  param_1[0xe] = CONCAT44(uStack_94,local_98);
  param_1[0xf] = CONCAT44(uStack_8c,uStack_90);
  param_1[0xc] = CONCAT44(uStack_a4,local_a8);
  param_1[0xd] = CONCAT44(uStack_9c,uStack_a0);
  param_1[10] = CONCAT44(uStack_b4,local_b8);
  param_1[0xb] = CONCAT44(uStack_ac,uStack_b0);
  param_1[8] = local_c8;
  param_1[9] = plStack_c0;
  *param_1 = uVar4;
  param_1[1] = lVar3;
  param_1[2] = plVar2;
  param_1[3] = local_128;
  param_1[4] = uStack_120;
  param_1[5] = local_118;
  param_1[6] = uStack_110;
  param_1[7] = local_108;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x14] = local_178;
  param_1[0x15] = 0;
  param_1[0x16] = local_1c8;
  param_1[0x17] = uStack_1c0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = unaff_RBX;
  *(undefined4 *)(param_1 + 0x1b) = uVar6;
  return param_1;
}


