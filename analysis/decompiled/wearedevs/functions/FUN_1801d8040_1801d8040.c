/* FUN_1801d8040 @ 1801d8040 */

void FUN_1801d8040(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_38;
  ulonglong *local_30;
  code *local_28;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  local_38 = param_2;
  if (param_2 == 0) {
    FUN_1801ed5f0(param_1);
LAB_1801d8130:
    if (param_2 <= uVar1) {
      *(ulonglong *)(param_1 + 0x10) = param_2;
    }
    return;
  }
  if (param_2 < uVar1) {
    if (*(char *)(lVar2 + param_2) == -0x13) {
      if (uVar1 <= param_2 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(param_2 + 1,uVar1,&PTR_s_library_std_src_ffi_os_str_rs_18028f4c8);
      }
      if ((((2 < param_2) && (0x9f < *(byte *)(lVar2 + 1 + param_2))) &&
          (*(char *)(lVar2 + -3 + param_2) == -0x13)) && (0x9f < *(byte *)(lVar2 + -2 + param_2))) {
        local_30 = &local_38;
        local_28 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180290a70,&local_30,&PTR_s_library_std_src_ffi_os_str_rs_18028f4c8);
      }
    }
    else if (*(char *)(lVar2 + param_2) < -0x40) {
      local_30 = &local_38;
      local_28 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180290aa1,&local_30,&PTR_s_library_std_src_ffi_os_str_rs_18028f4c8);
    }
  }
  else if (param_2 != uVar1) {
    local_30 = &local_38;
    local_28 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180290a50,&local_30,&PTR_s_library_std_src_ffi_os_str_rs_18028f4c8);
  }
  uVar3 = param_2;
  lVar2 = FUN_1801ed5f0(param_1);
  if (param_2 < uVar3) {
    if (-0x41 < *(char *)(lVar2 + param_2)) goto LAB_1801d8130;
  }
  else if (param_2 == uVar3) goto LAB_1801d8130;
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: self.is_code_point_boundary(new_len)/rustc/01f6ddf7588f42ae2d7eb0a2f21d44e8e96674cf\\library\\alloc\\src\\wtf8\\mod.rs"
                ,0x36,&DAT_180290d00);
}


