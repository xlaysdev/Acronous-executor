/* thunk_FUN_180160b10 @ 1801619e0 */

longlong thunk_FUN_180160b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  lStack_30 = 0;
  uStack_38 = param_1;
  cVar1 = FUN_1801ef150(&uStack_38,&PTR_FUN_18025f510,param_2,param_3);
  if (cVar1 == '\0') {
    if (((uint)lStack_30 & 3) != 1) {
      return 0;
    }
    lStack_28 = lStack_30 + -1;
    uStack_20 = *(undefined8 *)(lStack_30 + -1);
    puStack_18 = *(undefined8 **)(lStack_30 + 7);
    if ((code *)*puStack_18 != (code *)0x0) {
      (*(code *)*puStack_18)(uStack_20);
    }
    if (puStack_18[1] != 0) {
      thunk_FUN_1801d3330(uStack_20,puStack_18[1],puStack_18[2]);
    }
    thunk_FUN_1801d3330(lStack_28,0x18,8);
    return 0;
  }
  if (lStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("a formatting trait implementation returned an error when the underlying stream did notC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\io\\mod.rs"
                  ,0xad,&DAT_18025f608);
  }
  return lStack_30;
}


