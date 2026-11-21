/* FUN_180168680 @ 180168680 */

void FUN_180168680(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x2d8),lVar1,1);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x170),*(longlong *)(param_1 + 0x178) * 0x18,8);
  }
  FUN_180167aa0(param_1 + 0x100);
  FUN_180167c00(param_1 + 0x220);
  plVar2 = *(longlong **)(param_1 + 0x2c8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180163bb0(param_1 + 0x2c8);
  }
  plVar2 = *(longlong **)(param_1 + 0x200);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x200);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x210);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x210);
      return;
    }
  }
  return;
}


