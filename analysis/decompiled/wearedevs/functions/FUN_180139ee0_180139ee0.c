/* FUN_180139ee0 @ 180139ee0 */

ulonglong FUN_180139ee0(longlong param_1,byte param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !id.is_zero()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\peer.rs"
                  ,0x1f,&DAT_180254ba0);
  }
  if (((param_2 ^ (byte)param_3) & 1) == 0) {
    uVar1 = FUN_180157f80(param_1,param_3);
    return uVar1;
  }
  return (ulonglong)(~*(byte *)(param_1 + 0xa0) & *(uint *)(param_1 + 0xa4) <= param_3);
}


