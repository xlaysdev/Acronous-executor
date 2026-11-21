/* Unwind@180044980 @ 180044980 */

void Unwind_180044980(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x2b0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 0x30) + 0x2b0);
  }
  return;
}


