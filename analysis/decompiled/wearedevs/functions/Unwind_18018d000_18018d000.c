/* Unwind@18018d000 @ 18018d000 */

void Unwind_18018d000(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x4f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x40);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187b30(param_2 + 0x40);
    }
  }
  return;
}


