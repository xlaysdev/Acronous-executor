/* FUN_1800448f0 @ 1800448f0 */

longlong FUN_1800448f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1800430f0(param_1 + 0x218);
  FUN_180042110(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(param_1 + 0x2b0);
  }
  lVar2 = *(longlong *)(param_1 + 0x278);
  if ((SBORROW8(0,lVar2)) || (lVar2 == 0)) {
    return -lVar2;
  }
  lVar2 = thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x280),lVar2,1);
  return lVar2;
}


