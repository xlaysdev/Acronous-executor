/* Unwind@18003c460 @ 18003c460 */

void Unwind_18003c460(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cda0(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


