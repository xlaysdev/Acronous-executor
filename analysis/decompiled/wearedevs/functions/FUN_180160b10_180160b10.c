/* FUN_180160b10 @ 180160b10 */

longlong FUN_180160b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  local_38 = param_1;
  cVar1 = FUN_1801ef150(&local_38,&PTR_FUN_18025f510,param_2,param_3);
  if (cVar1 == '\0') {
    if (((uint)local_30 & 3) != 1) {
      return 0;
    }
    local_28 = local_30 + -1;
    local_20 = *(undefined8 *)(local_30 + -1);
    local_18 = *(undefined8 **)(local_30 + 7);
    if ((code *)*local_18 != (code *)0x0) {
      (*(code *)*local_18)(local_20);
    }
    if (local_18[1] != 0) {
      thunk_FUN_1801d3330(local_20,local_18[1],local_18[2]);
    }
    thunk_FUN_1801d3330(local_28,0x18,8);
    return 0;
  }
  if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("a formatting trait implementation returned an error when the underlying stream did notC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\io\\mod.rs"
                  ,0xad,&DAT_18025f608);
  }
  return local_30;
}


