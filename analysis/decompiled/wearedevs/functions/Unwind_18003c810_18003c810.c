/* Unwind@18003c810 @ 18003c810 */

void Unwind_18003c810(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180113b80(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


