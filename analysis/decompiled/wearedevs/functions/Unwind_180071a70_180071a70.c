/* Unwind@180071a70 @ 180071a70 */

void Unwind_180071a70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x1c7) == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x1a0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0x1a0);
  }
  return;
}


