/* FUN_1801d9510 @ 1801d9510 */

void FUN_1801d9510(undefined8 *param_1,HANDLE param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  BOOL BVar3;
  DWORD DVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  _BY_HANDLE_FILE_INFORMATION local_58;
  undefined8 local_20;
  
  local_58.nFileSizeHigh = 0;
  local_58.nFileSizeLow = 0;
  local_58.nNumberOfLinks = 0;
  local_58.nFileIndexHigh = 0;
  local_58.ftLastAccessTime.dwHighDateTime = 0;
  local_58.ftLastWriteTime.dwLowDateTime = 0;
  local_58.ftLastWriteTime.dwHighDateTime = 0;
  local_58.dwVolumeSerialNumber = 0;
  local_58.dwFileAttributes = 0;
  local_58.ftCreationTime.dwLowDateTime = 0;
  local_58.ftCreationTime.dwHighDateTime = 0;
  local_58.ftLastAccessTime.dwLowDateTime = 0;
  local_58.nFileIndexLow = 0;
  BVar3 = GetFileInformationByHandle(param_2,&local_58);
  if (BVar3 == 0) {
LAB_1801d9609:
    DVar4 = GetLastError();
    param_1[1] = (ulonglong)DVar4 << 0x20 | 2;
    *param_1 = 2;
  }
  else {
    local_20._4_4_ = 0;
    if ((local_58.dwFileAttributes & 0x400) != 0) {
      local_20 = 0;
      BVar3 = GetFileInformationByHandleEx(param_2,FileAttributeTagInfo,&local_20,8);
      if (BVar3 == 0) goto LAB_1801d9609;
      local_20._4_4_ = ((int)local_20 << 0x15) >> 0x1f & local_20._4_4_;
    }
    *param_1 = 1;
    param_1[1] = CONCAT44(local_58.nFileIndexHigh,local_58.nFileIndexLow);
    *(undefined4 *)(param_1 + 2) = 1;
    *(DWORD *)((longlong)param_1 + 0x14) = local_58.dwVolumeSerialNumber;
    *(undefined4 *)(param_1 + 3) = 1;
    auVar2._4_4_ = local_58.ftCreationTime.dwHighDateTime;
    auVar2._8_4_ = local_58.ftLastAccessTime.dwLowDateTime;
    auVar2._0_4_ = local_58.ftCreationTime.dwLowDateTime;
    auVar2._12_4_ = local_58.ftLastAccessTime.dwHighDateTime;
    auVar1._4_8_ = auVar2._8_8_;
    auVar1._0_4_ = local_58.ftCreationTime.dwLowDateTime;
    auVar5._0_8_ = auVar1._0_8_ << 0x20;
    auVar5._8_4_ = local_58.ftCreationTime.dwHighDateTime;
    auVar5._12_4_ = local_58.ftLastAccessTime.dwLowDateTime;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = local_58.nNumberOfLinks;
    *(undefined1 (*) [16])((longlong)param_1 + 0x1c) = auVar6;
    *(ulonglong *)((longlong)param_1 + 0x2c) =
         CONCAT44(local_58.ftLastWriteTime.dwLowDateTime,local_58.ftLastAccessTime.dwHighDateTime);
    *(DWORD *)((longlong)param_1 + 0x34) = local_58.ftLastWriteTime.dwHighDateTime;
    param_1[7] = CONCAT44(local_58.nFileSizeHigh,local_58.nFileSizeLow);
    *(undefined4 *)(param_1 + 8) = 0;
    *(DWORD *)((longlong)param_1 + 0x4c) = local_58.dwFileAttributes;
    *(uint *)(param_1 + 10) = local_20._4_4_;
  }
  return;
}


