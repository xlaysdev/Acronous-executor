/* FUN_180096f80 @ 180096f80 */

void FUN_180096f80(undefined8 *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (SBORROW8(0,*local_8)) {
    FUN_1801f0c50(param_2,"None",4);
    return;
  }
  FUN_1801eff20(param_2,&DAT_18020f7c0,4,&local_8,&DAT_18020f7c8);
  return;
}


