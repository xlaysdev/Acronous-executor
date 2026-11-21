/* FUN_180133ff0 @ 180133ff0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180133ff0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  uint *_Src;
  void *pvVar13;
  longlong lVar14;
  ulonglong _Size;
  undefined1 *puVar15;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_190 [168];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = *(undefined1 *)(param_2 + 0x118);
  local_64 = *(undefined4 *)(param_2 + 0x110);
  local_5f = 5;
  uVar2 = *(uint *)(param_2 + 0x114);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x20);
  lVar14 = *(longlong *)(param_2 + 0x28);
  local_78 = *(undefined8 *)(param_2 + 0x40);
  local_88 = *(ulonglong *)(param_2 + 0x30);
  uStack_80 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  lVar5 = *(longlong *)(param_2 + 0x50);
  local_e8 = *(undefined8 *)(param_3 + 0x70);
  local_d8 = *(undefined4 *)(param_3 + 0x80);
  uStack_d4 = *(undefined4 *)(param_3 + 0x84);
  uStack_d0 = *(undefined4 *)(param_3 + 0x88);
  uStack_cc = *(undefined4 *)(param_3 + 0x8c);
  *(undefined8 *)(param_3 + 0x70) = 1;
  *(undefined8 *)(param_3 + 0x78) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x88) = 1;
  uStack_e0 = 0;
  local_c0 = param_1;
  local_5c = local_64;
  if (lVar5 != 0) {
    thunk_FUN_1801d3330(uVar4,lVar5 << 2,2);
  }
  memcpy(local_190,(void *)(param_2 + 0x60),0xa0);
  local_1d8 = (undefined1 *)0x0;
  uStack_1c8 = (undefined4)local_88;
  uStack_1c4 = local_88._4_4_;
  uStack_1c0 = (undefined4)uStack_80;
  uStack_1bc = uStack_80._4_4_;
  uStack_1b8 = (undefined4)local_78;
  uStack_1b4 = local_78._4_4_;
  local_1b0 = lVar9;
  local_1a8 = lVar9;
  local_1a0 = uVar3;
  local_198 = lVar14 * 0x68 + lVar9;
  local_58 = (undefined4 *)param_3;
  FUN_1801489f0(param_3,&local_1d8,&local_e8);
  local_a8 = local_d8;
  uStack_a4 = uStack_d4;
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
  local_b8 = (undefined4)local_e8;
  uStack_b4 = local_e8._4_4_;
  uStack_b0 = (undefined4)uStack_e0;
  uStack_ac = uStack_e0._4_4_;
  uVar10 = *(ulonglong *)(*param_4 + 8);
  local_49 = 1;
  FUN_18012e390(&local_64,0,param_4);
  local_70 = *(ulonglong *)(*param_4 + 8);
  local_90 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  puVar7 = (undefined1 *)param_4[1];
  uStack_1d0 = (undefined1 *)(local_70 ^ 0x7fffffffffffffff);
  if (puVar7 < (undefined1 *)(local_70 ^ 0x7fffffffffffffff)) {
    uStack_1d0 = puVar7;
  }
  if (uStack_1d0 < &DAT_00000004) {
    local_1d8 = (undefined1 *)0x4;
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_1d8);
  }
  local_58 = (undefined4 *)((longlong)local_58 + 0x70);
  puVar11 = &DAT_00000004;
  _Src = &local_90;
  do {
    plVar6 = (longlong *)*param_4;
    lVar9 = plVar6[1];
    lVar14 = plVar6[2];
    if (lVar14 == lVar9) {
      local_49 = 1;
      FUN_1801b2210(plVar6,0x40,1);
      lVar9 = plVar6[1];
      lVar14 = plVar6[2];
      puVar7 = (undefined1 *)param_4[1];
    }
    puVar15 = (undefined1 *)(lVar14 - lVar9);
    if (puVar7 < (undefined1 *)(lVar14 - lVar9)) {
      puVar15 = puVar7;
    }
    if (puVar11 <= puVar15) {
      puVar15 = puVar11;
    }
    memcpy((void *)(lVar9 + *plVar6),_Src,(size_t)puVar15);
    puVar7 = (undefined1 *)param_4[1] + -(longlong)puVar15;
    if ((undefined1 *)param_4[1] < puVar15) {
      local_49 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                    ,0x23,&DAT_18025f2a8);
    }
    lVar9 = *param_4;
    uStack_1d0 = (undefined1 *)(*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 8));
    if (uStack_1d0 < puVar15) {
      local_49 = 1;
      local_1d8 = puVar15;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_1d8);
    }
    *(undefined1 **)(lVar9 + 8) = puVar15 + *(longlong *)(lVar9 + 8);
    param_4[1] = (longlong)puVar7;
    _Src = (uint *)((longlong)_Src + (longlong)puVar15);
    puVar11 = puVar11 + -(longlong)puVar15;
  } while (puVar11 != (undefined1 *)0x0);
  puVar11 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
  uStack_1d0 = (undefined1 *)(*(ulonglong *)(*param_4 + 8) ^ 0x7fffffffffffffff);
  if (puVar7 < uStack_1d0) {
    uStack_1d0 = puVar7;
  }
  if (uStack_1d0 < puVar11) {
    local_49 = 1;
    FUN_1801b2630(&local_90,&local_b8);
    uVar8 = param_4[1];
    uStack_1d0 = (undefined1 *)(*(ulonglong *)(*param_4 + 8) ^ 0x7fffffffffffffff);
    if (uVar8 < uStack_1d0) {
      uStack_1d0 = (undefined1 *)uVar8;
    }
    if (uStack_1d0 < local_88) {
      local_1d8 = (undefined1 *)local_88;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_1d8);
    }
    if (local_88 != 0) {
      pvVar13 = (void *)CONCAT44(uStack_8c,local_90);
      uVar12 = local_88;
      do {
        plVar6 = (longlong *)*param_4;
        lVar9 = plVar6[1];
        lVar14 = plVar6[2];
        if (lVar14 == lVar9) {
          FUN_1801b2210(plVar6,0x40,1);
          lVar9 = plVar6[1];
          lVar14 = plVar6[2];
          uVar8 = param_4[1];
        }
        _Size = lVar14 - lVar9;
        if (uVar8 < (ulonglong)(lVar14 - lVar9)) {
          _Size = uVar8;
        }
        if (uVar12 <= _Size) {
          _Size = uVar12;
        }
        memcpy((void *)(lVar9 + *plVar6),pvVar13,_Size);
        uVar8 = param_4[1] - _Size;
        if ((ulonglong)param_4[1] < _Size) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                        ,0x23,&DAT_18025f2a8);
        }
        lVar9 = *param_4;
        uStack_1d0 = (undefined1 *)(*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 8));
        if (uStack_1d0 < _Size) {
          local_1d8 = (undefined1 *)_Size;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_1d8);
        }
        *(ulonglong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + _Size;
        param_4[1] = uVar8;
        pvVar13 = (void *)((longlong)pvVar13 + _Size);
        uVar12 = uVar12 - _Size;
      } while (uVar12 != 0);
    }
    uStack_1c8 = local_a8;
    uStack_1c4 = uStack_a4;
    uStack_1c0 = uStack_a0;
    uStack_1bc = uStack_9c;
    local_1d8 = (undefined1 *)CONCAT44(uStack_b4,local_b8);
    uStack_1d0 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
    uStack_1b8 = local_5c;
    local_49 = 0;
    FUN_1801b2a70(&local_90);
  }
  else {
    if (puVar11 != (undefined1 *)0x0) {
      pvVar13 = (void *)CONCAT44(uStack_b4,local_b8);
      do {
        plVar6 = (longlong *)*param_4;
        lVar9 = plVar6[1];
        lVar14 = plVar6[2];
        if (lVar14 == lVar9) {
          local_49 = 1;
          FUN_1801b2210(plVar6,0x40,CONCAT71((int7)((ulonglong)uStack_1d0 >> 8),1));
          lVar9 = plVar6[1];
          lVar14 = plVar6[2];
          puVar7 = (undefined1 *)param_4[1];
        }
        puVar15 = (undefined1 *)(lVar14 - lVar9);
        if (puVar7 < (undefined1 *)(lVar14 - lVar9)) {
          puVar15 = puVar7;
        }
        if (puVar11 <= puVar15) {
          puVar15 = puVar11;
        }
        memcpy((void *)(lVar9 + *plVar6),pvVar13,(size_t)puVar15);
        puVar7 = (undefined1 *)param_4[1] + -(longlong)puVar15;
        if ((undefined1 *)param_4[1] < puVar15) {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                        ,0x23,&DAT_18025f2a8);
        }
        lVar9 = *param_4;
        uStack_1d0 = (undefined1 *)(*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 8));
        if (uStack_1d0 < puVar15) {
          local_49 = 1;
          local_1d8 = puVar15;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_1d8);
        }
        *(undefined1 **)(lVar9 + 8) = puVar15 + *(longlong *)(lVar9 + 8);
        param_4[1] = (longlong)puVar7;
        pvVar13 = (void *)((longlong)pvVar13 + (longlong)puVar15);
        puVar11 = puVar11 + -(longlong)puVar15;
      } while (puVar11 != (undefined1 *)0x0);
    }
    uStack_1c8 = local_a8;
    uStack_1c4 = uStack_a4;
    uStack_1c0 = uStack_a0;
    uStack_1bc = uStack_9c;
    local_1d8._0_4_ = local_b8;
    local_1d8._4_4_ = uStack_b4;
    uStack_1d0 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
    FUN_1801b2a70(local_58);
    *(ulonglong *)(local_58 + 4) = CONCAT44(uStack_1c4,uStack_1c8);
    *(ulonglong *)(local_58 + 6) = CONCAT44(uStack_1bc,uStack_1c0);
    *local_58 = (undefined4)local_1d8;
    local_58[1] = local_1d8._4_4_;
    local_58[2] = (undefined4)uStack_1d0;
    local_58[3] = uStack_1d0._4_4_;
    local_1d8 = (undefined1 *)0x0;
  }
  uVar8 = ((longlong *)*param_4)[1];
  uVar12 = uVar8 - local_70;
  if ((((uVar12 >> 0x38 != 0 || (uVar12 & 0xff000000000000) != 0) || (uVar12 & 0xff0000000000) != 0)
      || (uVar12 & 0xff00000000) != 0) || (uVar12 & 0xff000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)",0x3e,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024b5e8);
  }
  if ((0xfffffffffffffffc < uVar10) || (uVar8 < uVar10 + 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar10,uVar10 + 3,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_18024b618);
  }
  lVar9 = *(longlong *)*param_4;
  *(ushort *)(lVar9 + uVar10) = (ushort)(uVar12 >> 0x10) & 0xff | (ushort)uVar12 & 0xff00;
  *(char *)(lVar9 + 2 + uVar10) = (char)uVar12;
  if (local_1d8 != (undefined1 *)0x0) {
    uVar8 = ((longlong *)*param_4)[1];
    uVar10 = uVar10 + 4;
    if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar10,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_18024b600);
    }
    pcVar1 = (char *)(*(longlong *)*param_4 + uVar10);
    *pcVar1 = *pcVar1 + -4;
  }
  local_c0[4] = CONCAT44(uStack_1b4,uStack_1b8);
  local_c0[2] = CONCAT44(uStack_1c4,uStack_1c8);
  local_c0[3] = CONCAT44(uStack_1bc,uStack_1c0);
  *local_c0 = (longlong)local_1d8;
  local_c0[1] = (longlong)uStack_1d0;
  return;
}


