/* Unwind@180187ae0 @ 180187ae0 */

void Unwind_180187ae0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  FUN_180187600(lVar2 + 0x18);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x70,8);
    }
  }
  return;
}


