/* FUN_180091d00 @ 180091d00 */

void FUN_180091d00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162f80(param_1 + 0x20);
  }
  FUN_18003ad30(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x60) + 0x18))(*(undefined8 *)(param_1 + 0x68));
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x70);
    }
  }
  thunk_FUN_1801d3330(param_1,0x80,0x80);
  return;
}


