/* FUN_1801f5750 @ 1801f5750 */

void FUN_1801f5750(char *param_1,undefined8 *param_2)

{
  char **local_20;
  code *local_18;
  char *local_10;
  
  if (*param_1 == '\0') {
    local_10 = param_1 + 8;
    local_20 = &local_10;
    local_18 = FUN_1801ede10;
    FUN_1801ef150(*param_2,param_2[1],&DAT_180294928,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801f577c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,"data provided is not nul terminated",0x23);
  return;
}


