/* Unwind@1801c4140 @ 1801c4140 */

void Unwind_1801c4140(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  if (*(char *)(param_2 + 0x42) == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x60);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801c68a0(param_2 + 0x250);
  }
  plVar1 = *(longlong **)(param_2 + 0x150);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801c68a0(param_2 + 0x150);
  }
  return;
}


