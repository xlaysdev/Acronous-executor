/* Unwind@18017dbe0 @ 18017dbe0 */

void Unwind_18017dbe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(*(longlong *)(param_2 + 0x20) + 0x20);
  }
  return;
}


