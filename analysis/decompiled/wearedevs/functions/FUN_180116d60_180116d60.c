/* FUN_180116d60 @ 180116d60 */

void FUN_180116d60(undefined8 *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (SBORROW8(0,*local_8)) {
    FUN_1801f0c50(param_2,"None",4);
    return;
  }
  FUN_1801eff20(param_2,&DAT_1802405c0,4,&local_8,"");
  return;
}


