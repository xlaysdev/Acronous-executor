/* Unwind@1801d7010 @ 1801d7010 */

void Unwind_1801d7010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x28) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x28);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e37a0(param_2 + 0x20);
    }
  }
  return;
}


