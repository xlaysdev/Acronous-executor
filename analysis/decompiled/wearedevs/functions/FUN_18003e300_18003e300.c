/* FUN_18003e300 @ 18003e300 */

longlong FUN_18003e300(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  FUN_18000b470(lVar4 + 0x218);
  FUN_18003ae60(lVar4 + 0x10);
  plVar1 = *(longlong **)(lVar4 + 0x2b0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(lVar4 + 0x2b0);
  }
  lVar2 = *(longlong *)(lVar4 + 0x278);
  lVar3 = -lVar2;
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    lVar3 = thunk_FUN_1801d3330(*(undefined8 *)(lVar4 + 0x280),lVar2,1);
  }
  if (lVar4 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar4 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = thunk_FUN_1801d3330(lVar4,0x2c0,8);
      return lVar4;
    }
  }
  return lVar3;
}


