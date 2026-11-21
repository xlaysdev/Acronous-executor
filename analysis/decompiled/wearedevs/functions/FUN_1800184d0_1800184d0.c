/* FUN_1800184d0 @ 1800184d0 */

void FUN_1800184d0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (char)param_1[7];
  if (cVar1 == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1801d3330(param_1[1],*param_1,1);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_180018400(param_1 + 8);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if ((char)param_1[0x3c] == '\x03') {
        FUN_18000ac30(param_1 + 0x2a);
        plVar2 = (longlong *)param_1[0x29];
        if (*plVar2 != 0) {
          thunk_FUN_1801d3330(plVar2[1],*plVar2,1);
        }
        thunk_FUN_1801d3330(plVar2,0x58,8);
      }
      else if ((char)param_1[0x3c] == '\0') {
        FUN_180018190(param_1 + 8);
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  }
  return;
}


