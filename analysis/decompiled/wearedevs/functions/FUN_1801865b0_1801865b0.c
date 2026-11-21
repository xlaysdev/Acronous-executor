/* FUN_1801865b0 @ 1801865b0 */

ulonglong FUN_1801865b0(SOCKET *param_1,byte param_2)

{
  int iVar1;
  DWORD DVar2;
  uint local_4;
  
  local_4 = (uint)param_2;
  iVar1 = ioctlsocket(*param_1,-0x7ffb9982,&local_4);
  if (iVar1 == -1) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20 | 2;
  }
  return 0;
}


