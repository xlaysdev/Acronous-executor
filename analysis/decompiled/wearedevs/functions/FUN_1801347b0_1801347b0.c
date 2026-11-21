/* FUN_1801347b0 @ 1801347b0 */

undefined4 *
FUN_1801347b0(undefined4 *param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong _Size;
  void *local_d8;
  ulonglong local_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = param_2[8];
  local_8c = 0x904;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_a8 = param_2[4];
  uStack_a4 = param_2[5];
  uStack_a0 = param_2[6];
  uStack_9c = param_2[7];
  uVar5 = *(ulonglong *)(*param_3 + 8);
  local_49 = 1;
  local_90 = uVar7;
  FUN_18012e390(&local_90,0);
  local_58 = *(ulonglong *)(*param_3 + 8);
  uVar8 = CONCAT44(uStack_ac,uStack_b0);
  uVar3 = param_3[1];
  uVar6 = local_58 ^ 0x7fffffffffffffff;
  if (uVar3 < (local_58 ^ 0x7fffffffffffffff)) {
    uVar6 = uVar3;
  }
  if (uVar6 < uVar8) {
    local_49 = 1;
    FUN_1801b2630(&local_d8,&local_b8);
    uVar3 = param_3[1];
    uStack_80 = *(ulonglong *)(*param_3 + 8) ^ 0x7fffffffffffffff;
    if (uVar3 < uStack_80) {
      uStack_80 = uVar3;
    }
    if (uStack_80 < local_d0) {
      local_88 = local_d0;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_88);
    }
    local_5c = uVar7;
    if (local_d0 != 0) {
      uVar8 = local_d0;
      pvVar9 = local_d8;
      do {
        plVar2 = (longlong *)*param_3;
        lVar4 = plVar2[1];
        lVar10 = plVar2[2];
        if (lVar10 == lVar4) {
          FUN_1801b2210(plVar2,0x40,1);
          lVar4 = plVar2[1];
          lVar10 = plVar2[2];
          uVar3 = param_3[1];
        }
        uVar6 = lVar10 - lVar4;
        if (uVar3 < (ulonglong)(lVar10 - lVar4)) {
          uVar6 = uVar3;
        }
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        memcpy((void *)(lVar4 + *plVar2),pvVar9,uVar6);
        uVar3 = param_3[1] - uVar6;
        if ((ulonglong)param_3[1] < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                        ,0x23,&DAT_18025f2a8);
        }
        lVar4 = *param_3;
        uStack_80 = *(longlong *)(lVar4 + 0x10) - *(longlong *)(lVar4 + 8);
        if (uStack_80 < uVar6) {
          local_88 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_88);
        }
        *(ulonglong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + uVar6;
        param_3[1] = uVar3;
        pvVar9 = (void *)((longlong)pvVar9 + uVar6);
        uVar8 = uVar8 - uVar6;
      } while (uVar8 != 0);
    }
    local_78 = local_a8;
    uStack_74 = uStack_a4;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    local_88 = CONCAT44(uStack_b4,local_b8);
    uStack_80 = CONCAT44(uStack_ac,uStack_b0);
    local_68 = local_5c;
    local_49 = 0;
    FUN_1801b2a70(&local_d8);
    uVar7 = 0;
  }
  else {
    if (uVar8 != 0) {
      pvVar9 = (void *)CONCAT44(uStack_b4,local_b8);
      do {
        plVar2 = (longlong *)*param_3;
        lVar4 = plVar2[1];
        lVar10 = plVar2[2];
        if (lVar10 == lVar4) {
          local_49 = 1;
          FUN_1801b2210(plVar2,0x40,CONCAT71((int7)(uVar6 >> 8),1));
          lVar4 = plVar2[1];
          lVar10 = plVar2[2];
          uVar3 = param_3[1];
        }
        _Size = lVar10 - lVar4;
        if (uVar3 < (ulonglong)(lVar10 - lVar4)) {
          _Size = uVar3;
        }
        if (uVar8 <= _Size) {
          _Size = uVar8;
        }
        memcpy((void *)(lVar4 + *plVar2),pvVar9,_Size);
        uVar3 = param_3[1] - _Size;
        if ((ulonglong)param_3[1] < _Size) {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: cnt <= self.limitC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\limit.rs"
                        ,0x23,&DAT_18025f2a8);
        }
        lVar4 = *param_3;
        uVar6 = *(longlong *)(lVar4 + 0x10) - *(longlong *)(lVar4 + 8);
        if (uVar6 < _Size) {
          local_49 = 1;
          local_88 = _Size;
          uStack_80 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_88);
        }
        *(ulonglong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + _Size;
        param_3[1] = uVar3;
        pvVar9 = (void *)((longlong)pvVar9 + _Size);
        uVar8 = uVar8 - _Size;
      } while (uVar8 != 0);
    }
    local_88 = 0;
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  }
  uVar3 = ((longlong *)*param_3)[1];
  uVar8 = uVar3 - local_58;
  if ((((uVar8 >> 0x38 != 0 || (uVar8 & 0xff000000000000) != 0) || (uVar8 & 0xff0000000000) != 0) ||
      (uVar8 & 0xff00000000) != 0) || (uVar8 & 0xff000000) != 0) {
    local_58 = CONCAT44(local_58._4_4_,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)",0x3e,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024b5e8);
  }
  if ((0xfffffffffffffffc < uVar5) || (uVar3 < uVar5 + 3)) {
    local_58 = CONCAT44(local_58._4_4_,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar5,uVar5 + 3,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18024b618);
  }
  lVar4 = *(longlong *)*param_3;
  *(ushort *)(lVar4 + uVar5) = (ushort)(uVar8 >> 0x10) & 0xff | (ushort)uVar8 & 0xff00;
  *(char *)(lVar4 + 2 + uVar5) = (char)uVar8;
  if (local_88 != 0) {
    uVar3 = ((longlong *)*param_3)[1];
    uVar5 = uVar5 + 4;
    if (uVar3 <= uVar5) {
      local_58 = CONCAT44(local_58._4_4_,uVar7);
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar5,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18024b600);
    }
    pcVar1 = (char *)(*(longlong *)*param_3 + uVar5);
    *pcVar1 = *pcVar1 + -4;
  }
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_64,local_68);
  param_1[4] = local_78;
  param_1[5] = uStack_74;
  param_1[6] = uStack_70;
  param_1[7] = uStack_6c;
  *param_1 = (undefined4)local_88;
  param_1[1] = local_88._4_4_;
  param_1[2] = (undefined4)uStack_80;
  param_1[3] = uStack_80._4_4_;
  if ((char)uVar7 != '\0') {
    FUN_1801b2a70(&local_b8);
  }
  return param_1;
}


