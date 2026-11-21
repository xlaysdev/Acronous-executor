/* FUN_18003b070 @ 18003b070 */

void FUN_18003b070(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  LOCK();
  plVar1 = plVar2 + 0x39;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18009c5a0(plVar2 + 0x10);
    FUN_18017a7e0(plVar2 + 0x20);
  }
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003e0f0(param_1);
    return;
  }
  return;
}


