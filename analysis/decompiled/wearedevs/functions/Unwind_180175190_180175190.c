/* Unwind@180175190 @ 180175190 */

void Unwind_180175190(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x117) = 0;
    FUN_1801e3850(param_2 + 0xd8);
  }
  *(undefined1 *)(param_2 + 0x117) = 0;
  return;
}


