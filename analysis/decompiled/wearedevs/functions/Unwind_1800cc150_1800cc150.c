/* Unwind@1800cc150 @ 1800cc150 */

void Unwind_1800cc150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xa8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(param_2 + 0x48);
  }
  FUN_180042b50(param_2 + 0x50);
  return;
}


