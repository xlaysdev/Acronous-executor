/* FUN_18014acc0 @ 18014acc0 */

longlong FUN_18014acc0(longlong param_1,ulonglong param_2)

{
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: max <= u32::MAX as usize",0x2a,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802552c0);
  }
  *(ulonglong *)(param_1 + 0x30) = param_2;
  return param_1;
}


