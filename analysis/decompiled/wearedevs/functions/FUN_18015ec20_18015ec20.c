/* FUN_18015ec20 @ 18015ec20 */

void FUN_18015ec20(undefined8 *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (SBORROW8(0,*local_8)) {
    FUN_1801f0c50(param_2,&DAT_18025f1d0,4);
    return;
  }
  FUN_1801eff20(param_2,&DAT_18025f1f8,4,&local_8,&DAT_18025f1d8);
  return;
}


