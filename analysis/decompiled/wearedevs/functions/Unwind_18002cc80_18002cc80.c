/* Unwind@18002cc80 @ 18002cc80 */

void Unwind_18002cc80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18002d110(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10));
  }
  return;
}


