/* Unwind@1800f13a0 @ 1800f13a0 */

void Unwind_1800f13a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x4b8) != -1) {
    plVar1 = *(longlong **)(param_2 + 0x4b0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x4b8),0x98,8);
    }
  }
  return;
}


