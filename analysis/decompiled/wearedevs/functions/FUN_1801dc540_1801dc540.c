/* FUN_1801dc540 @ 1801dc540 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1801dc540(HANDLE param_1,LPCSTR param_2,ulonglong param_3)

{
  uint nNumberOfCharsToWrite;
  BOOL BVar1;
  WCHAR *lpBuffer;
  WCHAR *lpBuffer_00;
  ulonglong uVar2;
  ulonglong uVar3;
  WCHAR local_2034 [4094];
  undefined8 uStack_38;
  
  uStack_38 = 0x1801dc552;
  if (0x1000 < param_3) {
    param_3 = 0x1000;
    do {
      if (-0x41 < param_2[param_3]) goto LAB_1801dc56f;
      if (-0x41 < param_2[param_3 - 1]) {
        param_3 = param_3 - 1;
        goto LAB_1801dc56f;
      }
      if (-0x41 < param_2[param_3 - 2]) {
        param_3 = param_3 - 2;
        goto LAB_1801dc56f;
      }
      if (-0x41 < param_2[param_3 - 3]) {
        param_3 = param_3 - 3;
        goto LAB_1801dc56f;
      }
      param_3 = param_3 - 4;
    } while (param_3 != 0);
    param_3 = 0;
  }
LAB_1801dc56f:
  nNumberOfCharsToWrite = MultiByteToWideChar(0xfde9,8,param_2,(int)param_3,local_2034,0x1000);
  if (nNumberOfCharsToWrite == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("Unexpected error in MultiByteToWideChar",0x4f,
                  &PTR_s_library_std_src_sys_stdio_window_18028fea8);
  }
  uVar2 = (ulonglong)(int)nNumberOfCharsToWrite;
  if (0x1000 < nNumberOfCharsToWrite) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar2,0x1000,&PTR_s_library_std_src_sys_stdio_window_18028fed8);
  }
  uStack_38 = uStack_38 & 0xffffffff;
  lpBuffer_00 = local_2034;
  BVar1 = WriteConsoleW(param_1,lpBuffer_00,nNumberOfCharsToWrite,
                        (LPDWORD)((longlong)&uStack_38 + 4),(LPVOID)0x0);
  if (BVar1 == 0) {
    GetLastError();
    return 1;
  }
  uVar3 = (ulonglong)uStack_38._4_4_;
  if (uVar3 != uVar2) {
    if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar3,uVar2,&PTR_s_library_std_src_sys_stdio_window_18028fec0);
    }
    lpBuffer = local_2034 + uVar3;
    if ((ushort)(local_2034[uVar3] + L'⌒') < 0x312) {
      uStack_38 = uStack_38 & 0xffffffff;
      BVar1 = WriteConsoleW(param_1,lpBuffer,1,(LPDWORD)((longlong)&uStack_38 + 4),(LPVOID)0x0);
      if (BVar1 == 0) {
        GetLastError();
      }
      lpBuffer = local_2034 + uVar3 + 1;
    }
    else if (uStack_38._4_4_ == 0) {
      return 0;
    }
    do {
      lpBuffer_00 = lpBuffer_00 + 1;
    } while (lpBuffer_00 != lpBuffer);
  }
  return 0;
}


