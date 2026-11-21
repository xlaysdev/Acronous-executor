/* FUN_180172f70 @ 180172f70 */

undefined8 * FUN_180172f70(undefined8 *param_1,longlong param_2)

{
  undefined **local_30;
  undefined1 *local_28;
  int local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FUN_18016e710(&local_20,param_2 + 0x30);
  if (local_20 == 3) {
    local_30 = &PTR_s_The_Tokio_context_thread_local_v_180263a58;
    local_28 = &LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180263a68,&local_30,&PTR_s_C__Users_burne__cargo_registry_s_180263ad8);
  }
  param_1[2] = local_10;
  *param_1 = CONCAT44(uStack_1c,local_20);
  param_1[1] = uStack_18;
  return param_1;
}


