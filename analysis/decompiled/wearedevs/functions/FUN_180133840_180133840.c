/* FUN_180133840 @ 180133840 */

void FUN_180133840(longlong *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  if (*param_1 == 0) {
    FUN_1801f0c50(param_2,"Omitted",7);
    return;
  }
  if ((int)*param_1 == 1) {
    FUN_1801f0c50(param_2,"Head",4);
    return;
  }
  local_8 = param_1 + 1;
  FUN_1801eff20(param_2,"Remaining",9,&local_8,&DAT_180249f28);
  return;
}


