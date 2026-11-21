/* Unwind@1800779c0 @ 1800779c0 */

void Unwind_1800779c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d580(*(undefined8 *)(param_2 + 0x28));
    }
  }
  return;
}


