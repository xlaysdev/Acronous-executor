/* Unwind@180049ac0 @ 180049ac0 */

void Unwind_180049ac0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0xdb0) != -1) {
    plVar1 = *(longlong **)(param_2 + 0xd98);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xdb0),0x98,8);
    }
  }
  *(undefined1 *)(param_2 + 0xdca) = 1;
  *(undefined1 *)(param_2 + 0xdc9) = 1;
  return;
}


