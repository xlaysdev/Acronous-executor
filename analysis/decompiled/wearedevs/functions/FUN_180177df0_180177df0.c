/* FUN_180177df0 @ 180177df0 */

bool FUN_180177df0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong local_30;
  ulonglong local_28;
  ulonglong *local_20;
  code *local_18;
  ulonglong *local_10;
  code *local_8;
  
  LOCK();
  local_28 = *param_1;
  *param_1 = *param_1 + param_2 * -0x40;
  UNLOCK();
  local_28 = local_28 >> 6;
  if (local_28 < param_2) {
    local_20 = &local_28;
    local_18 = FUN_1801ee720;
    local_10 = &local_30;
    local_8 = FUN_1801ee720;
    local_30 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_1802634a8,&local_20,&PTR_s_C__Users_burne__cargo_registry_s_1802634c0);
  }
  return local_28 == param_2;
}


