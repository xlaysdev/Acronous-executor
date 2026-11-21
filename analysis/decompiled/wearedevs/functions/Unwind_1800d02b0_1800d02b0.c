/* Unwind@1800d02b0 @ 1800d02b0 */

void Unwind_1800d02b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x858) + 0x3e2) == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x820);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dca0(param_2 + 0x820);
  }
  return;
}


