/* FUN_1801b1f10 @ 1801b1f10 */

void FUN_1801b1f10(longlong *param_1)

{
  longlong *plVar1;
  
  LOCK();
  plVar1 = param_1 + 4;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1,1);
  }
  thunk_FUN_1801d3330(param_1,0x28,8);
  return;
}


