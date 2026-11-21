/* FUN_1800e5000 @ 1800e5000 */

longlong * FUN_1800e5000(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_2 = 4;
  if (lVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("Ready polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\ready.rs"
                  ,0x1d,&DAT_180215e18);
  }
  memcpy(param_1 + 1,param_2 + 1,0x90);
  *param_1 = lVar1;
  return param_1;
}


