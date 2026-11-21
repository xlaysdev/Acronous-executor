/* Unwind@18003b0e0 @ 18003b0e0 */

void Unwind_18003b0e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e0f0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


