/* Unwind@18009c130 @ 18009c130 */

void Unwind_18009c130(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dca0(param_2 + 0x38);
  }
  return;
}


