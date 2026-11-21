/* Unwind@18008dc90 @ 18008dc90 */

void Unwind_18008dc90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70(param_2 + 0x60);
  }
  return;
}


