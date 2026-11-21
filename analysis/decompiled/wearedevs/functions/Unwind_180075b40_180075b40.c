/* Unwind@180075b40 @ 180075b40 */

void Unwind_180075b40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cda0(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


