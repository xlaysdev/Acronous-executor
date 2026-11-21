/* Unwind@18007c770 @ 18007c770 */

void Unwind_18007c770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(*(longlong *)(param_2 + 0x20) + 8);
  }
  return;
}


