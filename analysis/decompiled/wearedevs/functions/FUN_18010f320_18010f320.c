/* FUN_18010f320 @ 18010f320 */

void FUN_18010f320(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x20);
    }
  }
  FUN_18010f230(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x88);
      return;
    }
  }
  return;
}


