/* Unwind@1801625e0 @ 1801625e0 */

void Unwind_1801625e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163890(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}


