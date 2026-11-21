/* FUN_1801c9780 @ 1801c9780 */

undefined8 * FUN_1801c9780(undefined8 *param_1)

{
  int iVar1;
  char local_60 [8];
  HWND local_58;
  longlong local_50;
  LPCWSTR local_48;
  longlong local_38;
  LPCWSTR local_30;
  UINT local_20;
  
  FUN_1801c9830(local_60);
  if (local_60[0] == '\0') {
    local_58 = (HWND)0x0;
  }
  iVar1 = MessageBoxW(local_58,local_48,local_30,local_20);
  if (iVar1 - 1U < 7) {
    *param_1 = *(undefined8 *)(&DAT_1802888c0 + (ulonglong)(iVar1 - 1U) * 8);
  }
  else {
    *param_1 = 0x8000000000000003;
  }
  if (local_50 != 0) {
    thunk_FUN_1801d3330(local_48,local_50 * 2,2);
  }
  if (local_38 != 0) {
    thunk_FUN_1801d3330(local_30,local_38 * 2,2);
  }
  return param_1;
}


