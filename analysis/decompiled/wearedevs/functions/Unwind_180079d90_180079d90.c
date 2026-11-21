/* Unwind@180079d90 @ 180079d90 */

void Unwind_180079d90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(*(undefined8 *)(param_2 + 0x38));
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10) != 0) {
    FUN_18003ed40(*(longlong *)(param_2 + 0x38) + 0x10);
  }
  return;
}


