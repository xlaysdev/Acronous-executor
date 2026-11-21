/* FUN_1801790f0 @ 1801790f0 */

longlong FUN_1801790f0(char *param_1)

{
  longlong lVar1;
  
  lVar1 = 0x220;
  if (*param_1 != '\0') {
    lVar1 = 0x160;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                  ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_1802639c8);
  }
  return *(longlong *)(param_1 + 8) + lVar1;
}


