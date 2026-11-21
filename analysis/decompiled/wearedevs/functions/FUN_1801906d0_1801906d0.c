/* FUN_1801906d0 @ 1801906d0 */

void FUN_1801906d0(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined1 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((int)param_1[4] == 1) {
    uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    if (uVar1 <= param_1[2]) {
      if ((uVar1 < param_1[2] && *(uint *)((longlong)param_1 + 0x24) != 0) &&
         (*(char *)(param_1[1] + uVar1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.is_char_boundary(new_len)EmptyHostIdnaErrorInvalidPortInvalidIpv4AddressInvalidIpv6AddressInvalidDomainCharacterRelativeUrlWithoutBaseRelativeUrlWithCannotBeABaseBaseSetHostOnCannotBeABaseUrlOverflow"
                      ,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180266ac0);
      }
      param_1[2] = uVar1;
    }
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_180191490(param_1);
    return;
  }
  uVar1 = param_1[2];
  if (uVar1 >> 0x20 != 0) {
    local_78 = CONCAT71(local_78._1_7_,9);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&DAT_180266bc0,
                  &PTR_s_C__Users_burne__cargo_registry_s_180266ad8);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  *(int *)((longlong)param_1 + 0x24) = (int)uVar1;
  uVar2 = uVar1;
  if (*param_1 == uVar1) {
    FUN_1801f6a80(param_1,uVar1,1,1,1);
    uVar2 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + uVar2) = 0x23;
  param_1[2] = uVar1 + 1;
  local_68 = param_1[2];
  local_78 = *param_1;
  uStack_70 = param_1[1];
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_38 = 1;
  FUN_180195ba0(&local_78,param_2,param_3 + param_2);
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  return;
}


