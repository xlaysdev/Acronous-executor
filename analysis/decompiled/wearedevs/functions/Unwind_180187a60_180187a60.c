/* Unwind@180187a60 @ 180187a60 */

void Unwind_180187a60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(*(undefined8 *)(param_2 + 0x20));
  }
  FUN_180187460(*(longlong *)(param_2 + 0x28) + 0x40);
  return;
}


