/* Unwind@180072ac0 @ 180072ac0 */

void Unwind_180072ac0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x188);
  if (1 < lVar2 + 1U) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0xe8,8);
    }
  }
  FUN_1800758e0(param_2 + 0x150);
  return;
}


