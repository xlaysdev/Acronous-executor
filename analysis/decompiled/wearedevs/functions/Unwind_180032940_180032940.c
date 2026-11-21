/* Unwind@180032940 @ 180032940 */

void Unwind_180032940(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x170);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3970(param_2 + 0x120);
  }
  *(undefined1 *)(param_2 + 0x17f) = 1;
  return;
}


