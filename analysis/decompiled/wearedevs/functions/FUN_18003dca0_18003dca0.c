/* FUN_18003dca0 @ 18003dca0 */

void FUN_18003dca0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 != -1) {
    lVar3 = param_1[1];
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((*plVar1 == 0) && (uVar4 = lVar3 + 0x17U & 0xfffffffffffffff8, uVar4 != 0)) {
      thunk_FUN_1801d3330(lVar2,uVar4,8);
      return;
    }
  }
  return;
}


