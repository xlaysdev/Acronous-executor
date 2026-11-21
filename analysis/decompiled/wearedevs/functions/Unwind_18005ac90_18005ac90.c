/* Unwind@18005ac90 @ 18005ac90 */

void Unwind_18005ac90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x130);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e300(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}


