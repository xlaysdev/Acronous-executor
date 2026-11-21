/* FUN_18010a580 @ 18010a580 */

longlong FUN_18010a580(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)param_1[1];
  lVar2 = *plVar1;
  while (lVar2 == 0) {
    if ((longlong *)*param_1 == plVar1) {
      return 0;
    }
    SwitchToThread();
    plVar1 = (longlong *)param_1[1];
    lVar2 = *plVar1;
  }
  param_1[1] = lVar2;
  if (plVar1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: (*tail).value.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\mpsc\\queue.rs"
                  ,0x29,&DAT_18023bc28);
  }
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: (*next).value.is_some()",0x29,&DAT_18023bc70);
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  plVar4 = (longlong *)plVar1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cd00();
    }
  }
  thunk_FUN_1801d3330(plVar1,0x10,8);
  return lVar3;
}


