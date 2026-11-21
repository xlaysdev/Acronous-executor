/* Unwind@180182060 @ 180182060 */

void Unwind_180182060(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x40) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x48);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801639b0(param_2 + 0x48);
    }
  }
  return;
}


