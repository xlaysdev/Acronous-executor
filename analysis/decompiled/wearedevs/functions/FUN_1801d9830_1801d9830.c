/* FUN_1801d9830 @ 1801d9830 */

ulonglong FUN_1801d9830(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 *hFile;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  longlong local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  BVar1 = DeleteFileW(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 5) {
      local_4c = 0;
      local_50 = 0;
      local_58 = 7;
      local_4a = 0;
      uStack_68 = 1;
      uStack_64 = 0x10000;
      uStack_60 = 0x200000;
      uStack_5c = 0;
      hFile = &uStack_68;
      uVar3 = FUN_1801d91e0(param_1);
      if ((uVar3 & 1) == 0) {
        local_34 = 0x13;
        BVar1 = SetFileInformationByHandle(hFile,0x15,&local_34,4);
        if (BVar1 != 0) {
          CloseHandle(hFile);
          goto LAB_1801d9851;
        }
        GetLastError();
        CloseHandle(hFile);
      }
      else if (((uint)hFile & 3) == 1) {
        local_40 = (longlong)hFile + -1;
        local_30 = *(undefined8 *)((longlong)hFile + -1);
        local_28 = *(undefined8 **)((longlong)hFile + 7);
        if ((code *)*local_28 != (code *)0x0) {
          (*(code *)*local_28)(local_30);
        }
        if (local_28[1] != 0) {
          thunk_FUN_1801d3330(local_30,local_28[1],local_28[2]);
        }
        thunk_FUN_1801d3330(local_40,0x18,8);
      }
    }
    uVar3 = (ulonglong)DVar2 << 0x20 | 2;
  }
  else {
LAB_1801d9851:
    uVar3 = 0;
  }
  return uVar3;
}


