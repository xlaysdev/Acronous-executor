/* FUN_1801da000 @ 1801da000 */

undefined8 * FUN_1801da000(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  undefined8 *puVar5;
  longlong local_328;
  LPCWSTR local_320;
  undefined8 local_318;
  longlong local_d8;
  LPCWSTR local_d0;
  longlong local_c0;
  LPCWSTR local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  LPCWSTR local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  HANDLE local_70;
  longlong local_68;
  LPCWSTR local_60;
  longlong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    param_1[1] = 0x300000002;
    *param_1 = 2;
    return param_1;
  }
  FUN_1801ec9d0(&local_90);
  local_49 = 1;
  FUN_1801ec9d0(&local_328,param_2,param_3);
  FUN_1801de7d0(&local_328,"*",1);
  local_68 = local_328;
  local_4a = 1;
  local_60 = local_320;
  FUN_1801db5d0(&local_c0,local_320,local_318);
  if (!SBORROW8(0,local_c0)) {
    local_328 = local_c0;
    local_320 = local_b8;
    local_318 = local_b0;
    local_4a = 1;
    FUN_1801dbd00(&local_d8,&local_328,1);
    local_b8 = local_d0;
    if (!SBORROW8(0,local_d8)) {
      memset(&local_328,0,0x250);
      pvVar4 = FindFirstFileExW(local_d0,FindExInfoBasic,&local_328,FindExSearchNameMatch,
                                (LPVOID)0x0,0);
      uVar2 = local_88;
      lVar1 = local_90;
      if (pvVar4 == (HANDLE)0xffffffffffffffff) {
        DVar3 = GetLastError();
        if (DVar3 == 2) {
          FUN_180027490();
          puVar5 = (undefined8 *)thunk_FUN_1801d32d0(0x30,8);
          if (puVar5 == (undefined8 *)0x0) {
            local_70 = (HANDLE)local_88;
            local_58 = local_90;
            local_a0 = local_d8;
            local_98 = local_d0;
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x30);
          }
          *puVar5 = 1;
          puVar5[1] = 1;
          puVar5[2] = local_90;
          puVar5[3] = local_88;
          *(undefined4 *)(puVar5 + 4) = local_80;
          *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_7c;
          *(undefined4 *)(puVar5 + 5) = uStack_78;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_74;
          *param_1 = 0;
          param_1[2] = puVar5;
          *(undefined4 *)(param_1 + 3) = 0;
          if (local_d8 != 0) {
            thunk_FUN_1801d3330(local_d0,local_d8 * 2,2);
          }
          if (local_68 == 0) {
            return param_1;
          }
          thunk_FUN_1801d3330(local_60,local_68,1);
          return param_1;
        }
        param_1[1] = (ulonglong)DVar3 << 0x20 | 2;
        *param_1 = 2;
      }
      else {
        FUN_180027490();
        puVar5 = (undefined8 *)thunk_FUN_1801d32d0(0x30,8);
        if (puVar5 == (undefined8 *)0x0) {
          local_a8 = uVar2;
          local_58 = lVar1;
          local_a0 = local_d8;
          local_98 = local_d0;
          local_70 = pvVar4;
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x30);
        }
        *puVar5 = 1;
        puVar5[1] = 1;
        puVar5[2] = lVar1;
        puVar5[3] = uVar2;
        puVar5[4] = CONCAT44(uStack_7c,local_80);
        puVar5[5] = CONCAT44(uStack_74,uStack_78);
        memcpy((void *)((longlong)param_1 + 0x1c),&local_328,0x250);
        *param_1 = 1;
        param_1[1] = pvVar4;
        param_1[2] = puVar5;
        *(undefined4 *)(param_1 + 3) = 1;
      }
      if (local_d8 != 0) {
        thunk_FUN_1801d3330(local_d0,local_d8 * 2,2);
      }
      if (local_68 != 0) {
        thunk_FUN_1801d3330(local_60,local_68,1);
      }
      if (pvVar4 != (HANDLE)0xffffffffffffffff) {
        return param_1;
      }
      goto LAB_1801da11f;
    }
  }
  param_1[1] = local_b8;
  *param_1 = 2;
  if (local_68 != 0) {
    thunk_FUN_1801d3330(local_60,local_68,1);
  }
LAB_1801da11f:
  if (local_90 != 0) {
    thunk_FUN_1801d3330(local_88,local_90,1);
  }
  return param_1;
}


