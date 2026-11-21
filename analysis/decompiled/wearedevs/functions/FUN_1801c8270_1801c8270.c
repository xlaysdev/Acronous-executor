/* FUN_1801c8270 @ 1801c8270 */

void FUN_1801c8270(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1801c54b0(param_1 + 0x28);
  FUN_18017dcf0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(param_1 + 0x20);
    return;
  }
  return;
}


