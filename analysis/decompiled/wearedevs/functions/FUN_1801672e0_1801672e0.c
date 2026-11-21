/* FUN_1801672e0 @ 1801672e0 */

void FUN_1801672e0(char *param_1)

{
  longlong lVar1;
  
  lVar1 = 0x220;
  if (*param_1 != '\0') {
    lVar1 = 0x160;
  }
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x98 + lVar1) == 1000000000) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                  ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180260930);
  }
  FUN_18016fef0(*(longlong *)(param_1 + 8) + lVar1 + 0x58,param_1 + 0x10);
  return;
}


