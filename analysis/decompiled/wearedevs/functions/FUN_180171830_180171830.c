/* FUN_180171830 @ 180171830 */

void FUN_180171830(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[4] != 0) {
    thunk_FUN_1801d3330(param_1[3],param_1[4] << 5,8);
  }
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1 << 4,8);
  }
  plVar1 = (longlong *)param_1[5];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187950(param_1 + 5);
    return;
  }
  return;
}


