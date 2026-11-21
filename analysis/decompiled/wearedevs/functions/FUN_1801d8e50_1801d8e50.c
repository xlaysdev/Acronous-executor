/* FUN_1801d8e50 @ 1801d8e50 */

ulonglong FUN_1801d8e50(undefined8 *param_1,LPCWSTR param_2,longlong param_3)

{
  LPCWSTR lpExistingFileName;
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  undefined4 *lpFileInformation;
  undefined4 *hFile;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  longlong local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lpExistingFileName = (LPCWSTR)*param_1;
  BVar2 = MoveFileExW(lpExistingFileName,param_2,1);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 5) {
      local_5c = 0;
      local_60 = 0;
      local_68 = 7;
      local_5a = 0;
      uStack_78 = 1;
      uStack_74 = 0x10000;
      uStack_70 = 0x2200000;
      uStack_6c = 0;
      hFile = &uStack_78;
      uVar4 = FUN_1801d91e0(lpExistingFileName);
      if ((uVar4 & 1) == 0) {
        uVar4 = param_3 * 2 - 2;
        if (uVar4 >> 0x20 == 0) {
          DVar3 = (int)(param_3 * 2) + 0x14;
          local_48 = hFile;
          cVar1 = FUN_1801f2f10(DVar3,8);
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_39,
                          &DAT_180290ba8,&PTR_s_library_std_src_sys_fs_windows_r_18028f630);
          }
          FUN_180027490();
          lpFileInformation = (undefined4 *)thunk_FUN_1801d32d0(DVar3,8);
          hFile = local_48;
          if (lpFileInformation == (undefined4 *)0x0) {
            uVar4 = 0x2600000003;
          }
          else {
            *lpFileInformation = 3;
            *(undefined8 *)(lpFileInformation + 2) = 0;
            lpFileInformation[4] = (int)uVar4;
            memcpy(lpFileInformation + 5,param_2,param_3 * 2);
            BVar2 = SetFileInformationByHandle(hFile,0x16,lpFileInformation,DVar3);
            thunk_FUN_1801d3330(lpFileInformation,DVar3,8);
            if (BVar2 != 0) {
              CloseHandle(hFile);
              return 0;
            }
            DVar3 = GetLastError();
            uVar4 = 0x500000002;
            if (DVar3 == 0x91) {
              uVar4 = 0x9100000002;
            }
          }
        }
        else {
          uVar4 = 0x500000002;
        }
        CloseHandle(hFile);
      }
      else {
        uVar4 = 0x500000002;
        if (((uint)hFile & 3) == 1) {
          local_58 = (longlong)hFile + -1;
          local_48 = *(undefined4 **)((longlong)hFile + -1);
          local_50 = *(undefined8 **)((longlong)hFile + 7);
          if ((code *)*local_50 != (code *)0x0) {
            (*(code *)*local_50)(local_48);
          }
          if (local_50[1] != 0) {
            thunk_FUN_1801d3330(local_48,local_50[1],local_50[2]);
          }
          thunk_FUN_1801d3330(local_58,0x18,8);
        }
      }
    }
    else {
      uVar4 = (ulonglong)DVar3 << 0x20 | 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


