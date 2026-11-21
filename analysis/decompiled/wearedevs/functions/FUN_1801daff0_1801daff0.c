/* FUN_1801daff0 @ 1801daff0 */

ulonglong FUN_1801daff0(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  longlong local_50;
  longlong local_48;
  undefined2 local_40;
  longlong local_38;
  LPCWSTR local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = param_2 + param_1;
  local_40 = 0;
  local_50 = param_1;
  FUN_1801d36e0(&local_38,&local_50);
  if (local_28 == local_38) {
    FUN_180200ca0(&local_38);
  }
  local_30[local_28] = L'\0';
  BVar1 = SetCurrentDirectoryW(local_30);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = (ulonglong)DVar2 << 0x20 | 2;
  }
  else {
    uVar3 = 0;
  }
  if (local_38 != 0) {
    thunk_FUN_1801d3330(local_30,local_38 * 2,2);
  }
  return uVar3;
}


