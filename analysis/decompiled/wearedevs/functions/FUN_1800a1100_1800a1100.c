/* FUN_1800a1100 @ 1800a1100 */

longlong * FUN_1800a1100(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  *param_2 = 2;
  if (lVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("`Ready` polled after completionC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\core\\src\\future\\ready.rs"
                  ,0x1f,&DAT_180210068);
  }
  lVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar2;
  *param_1 = lVar1;
  return param_1;
}


