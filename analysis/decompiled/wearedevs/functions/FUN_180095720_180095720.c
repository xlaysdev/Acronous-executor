/* FUN_180095720 @ 180095720 */

undefined1 FUN_180095720(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if ((int)*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  FUN_18006bc60(&local_48,param_1,param_2);
  if (local_48 == 3) {
    return 2;
  }
  if ((int)local_48 != 2) {
    if ((local_48 & 1) != 0) {
      local_38 = local_40;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("internal error: entered unreachable code: http2 cannot upgradeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\client\\conn\\http2.rs"
                    ,0x7d,&DAT_180207e68);
    }
    local_40 = 0;
  }
  local_30 = *param_1;
  local_20 = local_40;
  if (local_30 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                  ,0x28,&DAT_18020f220);
  }
  local_28 = param_1;
  FUN_180099cc0(param_1);
  lVar1 = local_20;
  *local_28 = 3;
  if (local_20 != 0) {
    FUN_1800e4840(local_20);
  }
  return lVar1 != 0;
}


