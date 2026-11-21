/* FUN_1800953c0 @ 1800953c0 */

undefined8 FUN_1800953c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if ((int)*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  uVar2 = FUN_1800a36b0();
  uVar3 = 2;
  if ((uVar2 & 1) == 0) {
    if (*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                    ,0x28,&DAT_18020f220);
    }
    lVar1 = param_1[0x4d];
    FUN_1800996e0(param_1);
    *param_1 = 3;
    uVar3 = FUN_1800915c0(lVar1,param_2);
  }
  return uVar3;
}


