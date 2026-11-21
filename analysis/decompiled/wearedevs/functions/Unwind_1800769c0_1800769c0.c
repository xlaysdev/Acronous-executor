/* Unwind@1800769c0 @ 1800769c0 */

void Unwind_1800769c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003ce90(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


