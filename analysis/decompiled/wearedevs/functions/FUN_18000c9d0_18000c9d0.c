/* FUN_18000c9d0 @ 18000c9d0 */

void FUN_18000c9d0(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[8] == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1801d3330(param_1[1],*param_1,1);
      return;
    }
  }
  else if ((char)param_1[8] == '\x03') {
    FUN_18000b8f0(param_1[6],param_1[7]);
    plVar1 = (longlong *)param_1[3];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003e300(param_1 + 3);
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  }
  return;
}


