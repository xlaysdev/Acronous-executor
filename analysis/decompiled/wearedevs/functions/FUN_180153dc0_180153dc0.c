/* FUN_180153dc0 @ 180153dc0 */

void FUN_180153dc0(char *param_1)

{
  if (*param_1 == '\0') {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
    return;
  }
  if (*(ulonglong *)(param_1 + 8) <= *(ulonglong *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.can_inc_num_local_error_resets()",0x37,
                  &PTR_s_C__Users_burne__cargo_registry_s_180258370);
  }
  *(ulonglong *)(param_1 + 0x50) = *(ulonglong *)(param_1 + 0x50) + 1;
  return;
}


