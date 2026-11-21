/* Unwind@18002c740 @ 18002c740 */

void Unwind_18002c740(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x4f8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18002d110(*(undefined8 *)(param_2 + 0x4f8));
  }
  return;
}


