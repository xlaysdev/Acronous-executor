/* Unwind@180091410 @ 180091410 */

void Unwind_180091410(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x298);
  if (1 < lVar1 + 1U) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0xe8,8);
    }
  }
  plVar2 = *(longlong **)(param_2 + 0x2b0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cf20(param_2 + 0x2b0);
    }
  }
  return;
}


