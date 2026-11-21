/* FUN_18016d580 @ 18016d580 */

void FUN_18016d580(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_1801886d0();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187950(param_1);
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187b30(param_1 + 1);
  }
  thunk_FUN_1801d3330(param_1,0x20,8);
  return;
}


