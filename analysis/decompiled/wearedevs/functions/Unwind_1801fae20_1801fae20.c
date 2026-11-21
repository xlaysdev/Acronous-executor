/* Unwind@1801fae20 @ 1801fae20 */

void Unwind_1801fae20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x50) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x70);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_2 + 0x60);
    }
  }
  return;
}


