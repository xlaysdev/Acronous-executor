/* FUN_18017dcf0 @ 18017dcf0 */

void FUN_18017dcf0(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1801e4d70();
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e38e0();
    }
  }
  FUN_18016c7f0(param_1);
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[1],*param_1 << 4,8);
  return;
}


