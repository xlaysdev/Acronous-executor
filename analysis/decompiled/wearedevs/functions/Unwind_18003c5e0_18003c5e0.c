/* Unwind@18003c5e0 @ 18003c5e0 */

void Unwind_18003c5e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003df30(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


