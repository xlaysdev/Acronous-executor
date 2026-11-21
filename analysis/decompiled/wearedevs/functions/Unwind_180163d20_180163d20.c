/* Unwind@180163d20 @ 180163d20 */

void Unwind_180163d20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (**(longlong **)(param_2 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50),
                        **(longlong **)(param_2 + 0x20) << 4,8);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162d10(*(longlong *)(param_2 + 0x28) + 0x98);
    }
  }
  return;
}


