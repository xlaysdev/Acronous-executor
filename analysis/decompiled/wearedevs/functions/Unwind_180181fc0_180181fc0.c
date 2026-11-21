/* Unwind@180181fc0 @ 180181fc0 */

void Unwind_180181fc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3970(param_2 + 0x30);
  }
  *(undefined1 *)(param_2 + 0x57) = 1;
  return;
}


