/* Unwind@180170a20 @ 180170a20 */

void Unwind_180170a20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xbf) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0xa8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801639b0(param_2 + 0xa8);
    }
    FUN_18016f640(param_2 + 0xb0);
  }
  return;
}


