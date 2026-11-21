/* FUN_180160a20 @ 180160a20 */

void FUN_180160a20(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 2;
  if ((*(longlong *)(param_1 + 8) != 2) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x10);
    }
  }
  return;
}


