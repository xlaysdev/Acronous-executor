/* Unwind@1801c5f20 @ 1801c5f20 */

void Unwind_1801c5f20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x10f) = 0;
    FUN_1801e3850(param_2 + 0x88);
  }
  *(undefined1 *)(param_2 + 0x10f) = 0;
  return;
}


