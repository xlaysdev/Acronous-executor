/* Unwind@180162cd0 @ 180162cd0 */

void Unwind_180162cd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x28) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x40,8);
    }
  }
  return;
}


