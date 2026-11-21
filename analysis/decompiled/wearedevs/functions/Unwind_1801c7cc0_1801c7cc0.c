/* Unwind@1801c7cc0 @ 1801c7cc0 */

void Unwind_1801c7cc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x194) != '\0') {
    FUN_1801c8270(param_2 + 0x20);
  }
  plVar1 = *(longlong **)(param_2 + 0x178);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(param_2 + 0x178);
  }
  return;
}


