/* FUN_18003d670 @ 18003d670 */

void FUN_18003d670(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_38;
  
  lVar2 = *param_1;
  lVar5 = *(longlong *)(lVar2 + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  local_38 = 0;
  lVar4 = lVar5;
  while (lVar3 != local_38) {
    local_38 = local_38 + 1;
    FUN_18009a3a0(lVar4);
    lVar4 = lVar4 + 0x1d0;
  }
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar2 + 0x18),*(longlong *)(lVar2 + 0x10) * 0x1d0,8,param_4,
                        lVar5);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x28,8);
      return;
    }
  }
  return;
}


