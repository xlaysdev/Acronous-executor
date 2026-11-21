/* FUN_18010d640 @ 18010d640 */

longlong * FUN_18010d640(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  lVar2 = *plVar1;
  *plVar1 = 4;
  if (lVar2 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("Ready polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\ready.rs"
                  ,0x1d,&DAT_18023e3b8);
  }
  memcpy(param_1 + 1,plVar1 + 1,0x90);
  *param_1 = lVar2;
  return param_1;
}


