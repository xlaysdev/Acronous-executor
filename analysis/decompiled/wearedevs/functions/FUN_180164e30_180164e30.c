/* FUN_180164e30 @ 180164e30 */

void FUN_180164e30(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    FUN_1801652c0(param_2,param_3);
    return;
  }
  lVar1 = *param_2;
  FUN_180176d70(lVar1 + 0x1a8,param_3);
  if (*(longlong *)(lVar1 + 0x220) == 0) {
    FUN_1801691b0(*(longlong *)(lVar1 + 0x228) + 0x10);
    return;
  }
  local_20[0] = FUN_18018cbb0();
  if (local_20[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("failed to wake I/O driver",0x19,local_20,&PTR_FUN_180262428,
                  &PTR_s_C__Users_burne__cargo_registry_s_180262610);
  }
  return;
}


