/* FUN_180027d10 @ 180027d10 */

void FUN_180027d10(int *param_1,undefined8 param_2)

{
  int *local_8;
  
  if (*param_1 == 1) {
    FUN_1801f0c50(param_2,"NotNulTerminated",0x10);
    return;
  }
  local_8 = param_1 + 2;
  FUN_1801f0450(param_2,"InteriorNul",0xb,"position",8,&local_8,"");
  return;
}


