/* Unwind@1801823e0 @ 1801823e0 */

void Unwind_1801823e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801638e0(param_2 + 0x48);
  }
  return;
}


