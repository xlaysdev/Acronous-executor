/* Unwind@18018f420 @ 18018f420 */

void Unwind_18018f420(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


