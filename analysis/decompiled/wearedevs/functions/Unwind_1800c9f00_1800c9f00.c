/* Unwind@1800c9f00 @ 1800c9f00 */

void Unwind_1800c9f00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 != -1) {
    plVar2 = *(longlong **)(param_2 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x98,8);
    }
  }
  return;
}


