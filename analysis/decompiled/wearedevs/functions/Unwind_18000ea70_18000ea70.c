/* Unwind@18000ea70 @ 18000ea70 */

void Unwind_18000ea70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x428) + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e300(*(longlong *)(param_2 + 0x428) + 0x30);
  }
  return;
}


