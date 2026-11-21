/* FUN_180114900 @ 180114900 */

void FUN_180114900(longlong *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  if (*param_1 == -0x7fffffffffffffff) {
    local_8 = param_1 + 1;
    FUN_1801eff20(param_2,"LengthInit",6,&local_8,&DAT_18023f260);
    return;
  }
  local_8 = param_1;
  FUN_1801eff20(param_2,"Chunked",7,&local_8,&DAT_18023f238);
  return;
}


