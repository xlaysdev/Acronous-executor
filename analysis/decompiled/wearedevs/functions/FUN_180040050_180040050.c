/* FUN_180040050 @ 180040050 */

longlong * FUN_180040050(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_2[1];
  lVar2 = *plVar1;
  while (lVar2 == 0) {
    if ((longlong *)*param_2 == plVar1) {
      *param_1 = 0;
      return param_1;
    }
    SwitchToThread();
    plVar1 = (longlong *)param_2[1];
    lVar2 = *plVar1;
  }
  param_2[1] = lVar2;
  if (plVar1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: (*tail).value.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\mpsc\\queue.rs"
                  ,0x29,&DAT_180207fc0);
  }
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: (*next).value.is_some()",0x29,&DAT_180208008);
  }
  lVar4 = *(longlong *)(lVar2 + 0x10);
  lVar5 = *(longlong *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 8) = 0;
  if (plVar1[2] != 0 && plVar1[1] != 0) {
    thunk_FUN_1801d3330(plVar1[1],plVar1[2],1);
  }
  thunk_FUN_1801d3330(plVar1,0x20,8);
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  return param_1;
}


