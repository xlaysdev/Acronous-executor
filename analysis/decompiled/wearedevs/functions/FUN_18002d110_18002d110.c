/* FUN_18002d110 @ 18002d110 */

void FUN_18002d110(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
  }
  if (param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(param_1,0x30,8);
      return;
    }
  }
  return;
}


