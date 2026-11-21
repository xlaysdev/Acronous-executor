/* FUN_180135ab0 @ 180135ab0 */

longlong * FUN_180135ab0(longlong *param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined1 local_180 [168];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = *(undefined1 *)(param_2 + 0x11c);
  local_64 = *(undefined4 *)(param_2 + 0x118);
  local_5f = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(longlong *)(param_2 + 0x20);
  lVar11 = *(longlong *)(param_2 + 0x28);
  local_90 = *(undefined8 *)(param_2 + 0x40);
  local_a0 = *(ulonglong *)(param_2 + 0x30);
  uStack_98 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x50);
  local_d8 = *(undefined8 *)(param_3 + 0x1c);
  local_c8 = param_3[0x20];
  uStack_c4 = param_3[0x21];
  uStack_c0 = param_3[0x22];
  uStack_bc = param_3[0x23];
  *(undefined8 *)(param_3 + 0x1c) = 1;
  *(undefined8 *)(param_3 + 0x1e) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x22) = 1;
  uStack_d0 = 0;
  local_5c = local_64;
  if (lVar4 != 0) {
    thunk_FUN_1801d3330(uVar3,lVar4 << 2,2);
  }
  memcpy(local_180,(void *)(param_2 + 0x60),0xa0);
  local_1c8 = 0;
  uStack_1b8 = (undefined4)local_a0;
  uStack_1b4 = local_a0._4_4_;
  uStack_1b0 = (undefined4)uStack_98;
  uStack_1ac = uStack_98._4_4_;
  uStack_1a8 = (undefined4)local_90;
  uStack_1a4 = local_90._4_4_;
  local_1a0 = lVar7;
  local_198 = lVar7;
  local_190 = uVar2;
  local_188 = lVar11 * 0x68 + lVar7;
  local_58 = param_3;
  FUN_1801489f0(param_3,&local_1c8,&local_d8);
  local_78 = local_c8;
  uStack_74 = uStack_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  local_88 = (undefined4)local_d8;
  uStack_84 = local_d8._4_4_;
  uStack_80 = (undefined4)uStack_d0;
  uStack_7c = uStack_d0._4_4_;
  uVar8 = *(ulonglong *)(*param_4 + 8);
  local_49 = 1;
  FUN_18012e390(&local_64,0,param_4);
  local_b0 = *(ulonglong *)(*param_4 + 8);
  uVar9 = CONCAT44(uStack_7c,uStack_80);
  uVar6 = param_4[1];
  uStack_1c0 = local_b0 ^ 0x7fffffffffffffff;
  if (uVar6 < (local_b0 ^ 0x7fffffffffffffff)) {
    uStack_1c0 = uVar6;
  }
  if (uStack_1c0 < uVar9) {
    local_49 = 1;
    FUN_1801b2630(&local_a8,&local_88);
    uVar6 = param_4[1];
    uStack_1c0 = *(ulonglong *)(*param_4 + 8) ^ 0x7fffffffffffffff;
    if (uVar6 < uStack_1c0) {
      uStack_1c0 = uVar6;
    }
    if (uStack_1c0 < local_a0) {
      local_1c8 = local_a0;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_1c8);
    }
    if (local_a0 != 0) {
      pvVar10 = (void *)CONCAT44(uStack_a4,local_a8);
      uVar9 = local_a0;
      do {
        plVar5 = (longlong *)*param_4;
        lVar7 = plVar5[1];
        lVar11 = plVar5[2];
        if (lVar11 == lVar7) {
          FUN_1801b2210(plVar5,0x40,1);
          lVar7 = plVar5[1];
          lVar11 = plVar5[2];
          uVar6 = param_4[1];
        }
        uVar12 = lVar11 - lVar7;
        if (uVar6 < (ulonglong)(lVar11 - lVar7)) {
          uVar12 = uVar6;
        }
        if (uVar9 <= uVar12) {
          uVar12 = uVar9;
        }
        memcpy((void *)(lVar7 + *plVar5),pvVar10,uVar12);
        uVar6 = param_4[1] - uVar12;
        if ((ulonglong)param_4[1] < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                        ,0x23,&DAT_18025f2a8);
        }
        lVar7 = *param_4;
        uStack_1c0 = *(longlong *)(lVar7 + 0x10) - *(longlong *)(lVar7 + 8);
        if (uStack_1c0 < uVar12) {
          local_1c8 = uVar12;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_1c8);
        }
        *(ulonglong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + uVar12;
        param_4[1] = uVar6;
        pvVar10 = (void *)((longlong)pvVar10 + uVar12);
        uVar9 = uVar9 - uVar12;
      } while (uVar9 != 0);
    }
    uStack_1b8 = local_78;
    uStack_1b4 = uStack_74;
    uStack_1b0 = uStack_70;
    uStack_1ac = uStack_6c;
    local_1c8 = CONCAT44(uStack_84,local_88);
    uStack_1c0 = CONCAT44(uStack_7c,uStack_80);
    uStack_1a8 = local_5c;
    local_49 = 0;
    FUN_1801b2a70(&local_a8);
  }
  else {
    if (uVar9 != 0) {
      pvVar10 = (void *)CONCAT44(uStack_84,local_88);
      do {
        plVar5 = (longlong *)*param_4;
        lVar7 = plVar5[1];
        lVar11 = plVar5[2];
        if (lVar11 == lVar7) {
          local_49 = 1;
          FUN_1801b2210(plVar5,0x40,CONCAT71((int7)(uStack_1c0 >> 8),1));
          lVar7 = plVar5[1];
          lVar11 = plVar5[2];
          uVar6 = param_4[1];
        }
        uVar12 = lVar11 - lVar7;
        if (uVar6 < (ulonglong)(lVar11 - lVar7)) {
          uVar12 = uVar6;
        }
        if (uVar9 <= uVar12) {
          uVar12 = uVar9;
        }
        memcpy((void *)(lVar7 + *plVar5),pvVar10,uVar12);
        uVar6 = param_4[1] - uVar12;
        if ((ulonglong)param_4[1] < uVar12) {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                        ,0x23,&DAT_18025f2a8);
        }
        lVar7 = *param_4;
        uStack_1c0 = *(longlong *)(lVar7 + 0x10) - *(longlong *)(lVar7 + 8);
        if (uStack_1c0 < uVar12) {
          local_49 = 1;
          local_1c8 = uVar12;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_1c8);
        }
        *(ulonglong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + uVar12;
        param_4[1] = uVar6;
        pvVar10 = (void *)((longlong)pvVar10 + uVar12);
        uVar9 = uVar9 - uVar12;
      } while (uVar9 != 0);
    }
    local_58 = local_58 + 0x1c;
    uStack_1b8 = local_78;
    uStack_1b4 = uStack_74;
    uStack_1b0 = uStack_70;
    uStack_1ac = uStack_6c;
    local_1c8._0_4_ = local_88;
    local_1c8._4_4_ = uStack_84;
    uStack_1c0 = CONCAT44(uStack_7c,uStack_80);
    FUN_1801b2a70();
    *(ulonglong *)(local_58 + 4) = CONCAT44(uStack_1b4,uStack_1b8);
    *(ulonglong *)(local_58 + 6) = CONCAT44(uStack_1ac,uStack_1b0);
    *local_58 = (undefined4)local_1c8;
    local_58[1] = local_1c8._4_4_;
    local_58[2] = (undefined4)uStack_1c0;
    local_58[3] = uStack_1c0._4_4_;
    local_1c8 = 0;
  }
  uVar6 = ((longlong *)*param_4)[1];
  uVar9 = uVar6 - local_b0;
  if ((((uVar9 >> 0x38 != 0 || (uVar9 & 0xff000000000000) != 0) || (uVar9 & 0xff0000000000) != 0) ||
      (uVar9 & 0xff00000000) != 0) || (uVar9 & 0xff000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)",0x3e,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024b5e8);
  }
  if ((0xfffffffffffffffc < uVar8) || (uVar6 < uVar8 + 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar8,uVar8 + 3,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_18024b618);
  }
  lVar7 = *(longlong *)*param_4;
  *(ushort *)(lVar7 + uVar8) = (ushort)(uVar9 >> 0x10) & 0xff | (ushort)uVar9 & 0xff00;
  *(char *)(lVar7 + 2 + uVar8) = (char)uVar9;
  if (local_1c8 != 0) {
    uVar6 = ((longlong *)*param_4)[1];
    uVar8 = uVar8 + 4;
    if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar8,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_18024b600);
    }
    pcVar1 = (char *)(*(longlong *)*param_4 + uVar8);
    *pcVar1 = *pcVar1 + -4;
  }
  param_1[4] = CONCAT44(uStack_1a4,uStack_1a8);
  param_1[2] = CONCAT44(uStack_1b4,uStack_1b8);
  param_1[3] = CONCAT44(uStack_1ac,uStack_1b0);
  *param_1 = local_1c8;
  param_1[1] = uStack_1c0;
  return param_1;
}


