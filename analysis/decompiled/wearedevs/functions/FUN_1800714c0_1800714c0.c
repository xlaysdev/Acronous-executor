/* FUN_1800714c0 @ 1800714c0 */

void * FUN_1800714c0(longlong *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                    undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  undefined *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_98 = param_5;
  local_1c0 = 1;
  uStack_1b8 = 1;
  local_1b0 = param_2;
  uStack_1a8 = (longlong *)param_3;
  local_a0 = param_4;
  FUN_180027490();
  lVar4 = 8;
  local_90 = (longlong *)thunk_FUN_1801d32d0(0x20);
  if (local_90 == (longlong *)0x0) {
    local_60 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  *(undefined4 *)(local_90 + 2) = (undefined4)local_1b0;
  *(undefined4 *)((longlong)local_90 + 0x14) = local_1b0._4_4_;
  *(undefined4 *)(local_90 + 3) = (undefined4)uStack_1a8;
  *(undefined4 *)((longlong)local_90 + 0x1c) = uStack_1a8._4_4_;
  *(undefined4 *)local_90 = (undefined4)local_1c0;
  *(undefined4 *)((longlong)local_90 + 4) = local_1c0._4_4_;
  *(undefined4 *)(local_90 + 1) = (undefined4)uStack_1b8;
  *(undefined4 *)((longlong)local_90 + 0xc) = uStack_1b8._4_4_;
  uStack_70 = &PTR_LAB_18020c988;
  local_78 = local_90;
  if (param_4 == 0) {
    local_88 = (longlong *)0x0;
    lVar5 = *param_1;
    if (lVar5 != 0) goto LAB_18007160f;
  }
  else {
    local_1c0 = 1;
    uStack_1b8 = 1;
    uStack_1a8 = (longlong *)param_5;
    local_1b0 = param_4;
    FUN_180027490();
    lVar4 = 8;
    local_88 = (longlong *)thunk_FUN_1801d32d0(0x20);
    if (local_88 == (longlong *)0x0) {
      local_60 = param_4;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    *(undefined4 *)(local_88 + 2) = (undefined4)local_1b0;
    *(undefined4 *)((longlong)local_88 + 0x14) = local_1b0._4_4_;
    *(undefined4 *)(local_88 + 3) = (undefined4)uStack_1a8;
    *(undefined4 *)((longlong)local_88 + 0x1c) = uStack_1a8._4_4_;
    *(undefined4 *)local_88 = (undefined4)local_1c0;
    *(undefined4 *)((longlong)local_88 + 4) = local_1c0._4_4_;
    *(undefined4 *)(local_88 + 1) = (undefined4)uStack_1b8;
    *(undefined4 *)((longlong)local_88 + 0xc) = uStack_1b8._4_4_;
    ppuStack_80 = &PTR_LAB_18020c9a8;
    lVar5 = *param_1;
    if (lVar5 != 0) {
LAB_18007160f:
      local_52 = 1;
      plVar3 = (longlong *)FUN_18009ec50(0);
      if (plVar3 == (longlong *)0x0) {
        local_52 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180208dc8);
      }
      lVar1 = *plVar3;
      lVar2 = plVar3[1];
      *plVar3 = *plVar3 + 1;
      plVar3 = (longlong *)FUN_1801dd4b0();
      if ((char)plVar3[2] == '\x01') {
        local_b8 = *plVar3;
        lVar4 = plVar3[1];
      }
      else {
        local_b8 = FUN_1801dca90();
        *plVar3 = local_b8;
        plVar3[1] = lVar4;
        *(undefined1 *)(plVar3 + 2) = 1;
      }
      *plVar3 = local_b8 + 1;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = &DAT_18020c9e0;
      uStack_d0 = 0;
      local_a8 = 0;
      uStack_b0 = lVar4;
      plVar3 = (longlong *)FUN_1801dd4b0();
      if ((char)plVar3[2] == '\x01') {
        local_118 = *plVar3;
        lVar4 = plVar3[1];
      }
      else {
        local_118 = FUN_1801dca90();
        *plVar3 = local_118;
        plVar3[1] = lVar4;
        *(undefined1 *)(plVar3 + 2) = 1;
      }
      *plVar3 = local_118 + 1;
      local_e8 = param_1[1];
      local_e0 = (undefined4)param_1[2];
      local_198 = &DAT_18020ffa0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_168 = local_d8;
      uStack_160 = uStack_d0;
      local_158 = (undefined4)local_c8;
      uStack_154 = local_c8._4_4_;
      uStack_150 = (undefined4)uStack_c0;
      uStack_14c = uStack_c0._4_4_;
      local_148 = (undefined4)local_b8;
      uStack_144 = local_b8._4_4_;
      uStack_140 = (undefined4)uStack_b0;
      uStack_13c = uStack_b0._4_4_;
      local_1c0 = 1;
      uStack_1b8 = 1;
      local_1b0 = local_1b0 & 0xffffffffffff0000;
      uStack_1a8 = local_88;
      ppuStack_1a0 = ppuStack_80;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = &DAT_18020c9e0;
      uStack_130 = 0;
      local_108 = (undefined4)local_78;
      uStack_104 = local_78._4_4_;
      uStack_100 = (undefined4)uStack_70;
      uStack_fc = uStack_70._4_4_;
      local_f0 = 0;
      local_178 = lVar1;
      lStack_170 = lVar2;
      local_110 = lVar4;
      local_f8 = lVar5;
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(0xe8,8);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0xe8);
      }
      memcpy(_Dst,&local_1c0,0xe8);
      return _Dst;
    }
    LOCK();
    *local_88 = *local_88 + -1;
    UNLOCK();
    if (*local_88 == 0) {
      local_51 = 1;
      FUN_18003cc40(&local_88);
    }
  }
  LOCK();
  *local_78 = *local_78 + -1;
  UNLOCK();
  if (*local_78 == 0) {
    FUN_18003cc40(&local_78);
  }
  return (void *)0x0;
}


