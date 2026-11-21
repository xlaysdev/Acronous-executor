/* FUN_1801d72f0 @ 1801d72f0 */

void FUN_1801d72f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined1 *local_48;
  longlong *local_40;
  code *local_38;
  undefined *local_30;
  longlong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  local_60 = &DAT_18028f364;
  local_58 = 6;
  cVar1 = FUN_1801d7050();
  if (cVar1 == '\0') {
    if (DAT_1802fd5d8 != 0) {
      FUN_180200822();
    }
    local_30 = &DAT_1802fd5a0;
    local_50 = &local_30;
    local_28[0] = FUN_1801e4280(&local_50,param_1,param_2);
    if (local_28[0] != 0) {
      local_50 = &local_60;
      local_48 = &LAB_1801e1670;
      local_40 = local_28;
      local_38 = FUN_1801e3c90;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18028f370,&local_50,&DAT_18028f390);
    }
  }
  return;
}


