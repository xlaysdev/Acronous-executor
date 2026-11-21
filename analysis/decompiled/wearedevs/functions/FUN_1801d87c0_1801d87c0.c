/* FUN_1801d87c0 @ 1801d87c0 */

ulonglong FUN_1801d87c0(SOCKET *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  
  local_c = (uint)param_2;
  iVar1 = setsockopt(*param_1,6,1,(char *)&local_c,4);
  if (iVar1 == -1) {
    uVar2 = WSAGetLastError();
    return (ulonglong)uVar2 << 0x20 | 2;
  }
  return 0;
}


