/* FUN_1800ad4e0 @ 1800ad4e0 */

undefined4 * FUN_1800ad4e0(undefined4 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char local_1a0 [8];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_78 = *param_2;
  local_68 = param_2[1];
  local_70 = param_2[2];
  local_60 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar1 = param_2[4];
  *param_2 = 0;
  if (local_78 == 0) {
    if ((*(char *)((longlong)param_2 + 0x34) == '\0') || ((char)param_2[5] == '\0')) {
      *param_1 = 2;
      return param_1;
    }
    lVar1 = param_2[6];
    *param_1 = 0;
    param_1[1] = (int)lVar1;
    return param_1;
  }
  if ((*(int *)(param_4 + 0x128) == 4) &&
     (*(ulonglong *)(param_4 + 0x1a0) <=
      (ulonglong)(*(longlong *)(param_4 + 0x180) - *(longlong *)(param_4 + 0x178)))) {
LAB_1800ad61b:
    local_1a0[0] = '\x06';
    local_51 = 0;
    local_198 = local_78;
    local_190 = local_68;
    local_188 = local_70;
    local_180 = local_60;
    local_178 = lVar1;
    local_1a0[0] = FUN_18005b0b0(param_4 + 0x48,local_1a0);
    if (local_1a0[0] != '\r') {
      local_51 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("invalid GOAWAY frame",0x14,local_1a0,&DAT_180211688,
                    &PTR_s_C__Users_burne__cargo_registry_s_180210fe8);
    }
    *param_1 = 0;
    param_1[1] = uVar2;
  }
  else {
    local_51 = 1;
    uVar3 = FUN_18005ccd0(param_4 + 0x48);
    if ((uVar3 & 1) == 0) {
      if (param_3 != 0) {
        *param_1 = 1;
        *(longlong *)(param_1 + 2) = param_3;
        (**(code **)(local_78 + 0x20))(local_60,local_68,local_70);
        return param_1;
      }
      if ((*(int *)(param_4 + 0x128) == 4) &&
         (*(ulonglong *)(param_4 + 0x1a0) <=
          (ulonglong)(*(longlong *)(param_4 + 0x180) - *(longlong *)(param_4 + 0x178))))
      goto LAB_1800ad61b;
    }
    *param_2 = local_78;
    *param_1 = 3;
  }
  return param_1;
}


