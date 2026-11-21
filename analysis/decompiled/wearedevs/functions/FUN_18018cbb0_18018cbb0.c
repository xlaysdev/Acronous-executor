/* FUN_18018cbb0 @ 18018cbb0 */

ulonglong FUN_18018cbb0(longlong *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = PostQueuedCompletionStatus(*(HANDLE *)(*param_1 + 0x10),1,param_1[1],(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20 | 2;
  }
  return 0;
}


