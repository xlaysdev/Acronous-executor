/* FUN_180132d80 @ 180132d80 */

void FUN_180132d80(char *param_1,undefined8 param_2)

{
  char *local_8;
  
  if (*param_1 == '\x01') {
    local_8 = param_1 + 1;
    FUN_1801eff20(param_2,&DAT_180249a60,4,&local_8,&DAT_180249a40);
    return;
  }
  FUN_1801f0c50(param_2,"None",4);
  return;
}


