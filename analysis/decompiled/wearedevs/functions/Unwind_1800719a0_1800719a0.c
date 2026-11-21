/* Unwind@1800719a0 @ 1800719a0 */

void Unwind_1800719a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x1c6) == '\0') {
    *(undefined1 *)(param_2 + 0x1c7) = 0;
    return;
  }
  plVar1 = *(longlong **)(param_2 + 400);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_2 + 400);
    }
  }
  *(undefined1 *)(param_2 + 0x1c7) = 1;
  return;
}


