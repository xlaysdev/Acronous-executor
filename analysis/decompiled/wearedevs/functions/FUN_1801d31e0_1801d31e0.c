/* FUN_1801d31e0 @ 1801d31e0 */

undefined8 * FUN_1801d31e0(undefined8 *param_1)

{
  int iVar1;
  LPCWSTR local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0xfdd39ad0;
  uStack_14 = 0x46af238f;
  uStack_10 = 0x856cb4ad;
  uStack_c = 0xc7690348;
  local_20 = (LPCWSTR)0x0;
  iVar1 = SHGetKnownFolderPath(&local_18,0,0,&local_20);
  if (iVar1 == 0) {
    iVar1 = lstrlenW(local_20);
    FUN_1801e5470(param_1,local_20,(longlong)iVar1);
    CoTaskMemFree(local_20);
    return param_1;
  }
  CoTaskMemFree(local_20);
  *param_1 = 0x8000000000000000;
  return param_1;
}


