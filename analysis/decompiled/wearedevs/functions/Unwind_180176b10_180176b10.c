/* Unwind@180176b10 @ 180176b10 */

void Unwind_180176b10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x136) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x128);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162d10(param_2 + 0xd0);
    }
  }
  return;
}


