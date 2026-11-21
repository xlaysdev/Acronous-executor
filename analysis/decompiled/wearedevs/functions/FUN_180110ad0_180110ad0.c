/* FUN_180110ad0 @ 180110ad0 */

ulonglong * FUN_180110ad0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,longlong param_4)

{
  HKEY hKey;
  DWORD DVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong local_98;
  LPCWSTR local_90;
  ulonglong local_80;
  longlong local_78;
  undefined2 local_70;
  undefined4 local_68;
  ulonglong local_60;
  uint local_58;
  LPCWSTR local_50;
  BYTE local_48 [12];
  DWORD local_3c [3];
  
  local_3c[1] = 0xfffffffe;
  local_3c[2] = 0xffffffff;
  hKey = (HKEY)*param_2;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_78 = param_4 + param_3;
  local_70 = 0;
  local_68 = 1;
  local_80 = param_3;
  FUN_1801020a0(&local_98,&local_80);
  local_3c[0] = 0;
  local_80 = CONCAT44(local_80._4_4_,8);
  uVar2 = RegQueryValueExW(hKey,local_90,(LPDWORD)0x0,local_3c,local_48,(LPDWORD)&local_80);
  DVar1 = local_3c[0];
  if (uVar2 == 0) {
    uVar3 = 6;
    if (local_3c[0] - 1 < 0xb) {
      uVar3 = *(undefined4 *)(&DAT_18023ebb0 + (ulonglong)(local_3c[0] - 1) * 4);
    }
    uVar5 = local_80 & 0xffffffff;
    if (8 < uVar5) {
      local_50 = local_90;
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18023eb98);
    }
    if (local_98 != 0) {
      thunk_FUN_1801d3330(local_90,local_98 * 2,2);
    }
    FUN_180111720(&local_60,uVar3,DVar1,local_48,uVar5);
    if (local_58 == 0) {
      if (local_60 >> 0x20 == 0) {
        *(int *)param_1 = (int)local_60;
        local_58 = 0;
      }
      else {
        *param_1 = 0;
        local_58 = 0x8007000d;
      }
    }
    else {
      *param_1 = local_60;
    }
  }
  else {
    uVar4 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar4 = uVar2;
    }
    if (local_98 != 0) {
      thunk_FUN_1801d3330(local_90,local_98 * 2,2);
    }
    *param_1 = 0;
    local_58 = uVar4;
  }
  *(uint *)(param_1 + 1) = local_58;
  return param_1;
}


