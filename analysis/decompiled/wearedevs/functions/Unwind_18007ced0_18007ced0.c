/* Unwind@18007ced0 @ 18007ced0 */

void Unwind_18007ced0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x18);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e050(*(longlong *)(param_2 + 0x30) + 0x18);
  }
  return;
}


