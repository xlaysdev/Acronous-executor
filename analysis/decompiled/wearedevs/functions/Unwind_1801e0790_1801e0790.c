/* Unwind@1801e0790 @ 1801e0790 */

void Unwind_1801e0790(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      *(undefined1 *)(param_2 + 0x77) = 0;
      FUN_1801e38e0(param_2 + 0x68);
    }
  }
  *(undefined1 *)(param_2 + 0x77) = 0;
  return;
}


