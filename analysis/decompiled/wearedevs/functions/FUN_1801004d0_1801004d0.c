/* FUN_1801004d0 @ 1801004d0 */

undefined2 *
FUN_1801004d0(undefined2 *param_1,ulonglong param_2,uint param_3,uint param_4,float param_5)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: ttl >= Duration::from_secs(1)C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tower-0.5.3\\src\\retry\\budget\\tps_budget.rs"
                  ,0x2f,&DAT_1802394e8);
  }
  bVar2 = param_2 < 0x3d;
  if (param_2 == 0x3c) {
    bVar2 = param_3 == 0;
  }
  if (!bVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_180239500,0x30,&DAT_180239530);
  }
  if (param_5 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: retry_percent >= 0.0",0x26,&DAT_180239570);
  }
  if (1000.0 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: retry_percent <= 1000.0",0x29,&DAT_1802395b8);
  }
  if (0x7ffffffe < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: min_per_sec < i32::MAX as u32",0x2f,&DAT_180239600);
  }
  if ((param_5 != 0.0) || (NAN(param_5))) {
    if (param_5 <= 1.0) {
      param_5 = 1.0 / param_5;
      uVar3 = 0x7fffffffffffffff;
      if (param_5 <= 9.2233715e+18) {
        uVar3 = (longlong)param_5;
      }
      uVar10 = 0;
      if (!NAN(param_5)) {
        uVar10 = uVar3;
      }
      uVar11 = 1;
    }
    else {
      param_5 = 1000.0 / param_5;
      uVar3 = 0x7fffffffffffffff;
      if (param_5 <= 9.2233715e+18) {
        uVar3 = (longlong)param_5;
      }
      uVar10 = 0;
      if (!NAN(param_5)) {
        uVar10 = uVar3;
      }
      uVar11 = 1000;
    }
  }
  else {
    uVar10 = 1;
    uVar11 = 0;
  }
  uVar3 = param_4 * param_2;
  if (SEXT816((longlong)uVar3) == SEXT816((longlong)(ulonglong)param_4) * SEXT816((longlong)param_2)
     ) {
    lVar9 = uVar3 * uVar10;
    if (SEXT816(lVar9) == SEXT816((longlong)uVar3) * SEXT816((longlong)uVar10)) goto LAB_1801005e8;
  }
  else {
    uVar3 = 0x7fffffffffffffff - ((longlong)param_2 >> 0x3f);
    lVar9 = uVar3 * uVar10;
    if (SEXT816(lVar9) == SEXT816((longlong)uVar3) * SEXT816((longlong)uVar10)) goto LAB_1801005e8;
  }
  lVar9 = 0x7fffffffffffffff - ((longlong)(uVar3 ^ uVar10) >> 0x3f);
LAB_1801005e8:
  FUN_180027490();
  uVar7 = 8;
  lVar4 = thunk_FUN_1801d32d0(0x50);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x50);
  }
  local_68 = 10;
  local_58 = 0;
  uVar8 = 0;
  local_60 = lVar4;
  while( true ) {
    uVar3 = local_58;
    uVar5 = (undefined4)uVar7;
    if (9 < uVar8) break;
    if (local_58 == local_68) {
      local_49 = 1;
      FUN_1801f8e60(&local_68);
      lVar4 = local_60;
    }
    *(undefined8 *)(lVar4 + uVar3 * 8) = 0;
    local_58 = uVar3 + 1;
    uVar8 = uVar8 + 1;
  }
  local_49 = 1;
  uVar7 = thunk_FUN_1801df8c0();
  if (uVar3 < local_68) {
    if (uVar3 == 0) {
      thunk_FUN_1801d3330(lVar4,local_68 << 3,8);
      lVar4 = 8;
    }
    else {
      lVar4 = thunk_FUN_1801d3370(lVar4,local_68 << 3,8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,uVar3 * 8);
      }
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulonglong)(param_3 % 10) | (param_2 % 10) * 1000000000;
  uVar6 = SUB164(auVar1 * ZEXT816(0x199999999999999a),8) + param_3 / 10;
  uVar8 = 0;
  if (uVar6 < 1000000000) {
    uVar8 = uVar6;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(longlong *)(param_1 + 0x18) = lVar9;
  *(longlong *)(param_1 + 0x10) = lVar4;
  *(ulonglong *)(param_1 + 0x14) = uVar3;
  *(ulonglong *)(param_1 + 0x28) = (param_2 / 10 + 1) - (ulonglong)(uVar6 < 1000000000);
  *(uint *)(param_1 + 0x2c) = uVar8;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  *(ulonglong *)(param_1 + 0x24) = uVar10;
  return param_1;
}


