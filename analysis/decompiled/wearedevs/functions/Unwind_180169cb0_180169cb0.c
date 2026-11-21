/* Unwind@180169cb0 @ 180169cb0 */

void Unwind_180169cb0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  plVar1 = *(longlong **)(param_2 + 0x280);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3970(param_2 + 0x280);
  }
  *(undefined1 *)(param_2 + 0x6c) = 1;
  *(undefined1 *)(param_2 + 0x6d) = 1;
  *(undefined1 *)(param_2 + 0x6e) = 1;
  return;
}


