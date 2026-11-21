/* Unwind@18004d6d0 @ 18004d6d0 */

void Unwind_18004d6d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1428);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dbb0(param_2 + 0x13e0);
  }
  return;
}


