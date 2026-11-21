/* Unwind@1800c1f60 @ 1800c1f60 */

void Unwind_1800c1f60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x25f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x240);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d7f0(param_2 + 0x240);
    }
  }
  return;
}


