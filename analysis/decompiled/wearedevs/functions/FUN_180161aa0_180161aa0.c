/* FUN_180161aa0 @ 180161aa0 */

longlong FUN_180161aa0(longlong param_1,longlong param_2)

{
  if (7 < param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("invalid length field lengthC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-util-0.7.19\\src\\codec\\length_delimited.rs"
                  ,0x37,&DAT_18025fd88);
  }
  *(longlong *)(param_1 + 0x18) = param_2;
  return param_1;
}


