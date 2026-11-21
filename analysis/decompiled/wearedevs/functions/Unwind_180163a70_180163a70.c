/* Unwind@180163a70 @ 180163a70 */

void Unwind_180163a70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x30) != -1) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),0x28,8);
    }
  }
  return;
}


