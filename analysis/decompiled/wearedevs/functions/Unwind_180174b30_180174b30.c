/* Unwind@180174b30 @ 180174b30 */

void Unwind_180174b30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_180162290(param_2 + 0x1b8);
  if (*(longlong *)(param_2 + 0x200) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x200);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162d10(param_2 + 0x1f0);
    }
  }
  FUN_1801740b0(param_2 + 0x60);
  return;
}


