/* FUN_1801c7720 @ 1801c7720 */

undefined8 *
FUN_1801c7720(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
             char param_5,longlong param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  void *_Dst;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined **local_100;
  longlong lStack_f8;
  longlong local_f0;
  longlong lStack_e8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  puVar4 = PTR_DAT_1802fd5f8;
  local_30 = 0xfffffffffffffffe;
  local_58 = param_2;
  if ((param_3 & 1) != 0) goto LAB_1801c78d5;
  if (*(longlong *)PTR_DAT_1802fd5f8 != 0) {
    param_4 = *(longlong *)PTR_DAT_1802fd5f8 - 1;
    goto LAB_1801c78d5;
  }
  local_31 = 1;
  local_32 = 1;
  local_33 = 1;
  FUN_1801d7ad0(&local_110,
                "RUST_MIN_STACKfatal runtime error: thread result panicked on drop, aborting\nC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\crossbeam-epoch-0.9.20\\src\\sync\\once_lock.rs"
                ,0xe);
  param_4 = 0x200000;
  if (!SBORROW8(0,(longlong)local_110)) {
    local_48 = local_110;
    local_60 = uStack_108;
    FUN_1801f2ab0(&local_1a8,uStack_108,local_100);
    if ((local_1a8 != 1) && (uVar10 = CONCAT44(uStack_194,local_198), uVar10 != 0)) {
      pcVar3 = (char *)CONCAT44(uStack_19c,uStack_1a0);
      if (uVar10 == 1) {
        cVar5 = *pcVar3;
        if ((cVar5 == '+') || (cVar5 == '-')) goto LAB_1801c78b0;
      }
      else {
        cVar5 = *pcVar3;
      }
      uVar11 = (ulonglong)(cVar5 == '+');
      if (uVar10 - uVar11 < 0x11) {
        if (uVar10 == uVar11) {
          param_4 = 0;
        }
        else {
          lVar6 = 0;
          param_4 = 0;
          do {
            if (9 < (byte)pcVar3[lVar6 + uVar11] - 0x30) goto LAB_1801c78a7;
            param_4 = (ulonglong)((byte)pcVar3[lVar6 + uVar11] - 0x30) + param_4 * 10;
            lVar6 = lVar6 + 1;
          } while (lVar6 != uVar10 + -uVar11);
        }
      }
      else {
        lVar6 = 0;
        param_4 = 0;
        while( true ) {
          if (lVar6 == uVar10 + -uVar11) goto LAB_1801c78b0;
          uVar12 = (byte)pcVar3[lVar6 + uVar11] - 0x30;
          if (9 < uVar12) break;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = param_4;
          uVar7 = SUB168(auVar1 * ZEXT816(10),0);
          param_4 = uVar12 + uVar7;
          if ((SUB168(auVar1 * ZEXT816(10),8) != 0) ||
             (lVar6 = lVar6 + 1, CARRY8((ulonglong)uVar12,uVar7))) break;
        }
LAB_1801c78a7:
        param_4 = 0x200000;
      }
    }
LAB_1801c78b0:
    if (local_48 != (longlong *)0x0) {
      thunk_FUN_1801d3330(local_60,local_48,1);
    }
  }
  *(ulonglong *)puVar4 = param_4 + 1;
LAB_1801c78d5:
  local_31 = 1;
  local_32 = 1;
  local_33 = 1;
  uVar8 = FUN_1801dfd60();
  local_31 = 1;
  local_32 = 1;
  local_33 = 0;
  local_40 = (longlong *)FUN_1801dfe00(uVar8,local_58);
  if (param_5 == '\0') {
    local_35 = 1;
    local_36 = 1;
    FUN_1801e08b0(&local_80,&local_40);
  }
  else {
    local_80 = 0;
    uStack_78 = 8;
    local_70 = 0;
    uStack_68 = 0;
  }
  local_110 = (longlong *)0x1;
  uStack_108 = (void *)0x1;
  local_100 = (undefined **)param_6;
  lStack_f8 = 0;
  FUN_180027490();
  local_50 = (longlong *)thunk_FUN_1801d32d0(0x30,8);
  local_48 = local_50;
  if (local_50 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x30);
  }
  local_50[4] = local_f0;
  local_50[5] = lStack_e8;
  local_50[2] = (longlong)local_100;
  local_50[3] = lStack_f8;
  *local_50 = (longlong)local_110;
  local_50[1] = (longlong)uStack_108;
  LOCK();
  lVar6 = *local_50;
  *local_50 = *local_50 + 1;
  UNLOCK();
  if (*local_50 != 0 && SCARRY8(lVar6,1) == *local_50 < 0) {
    local_120 = param_7[0xc];
    local_130 = param_7[10];
    uStack_128 = param_7[0xb];
    local_140 = param_7[8];
    uStack_138 = param_7[9];
    local_180 = *param_7;
    uStack_178 = param_7[1];
    local_170 = param_7[2];
    uStack_168 = param_7[3];
    local_160 = *(undefined4 *)(param_7 + 4);
    uStack_15c = *(undefined4 *)((longlong)param_7 + 0x24);
    uStack_158 = *(undefined4 *)(param_7 + 5);
    uStack_154 = *(undefined4 *)((longlong)param_7 + 0x2c);
    local_150 = *(undefined4 *)(param_7 + 6);
    uStack_14c = *(undefined4 *)((longlong)param_7 + 0x34);
    uStack_148 = *(undefined4 *)(param_7 + 7);
    uStack_144 = *(undefined4 *)((longlong)param_7 + 0x3c);
    local_198 = (undefined4)local_70;
    uStack_194 = local_70._4_4_;
    uStack_190 = (undefined4)uStack_68;
    uStack_18c = uStack_68._4_4_;
    local_1a8 = (int)local_80;
    uStack_1a4 = local_80._4_4_;
    uStack_1a0 = (undefined4)uStack_78;
    uStack_19c = uStack_78._4_4_;
    local_188 = local_50;
    if (local_50[2] != 0) {
      local_34 = 1;
      FUN_1801dfde0(local_50[2] + 0x10);
    }
    memcpy(&local_110,&local_1a8,0x90);
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(0x90,8);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    memcpy(_Dst,&local_1a8,0x90);
    LOCK();
    lVar6 = *local_40;
    *local_40 = *local_40 + 1;
    UNLOCK();
    if (*local_40 != 0 && SCARRY8(lVar6,1) == *local_40 < 0) {
      local_110 = local_40;
      local_100 = &PTR_FUN_180288408;
      uStack_108 = _Dst;
      FUN_180027490();
      puVar9 = (undefined4 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *(undefined ***)(puVar9 + 4) = local_100;
      *puVar9 = (undefined4)local_110;
      puVar9[1] = local_110._4_4_;
      puVar9[2] = (undefined4)uStack_108;
      puVar9[3] = uStack_108._4_4_;
      local_34 = 0;
      uVar10 = FUN_1801dce50(param_4);
      if ((uVar10 & 1) == 0) {
        *param_1 = local_40;
        param_1[1] = local_50;
        param_1[2] = puVar9;
      }
      else {
        param_1[1] = puVar9;
        *param_1 = 0;
        LOCK();
        *local_50 = *local_50 + -1;
        UNLOCK();
        if (*local_50 == 0) {
          FUN_1801e3850(&local_50);
        }
        LOCK();
        *local_40 = *local_40 + -1;
        UNLOCK();
        if (*local_40 == 0) {
          local_31 = 0;
          local_32 = 0;
          local_33 = 0;
          FUN_1801e3970(&local_40);
        }
      }
      return param_1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


