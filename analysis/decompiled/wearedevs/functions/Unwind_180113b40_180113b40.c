/* Unwind@180113b40 @ 180113b40 */

void Unwind_180113b40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x60) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x60) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x60),0x20,8);
    }
  }
  return;
}


