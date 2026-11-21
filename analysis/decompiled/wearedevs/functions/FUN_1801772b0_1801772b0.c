/* FUN_1801772b0 @ 1801772b0 */

void FUN_1801772b0(undefined8 *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (*local_8 == 0) {
    FUN_1801f0c50(param_2,"None",4);
    return;
  }
  FUN_1801eff20(param_2,"Some",4,&local_8,&DAT_180263700);
  return;
}


