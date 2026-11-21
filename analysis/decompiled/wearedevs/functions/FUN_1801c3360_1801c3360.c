/* FUN_1801c3360 @ 1801c3360 */

undefined8 * FUN_1801c3360(void)

{
  longlong **local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = 0;
  if (DAT_1802fd550 != 0) {
    local_28 = &local_20;
    local_30 = &local_28;
    FUN_180200190(&DAT_1802fd550,0,&local_30,&DAT_180287fa8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180287f60);
  }
  if (local_20 != 3) {
    if (DAT_1802fd760 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0(&DAT_180287f18,0x30,&local_20,&PTR_FUN_180288060,
                    &PTR_s_C__Users_burne__cargo_registry_s_180287f48);
    }
    FUN_1801c5140(&local_20);
    local_18 = &DAT_1802fd760;
  }
  return local_18;
}


