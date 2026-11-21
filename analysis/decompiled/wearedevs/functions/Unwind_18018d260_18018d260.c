/* Unwind@18018d260 @ 18018d260 */

void Unwind_18018d260(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x57) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x38);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187b30(param_2 + 0x38);
    }
  }
  return;
}


