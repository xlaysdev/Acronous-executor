/* FUN_1801d9120 @ 1801d9120 */

LPCWSTR FUN_1801d9120(undefined8 param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong local_60;
  LPCWSTR local_58;
  longlong local_48;
  LPCWSTR local_40;
  undefined8 local_38;
  longlong local_30;
  LPCWSTR local_28;
  undefined8 local_20;
  
  FUN_1801db5d0(&local_30,param_1,param_2);
  if (!SBORROW8(0,local_30)) {
    local_48 = local_30;
    local_40 = local_28;
    local_38 = local_20;
    FUN_1801dbd00(&local_60,&local_48,1);
    local_28 = local_58;
    if (!SBORROW8(0,local_60)) {
      BVar1 = CreateDirectoryW(local_58,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar1 != 0) {
        if (local_60 != 0) {
          thunk_FUN_1801d3330(local_58,local_60 * 2,2);
        }
        return (LPCWSTR)0x0;
      }
      DVar2 = GetLastError();
      local_28 = (LPCWSTR)((ulonglong)DVar2 << 0x20 | 2);
      if (local_60 == 0) {
        return local_28;
      }
      thunk_FUN_1801d3330(local_58,local_60 * 2,2);
    }
  }
  return local_28;
}


