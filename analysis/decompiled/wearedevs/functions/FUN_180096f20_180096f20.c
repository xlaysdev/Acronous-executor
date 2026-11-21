/* FUN_180096f20 @ 180096f20 */

void FUN_180096f20(undefined8 *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (*local_8 == 0) {
    FUN_1801f0c50(param_2,"None",4);
    return;
  }
  FUN_1801eff20(param_2,&DAT_18020f7c0,4,&local_8,&DAT_18020f7a0);
  return;
}


