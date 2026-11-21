/* FUN_180177250 @ 180177250 */

void FUN_180177250(undefined8 *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (*local_8 == 0) {
    FUN_1801f0c50(param_2,"None",4);
    return;
  }
  FUN_1801eff20(param_2,"Some",4,&local_8,&DAT_1802636e0);
  return;
}


