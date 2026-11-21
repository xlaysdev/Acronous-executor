/* FUN_180164a60 @ 180164a60 */

void FUN_180164a60(longlong *param_1,longlong *param_2)

{
  if (*param_1 == 0) {
    FUN_1801692b0();
    return;
  }
  if (SBORROW8(0,param_1[1])) {
    FUN_180168f60(param_1[2] + 0x10);
    return;
  }
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                  ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_180262570);
  }
  FUN_1801720f0();
  return;
}


