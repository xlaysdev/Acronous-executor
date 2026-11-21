/* FUN_180164640 @ 180164640 */

void FUN_180164640(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_1 == 0) {
    FUN_1801692b0();
    return;
  }
  if (SBORROW8(0,param_1[1])) {
    FUN_180168c40(param_1[2] + 0x10,param_3,param_4);
    return;
  }
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                  ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_180262558);
  }
  FUN_1801720f0();
  return;
}


