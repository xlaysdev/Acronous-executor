/* FUN_1801813f0 @ 1801813f0 */

void FUN_1801813f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),lVar2,1);
  }
  FUN_1801818b0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa8),*(longlong *)(param_1 + 0xb0) * 0x18,8);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x110) << 3,8);
  }
  lVar2 = *(longlong *)(param_1 + 0x150);
  lVar3 = *(longlong *)(param_1 + 0x158);
  local_40 = 0;
  while (lVar3 != local_40) {
    lVar1 = local_40 * 8;
    local_40 = local_40 + 1;
    FUN_18016bc40(*(undefined8 *)(lVar2 + lVar1));
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    thunk_FUN_1801d3330(lVar2,*(longlong *)(param_1 + 0x148) << 3,8);
  }
  FUN_180167aa0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xe0),*(longlong *)(param_1 + 0xe8) << 7,0x80);
  }
  FUN_180167c00(param_1 + 0x160);
  plVar4 = *(longlong **)(param_1 + 0x200);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_180163bb0(param_1 + 0x200);
  }
  plVar4 = *(longlong **)(param_1 + 0x208);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(param_1 + 0x208);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(param_1 + 0x218);
      return;
    }
  }
  return;
}


