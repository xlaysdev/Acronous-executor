/* FUN_18003fa50 @ 18003fa50 */

bool FUN_18003fa50(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((int)*param_1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  cVar2 = FUN_180095720();
  if (cVar2 != '\x02') {
    lVar1 = *param_1;
    if (lVar1 - 3U < 2) {
      *param_1 = 4;
      if ((int)lVar1 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                      ,0x28,&DAT_18020f220);
      }
    }
    else {
      FUN_180099cc0(param_1);
      *param_1 = 4;
    }
  }
  return cVar2 == '\x02';
}


