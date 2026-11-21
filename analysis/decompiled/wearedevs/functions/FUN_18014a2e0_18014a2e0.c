/* FUN_18014a2e0 @ 18014a2e0 */

ulonglong FUN_18014a2e0(byte *param_1,undefined8 param_2)

{
  if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !id.is_zero()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\peer.rs"
                  ,0x1f,&DAT_180254ba0);
  }
  return CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 ^ *param_1) & 0xffffff01;
}


