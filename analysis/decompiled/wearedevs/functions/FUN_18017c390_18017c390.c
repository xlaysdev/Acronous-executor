/* FUN_18017c390 @ 18017c390 */

ulonglong FUN_18017c390(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       int param_5)

{
  ulonglong uVar1;
  ulonglong local_20;
  ulonglong *local_18;
  code *local_10;
  
  if (param_5 == 1000000000) {
    local_20 = 0;
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 8);
    if (uVar1 == 0) {
      *(ulonglong *)(param_1 + 8) = 2;
    }
    else {
      local_20 = uVar1;
    }
    UNLOCK();
    if (uVar1 != 0) {
LAB_18017c461:
      if (local_20 != 3) {
        local_18 = &local_20;
        local_10 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180264518,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180264540);
      }
      LOCK();
      *(undefined8 *)(param_1 + 8) = 0;
      UNLOCK();
      return CONCAT71((int7)((ulonglong)(param_1 + 8) >> 8),1) & 0xffffffff;
    }
    FUN_180164a60(param_2,param_3);
  }
  else {
    if (param_4 == 0 && param_5 == 0) {
      FUN_180164640(param_2,param_3,0,0);
      return 0;
    }
    local_20 = 0;
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 8);
    if (uVar1 == 0) {
      *(ulonglong *)(param_1 + 8) = 2;
    }
    else {
      local_20 = uVar1;
    }
    UNLOCK();
    if (uVar1 != 0) goto LAB_18017c461;
    FUN_180164640(param_2,param_3,param_4,param_5);
  }
  LOCK();
  local_20 = *(ulonglong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = 0;
  UNLOCK();
  if ((local_20 & 0xfffffffffffffffe) != 2) {
    local_18 = &local_20;
    local_10 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180264460,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180264500);
  }
  return 0;
}


