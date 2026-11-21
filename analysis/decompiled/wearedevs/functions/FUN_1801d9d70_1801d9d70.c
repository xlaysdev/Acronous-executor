/* FUN_1801d9d70 @ 1801d9d70 */

void FUN_1801d9d70(undefined8 *param_1,LPCWSTR param_2,uint param_3)

{
  ulonglong uVar1;
  HANDLE hFindFile;
  undefined8 *hObject;
  uint local_2a0;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined4 local_284;
  undefined4 local_280;
  uint local_27c;
  undefined8 local_50;
  uint local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined2 local_34;
  undefined1 local_32;
  
  local_44 = 0x700000000;
  local_34 = 0;
  local_3c = 0;
  local_32 = 0;
  local_50 = 1;
  local_48 = param_3 | 0x2000000;
  hObject = &local_50;
  uVar1 = FUN_1801d91e0(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_1801d9510(param_1,hObject);
                    /* WARNING: Could not recover jumptable at 0x0001801d9e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(hObject);
    return;
  }
  if ((((uint)hObject & 3) == 2) &&
     (((ulonglong)hObject >> 0x20 == 5 || ((int)((ulonglong)hObject >> 0x20) == 0x20)))) {
    memset(&local_2a0,0,0x250);
    hFindFile = FindFirstFileExW(param_2,FindExInfoBasic,&local_2a0,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      FindClose(hFindFile);
      local_27c = (int)(local_2a0 << 0x15) >> 0x1f & local_27c;
      if ((param_3 != 0) || ((local_27c & 0x20000000) == 0 || (local_2a0 & 0x400) == 0)) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        param_1[4] = local_29c;
        param_1[5] = uStack_294;
        param_1[6] = local_28c;
        param_1[7] = CONCAT44(local_284,local_280);
        *(undefined4 *)(param_1 + 8) = 0;
        *(uint *)((longlong)param_1 + 0x4c) = local_2a0;
        *(uint *)(param_1 + 10) = local_27c;
        return;
      }
    }
  }
  param_1[1] = hObject;
  *param_1 = 2;
  return;
}


