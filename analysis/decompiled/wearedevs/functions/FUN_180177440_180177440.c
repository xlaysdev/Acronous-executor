/* FUN_180177440 @ 180177440 */

void FUN_180177440(longlong param_1)

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
  FUN_180177370(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x68) + 0x18))(*(undefined8 *)(param_1 + 0x70));
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x78);
      return;
    }
  }
  return;
}


