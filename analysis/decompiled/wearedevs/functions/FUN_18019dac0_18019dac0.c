/* FUN_18019dac0 @ 18019dac0 */

void * FUN_18019dac0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                    longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 local_a0;
  ulonglong *local_98;
  undefined8 local_90;
  ulonglong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  void *local_68;
  longlong local_60;
  ulonglong local_58;
  size_t local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  local_80 = param_2;
  local_78 = param_3;
  if (param_2 != 0) {
    if (param_2 < uVar2) {
      if (*(char *)(lVar1 + param_2) < -0x40) goto LAB_18019db22;
    }
    else if (param_2 != uVar2) goto LAB_18019db22;
  }
  if (param_3 != 0) {
    if (param_3 < uVar2) {
      if (*(char *)(lVar1 + param_3) < -0x40) {
LAB_18019db22:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.is_char_boundary(n)",0x2a,param_6);
      }
    }
    else if (param_3 != uVar2) goto LAB_18019db22;
  }
  local_88 = &local_78;
  local_a0 = 0;
  local_98 = &local_80;
  local_90 = 1;
  uVar4 = uVar2;
  local_70 = FUN_18019cfc0(&local_a0,uVar2,&PTR_s_C__Users_burne__rustup_toolchain_1802680d8);
  *(longlong *)(param_1 + 0x10) = local_70;
  local_70 = local_70 + lVar1;
  local_50 = uVar2 - uVar4;
  local_68 = (void *)(lVar1 + uVar4);
  local_60 = param_1;
  local_58 = uVar4;
  local_48 = param_4;
  local_40 = param_5 + param_4;
  FUN_18019d050(&local_70);
  sVar3 = local_50;
  lVar1 = local_60;
  if (local_50 != 0) {
    uVar2 = *(ulonglong *)(local_60 + 0x10);
    if (local_58 != uVar2) {
      local_68 = memmove((void *)(*(longlong *)(local_60 + 8) + uVar2),
                         (void *)(local_58 + *(longlong *)(local_60 + 8)),local_50);
    }
    *(ulonglong *)(lVar1 + 0x10) = uVar2 + sVar3;
  }
  return local_68;
}


