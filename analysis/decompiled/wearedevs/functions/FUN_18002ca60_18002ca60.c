/* FUN_18002ca60 @ 18002ca60 */

void FUN_18002ca60(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 2;
  if (*(longlong *)(param_1 + 8) != 2) {
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801635e0();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162f80();
      }
    }
  }
  return;
}


