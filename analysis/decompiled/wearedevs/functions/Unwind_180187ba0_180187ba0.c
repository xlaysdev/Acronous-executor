/* Unwind@180187ba0 @ 180187ba0 */

void Unwind_180187ba0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(*(longlong *)(param_2 + 0x28) + 0x20);
  }
  if (*(longlong *)(param_2 + 0x28) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x78,8);
    }
  }
  return;
}


