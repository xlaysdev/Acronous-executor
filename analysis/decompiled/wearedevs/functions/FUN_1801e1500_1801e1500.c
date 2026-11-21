/* FUN_1801e1500 @ 1801e1500 */

void FUN_1801e1500(undefined8 *param_1,undefined8 param_2)

{
  char *local_10;
  
  if (*(char *)*param_1 == '\x01') {
    local_10 = (char *)*param_1 + 1;
    FUN_1801eff20(param_2,"Some",4,&local_10,&DAT_180290948);
    return;
  }
  FUN_1801f0c50(param_2,"None",4);
  return;
}


