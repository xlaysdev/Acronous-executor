/* FUN_180110840 @ 180110840 */

undefined8 * FUN_180110840(undefined8 *param_1,undefined8 *param_2,LPBYTE param_3,longlong param_4)

{
  HKEY hKey;
  LPCWSTR pWVar1;
  DWORD DVar2;
  uint uVar3;
  LPBYTE pBVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong local_b0;
  LPCWSTR local_a8;
  undefined4 local_98;
  uint local_94;
  LPBYTE local_90;
  undefined4 local_88;
  undefined4 local_84;
  LPBYTE local_80;
  LPCWSTR local_78;
  undefined2 local_70;
  undefined4 local_68;
  DWORD local_5c;
  LPCWSTR local_58;
  DWORD local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  hKey = (HKEY)*param_2;
  local_78 = (LPCWSTR)(param_3 + param_4);
  local_70 = 0;
  local_68 = 1;
  local_80 = param_3;
  FUN_1801020a0(&local_b0,&local_80);
  local_4c = 0;
  local_80 = (LPBYTE)((ulonglong)local_80 & 0xffffffff00000000);
  pWVar5 = local_a8;
  uVar3 = RegQueryValueExW(hKey,local_a8,(LPDWORD)0x0,&local_4c,(LPBYTE)0x0,(LPDWORD)&local_80);
  DVar2 = local_4c;
  if (uVar3 == 0) {
    local_58 = local_a8;
    uVar8 = 6;
    if (local_4c - 1 < 0xb) {
      uVar8 = *(undefined4 *)(&DAT_18023ebb0 + (ulonglong)(local_4c - 1) * 4);
    }
    local_80 = (LPBYTE)FUN_180111780((ulonglong)local_80 & 0xffffffff);
    pWVar1 = local_58;
    pWVar6 = pWVar5;
    if (local_80 == (LPBYTE)0x0) {
      pWVar6 = (LPCWSTR)0x0;
    }
    local_5c = 0;
    uVar7 = 0x8007000d;
    local_78 = pWVar5;
    if ((ulonglong)pWVar6 >> 0x20 == 0) {
      pBVar4 = (LPBYTE)0x1;
      if (local_80 != (LPBYTE)0x0) {
        pBVar4 = local_80;
      }
      local_4c = (DWORD)pWVar6;
      uVar3 = RegQueryValueExW(hKey,local_58,(LPDWORD)0x0,&local_5c,pBVar4,&local_4c);
      pBVar4 = local_80;
      if (uVar3 == 0) {
        if (pWVar6 < (LPCWSTR)(ulonglong)local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18023eb98);
        }
        if (local_b0 != 0) {
          thunk_FUN_1801d3330(pWVar1,local_b0 * 2,2);
        }
        local_94 = DVar2;
        local_90 = pBVar4;
        local_88 = SUB84(local_78,0);
        local_84 = (undefined4)((ulonglong)local_78 >> 0x20);
        local_98 = uVar8;
        FUN_1801117f0(param_1,&local_98);
        return param_1;
      }
      uVar7 = uVar3 & 0xffff | 0x80070000;
      if ((int)uVar3 < 1) {
        uVar7 = uVar3;
      }
    }
    FUN_180111930(&local_80);
    local_a8 = local_58;
  }
  else {
    uVar7 = uVar3 & 0xffff | 0x80070000;
    if ((int)uVar3 < 1) {
      uVar7 = uVar3;
    }
  }
  if (local_b0 != 0) {
    thunk_FUN_1801d3330(local_a8,local_b0 * 2,2);
  }
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = uVar7;
  *param_1 = 0x8000000000000000;
  return param_1;
}


