/* Unwind@180169e10 @ 180169e10 */

void Unwind_180169e10(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  plVar1 = *(longlong **)(param_2 + 0x70);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801635e0(param_2 + 0x98);
  }
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined1 *)(param_2 + 0x6d) = 0;
  *(undefined1 *)(param_2 + 0x6e) = *(undefined1 *)(param_2 + 0x6f);
  return;
}


