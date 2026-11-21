/* Unwind@18002c790 @ 18002c790 */

void Unwind_18002c790(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x788);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18002d110(*(undefined8 *)(param_2 + 0x788));
  }
  return;
}


