/* FUN_1800d4f90 @ 1800d4f90 */

undefined4 * FUN_1800d4f90(longlong *param_1,char *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  void *_Src;
  undefined4 *puVar3;
  size_t _Size;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  ulonglong local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  size_t local_298;
  void *local_290;
  size_t local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_268;
  undefined1 local_267;
  ulonglong local_88;
  char *local_80;
  longlong local_78;
  size_t local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  char *local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = param_2;
  if (*param_2 == '\0') {
LAB_1800d4fbf:
    if ((char)param_1[6] != '\0') goto LAB_1800d5031;
    bVar5 = false;
  }
  else {
    if (*param_2 == '\x01') {
      if (param_2[1] != '\x01') goto LAB_1800d4fbf;
      pcVar2 = "http";
    }
    else {
      if (*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) != 5) goto LAB_1800d4fbf;
      pcVar2 = *(char **)(*(longlong *)(param_2 + 8) + 8);
    }
    bVar6 = (char)*(int *)((longlong)pcVar2 + 4) == 's';
    bVar5 = bVar6 && *(int *)pcVar2 == 0x70747468;
    if ((!bVar6 || *(int *)pcVar2 != 0x70747468) && ((char)param_1[6] != '\0')) {
LAB_1800d5031:
      local_60 = 1;
      uStack_58 = &DAT_1802152d8;
      local_50 = 0;
      FUN_180027490();
      puVar3 = (undefined4 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *(ulonglong *)(puVar3 + 4) = CONCAT71(uStack_4f,local_50);
      *puVar3 = (undefined4)local_60;
      puVar3[1] = local_60._4_4_;
      puVar3[2] = (undefined4)uStack_58;
      puVar3[3] = uStack_58._4_4_;
      FUN_18000adf0(param_2);
      return puVar3;
    }
  }
  _Size = *(size_t *)(param_2 + 0x20);
  if (_Size == 0) {
    uVar1 = 1;
    _Size = 0;
  }
  else {
    local_39 = 1;
    uVar1 = FUN_1801ac970(*(undefined8 *)(param_2 + 0x18));
  }
  local_39 = 1;
  _Src = (void *)FUN_18009b4c0(uVar1);
  if ((longlong)_Size < 0) {
    param_2 = (char *)0x0;
LAB_1800d50b7:
    local_39 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(param_2,_Size);
  }
  if (_Size == 0) {
    local_68 = (void *)0x1;
  }
  else {
    FUN_180027490();
    param_2 = (char *)0x1;
    local_68 = (void *)thunk_FUN_1801d32d0(_Size,1);
    if (local_68 == (void *)0x0) goto LAB_1800d50b7;
  }
  local_70 = _Size;
  memcpy(local_68,_Src,_Size);
  local_3b = 1;
  FUN_180038f90(&local_60,param_1 + 4,local_48);
  local_78 = *param_1;
  bVar6 = local_78 != 1;
  if (!bVar6) {
    local_3a = 1;
    param_2 = (char *)FUN_1801010f0(param_1 + 1);
    local_80 = param_2;
  }
  uVar4 = (ulonglong)!bVar6;
  local_88 = uVar4;
  local_2a8 = FUN_180101140(param_1 + 2);
  local_29c = *(undefined2 *)((longlong)param_1 + 0x1c);
  local_280 = (undefined4)local_60;
  uStack_27c = local_60._4_4_;
  uStack_278 = (undefined4)uStack_58;
  uStack_274 = uStack_58._4_4_;
  local_2a0 = (undefined4)param_1[3];
  local_298 = local_70;
  local_290 = local_68;
  local_288 = local_70;
  local_267 = 0;
  local_2b8 = uVar4;
  local_2b0 = param_2;
  local_268 = bVar5;
  FUN_180027490();
  puVar3 = (undefined4 *)thunk_FUN_1801d32d0(0x230,8);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x230);
  }
  memcpy(puVar3,&local_2b8,0x230);
  return puVar3;
}


