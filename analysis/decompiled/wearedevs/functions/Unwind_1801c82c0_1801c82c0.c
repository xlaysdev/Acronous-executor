/* Unwind@1801c82c0 @ 1801c82c0 */

void Unwind_1801c82c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(*(longlong *)(param_2 + 0x20) + 0x20);
  }
  return;
}


