/* FUN_180094de0 @ 180094de0 */

bool FUN_180094de0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  
  if ((int)*param_1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  cVar3 = FUN_1800953c0();
  if (cVar3 != '\x02') {
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
      FUN_1800996e0(param_1);
      lVar1 = param_1[0x4d];
      if (lVar1 != 0) {
        uVar4 = FUN_1801775a0(lVar1 + 0x30);
        if ((uVar4 & 5) == 1) {
          (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))(*(undefined8 *)(lVar1 + 0x28));
        }
        plVar2 = (longlong *)param_1[0x4d];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_18003de40();
          }
        }
      }
      *param_1 = 4;
    }
  }
  return cVar3 == '\x02';
}


