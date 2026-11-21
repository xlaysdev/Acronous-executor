/* FUN_180172e60 @ 180172e60 */

void FUN_180172e60(longlong param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_18[0] = FUN_18018cbb0(param_1 + 8);
  if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("failed to wake I/O driver",0x19,local_18,&PTR_FUN_180262428,
                  &PTR_s_C__Users_burne__cargo_registry_s_180262610);
  }
  return;
}


