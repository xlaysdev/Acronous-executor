/* Unwind@18003ac90 @ 18003ac90 */

void Unwind_18003ac90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003ce90(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


