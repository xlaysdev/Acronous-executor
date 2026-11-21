/* FUN_1801d91e0 @ 1801d91e0 */

undefined8 FUN_1801d91e0(LPCWSTR param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  BOOL BVar5;
  HANDLE hFile;
  ulonglong uVar6;
  DWORD dwDesiredAccess;
  char *pcVar7;
  undefined8 uVar8;
  _SECURITY_ATTRIBUTES *lpSecurityAttributes;
  _SECURITY_ATTRIBUTES local_48;
  undefined8 local_30;
  undefined8 local_28;
  
  bVar1 = *(byte *)((longlong)param_2 + 0x19);
  cVar2 = *(char *)((longlong)param_2 + 0x1a);
  if (bVar1 == 0) {
    if (cVar2 != '\0') goto LAB_1801d920d;
    if (((*(char *)((longlong)param_2 + 0x1b) == '\0') && ((char)param_2[7] == '\0')) &&
       (*(char *)((longlong)param_2 + 0x1d) == '\0')) {
      bVar3 = 0;
      goto LAB_1801d9252;
    }
LAB_1801d9222:
    pcVar7 = "creating or truncating a file requires write or append access";
    uVar8 = 0x3d;
LAB_1801d922f:
    FUN_1801d6710(0x14,pcVar7,uVar8);
  }
  else {
    if (cVar2 == '\0') {
      bVar3 = *(byte *)((longlong)param_2 + 0x1d);
    }
    else {
LAB_1801d920d:
      bVar3 = *(byte *)((longlong)param_2 + 0x1d);
      if (((~*(byte *)((longlong)param_2 + 0x1b) | bVar3) & 1) == 0) goto LAB_1801d9222;
    }
LAB_1801d9252:
    if ((char)param_2[7] == '\0') {
      if ((bVar3 & 1) != 0) goto LAB_1801d926b;
      DVar4 = (uint)*(byte *)((longlong)param_2 + 0x1b) * 2 + 3;
    }
    else {
      DVar4 = 4;
      if ((bVar3 & 1) != 0) {
LAB_1801d926b:
        DVar4 = 1;
      }
    }
    local_48.nLength = 0x18;
    local_48.lpSecurityDescriptor = (LPVOID)0x0;
    local_48.bInheritHandle = (BOOL)*(byte *)((longlong)param_2 + 0x1e);
    if (*param_2 == 1) {
      dwDesiredAccess = param_2[1];
    }
    else if ((char)param_2[6] == '\0') {
      if (bVar1 == 0) {
        dwDesiredAccess = 0x120114;
        if (cVar2 == '\0') {
          if ((((char)param_2[7] != '\0') || ((bVar3 & 1) != 0)) ||
             (*(char *)((longlong)param_2 + 0x1b) != '\0')) goto LAB_1801d9222;
          pcVar7 = "must specify at least one of read, write, or append access";
          uVar8 = 0x3a;
          goto LAB_1801d922f;
        }
      }
      else {
        dwDesiredAccess = 0x40000000;
        if (cVar2 != '\0') {
          dwDesiredAccess = 0x120114;
        }
      }
    }
    else {
      dwDesiredAccess = 0x80120114;
      if (cVar2 == '\0') {
        dwDesiredAccess = (bVar1 | 0xfffffffe) << 0x1e;
      }
    }
    lpSecurityAttributes = &local_48;
    if (*(byte *)((longlong)param_2 + 0x1e) == 0) {
      lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    }
    hFile = CreateFileW(param_1,dwDesiredAccess,param_2[4],lpSecurityAttributes,DVar4,
                        (uint)bVar3 << 0x15 | param_2[3] | param_2[2] | param_2[5],(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
      if (DVar4 != 4) {
        return 0;
      }
      if (*(char *)((longlong)param_2 + 0x1b) == '\0') {
        return 0;
      }
      DVar4 = GetLastError();
      if (DVar4 == 0xb7) {
        local_28 = 0;
        BVar5 = SetFileInformationByHandle(hFile,FileAllocationInfo,&local_28,8);
        if (BVar5 == 0) {
          GetLastError();
          local_30 = 0;
          uVar6 = FUN_1801db0e0(hFile,6,&local_30,8);
          if ((uVar6 & 1) != 0) {
            CloseHandle(hFile);
            return 1;
          }
        }
      }
      return 0;
    }
    GetLastError();
  }
  return 1;
}


