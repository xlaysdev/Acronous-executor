/* FUN_18003bc20 @ 18003bc20 */

void FUN_18003bc20(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x20);
      return;
    }
  }
  return;
}


