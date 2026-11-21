/* FUN_1801db0e0 @ 1801db0e0 */

bool FUN_1801db0e0(HANDLE param_1,FILE_INFO_BY_HANDLE_CLASS param_2,LPVOID param_3,DWORD param_4)

{
  BOOL BVar1;
  
  BVar1 = SetFileInformationByHandle(param_1,param_2,param_3,param_4);
  if (BVar1 == 0) {
    GetLastError();
  }
  return BVar1 == 0;
}


